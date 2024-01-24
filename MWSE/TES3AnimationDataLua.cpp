#include "TES3AnimationDataLua.h"

#include "LuaManager.h"

#include "TES3ActorAnimationController.h"
#include "TES3AnimationData.h"
#include "TES3AnimationGroup.h"
#include "TES3Reference.h"
#include "TES3Sound.h"

#include "NIGeometry.h"
#include "NIKeyframeManager.h"

namespace mwse::lua {
	void bindTES3AnimationData() {
		// Get our lua state.
		auto stateHandle = LuaManager::getInstance().getThreadSafeStateHandle();
		auto& state = stateHandle.state;

		{
			// Start our usertype.
			auto usertypeDefinition = state.new_usertype<TES3::AnimationData::SequenceGroup>("tes3animationDataSequenceGroup");
			usertypeDefinition["new"] = sol::no_constructor;

			// Basic property bindings.
			usertypeDefinition["lower"] = &TES3::AnimationData::SequenceGroup::lower;
			usertypeDefinition["upper"] = &TES3::AnimationData::SequenceGroup::upper;
			usertypeDefinition["leftArm"] = &TES3::AnimationData::SequenceGroup::leftArm;
		}

		{
			// Start our usertype.
			auto usertypeDefinition = state.new_usertype<TES3::AnimationData>("tes3animationData");
			usertypeDefinition["new"] = sol::no_constructor;

			// Basic property bindings.
			usertypeDefinition["actorNode"] = &TES3::AnimationData::actorNode;
			usertypeDefinition["animationDefinitions"] = sol::readonly_property(&TES3::AnimationData::getAnimationDefinitions);
			usertypeDefinition["animationGroups"] = sol::readonly_property(&TES3::AnimationData::getAnimationGroups);
			usertypeDefinition["animGroupSoundGenCounts"] = sol::readonly_property(&TES3::AnimationData::getAnimGroupSoundGenCounts);
			//usertypeDefinition["animGroupSoundGens"] = sol::readonly_property(&TES3::AnimationData::getAnimGroupSoundGens);
			usertypeDefinition["animGroupSourceIndices"] = sol::readonly_property(&TES3::AnimationData::getAnimGroupSourceIndices);
			usertypeDefinition["approxRootTravelSpeeds"] = sol::readonly_property(&TES3::AnimationData::getApproxRootTravelSpeeds);
			usertypeDefinition["blinkMorphEndTime"] = sol::readonly_property(&TES3::AnimationData::blinkMorphEndTime);
			usertypeDefinition["blinkMorphStartTime"] = sol::readonly_property(&TES3::AnimationData::blinkMorphStartTime);
			usertypeDefinition["castSpeed"] = sol::property(&TES3::AnimationData::getCastSpeed, &TES3::AnimationData::setCastSpeed);
			usertypeDefinition["currentAnimGroupLayers"] = sol::readonly_property(&TES3::AnimationData::getCurrentAnimGroupSources);
			usertypeDefinition["currentAnimGroups"] = sol::readonly_property(&TES3::AnimationData::getCurrentAnimGroups);
			usertypeDefinition["currentActionIndices"] = sol::readonly_property(&TES3::AnimationData::getCurrentActionIndices);
			usertypeDefinition["currentSoundGenIndices"] = sol::readonly_property(&TES3::AnimationData::getCurrentSoundGenIndices);
			usertypeDefinition["deltaTime"] = &TES3::AnimationData::deltaTime;
			usertypeDefinition["flags"] = &TES3::AnimationData::flags;
			usertypeDefinition["hasOverrideAnimations"] = sol::readonly_property(&TES3::AnimationData::hasOverrideAnimations);
			usertypeDefinition["headGeometry"] = &TES3::AnimationData::headGeometry;
			usertypeDefinition["headNode"] = &TES3::AnimationData::headNode;
			usertypeDefinition["headMorphTiming"] = &TES3::AnimationData::headMorphTiming;
			usertypeDefinition["keyframeSources"] = sol::readonly_property(&TES3::AnimationData::getKeyframeSources);
			usertypeDefinition["lipsyncLevel"] = &TES3::AnimationData::lipsyncLevel;
			usertypeDefinition["loopCounts"] = sol::readonly_property(&TES3::AnimationData::getLoopCounts);
			usertypeDefinition["manager"] = &TES3::AnimationData::manager;
			usertypeDefinition["movementRootNode"] = &TES3::AnimationData::movementRootNode;
			usertypeDefinition["nextAnimGroup"] = &TES3::AnimationData::nextAnimGroup;
			usertypeDefinition["nextLoopCount"] = &TES3::AnimationData::nextLoopCount;
			usertypeDefinition["movementSpeed"] = sol::readonly_property(&TES3::AnimationData::movementSpeed);
			usertypeDefinition["positionDeltaMovementRoot"] = &TES3::AnimationData::positionDeltaMovementRoot;
			usertypeDefinition["spine1Node"] = &TES3::AnimationData::spine1Node;
			usertypeDefinition["spine2Node"] = &TES3::AnimationData::spine2Node;
			usertypeDefinition["spineAngle"] = &TES3::AnimationData::spineAngle;
			usertypeDefinition["timeToNextBlink"] = &TES3::AnimationData::timeToNextBlink;
			usertypeDefinition["talkMorphEndTime"] = sol::readonly_property(&TES3::AnimationData::talkMorphEndTime);
			usertypeDefinition["talkMorphStartTime"] = sol::readonly_property(&TES3::AnimationData::talkMorphStartTime);
			usertypeDefinition["timings"] = sol::readonly_property(&TES3::AnimationData::getTimings);
			usertypeDefinition["weaponSpeed"] = &TES3::AnimationData::weaponSpeed;

			// Basic function bindings.
			usertypeDefinition["getReference"] = &TES3::AnimationData::getReference;
			usertypeDefinition["playAnimationGroup"] = &TES3::AnimationData::playAnimationGroup;
			usertypeDefinition["playAnimationGroupForSection"] = &TES3::AnimationData::playAnimationGroupForSection;
			usertypeDefinition["setHeadNode"] = &TES3::AnimationData::setHeadNode;
			usertypeDefinition["setOverrideLayerKeyframes"] = &TES3::AnimationData::setOverrideSourceKeyframes;
			usertypeDefinition["swapAnimationGroups"] = &TES3::AnimationData::swapAnimationGroups;

			// Deprecated bindings.
			usertypeDefinition["currentAnimGroupLayers"] = sol::readonly_property(&TES3::AnimationData::getCurrentAnimGroupSources);
			usertypeDefinition["keyframeLayers"] = sol::readonly_property(&TES3::AnimationData::getKeyframeSources);
			usertypeDefinition["modelRootNode"] = &TES3::AnimationData::movementRootNode;
		}
	}
}
