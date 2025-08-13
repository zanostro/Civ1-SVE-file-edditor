#include "file_reader.hpp"

#include "utill.hpp"
#include "sve_format.hpp"

#include <memory>
#include <cstring>
#include <iostream>
#include <cassert>
#include <filesystem>

#include <filesystem>
#include <optional>

namespace fs = std::filesystem;

std::optional<std::uintmax_t> file_size_safe(const fs::path& p){
    std::error_code ec;
    auto sz = fs::file_size(p, ec);
    if (ec) return std::nullopt;
    return sz;
}

std::shared_ptr<SVE_FILE> read_sve_file(const std::string& file_path) {


    SVE_FILE sve_file;
    auto file_size = file_size_safe(file_path);


    assert(*file_size == sizeof(SVE_FILE) && "Invalid SVE file size");

    FILE* f = fopen(file_path.c_str(), "rb");
    assert(f != nullptr && "Failed to open SVE file");

    unsigned char buf[sizeof(SVE_FILE)];
    if (fread(buf, 1, sizeof(buf), f) != sizeof(buf)) { fclose(f); return nullptr; }
    fclose(f);

    memcpy(&sve_file, buf, sizeof(SVE_FILE));
    if(DEBUG) std::cout << "SVE file loaded successfully from " << file_path << std::endl;

    return std::make_shared<SVE_FILE>(sve_file);
}