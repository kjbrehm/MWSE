-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- This event fires whenever a tes3dialogueInfo has been selected for a given tes3dialogue. This includes but is not limited to showing greetings, finding voice overs, and calculating service requirements.
--- @class dialogueFilteredEventData
--- @field claim boolean If set to `true`, any lower-priority event callbacks will be skipped. Returning `false` will set this to `true`.
--- @field actor tes3container|tes3containerInstance|tes3creature|tes3creatureInstance|tes3npc|tes3npcInstance *Read-only*. Any associated actor for the query.
--- @field context tes3.dialogueFilterContext *Read-only*. What caused the dialogue filtering. Maps to values in the [`tes3.dialogueFilterContext`](https://mwse.github.io/MWSE/references/dialogue-filter-context/) table.
--- @field dialogue tes3dialogue *Read-only*. The dialogue that was filtered.
--- @field info tes3dialogueInfo *Read-only*. The result that the filter returned.
--- @field reference tes3container|tes3containerInstance|tes3creature|tes3creatureInstance|tes3npc|tes3npcInstance *Read-only*. Any associated reference for the query.
