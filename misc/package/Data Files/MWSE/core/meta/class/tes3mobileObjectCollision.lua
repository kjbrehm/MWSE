-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- The base object holding the information of a collision.
--- @class tes3mobileObjectCollision
--- @field colliderRef tes3reference *Read-only*. Access to the reference of the colliding object.
--- @field colliderRoot niBillboardNode|niCollisionSwitch|niNode|niSortAdjustNode|niSwitchNode *Read-only*. The collider's root scene graph node.
--- @field collisionType integer *Read-only*. The collision type.
--- 
--- Value | Collsion type
--- ----- | -------------
--- 0     | Actor
--- 1     | Static
--- 2     | Terrain
--- 3     | Water
--- 4     | Activator
--- 5     | staticAvoidNode
--- 6     | none
--- @field normal tes3vector3 *Read-only*. The normal vector at the collision point.
--- @field objectPosAtCollision tes3vector3 *Read-only*. The location of the mobile object at the moment of collision.
--- @field point tes3vector3 *Read-only*. The point of contact.
--- @field time number *Read-only*. No description yet available.
--- @field valid boolean *Read-only*. No description yet available.
--- @field velocity tes3vector3 *Read-only*. The velocity of the associated mobile object at the point of collision.
