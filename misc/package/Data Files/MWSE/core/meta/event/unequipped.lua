-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- The unequipped event fires after an actor has successfully unequipped an item.
--- @class unequippedEventData
--- @field claim boolean If set to `true`, any lower-priority event callbacks will be skipped. Returning `false` will set this to `true`.
--- @field actor tes3container|tes3containerInstance|tes3creature|tes3creatureInstance|tes3npc|tes3npcInstance *Read-only*. The actor that has unequipped the item.
--- @field item tes3activator|tes3alchemy|tes3apparatus|tes3armor|tes3birthsign|tes3bodyPart|tes3book|tes3cell|tes3class|tes3clothing|tes3container|tes3containerInstance|tes3creature|tes3creatureInstance|tes3dialogue|tes3dialogueInfo|tes3door|tes3enchantment|tes3faction|tes3gameSetting|tes3globalVariable|tes3ingredient|tes3land|tes3landTexture|tes3leveledCreature|tes3leveledItem|tes3light|tes3lockpick|tes3magicSourceInstance|tes3misc|tes3npc|tes3npcInstance|tes3pathGrid|tes3probe|tes3quest|tes3race|tes3reference|tes3region|tes3repairTool|tes3script|tes3skill|tes3sound|tes3soundGenerator|tes3spell|tes3startScript|tes3static|tes3weapon *Read-only*. The object that has been unequipped.
--- @field itemData tes3itemData *Read-only*. The item data of item.
--- @field mobile tes3mobileActor|tes3mobileCreature|tes3mobileNPC|tes3mobilePlayer *Read-only*. The mobile actor that has unequipped the item.
--- @field reference tes3reference *Read-only*. actor’s associated reference.
