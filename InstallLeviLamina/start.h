#pragma once
#include "First.h"


void start() {
    if (fileExistsInDirectory(L"./bedrock_server_mod.exe")) {
        std::cout << "��⵽������Ѿ���װ��� ������ʼ������" << std::endl;
        int ReturnValue = std::system("bedrock_server_mod.exe");
        while (ReturnValue != 0) {
            ReturnValue = std::system("bedrock_server_mod.exe");
        }
    }
    else std::cout << "δ���ڵ�ǰĿ¼���ҵ��������������" << std::endl;

    std::system("pause");
    exit(0);
};