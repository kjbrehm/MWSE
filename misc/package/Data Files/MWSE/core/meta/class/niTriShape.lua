-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- An object that allows the sharing of vertices between triangles to create shapes.
--- @class niTriShape : niTriBasedGeometry, niGeometry, niAVObject, niObjectNET, niObject
--- @field data niTriShapeData The NiTriShapeData of the object. Manipulation should not be done directly. Instead, consider copying the data and assigning it to this shape.
--- @field normals tes3vector3[] *Read-only*. The list of unitized, model-space vertex normals for the object. The length of the array is equal to the vertex count.
--- @field skinInstance niSkinInstance The skinInstance of the object.
--- @field vertices tes3vector3[] *Read-only*. The array of vertex position data. The length of the array is equal to vertex count.
niTriShape = {}

--- Creates a new niTriShape.
--- @param vertexCount number The number of vertices the shape will allocate.
--- @param hasNormals boolean If `true`, normals will be allocated.
--- @param hasTextureCoords boolean If `true`, texture coordinates will be allocated.
--- @param triangleCount number The number of triangles to allocate.
--- @return niTriShape shape No description yet available.
function niTriShape.new(vertexCount, hasNormals, hasTextureCoords, triangleCount) end

--- Calculates and creates a bounding box for the object. The existing bounding box, if any, will not be used, a fresh one will always be calculated.
--- @return tes3boundingBox boundingBox The newly created bounding box.
function niTriShape:createBoundingBox() end

