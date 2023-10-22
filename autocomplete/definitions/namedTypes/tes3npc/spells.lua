return {
	type = "value",
	description = [[A list of spells that the actor has access to. It is a `tes3spellList`, which is a list wrapper with helper functions. The actual list is iterated over using `pairs`. E.g. `for _, spell in pairs(npc.spells) do print(spell.name) end`]],
	readOnly = true,
	valuetype = "tes3spellList|tes3spell[]",
}