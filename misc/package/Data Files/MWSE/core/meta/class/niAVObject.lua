-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- @diagnostic disable:undefined-doc-name

--- The typical base type for most NetImmerse scene graph objects.
--- @class niAVObject : niObjectNET, niObject
--- @field alphaProperty niAlphaProperty|nil Convenient access to this object's alpha property. Setting this value to be nil will erase the property, while setting it to a valid alpha property will set (or replace) it.
--- @field appCulled boolean A flag indicating if this object is culled. When culled, it will not render, and raycasts ignore it.
--- @field flags number Flags, dependent on the specific object type.
--- @field fogProperty niFogProperty|nil Convenient access to this object's fog property. Setting this value to be nil will erase the property, while setting it to a valid fog property will set (or replace) it.
--- @field materialProperty niMaterialProperty|nil Convenient access to this object's material property. Setting this value to be nil will erase the property, while setting it to a valid material property will set (or replace) it.
--- @field parent niBillboardNode|niCollisionSwitch|niNode|niSwitchNode *Read-only*. The object's parent. It may not have one if it is not attached to the scene.
--- @field properties niPropertyLinkedList *Read-only*. The list of properties attached to this `niAVObject`.
--- @field rotation tes3matrix33 The object's local rotation matrix.
--- @field scale number The object's local uniform scaling factor.
--- @field stencilProperty niStencilProperty|nil Convenient access to this object's stencil property. Setting this value to be nil will erase the property, while setting it to a valid stencil property will set (or replace) it.
--- @field texturingProperty niTexturingProperty|nil Convenient access to this object's texturing property. Setting this value to be nil will erase the property, while setting it to a valid texturing property will set (or replace) it.
--- @field translation tes3vector3 The object's local translation vector.
--- @field velocity tes3vector3 The object's local velocity.
--- @field vertexColorProperty niVertexColorProperty|nil Convenient access to this object's vertex coloring property. Setting this value to be nil will erase the property, while setting it to a valid vertex coloring property will set (or replace) it.
--- @field worldBoundOrigin tes3vector3 The world coordinates of the object's bounds origin.
--- @field worldBoundRadius number The radius of the object's bounds.
--- @field worldTransform tes3transform The object's transformations in the world space.
--- @field zBufferProperty niZBufferProperty|nil Convenient access to this object's z-buffer property. Setting this value to be nil will erase the property, while setting it to a valid z-buffer property will set (or replace) it.
niAVObject = {}

--- Attaches a property to this object, without checking to see if the property or another of its type is already on the list. Property lists must not have more than one property of a given class (i.e. no two niTexturingProperty objects) attached at once, or else undefined behavior will result.
--- @param property niAlphaProperty|niFogProperty|niMaterialProperty|niStencilProperty|niTexturingProperty|niVertexColorProperty No description yet available.
function niAVObject:attachProperty(property) end

--- Resets the object's local transform.
function niAVObject:clearTransforms() end

--- Calculates and creates a bounding box for the object. The existing bounding box, if any, will not be used, a fresh one will always be calculated.
--- @return tes3boundingBox boundingBox The newly created bounding box.
function niAVObject:createBoundingBox() end

--- Detaches all the properties on the object and returns them in the table.
--- @param ts table No description yet available.
--- @return niAlphaProperty[]|niFogProperty[]|niMaterialProperty[]|niStencilProperty[]|niTexturingProperty[]|niVertexColorProperty[] result No description yet available.
function niAVObject:detachAllProperties(ts) end

--- Detaches and returns a property from the object which matches the given property type.
--- @param type number The types are available in [`tes3.niPropertyType`](https://mwse.github.io/MWSE/references/niProperty-types/) table.
--- @return niAlphaProperty|niFogProperty|niMaterialProperty|niStencilProperty|niTexturingProperty|niVertexColorProperty result No description yet available.
function niAVObject:detachProperty(type) end

--- Searches this node and all child nodes recursively for a node with a name that matches the argument.
--- @param name string No description yet available.
--- @return niAmbientLight|niBillboardNode|niCamera|niCollisionSwitch|niDirectionalLight|niDynamicEffect|niLight|niNode|niParticles|niPointLight|niRotatingParticles|niSpotLight|niSwitchNode|niTriShape result No description yet available.
function niAVObject:getObjectByName(name) end

--- Gets an attached property by property type.
--- @param type number The types are available in [`tes3.niPropertyType`](https://mwse.github.io/MWSE/references/niProperty-types/) table.
--- @return niAlphaProperty|niFogProperty|niMaterialProperty|niStencilProperty|niTexturingProperty|niVertexColorProperty result No description yet available.
function niAVObject:getProperty(type) end

--- Alias for `update()` method. Updates the world transforms of this node and its children, which makes changes visible for rendering. Use after changing any local rotation, translation, scale, bounds or after attaching and detaching nodes.
--- 
--- !!! tip
--- 	Update Efficiency
--- 	It's best to "batch up" calls to this method. For example, when transform of an object its parent and grandparent are all changed during the same frame, it is much more efficient to call this method only on the grandparent object after all transforms have been changed. Also, consider calling this function as low as possible on a scene graph.
--- 
--- @param args niAVObject.propagatePositionChange.params? This table accepts the following values:
--- 
--- `time`: number? — *Default*: `0`. This parameter is the time-slice for transformation and bounds updates
--- 
--- `controllers`: boolean? — *Default*: `false`. Update object's controllers?
--- 
--- `bounds`: boolean? — *Default*: `true`. Update object's bounds?
function niAVObject:propagatePositionChange(args) end

---Table parameter definitions for `niAVObject.propagatePositionChange`.
--- @class niAVObject.propagatePositionChange.params
--- @field time number? *Default*: `0`. This parameter is the time-slice for transformation and bounds updates
--- @field controllers boolean? *Default*: `false`. Update object's controllers?
--- @field bounds boolean? *Default*: `true`. Update object's bounds?

--- Updates the world transforms of this node and its children, which makes changes visible for rendering. Use after changing any local rotation, translation, scale, bounds or after attaching and detaching nodes.
--- 
--- !!! tip
--- 	Update Efficiency
--- 	It's best to "batch up" calls to this method. For example, when transform of an object its parent and grandparent are all changed during the same frame, it is much more efficient to call this method only on the grandparent object after all transforms have been changed. Also, consider calling this function as low as possible on a scene graph.
--- 
--- @param args niAVObject.update.params? This table accepts the following values:
--- 
--- `time`: number? — *Default*: `0`. This parameter is the time-slice for transformation and bounds updates
--- 
--- `controllers`: boolean? — *Default*: `false`. Update object's controllers?
--- 
--- `bounds`: boolean? — *Default*: `true`. Update object's bounds?
function niAVObject:update(args) end

---Table parameter definitions for `niAVObject.update`.
--- @class niAVObject.update.params
--- @field time number? *Default*: `0`. This parameter is the time-slice for transformation and bounds updates
--- @field controllers boolean? *Default*: `false`. Update object's controllers?
--- @field bounds boolean? *Default*: `true`. Update object's bounds?

--- Update all attached effects. This method must be called at or above any object when dynamic effects are attached or detached from it
function niAVObject:updateEffects() end

--- Consider using `updateEffects()` instead. Updates all attached effects.
--- @deprecated
function niAVObject:updateNodeEffects() end

--- Update all attached properties.
function niAVObject:updateProperties() end

