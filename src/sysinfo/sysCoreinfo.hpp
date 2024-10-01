#include <string>

std::string syscoreinfo(){
    #ifdef _WIN64 || _WIN32 || _WINDOWS_
    #include <windows.h>
    return "Windows";
    #ifdef __linux_
    return "GNU/Linux";
    #ifdef __APPLE__
    return "Apple devices"
    #ifdef defined(_POSIX_VERSION)
    return "other";
}
