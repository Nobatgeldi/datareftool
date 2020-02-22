#pragma once

#include <ostream>
#include <string>
#include <vector>

#include <boost/filesystem/path.hpp>

// Functions that scan a single file in the specified format.

std::vector<std::string> loadBlacklistFile(std::ostream & log, const boost::filesystem::path & filename);

// Load a file that lists a dataref at the beginning of each line, optionally with other material after a whitespace
std::vector<std::string> loadListFile(std::ostream & log, const boost::filesystem::path & filename);

// use a `strings`-like approach to finding datarefs
std::vector<std::string> scanFileForDatarefStrings(std::ostream & log, const boost::filesystem::path & path);
