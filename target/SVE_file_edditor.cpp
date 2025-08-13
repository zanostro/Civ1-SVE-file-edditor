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