-- This file is autogenerated. Do not edit this file manually. Your changes will be ignored.
-- More information: https://github.com/MWSE/MWSE/tree/master/docs

--- @meta
--- A 4 by 4 matrix. You can perform following arithmetic with this type: `==`.
--- @class tes3matrix44
--- @operator add(tes3matrix44): tes3matrix44
--- @operator mul(tes3matrix44): tes3matrix44
--- @operator mul(number): tes3matrix44
--- @operator sub(tes3matrix44): tes3matrix44
--- @field w tes3vector4 The 1st row of the matrix.
--- @field x tes3vector4 The 2nd row of the matrix.
--- @field y tes3vector4 The 3rd row of the matrix.
--- @field z tes3vector4 The 4th row of the matrix.
tes3matrix44 = {}

--- Creates a new 4 by 4 matrix from 4 provided vectors or 16 numbers. Creates an empty matrix if nothing is provided.
--- @param w0 number|tes3vector4|nil *Default*: `0`. No description yet available.
--- @param x0 number|tes3vector4|nil *Default*: `0`. No description yet available.
--- @param y0 number|tes3vector4|nil *Default*: `0`. No description yet available.
--- @param z0 number|tes3vector4|nil *Default*: `0`. No description yet available.
--- @param w1 number? *Default*: `0`. No description yet available.
--- @param x1 number? *Default*: `0`. No description yet available.
--- @param y1 number? *Default*: `0`. No description yet available.
--- @param z1 number? *Default*: `0`. No description yet available.
--- @param w2 number? *Default*: `0`. No description yet available.
--- @param x2 number? *Default*: `0`. No description yet available.
--- @param y2 number? *Default*: `0`. No description yet available.
--- @param z2 number? *Default*: `0`. No description yet available.
--- @param w3 number? *Default*: `0`. No description yet available.
--- @param x3 number? *Default*: `0`. No description yet available.
--- @param y3 number? *Default*: `0`. No description yet available.
--- @param z3 number? *Default*: `0`. No description yet available.
--- @return tes3matrix44 matrix No description yet available.
function tes3matrix44.new(w0, x0, y0, z0, w1, x1, y1, z1, w2, x2, y2, z2, w3, x3, y3, z3) end

--- Creates a copy of the matrix.
--- @return tes3matrix44 result No description yet available.
function tes3matrix44:copy() end

--- Zeroes out all values in the matrix.
function tes3matrix44:toZero() end

--- Converts the matrix to a string with 2 decimal places.
--- @return string result No description yet available.
function tes3matrix44:__tostring() end

