/**
 * =============================================================
 * ** file_reader.hpp **
 * =============================================================
 * ++ File Reading Functionality ++
 * -------------------------------------------------------------
 * Created on: August 13, 2025
 * Author: geek
 * -------------------------------------------------------------
 * Purpose: Header file for SVE file reading functions.
 *          Provides interface for loading Civilization 1
 *          save files into memory structures.
 * =============================================================
 */

#ifndef FILE_READER_HPP
#define FILE_READER_HPP

#include <memory>
#include <string>
#include "sve_format.hpp"


std::shared_ptr<SVE_FILE> read_sve_file(const std::string& file_path);

#endif