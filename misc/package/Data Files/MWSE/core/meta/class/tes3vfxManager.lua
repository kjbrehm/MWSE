-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- A manager for VFX lifetime and rendering. VFXs can be created through script with `tes3.createVisualEffect` and destroyed with `tes3.removeVisualEffect`.
--- @class tes3vfxManager
--- @field data tes3vfx[] A collection of active managed visual effects.
--- @field worldVFXRoot niBillboardNode|niCollisionSwitch|niNode|niSortAdjustNode|niSwitchNode The root node that general VFXs are attached to.
tes3vfxManager = {}

--- Removes all active vfx.
function tes3vfxManager:reset() end

