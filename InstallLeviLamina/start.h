#pragma once
#include "First.h"


void start() {
    if (fileExistsInDirectory(L"./bedrock_server_mod.exe")) {
        std::cout << "检测到服务端已经安装完毕 即将开始服务器" << std::endl;
        int ReturnValue = std::system("bedrock_server_mod.exe");
        while (ReturnValue != 0) {
            ReturnValue = std::system("bedrock_server_mod.exe");
        }
    }
    else std::cout << "未能在当前目录下找到服务端启动程序" << std::endl;

    std::system("pause");
    exit(0);
};