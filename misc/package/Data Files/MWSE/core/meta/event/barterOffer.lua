-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- @diagnostic disable:undefined-doc-name

--- This event is called when a potentially successful barter offer is made by the player. Potentially successful means both parties have the required funds to make the trade.
--- @class barterOfferEventData
--- @field block boolean If set to `true`, vanilla logic will be suppressed. Returning `false` will set this to `true`.
--- @field claim boolean If set to `true`, any lower-priority event callbacks will be skipped. Returning `false` will set this to `true`.
--- @field buying tes3inventoryTile[] *Read-only*. The objects being bought. These items will be transfered to player's inventory on a successful bartering event.
--- @field mobile tes3mobileActor|tes3mobileCreature|tes3mobileNPC|tes3mobilePlayer *Read-only*. The mobile actor of the merchant the player is interacting with.
--- @field offer number *Read-only*. Offered gold amount.
--- @field selling tes3inventoryTile[] *Read-only*. The objects being sold. These items will be transfered to bartender's inventory on a successful bartering event.
--- @field success boolean Whether the trade was accepted or not.
--- @field value number *Read-only*. Total value in gold of items being traded. Negative means the player owes coin, positive means the player gets coin.
