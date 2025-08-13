#ifndef FILE_READER_HPP
#define FILE_READER_HPP

#include <memory>
#include <string>
#include "sve_format.hpp"


// Ensure only one declaration with this signature exists, or rename if needed
std::shared_ptr<SVE_FILE> read_sve_file(const std::string& file_path);

#endif