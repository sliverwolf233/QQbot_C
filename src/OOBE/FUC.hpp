#pragma once

#include <filesystem>
#include <fstream>

void FirstConfig(){
    if (std::filesystem::exists("Config.info") && std::filesystem::exists("User Config") && std::filesystem::exists("Regist"))
    //判断是否已经使用过了 为了保证可用性 缺失一个便需要二次生成 使用过返回值为 true
    {
        return;
    }
    //生成文件夹,文件 使用扁平化输出 便于生成 具有跨平台性
    
}