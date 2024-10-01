#pragma once

#include <nlohmann/json.hpp>

#include <string>

#include "compilerinfo.hpp"
#include "sysCoreinfo.hpp"
#include "sysExpandinfo.hpp"

std::string sysinfo (){
    nlohmann::json RM;
    RM[Core] = syscoreinfo();
    RM[compilerinfo] = compilerinfo();
    if (RM[Core] = "Windows"){
        
    }
}