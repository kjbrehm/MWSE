#include "NITriShapeData.h"

#include "LuaUtil.h"

namespace NI {
	const auto NI_TriShapeData_ctor = reinterpret_cast<void(__thiscall*)(TriShapeData*, unsigned short, TES3::Vector3*, TES3::Vector3*, PackedColor*, TES3::Vector2*, unsigned short, unsigned short*, int)>(0x6E4690);
	Pointer<TriShapeData> TriShapeData::create(unsigned short _vertexCount, TES3::Vector3* _vertices, TES3::Vector3* _normals, PackedColor* _colors, TES3::Vector2* _textureCoords, unsigned short _triangleCount, unsigned short* _triangleList, int unused) {
		auto ptr = mwse::tes3::_new<TriShapeData>();
		NI_TriShapeData_ctor(ptr, _vertexCount, _vertices, _normals, _colors, _textureCoords, _triangleCount, _triangleList, unused);
		return ptr;
	}

	Pointer<TriShapeData> TriShapeData::create(unsigned short vertexCount, bool hasNormals, bool hasColors, bool hasTextureCoords, unsigned short triangleCount) {
		using TES3::Vector2;
		using TES3::Vector3;

		Vector3* vertices = mwse::tes3::_new<Vector3>(vertexCount);
		ZeroMemory(vertices, sizeof(Vector3) * vertexCount);

		Vector3* normals = nullptr;
		if (hasNormals) {
			normals = mwse::tes3::_new<Vector3>(vertexCount);
			ZeroMemory(normals, sizeof(Vector3) * vertexCount);
		}

		PackedColor* colors = nullptr;
		if (hasColors) {
			colors = mwse::tes3::_new<PackedColor>(vertexCount);
			ZeroMemory(colors, sizeof(PackedColor) * vertexCount);
		}

		Vector2* textureCoords = nullptr;
		if (hasNormals) {
			textureCoords = mwse::tes3::_new<Vector2>(vertexCount);
			ZeroMemory(textureCoords, sizeof(Vector2) * vertexCount);
		}

		unsigned short* triangleList = nullptr;
		if (triangleCount) {
			triangleList = mwse::tes3::_new<unsigned short>(triangleCount);
			ZeroMemory(triangleList, sizeof(unsigned short) * triangleCount);
		}

		return create(vertexCount, vertices, normals, colors, textureCoords, triangleCount, triangleList);
	}

	Pointer<TriShapeData> TriShapeData::copyData(sol::optional<sol::table> filters) const {
		auto vertexCount = getActiveVertexCount();

		TES3::Vector3* _vertices = mwse::tes3::_new<TES3::Vector3>(vertexCount);
		memcpy_s(_vertices, sizeof(TES3::Vector3) * vertexCount, vertex, sizeof(TES3::Vector3) * vertexCount);

		TES3::Vector3* _normals = nullptr;
		if (normal && mwse::lua::getOptionalParam(filters, "normals", true)) {
			_normals = mwse::tes3::_new<TES3::Vector3>(vertexCount);
			memcpy_s(_normals, sizeof(TES3::Vector3) * vertexCount, normal, sizeof(TES3::Vector3) * vertexCount);
		}

		PackedColor* _colors = nullptr;
		if (color && mwse::lua::getOptionalParam(filters, "colors", true)) {
			_colors = mwse::tes3::_new<PackedColor>(vertexCount);
			memcpy_s(_colors, sizeof(PackedColor) * vertexCount, color, sizeof(PackedColor) * vertexCount);
		}

		TES3::Vector2* _textureCoords = nullptr;
		if (textureCoords && mwse::lua::getOptionalParam(filters, "texCoords", true)) {
			_textureCoords = mwse::tes3::_new<TES3::Vector2>(vertexCount);
			memcpy_s(_textureCoords, sizeof(TES3::Vector2) * vertexCount, textureCoords, sizeof(TES3::Vector2) * vertexCount);
		}

		unsigned short* _triangleList = nullptr;
		if (triangleList) {
			_triangleList = mwse::tes3::_new<unsigned short>(triangleListLength);
			memcpy_s(_triangleList, sizeof(unsigned short) * triangleListLength, triangleList, sizeof(unsigned short) * triangleListLength);
		}

		auto result = create(vertexCount, _vertices, _normals, _colors, _textureCoords, triangleCount, _triangleList);

		result->bounds = bounds;

		return result;

	}

	nonstd::span<Triangle> TriShapeData::getTriangles() {
		if (triangleList) {
			return { triangleList, getActiveTriangleCount() };
		}
		return {};
	}
}
