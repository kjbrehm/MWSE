#pragma once

/*
	Taken from the Sol2 documentation for dynamic objects:
	https://github.com/ThePhD/sol2/blob/develop/examples/source/dynamic_object.cpp

	Structures that inherit this also need to implement the following definitions in
	their new_usertype call:
	sol::meta_function::index, &DynamicLuaObject::dynamic_get,
	sol::meta_function::new_index, &DynamicLuaObject::dynamic_set,
	sol::meta_function::length, [](DynamicLuaObject& d) { return d.entries.size(); },
*/

namespace mwse::lua {
	struct DynamicLuaObject {
		std::unordered_map<std::string, sol::object> entries;

		void dynamic_set(std::string key, sol::stack_object value);

		sol::object dynamic_get(std::string key) const;

		size_t size() const;
	};
}
