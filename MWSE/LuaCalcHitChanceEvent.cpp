#include "LuaCalcHitChanceEvent.h"

#include "LuaManager.h"
#include "LuaUtil.h"

#include "TES3MobileActor.h"
#include "TES3MobileProjectile.h"
#include "TES3Reference.h"

namespace mwse::lua::event {
	CalcHitChanceEvent::CalcHitChanceEvent(TES3::MobileActor* attacker, TES3::MobileProjectile* projectile, int hitChance) :
		ObjectFilteredEvent("calcHitChance", attacker->reference->baseObject),
		m_Attacker(attacker),
		m_Projectile(projectile),
		m_HitChance(hitChance)
	{

	}

	sol::table CalcHitChanceEvent::createEventTable() {
		auto stateHandle = LuaManager::getInstance().getThreadSafeStateHandle();
		auto& state = stateHandle.state;
		auto eventData = state.create_table();

		eventData["attackerMobile"] = m_Attacker;
		eventData["attacker"] = m_Attacker->reference;

		auto target = m_Attacker->actionData.hitTarget;
		if (target) {
			eventData["targetMobile"] = target;
			eventData["target"] = target->reference;
		}

		if (m_Projectile) {
			eventData["projectile"] = m_Projectile;
		}

		eventData["hitChance"] = m_HitChance;

		return eventData;
	}

	bool CalcHitChanceEvent::m_EventEnabled = false;
}
