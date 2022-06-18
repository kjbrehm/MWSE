-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- @diagnostic disable:undefined-doc-name

--- Represents a point light source in a scene. Point lights have a specific location in space and a distance attenuation function. Point lights project light in all directions from their position. They can be moved by changing the translation of the light.
--- @class niPointLight : niLight, niDynamicEffect, niAVObject, niObjectNET, niObject
--- @field constantAttenuation number The constant attenuation factor.
--- @field linearAttenuation number The linear attenuation factor.
--- @field quadraticAttenuation number The quadratic attenuation factor.
niPointLight = {}

--- Creates a new NiPointLight.
--- @return niPointLight|niSpotLight light No description yet available.
function niPointLight.new() end

--- Sets the attenuation for the radius.
--- @param radius number No description yet available.
function niPointLight:setAttenuationForRadius(radius) end

--- Sets both the light's influence radius, and its lighting attenuation to match the radius.
--- @param radius number No description yet available.
function niPointLight:setRadius(radius) end

