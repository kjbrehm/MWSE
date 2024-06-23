return {
	type = "function",
	description = [[Creates a new mwseMCMCycleButton inside given `parent` menu.

The canonical way to use this function is to pass a `parent` and `data` arguments. If passing only `data` table, cycle button's UI element tree won't be created. To do so, use cycle button's `create` method:

```lua
local myButton = mwse.mcm.createCycleButton({ ... })
myButton:create(parent)
```

The same is done by this function if you pass both `parent` and `data` arguments.
]],
	arguments = {
		{ name = "parent", type = "tes3uiElement|mwse.mcm.createCycleButton.data", description = "The UI element inside which the new cycle button will be created." },
		{
			name = "data",
			type = "table",
			optional = true,
			tableParams = {
				{ name = "label", type = "string", optional = true, description = "Text shown next to the button." },
				{ name = "description", type = "string", optional = true, description = "If in a [Sidebar Page](../types/mwseMCMSideBarPage.md), the description will be shown on mouseover." },
				{ name = "options", type = "tes3uiCycleButtonOption[]", description = "This table holds the text and variable value for each of the cycle button's options." },
				{ name = "leftSide", type = "boolean", optional = true, default = true, description = "If true, the button will be created on the left and label on the right." },
				{ name = "variable", type = "mwseMCMVariable|mwseMCMSettingNewVariable", optional = true, 
					description = "A variable for this setting. If not provided, this setting will try to create a variable using the `config` and `configKey` parameters, if possible."
				},
				{ name = "config", type = "table", optional = true,  default = "`parentComponent.config`",
					description = "The config to use when creating a [`mwseMCMTableVariable`](../types/mwseMCMTableVariable.md) for this `Setting`. \z
						If provided, it will override the config stored in `parentComponent`. \z
						Otherwise, the value in `parentComponent` will be used."
				},
				{ name = "defaultConfig", type = "table", optional = true, default = "`parentComponent.defaultConfig`",
					description = "The `defaultConfig` to use when creating a [`mwseMCMTableVariable`](../types/mwseMCMTableVariable.md) for this `Setting`. \z
						If provided, it will override the `defaultConfig` stored in `parentComponent`. \z
						Otherwise, the value in `parentComponent` will be used."
				},
				{ name = "configKey", type = "string|number", optional = true, 
					description = "The `configKey` used to create a new [`mwseMCMTableVariable`s](../types/mwseMCMTableVariable.md). \z
						If this is provided, along with a `config` (which may be inherited from the `parentComponent`), then a new \z
							[`mwseMCMTableVariable`s](../types/mwseMCMTableVariable.md) variable will be created for this setting."
				},
				{ name = "converter", type = "fun(newValue: unknown): unknown", optional = true, 
					description = "A converter to use for this component's `variable`."
				},
				{ name = "defaultSetting", type = "unknown", optional = true, 
					description = "If `defaultSetting` wasn't passed in the `variable` table, can be passed here. \z
						The new variable will be initialized to this value. If not provided, then the value in `defaultConfig` will be used, if possible." 
				},
				{ name = "callback", type = "fun(self: mwseMCMCycleButton)", optional = true, description = "The custom function called when the player interacts with this cycle button." },
				{ name = "inGameOnly", type = "boolean", optional = true, default = false, description = "If true, the setting is disabled while the game is on main menu." },
				{ name = "restartRequired", type = "boolean", optional = true, default = false, description = "If true, updating this Setting will notify the player to restart the game." },
				{ name = "restartRequiredMessage", type = "string", optional = true, description = 'The message shown if restartRequired is triggered. The default text is a localized version of: "The game must be restarted before this change will come into effect."' },
				{ name = "indent", type = "integer", optional = true, default = 12, description = "The left padding size in pixels. Only used if the `childIndent` isn't set on the parent component." },
				{ name = "childIndent", type = "integer", optional = true, description = "The left padding size in pixels. Used on all the child components." },
				{ name = "paddingBottom", type = "integer", optional = true, default = 4, description = "The bottom border size in pixels. Only used if the `childSpacing` is unset on the parent component." },
				{ name = "childSpacing", type = "integer", optional = true, description = "The bottom border size in pixels. Used on all the child components." },
				{ name = "postCreate", type = "fun(self: mwseMCMCycleButton)", optional = true, description = "Can define a custom formatting function to make adjustments to any element saved in `self.elements`." },
			}
		}
	},
	returns = {{
		name = "button", type = "mwseMCMCycleButton"
	}}
}
