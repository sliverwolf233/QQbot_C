#include <string>

std::string compilerinfo(){
    #if  __GNUC__
    return "GCC/G++";
    #elif  _MSC_VER
    return "MSVC";
    #elif  __SUNPRO_C||__SUNPRO_CC
    return "SunCC";
    #else
    return "unkown compiler";
    #endif
}