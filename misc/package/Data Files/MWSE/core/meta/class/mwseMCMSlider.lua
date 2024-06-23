-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- A slider for setting numerical values.
--- @class mwseMCMSlider : mwseMCMSetting, mwseMCMComponent
--- @field decimalPlaces integer The number of decimal places of precision. Must be a nonnegative integer. Default is `0`.
--- @field elements mwseMCMSliderElements This dictionary-style table holds all the UI elements of the Slider, for easy access.
--- @field jump number How far the slider jumps when you click an area inside the slider. Default is `5 * step`.
--- @field label string Text shown above the slider. If left as a normal string, it will be shown in the form: [`label`]: [`self.variable.value`]. If the string contains a '%s' format operator, the value will be formatted into it.
--- @field max number Maximum value of slider. Default is `100`.
--- @field min number Minimum value of slider. Default is `0`.
--- @field step number How far the slider moves when you press the arrows. Default is `1`.
mwseMCMSlider = {}

--- This function specifies how values stored in the `variable` field should correspond to values displayed in the slider label.
--- The default behavior is to consistently format decimal places (i.e., if `decimalPlaces == 2`, make sure two decimal places are shown.)
--- This can be overwritten in the `createNewSlider` method, allowing for custom formatting of variable values.
---
--- [Examples available in online documentation](https://mwse.github.io/MWSE/types/mwseMCMSlider/#converttolabelvalue).
--- @param variableValue number No description yet available.
--- @return number|string labelValue No description yet available.
function mwseMCMSlider:convertToLabelValue(variableValue) end

--- This function specifies how values stored in the slider widget should correspond to values stored in the `variable` field.
--- 		
--- This conversion is necessary because the widget can only store whole numbers, and the range of allowed values must start at 0, while the corresponding `variable` can store decimal numbers and the range can start at any number.
--- In the vast majority of use-cases, you do not need to call this method directly.
--- @param widgetValue number No description yet available.
--- @return number variableValue No description yet available.
function mwseMCMSlider:convertToVariableValue(widgetValue) end

--- This method specifies how values stored in the `variable` field should correspond to values stored in the slider UI widget.
--- 
--- This conversion is necessary because the widget can only store whole numbers, and the range of allowed values must start at 0, while the corresponding `variable` can store decimal numbers and the range can start at any number.
--- In the vast majority of use-cases, you do not need to call this method directly.
--- @param variableValue number No description yet available.
--- @return number widgetValue No description yet available.
function mwseMCMSlider:convertToWidgetValue(variableValue) end

--- This method creates the UI elements specific to Slider.
--- @param parentBlock tes3uiElement No description yet available.
function mwseMCMSlider:createContentsContainer(parentBlock) end

--- Creates the sliderBlock and slider UI elements of the Slider.
--- @param parentBlock tes3uiElement No description yet available.
function mwseMCMSlider:makeComponent(parentBlock) end

--- Creates a new Slider.
--- @param data mwseMCMSlider.new.data? This table accepts the following values:
--- 
--- `label`: string? — *Optional*. Text shown above the slider. If left as a normal string, it will be shown in the form: [`label`]: [`self.variable.value`]. If the string contains a '%s' format operator, the value will be formatted into it.
--- 
--- `variable`: mwseMCMConfigVariable|mwseMCMCustomVariable|mwseMCMGlobal|mwseMCMGlobalBoolean|mwseMCMPlayerData|mwseMCMTableVariable|mwseMCMVariable|mwseMCMSettingNewVariable|nil — *Optional*. A variable for this setting.
--- 
--- `config`: table? — *Default*: ``parentComponent.config``. The config to use when creating a [`mwseMCMTableVariable`](./mwseMCMTableVariable.md) for this `Setting`. If provided, it will override the config stored in `parentComponent`. Otherwise, the value in `parentComponent` will be used.
--- 
--- `defaultConfig`: table? — *Default*: ``parentComponent.defaultConfig``. The `defaultConfig` to use when creating a [`mwseMCMTableVariable`](./mwseMCMTableVariable.md) for this `Setting`. If provided, it will override the `defaultConfig` stored in `parentComponent`. Otherwise, the value in `parentComponent` will be used.
--- 
--- `configKey`: string|number|nil — *Optional*. The `configKey` used to create a new [`mwseMCMTableVariable`](./mwseMCMTableVariable.md). If this is provided, along with a `config` (which may be inherited from the `parentComponent`), then a new [`mwseMCMTableVariable`](./mwseMCMTableVariable.md) variable will be created for this setting.
--- 
--- `converter`: nil|fun(newValue: unknown): unknown — *Optional*. A converter to use for this component's `variable`.
--- 
--- `defaultSetting`: unknown? — *Optional*. If `defaultSetting` wasn't passed in the `variable` table, can be passed here. The new variable will be initialized to this value. If not provided, then the value in `defaultConfig` will be used, if possible.
--- 
--- `min`: number? — *Default*: `0`. Minimum value of slider.
--- 
--- `max`: number? — *Default*: `100`. Maximum value of slider.
--- 
--- `step`: number? — *Default*: `1`. How far the slider moves when you press the arrows.
--- 
--- `jump`: number? — *Default*: `5`. How far the slider jumps when you click an area inside the slider.
--- 
--- `decimalPlaces`: integer? — *Default*: `0`. The number of decimal places of precision. Must be a nonnegative integer.
--- 
--- `description`: string? — *Optional*. If in a [Sidebar Page](../types/mwseMCMSideBarPage.md), the description will be shown on mouseover.
--- 
--- `callback`: nil|fun(self: mwseMCMSlider) — *Optional*. The custom function called when the player interacts with this Setting.
--- 
--- `inGameOnly`: boolean? — *Default*: `false`. If true, the setting is disabled while the game is on main menu.
--- 
--- `restartRequired`: boolean? — *Default*: `false`. If true, updating this Setting will notify the player to restart the game.
--- 
--- `restartRequiredMessage`: string? — *Optional*. The message shown if restartRequired is triggered. The default text is a localized version of: "The game must be restarted before this change will come into effect."
--- 
--- `indent`: integer? — *Default*: `12`. The left padding size in pixels. Only used if the `childIndent` isn't set on the parent component.
--- 
--- `childIndent`: integer? — *Optional*. The left padding size in pixels. Used on all the child components.
--- 
--- `paddingBottom`: integer? — *Default*: `4`. The bottom border size in pixels. Only used if the `childSpacing` is unset on the parent component.
--- 
--- `childSpacing`: integer? — *Optional*. The bottom border size in pixels. Used on all the child components.
--- 
--- `convertToLabelValue`: nil|fun(self: mwseMCMSlider, variableValue: number): number|string — *Optional*. Define a custom formatting function for displaying variable values.
--- 
--- `postCreate`: nil|fun(self: mwseMCMSlider) — *Optional*. Can define a custom formatting function to make adjustments to any element saved in `self.elements`.
--- 
--- `class`: string? — *Optional*. No description yet available.
--- 
--- `componentType`: string? — *Optional*. No description yet available.
--- 
--- `parentComponent`: mwseMCMActiveInfo|mwseMCMBinder|mwseMCMButton|mwseMCMCategory|mwseMCMComponent|mwseMCMCycleButton|mwseMCMDropdown|mwseMCMExclusionsPage|mwseMCMFilterPage|mwseMCMHyperlink|mwseMCMInfo|mwseMCMKeyBinder|mwseMCMMouseBinder|mwseMCMMouseOverInfo|mwseMCMMouseOverPage|mwseMCMOnOffButton|mwseMCMPage|mwseMCMParagraphField|mwseMCMPercentageSlider|mwseMCMSetting|mwseMCMSideBarPage|mwseMCMSideBySideBlock|mwseMCMSlider|mwseMCMTemplate|mwseMCMTextField|mwseMCMYesNoButton|nil — *Optional*. No description yet available.
--- @return mwseMCMPercentageSlider|mwseMCMSlider slider No description yet available.
function mwseMCMSlider:new(data) end

---Table parameter definitions for `mwseMCMSlider.new`.
--- @class mwseMCMSlider.new.data
--- @field label string? *Optional*. Text shown above the slider. If left as a normal string, it will be shown in the form: [`label`]: [`self.variable.value`]. If the string contains a '%s' format operator, the value will be formatted into it.
--- @field variable mwseMCMConfigVariable|mwseMCMCustomVariable|mwseMCMGlobal|mwseMCMGlobalBoolean|mwseMCMPlayerData|mwseMCMTableVariable|mwseMCMVariable|mwseMCMSettingNewVariable|nil *Optional*. A variable for this setting.
--- @field config table? *Default*: ``parentComponent.config``. The config to use when creating a [`mwseMCMTableVariable`](./mwseMCMTableVariable.md) for this `Setting`. If provided, it will override the config stored in `parentComponent`. Otherwise, the value in `parentComponent` will be used.
--- @field defaultConfig table? *Default*: ``parentComponent.defaultConfig``. The `defaultConfig` to use when creating a [`mwseMCMTableVariable`](./mwseMCMTableVariable.md) for this `Setting`. If provided, it will override the `defaultConfig` stored in `parentComponent`. Otherwise, the value in `parentComponent` will be used.
--- @field configKey string|number|nil *Optional*. The `configKey` used to create a new [`mwseMCMTableVariable`](./mwseMCMTableVariable.md). If this is provided, along with a `config` (which may be inherited from the `parentComponent`), then a new [`mwseMCMTableVariable`](./mwseMCMTableVariable.md) variable will be created for this setting.
--- @field converter nil|fun(newValue: unknown): unknown *Optional*. A converter to use for this component's `variable`.
--- @field defaultSetting unknown? *Optional*. If `defaultSetting` wasn't passed in the `variable` table, can be passed here. The new variable will be initialized to this value. If not provided, then the value in `defaultConfig` will be used, if possible.
--- @field min number? *Default*: `0`. Minimum value of slider.
--- @field max number? *Default*: `100`. Maximum value of slider.
--- @field step number? *Default*: `1`. How far the slider moves when you press the arrows.
--- @field jump number? *Default*: `5`. How far the slider jumps when you click an area inside the slider.
--- @field decimalPlaces integer? *Default*: `0`. The number of decimal places of precision. Must be a nonnegative integer.
--- @field description string? *Optional*. If in a [Sidebar Page](../types/mwseMCMSideBarPage.md), the description will be shown on mouseover.
--- @field callback nil|fun(self: mwseMCMSlider) *Optional*. The custom function called when the player interacts with this Setting.
--- @field inGameOnly boolean? *Default*: `false`. If true, the setting is disabled while the game is on main menu.
--- @field restartRequired boolean? *Default*: `false`. If true, updating this Setting will notify the player to restart the game.
--- @field restartRequiredMessage string? *Optional*. The message shown if restartRequired is triggered. The default text is a localized version of: "The game must be restarted before this change will come into effect."
--- @field indent integer? *Default*: `12`. The left padding size in pixels. Only used if the `childIndent` isn't set on the parent component.
--- @field childIndent integer? *Optional*. The left padding size in pixels. Used on all the child components.
--- @field paddingBottom integer? *Default*: `4`. The bottom border size in pixels. Only used if the `childSpacing` is unset on the parent component.
--- @field childSpacing integer? *Optional*. The bottom border size in pixels. Used on all the child components.
--- @field convertToLabelValue nil|fun(self: mwseMCMSlider, variableValue: number): number|string *Optional*. Define a custom formatting function for displaying variable values.
--- @field postCreate nil|fun(self: mwseMCMSlider) *Optional*. Can define a custom formatting function to make adjustments to any element saved in `self.elements`.
--- @field class string? *Optional*. No description yet available.
--- @field componentType string? *Optional*. No description yet available.
--- @field parentComponent mwseMCMActiveInfo|mwseMCMBinder|mwseMCMButton|mwseMCMCategory|mwseMCMComponent|mwseMCMCycleButton|mwseMCMDropdown|mwseMCMExclusionsPage|mwseMCMFilterPage|mwseMCMHyperlink|mwseMCMInfo|mwseMCMKeyBinder|mwseMCMMouseBinder|mwseMCMMouseOverInfo|mwseMCMMouseOverPage|mwseMCMOnOffButton|mwseMCMPage|mwseMCMParagraphField|mwseMCMPercentageSlider|mwseMCMSetting|mwseMCMSideBarPage|mwseMCMSideBySideBlock|mwseMCMSlider|mwseMCMTemplate|mwseMCMTextField|mwseMCMYesNoButton|nil *Optional*. No description yet available.

--- Registers event handlers for `tes3.uiEvent.mouseClick` and `tes3.uiEvent.mouseRelease` that call `self:update()`.
--- @param element tes3uiElement No description yet available.
function mwseMCMSlider:registerSliderElement(element) end

--- Calls `updateVariableValue`, then calls the Slider's `callback` method (if it exists). Then notifies the player to restart the game if `restartRequired == true`.
function mwseMCMSlider:update() end

--- Updates the label text of the slider to show the current value of this slider's `variable`.
function mwseMCMSlider:updateValueLabel() end

--- Updates the value stored in this Slider's `variable` field, using the current value of this Slider's widget (after converting that value).
function mwseMCMSlider:updateVariableValue() end

--- Updates the value stored in the slider widget, using the current value of this Slider's `variable` (after converting that value).
function mwseMCMSlider:updateWidgetValue() end

