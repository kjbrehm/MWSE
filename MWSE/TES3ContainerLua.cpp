#include "TES3ContainerLua.h"

#include "sol.hpp"
#include "LuaManager.h"
#include "LuaUtil.h"

#include "TES3Container.h"
#include "TES3Script.h"

namespace mwse {
	namespace lua {
		void bindTES3Container() {
			// Get our lua state.
			sol::state& state = LuaManager::getInstance().getState();

			// Binding for TES3::Container.
			{
				// Start our usertype. We must finish this with state.set_usertype.
				auto usertypeDefinition = state.create_simple_usertype<TES3::Container>();
				usertypeDefinition.set("new", sol::no_constructor);

				// Define inheritance structures. These must be defined in order from top to bottom. The complete chain must be defined.
				usertypeDefinition.set(sol::base_classes, sol::bases<TES3::Actor, TES3::PhysicalObject, TES3::Object, TES3::BaseObject>());

				// Basic property binding.
				usertypeDefinition.set("capacity", &TES3::Container::capacity);

				// Friendly access to actor flags. TODO: Fix these constants.
				usertypeDefinition.set("organic", sol::property(
					[](TES3::Container& self) { return self.getActorFlag(TES3::ActorFlag::Female); },
					[](TES3::Container& self, bool set) { self.setActorFlag(TES3::ActorFlag::Female, set); }
				));
				usertypeDefinition.set("respawns", sol::property(
					[](TES3::Container& self) { return self.getActorFlag(TES3::ActorFlag::Essential); },
					[](TES3::Container& self, bool set) { self.setActorFlag(TES3::ActorFlag::Essential, set); }
				));

				// Constant values.
				usertypeDefinition.set("isInstance", sol::var(false));

				// Basic function binding.
				usertypeDefinition.set("clone", &TES3::Container::clone);

				// Functions exposed as properties.
				usertypeDefinition.set("model", sol::property(&TES3::Container::getModelPath, &TES3::Container::setModelPath));
				usertypeDefinition.set("name", sol::property(&TES3::Container::getName, &TES3::Container::setName));
				usertypeDefinition.set("script", sol::readonly_property(&TES3::Container::getScript));

				// Finish up our usertype.
				state.set_usertype("tes3container", usertypeDefinition);
			}

			// Binding for TES3::ContainerInstance.
			{
				// Start our usertype. We must finish this with state.set_usertype.
				auto usertypeDefinition = state.create_simple_usertype<TES3::ContainerInstance>();
				usertypeDefinition.set("new", sol::no_constructor);

				// Define inheritance structures. These must be defined in order from top to bottom. The complete chain must be defined.
				usertypeDefinition.set(sol::base_classes, sol::bases<TES3::Actor, TES3::PhysicalObject, TES3::Object, TES3::BaseObject>());
				
				// Friendly access to actor flags. TODO: Fix these constants.
				usertypeDefinition.set("organic", sol::property(
					[](TES3::ContainerInstance& self) { return self.getActorFlag(TES3::ActorFlag::Female); },
					[](TES3::ContainerInstance& self, bool set) { self.setActorFlag(TES3::ActorFlag::Female, set); }
				));
				usertypeDefinition.set("isRespawn", sol::property(
					[](TES3::ContainerInstance& self) { return self.getActorFlag(TES3::ActorFlag::Essential); },
					[](TES3::ContainerInstance& self, bool set) { self.setActorFlag(TES3::ActorFlag::Essential, set); }
				));

				// Access to other objects that need to be packaged.
				usertypeDefinition.set("container", sol::readonly_property([](TES3::ContainerInstance& self) { return makeLuaObject(self.container); }));

				// Constant values.
				usertypeDefinition.set("isInstance", sol::var(true));

				// Functions exposed as properties.
				usertypeDefinition.set("capacity", sol::property(&TES3::ContainerInstance::getCapacity, &TES3::ContainerInstance::setCapacity));
				usertypeDefinition.set("isRespawn", sol::readonly_property(&TES3::ContainerInstance::isRespawn));
				usertypeDefinition.set("model", sol::property(&TES3::ContainerInstance::getModelPath, &TES3::ContainerInstance::setModelPath));
				usertypeDefinition.set("name", sol::property(&TES3::ContainerInstance::getName, &TES3::ContainerInstance::setName));
				usertypeDefinition.set("script", sol::readonly_property(&TES3::ContainerInstance::getScript));

				// Finish up our usertype.
				state.set_usertype("tes3containerInstance", usertypeDefinition);
			}
		}
	}
}
