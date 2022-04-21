--- @meta
--- @diagnostic disable:undefined-doc-name

--- A class responsible for handling the loading of BSA files.
--- @class tes3bsaLoader
--- @field archives tes3archive[] *Read-only*. An array-style table of archive files.
--- @field firstArchive tes3archive *Read-only*. The start of the list of loaded archives. This is the last loaded archive, meaning first in priority.
tes3bsaLoader = {}

--- Searches for a file in the archive list, and returns the archive and index that it can be found in.
--- @param path string The path to the file held in the archive.
--- @return tes3archive|nil archive The found archive, or `nil` if no result was found.
--- @return number|nil index The index in the archive that the path was found at, or `nil` if no result was found.
function tes3bsaLoader:findFile(path) end

