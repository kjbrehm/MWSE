-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- This event fires when a lock is being picked.
--- @class lockPickEventData
--- @field block boolean If set to `true`, vanilla logic will be suppressed. Returning `false` will set this to `true`.
--- @field claim boolean If set to `true`, any lower-priority event callbacks will be skipped. Returning `false` will set this to `true`.
--- @field chance number *Read-only*. The chance the lockpick will be successful.
--- @field lockData tes3lockNode *Read-only*. The lock data of the reference.
--- @field lockPresent boolean *Read-only*. Indicates if a lock is present on the reference.
--- @field picker tes3mobileNPC|tes3mobilePlayer *Read-only*. The Mobile NPC doing the disarming.
--- @field reference tes3reference *Read-only*. The reference that triggered the event (container, door, etc.).
--- @field tool tes3alchemy|tes3apparatus|tes3armor|tes3book|tes3clothing|tes3ingredient|tes3light|tes3lockpick|tes3misc|tes3probe|tes3repairTool|tes3weapon *Read-only*. The item the picker is using to pick the lock.
--- @field toolItemData tes3itemData *Read-only*. The item data for the tool.
