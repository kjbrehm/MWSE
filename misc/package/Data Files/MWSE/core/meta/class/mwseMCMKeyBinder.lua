-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- This button allows the player to bind a key combination for use with hotkeys. The binder allows specifying if mouse buttons and scroll wheel bindings are allowed and wether modifier keys Shift, Alt and Ctrl are allowed.
--- 
--- When the player presses the button with current hotkey, a prompt asks them to press a new key (or key combination using Shift, Ctrl or Alt) to bind.
--- 
--- If this KeyBinder is set to only accept keyboard keys, key combos are stored in the following format ([mwseKeyCombo](../types/mwseKeyCombo.md)):
--- 
--- ```lua linenums="1"
--- {
--- 	keyCode = tes3.scanCode.{key},
--- 	isShiftDown = true,
--- 	isAltDown = false,
--- 	isControlDown = false,
--- },
--- ```
--- 
--- On the other hand, if the KeyBinder allows binding mouse keys in addition to keyboard keys, key combos are stored in the following format([mwseKeyMouseCombo](../types/mwseKeyMouseCombo.md)):
--- 
--- ```lua linenums="1"
--- {
--- 	keyCode = tes3.scanCode.{key},
--- 	isShiftDown = true,
--- 	isAltDown = false,
--- 	isControlDown = false,
--- 	mouseWheel = -1 - down, 1 - up, nil
--- 	mouseButton = number|nil
--- },
--- ```
--- 
---
--- [Examples available in online documentation](https://mwse.github.io/MWSE/types/mwseMCMKeyBinder).
--- @class mwseMCMKeyBinder : mwseMCMButton, mwseMCMSetting, mwseMCMComponent
--- @field allowCombinations boolean If true, the keybinder will let the user use modification keys: Shift, Ctrl, and Alt when rebinding.
--- @field allowMouse boolean If true, the keybinder will let the user use mouse buttons and scroll wheel in this keybinder.
--- @field keybindName string|nil The keybind name. Shown in the popup menu header. This string is formatted into a localized version of "SET %s KEYBIND.". If none is provided the popup has "SET NEW KEYBIND." as header text.
mwseMCMKeyBinder = {}

--- Closes the popup menu.
function mwseMCMKeyBinder:closeMenu() end

--- Creates the popup menu.
--- @return tes3uiElement menu No description yet available.
function mwseMCMKeyBinder:createMenu() end

--- Returns a string representing given `keyCombo`. For example, "Ctrl - C".
--- @param keyCombo mwseKeyMouseCombo No description yet available.
--- @return string result No description yet available.
function mwseMCMKeyBinder:getComboString(keyCombo) end

--- Returns the letter the provided `keyCode` represents.
--- @param keyCode integer|nil No description yet available.
--- @return string|nil letter No description yet available.
function mwseMCMKeyBinder:getLetter(keyCode) end

--- Returns a localized name for the mouse button of given index.
--- @param buttonIndex number|nil No description yet available.
--- @return string|nil result No description yet available.
function mwseMCMKeyBinder:getMouseButtonText(buttonIndex) end

--- Returns a localized version of `"Mouse wheel up"` if `wheel` is 1 and `"Mouse wheel down"` if `wheel` is -1.
--- @param wheel integer|nil No description yet available.
--- @return string|nil result No description yet available.
function mwseMCMKeyBinder:getMouseWheelText(wheel) end

--- Returns a string representing the key combo currently store in `variable`. For example, "Ctrl - C".
--- @return string result No description yet available.
function mwseMCMKeyBinder:getText() end

--- Changes the `variable.value` to the key combination from given input event data.
--- @param e keyUpEventData|mouseButtonDownEventData|mouseWheelEventData No description yet available.
function mwseMCMKeyBinder:keySelected(e) end

--- Creates a new KeyBinder.
--- @param data mwseMCMKeyBinder.new.data? This table accepts the following values:
--- 
--- `label`: string? — *Optional*. Text shown next to the button.
--- 
--- `description`: string? — *Optional*. If in a [Sidebar Page](../types/mwseMCMSideBarPage.md), the description will be shown on mouseover.
--- 
--- `allowCombinations `: boolean? — *Default*: `true`. If true, the keybinder will let the user use modification keys: Shift, Ctrl, and Alt when rebinding.
--- 
--- `allowMouse `: boolean? — *Default*: `false`. If true, the keybinder will let the user use mouse buttons and scroll wheel in this keybinder. In that case the variable will have [mwseKeyMouseCombo](../types/mwseKeyMouseCombo.md) layout, [mwseKeyCombo](../types/mwseKeyCombo.md) otherwise.
--- 
--- `keybindName`: string? — *Optional*. The keybind name. Shown in the popup menu header. This string is formatted into a localized version of "SET %s KEYBIND.". If none is provided the popup has "SET NEW KEYBIND." as header text.
--- 
--- `leftSide `: boolean? — *Default*: `true`. If true, the button will be created on the left and label on the right.
--- 
--- `variable`: mwseMCMConfigVariable|mwseMCMCustomVariable|mwseMCMGlobal|mwseMCMGlobalBoolean|mwseMCMPlayerData|mwseMCMTableVariable|mwseMCMVariable|mwseMCMSettingNewVariable|nil — *Optional*. A variable for this KeyBinder.
--- 
--- `defaultSetting`: mwseKeyCombo|mwseKeyMouseCombo|nil — *Optional*. If `defaultSetting` wasn't passed in the `variable` table, can be passed here. The new variable will be initialized to this value.
--- 
--- `callback`: nil|fun(self: mwseMCMKeyBinder) — *Optional*. The custom function called when the player interacts with this KeyBinder.
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
--- `postCreate`: nil|fun(self: mwseMCMKeyBinder) — *Optional*. Can define a custom formatting function to make adjustments to any element saved in `self.elements`.
--- 
--- `class`: string? — *Optional*. No description yet available.
--- 
--- `componentType`: string? — *Optional*. No description yet available.
--- 
--- `parentComponent`: mwseMCMActiveInfo|mwseMCMButton|mwseMCMCategory|mwseMCMComponent|mwseMCMCycleButton|mwseMCMDecimalSlider|mwseMCMDropdown|mwseMCMExclusionsPage|mwseMCMFilterPage|mwseMCMHyperlink|mwseMCMInfo|mwseMCMKeyBinder|mwseMCMMouseOverInfo|mwseMCMMouseOverPage|mwseMCMOnOffButton|mwseMCMPage|mwseMCMParagraphField|mwseMCMPercentageSlider|mwseMCMSetting|mwseMCMSideBarPage|mwseMCMSideBySideBlock|mwseMCMSlider|mwseMCMTemplate|mwseMCMTextField|mwseMCMYesNoButton|nil — *Optional*. No description yet available.
--- @return mwseMCMKeyBinder button No description yet available.
function mwseMCMKeyBinder:new(data) end

---Table parameter definitions for `mwseMCMKeyBinder.new`.
--- @class mwseMCMKeyBinder.new.data
--- @field label string? *Optional*. Text shown next to the button.
--- @field description string? *Optional*. If in a [Sidebar Page](../types/mwseMCMSideBarPage.md), the description will be shown on mouseover.
--- @field allowCombinations  boolean? *Default*: `true`. If true, the keybinder will let the user use modification keys: Shift, Ctrl, and Alt when rebinding.
--- @field allowMouse  boolean? *Default*: `false`. If true, the keybinder will let the user use mouse buttons and scroll wheel in this keybinder. In that case the variable will have [mwseKeyMouseCombo](../types/mwseKeyMouseCombo.md) layout, [mwseKeyCombo](../types/mwseKeyCombo.md) otherwise.
--- @field keybindName string? *Optional*. The keybind name. Shown in the popup menu header. This string is formatted into a localized version of "SET %s KEYBIND.". If none is provided the popup has "SET NEW KEYBIND." as header text.
--- @field leftSide  boolean? *Default*: `true`. If true, the button will be created on the left and label on the right.
--- @field variable mwseMCMConfigVariable|mwseMCMCustomVariable|mwseMCMGlobal|mwseMCMGlobalBoolean|mwseMCMPlayerData|mwseMCMTableVariable|mwseMCMVariable|mwseMCMSettingNewVariable|nil *Optional*. A variable for this KeyBinder.
--- @field defaultSetting mwseKeyCombo|mwseKeyMouseCombo|nil *Optional*. If `defaultSetting` wasn't passed in the `variable` table, can be passed here. The new variable will be initialized to this value.
--- @field callback nil|fun(self: mwseMCMKeyBinder) *Optional*. The custom function called when the player interacts with this KeyBinder.
--- @field inGameOnly boolean? *Default*: `false`. If true, the setting is disabled while the game is on main menu.
--- @field restartRequired boolean? *Default*: `false`. If true, updating this Setting will notify the player to restart the game.
--- @field restartRequiredMessage string? *Optional*. The message shown if restartRequired is triggered. The default text is a localized version of: "The game must be restarted before this change will come into effect."
--- @field indent integer? *Default*: `12`. The left padding size in pixels. Only used if the `childIndent` isn't set on the parent component.
--- @field childIndent integer? *Optional*. The left padding size in pixels. Used on all the child components.
--- @field paddingBottom integer? *Default*: `4`. The bottom border size in pixels. Only used if the `childSpacing` is unset on the parent component.
--- @field childSpacing integer? *Optional*. The bottom border size in pixels. Used on all the child components.
--- @field postCreate nil|fun(self: mwseMCMKeyBinder) *Optional*. Can define a custom formatting function to make adjustments to any element saved in `self.elements`.
--- @field class string? *Optional*. No description yet available.
--- @field componentType string? *Optional*. No description yet available.
--- @field parentComponent mwseMCMActiveInfo|mwseMCMButton|mwseMCMCategory|mwseMCMComponent|mwseMCMCycleButton|mwseMCMDecimalSlider|mwseMCMDropdown|mwseMCMExclusionsPage|mwseMCMFilterPage|mwseMCMHyperlink|mwseMCMInfo|mwseMCMKeyBinder|mwseMCMMouseOverInfo|mwseMCMMouseOverPage|mwseMCMOnOffButton|mwseMCMPage|mwseMCMParagraphField|mwseMCMPercentageSlider|mwseMCMSetting|mwseMCMSideBarPage|mwseMCMSideBySideBlock|mwseMCMSlider|mwseMCMTemplate|mwseMCMTextField|mwseMCMYesNoButton|nil *Optional*. No description yet available.

--- Shows the rebind prompt popup. The popup is active until some valid input is given.
function mwseMCMKeyBinder:showKeyBindMessage() end

--- Calls `showKeyBindMessage` method.
function mwseMCMKeyBinder:update() end

