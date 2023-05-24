---@enum tes3.event
return {
	["absorbedMagic"] = "absorbedMagic",
	["activate"] = "activate",
	["activationTargetChanged"] = "activationTargetChanged",
	["activeMagicEffectIconsUpdated"] = "activeMagicEffectIconsUpdated",
	["addSound"] = "addSound",
	["addTempSound"] = "addTempSound",
	["attack"] = "attack",
	["attackHit"] = "attackHit",
	["attackStart"] = "attackStart",
	["barterOffer"] = "barterOffer",
	["bodyPartAssigned"] = "bodyPartAssigned",
	["bodyPartsUpdated"] = "bodyPartsUpdated",
	["bookGetText"] = "bookGetText",
	["buttonPressed"] = "buttonPressed",
	["calcArmorPieceHit"] = "calcArmorPieceHit",
	["calcArmorRating"] = "calcArmorRating",
	["calcBarterPrice"] = "calcBarterPrice",
	["calcBlockChance"] = "calcBlockChance",
	["calcChargenStats"] = "calcChargenStats",
	["calcEnchantmentPrice"] = "calcEnchantmentPrice",
	["calcFlySpeed"] = "calcFlySpeed",
	["calcHitChance"] = "calcHitChance",
	["calcHitDetectionCone"] = "calcHitDetectionCone",
	["calcMoveSpeed"] = "calcMoveSpeed",
	["calcRepairPrice"] = "calcRepairPrice",
	["calcRestInterrupt"] = "calcRestInterrupt",
	["calcRunSpeed"] = "calcRunSpeed",
	["calcSoulValue"] = "calcSoulValue",
	["calcSpellmakingPrice"] = "calcSpellmakingPrice",
	["calcSpellmakingSpellPointCost"] = "calcSpellmakingSpellPointCost",
	["calcSpellPrice"] = "calcSpellPrice",
	["calcSunDamageScalar"] = "calcSunDamageScalar",
	["calcSwimRunSpeed"] = "calcSwimRunSpeed",
	["calcSwimSpeed"] = "calcSwimSpeed",
	["calcTrainingPrice"] = "calcTrainingPrice",
	["calcTravelPrice"] = "calcTravelPrice",
	["calcWalkSpeed"] = "calcWalkSpeed",
	["cameraControl"] = "cameraControl",
	["cellActivated"] = "cellActivated",
	["cellChanged"] = "cellChanged",
	["cellDeactivated"] = "cellDeactivated",
	["charGenFinished"] = "charGenFinished",
	["collideWater"] = "collideWater",
	["collision"] = "collision",
	["combatStart"] = "combatStart",
	["combatStarted"] = "combatStarted",
	["combatStop"] = "combatStop",
	["combatStopped"] = "combatStopped",
	["consoleReferenceChanged"] = "consoleReferenceChanged",
	["containerClosed"] = "containerClosed",
	["convertReferenceToItem"] = "convertReferenceToItem",
	["crimeWitnessed"] = "crimeWitnessed",
	["damage"] = "damage",
	["damaged"] = "damaged",
	["damagedHandToHand"] = "damagedHandToHand",
	["damageHandToHand"] = "damageHandToHand",
	["death"] = "death",
	["detectSneak"] = "detectSneak",
	["determineAction"] = "determineAction",
	["determinedAction"] = "determinedAction",
	["dialogueEnvironmentCreated"] = "dialogueEnvironmentCreated",
	["dialogueFiltered"] = "dialogueFiltered",
	["disposition"] = "disposition",
	["enchantChargeUse"] = "enchantChargeUse",
	["enchantedItemCreated"] = "enchantedItemCreated",
	["enchantedItemCreateFailed"] = "enchantedItemCreateFailed",
	["enterFrame"] = "enterFrame",
	["equip"] = "equip",
	["equipmentReevaluated"] = "equipmentReevaluated",
	["equipped"] = "equipped",
	["exerciseSkill"] = "exerciseSkill",
	["fadersCreated"] = "fadersCreated",
	["filterBarterMenu"] = "filterBarterMenu",
	["filterContentsMenu"] = "filterContentsMenu",
	["filterInventory"] = "filterInventory",
	["filterInventorySelect"] = "filterInventorySelect",
	["filterSoulGemTarget"] = "filterSoulGemTarget",
	["infoFilter"] = "infoFilter",
	["infoGetText"] = "infoGetText",
	["infoLinkResolve"] = "infoLinkResolve",
	["infoResponse"] = "infoResponse",
	["initialized"] = "initialized",
	["isGuard"] = "isGuard",
	["itemDropped"] = "itemDropped",
	["itemTileUpdated"] = "itemTileUpdated",
	["journal"] = "journal",
	["jump"] = "jump",
	["key"] = "key",
	["keybindTested"] = "keybindTested",
	["keyDown"] = "keyDown",
	["keyframesLoad"] = "keyframesLoad",
	["keyUp"] = "keyUp",
	["leveledCreaturePicked"] = "leveledCreaturePicked",
	["leveledItemPicked"] = "leveledItemPicked",
	["levelUp"] = "levelUp",
	["load"] = "load",
	["loaded"] = "loaded",
	["lockPick"] = "lockPick",
	["magicCasted"] = "magicCasted",
	["magicEffectRemoved"] = "magicEffectRemoved",
	["magicEffectsResolved"] = "magicEffectsResolved",
	["menuEnter"] = "menuEnter",
	["menuExit"] = "menuExit",
	["meshLoad"] = "meshLoad",
	["meshLoaded"] = "meshLoaded",
	["mobileActivated"] = "mobileActivated",
	["mobileDeactivated"] = "mobileDeactivated",
	["modConfigReady"] = "modConfigReady",
	["mouseAxis"] = "mouseAxis",
	["mouseButtonDown"] = "mouseButtonDown",
	["mouseButtonUp"] = "mouseButtonUp",
	["mouseWheel"] = "mouseWheel",
	["musicSelectTrack"] = "musicSelectTrack",
	["objectInvalidated"] = "objectInvalidated",
	["playGroup"] = "playGroup",
	["playItemSound"] = "playItemSound",
	["postInfoResponse"] = "postInfoResponse",
	["potionBrewed"] = "potionBrewed",
	["potionBrewFailed"] = "potionBrewFailed",
	["potionBrewSkillCheck"] = "potionBrewSkillCheck",
	["powerRecharged"] = "powerRecharged",
	["preLevelUp"] = "preLevelUp",
	["preventRest"] = "preventRest",
	["projectileExpire"] = "projectileExpire",
	["projectileHitActor"] = "projectileHitActor",
	["projectileHitObject"] = "projectileHitObject",
	["projectileHitTerrain"] = "projectileHitTerrain",
	["referenceActivated"] = "referenceActivated",
	["referenceDeactivated"] = "referenceDeactivated",
	["referenceSceneNodeCreated"] = "referenceSceneNodeCreated",
	["repair"] = "repair",
	["restInterrupt"] = "restInterrupt",
	["save"] = "save",
	["saved"] = "saved",
	["simulate"] = "simulate",
	["skillRaised"] = "skillRaised",
	["soundObjectPlay"] = "soundObjectPlay",
	["spellCast"] = "spellCast",
	["spellCasted"] = "spellCasted",
	["spellCastedFailure"] = "spellCastedFailure",
	["spellCreated"] = "spellCreated",
	["spellMagickaUse"] = "spellMagickaUse",
	["spellResist"] = "spellResist",
	["spellResisted"] = "spellResisted",
	["spellTick"] = "spellTick",
	["topicAdded"] = "topicAdded",
	["trapDisarm"] = "trapDisarm",
	["uiActivated"] = "uiActivated",
	["uiEvent"] = "uiEvent",
	["uiObjectTooltip"] = "uiObjectTooltip",
	["uiPreEvent"] = "uiPreEvent",
	["uiRefreshed"] = "uiRefreshed",
	["uiShowRestMenu"] = "uiShowRestMenu",
	["uiSkillTooltip"] = "uiSkillTooltip",
	["uiSpellTooltip"] = "uiSpellTooltip",
	["unequipped"] = "unequipped",
	["vfxCreated"] = "vfxCreated",
	["weaponReadied"] = "weaponReadied",
	["weaponUnreadied"] = "weaponUnreadied",
	["weatherChangedImmediate"] = "weatherChangedImmediate",
	["weatherCycled"] = "weatherCycled",
	["weatherTransitionFinished"] = "weatherTransitionFinished",
	["weatherTransitionStarted"] = "weatherTransitionStarted",
}
