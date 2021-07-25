--- @meta

--- Controls the timing and update functions for animation controllers.
--- @class niTimeController : niObject
--- @field frequency number The animation controller's frequency value.
--- @field highKeyFrame number No description.
--- @field lastTime number No description.
--- @field lowKeyFrame number No description.
--- @field nextController niTimeController The next NiTimeController in the list of controllers containing the calling controller.
--- @field phase number The phase value.
--- @field startTime number No description.
--- @field target niAlphaProperty|niAmbientLight|niCamera|niCollisionSwitch|niDirectionalLight|niDynamicEffect|niFogProperty|niGeometry|niLight|niMaterialProperty|niNode|niPointLight|niSourceTexture|niSpotLight|niStencilProperty|niSwitchNode|niTexturingProperty|niTriBasedGeometry|niTriShape|niVertexColorProperty The scene graph object that this animation controller is to animate.
niTimeController = {}

--- Starts the controller at the specified time.
--- @param time number No description yet available.
function niTimeController:start(time) end

--- Stops the controller.
function niTimeController:stop() end

