/**
 * =============================================================
 * ** SVE_file_edditor.cpp **
 * =============================================================
 * ++ Program Entry Point ++
 * -------------------------------------------------------------
 * Created on: August 13, 2025
 * Author: zanostro
 * -------------------------------------------------------------
 * Purpose: This program is designed to manipulate the 1990
 *          Civilization 1 SVE files. Special thanks to the
 *          creators and contributors at:
 *          https://forums.civfanatics.com/threads/sve-file-format.493581/page-2#post-12422448
 *          for providing the data reference sheet that made
 *          this project possible.
 * =============================================================
 */

#include "SVE_file_edditor.hpp"
#include "utill.hpp"
#include "file_reader.hpp"

#include "sve_format.hpp"

#include <string>
#include <iostream>
#include <memory>

using std::string;


int main(){

    std::shared_ptr<SVE_FILE> sve_file = read_sve_file(SAVE_FILE_PATH);

    return 0;
}