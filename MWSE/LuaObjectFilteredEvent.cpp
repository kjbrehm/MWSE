#include "LuaObjectFilteredEvent.h"
#include "LuaDisableableEvent.h"

#include "LuaManager.h"
#include "LuaUtil.h"

#include "TES3Actor.h"
#include "TES3Reference.h"

namespace mwse::lua::event {
	ObjectFilteredEvent::ObjectFilteredEvent(const char* name, const TES3::BaseObject* filter) :
		GenericEvent(name),
		m_EventFilter(filter)
	{
		// We always filter on the base-most object.
		if (m_EventFilter) {
			m_EventFilter = m_EventFilter->getBaseObject();
		}
	}

	sol::object ObjectFilteredEvent::getEventOptions() {
		auto stateHandle = LuaManager::getInstance().getThreadSafeStateHandle();
		auto& state = stateHandle.state;
		auto options = state.create_table();
		options["filter"] = m_EventFilter;
		return options;
	}
}
