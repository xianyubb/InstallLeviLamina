#pragma once

#include <Windows.h>
#include <fstream>
#include <iostream>
#include <string>

void MessageShow() {
    std::cout << "?????? LeviLamina ??????" << std::endl;
    std::cout << "Author: xianyubb" << std::endl;
    std::cout << "QQ: 2149656630" << std::endl;
    std::cout << "Group: 865286891" << std::endl;
}

bool fileExistsInDirectory(const std::wstring filepath) {
    std::ifstream file(filepath);
    return file.good();
}

const std::string DownLoadSource[2][2] = {
    {"https://github.com", "https://goproxy.io"},
    {"https://github.bibk.top", "https://goproxy.cn"} };

void InstallLegacyScriptEngine() {
    std::string YesOrNo;
    std::cout << "???? LSE (yes / no) ";
    std::cin >> YesOrNo;
    if (YesOrNo == "y" || YesOrNo == "yes") {
        std::system("lip install github.com/LiteLDev/LegacyScriptEngine");
    }
};

void ChangeSource(const std::string DownLoadSource[2]) {
    std::system(("lip config GitHubMirrorURL " + DownLoadSource[0]).c_str());
    std::system(("lip config  GoModuleProxyURL " + DownLoadSource[1]).c_str());
}

void ChangeDownLoad() {
    std::string YesOrNo;
    std::cout << "?§Ý?????? ???????§Ý? BDS ???????" << std::endl;
    std::cout << "BDS ?????????????? ????????????" << std::endl;
    std::cout << "????§Ý?????? (yes / no) " << std::endl;
    std::cin >> YesOrNo;
    if (YesOrNo == "y" || YesOrNo == "yes") {
        std::cout << "????§Ý????????" << std::endl;
        std::cout << "1. ????" << std::endl;
        std::cout << "2. ?????" << std::endl;
        std::cin >> YesOrNo;
        if (YesOrNo == "1") {
            ChangeSource(DownLoadSource[0]);
        }
        else if (YesOrNo == "2") {
            ChangeSource(DownLoadSource[1]);
        }
    }
}
int times = 0;
void LipSet() {
    MessageShow();
    std::cout << "???????? lip ??¡Â??" << std::endl;
    std::cout << "1. ?????? ???????? lip ????? Path " << std::endl;
    std::cout << "2. lip ?? ??????????? lip ?????????¡¤??" << std::endl;
    std::string LipCase;
    std::cin >> LipCase;
    if (LipCase == "1") {
        times++;
    }
    else if (LipCase == "2") {
        std::cout << "?????? lip ?????¡¤??" << std::endl;
        std::cout << "???? C:/Code/lip" << std::endl;
        std::wstring Path = L"";
        std::getline(std::wcin >> std::ws, Path);
        SetEnvironmentVariableW(L"Path", Path.c_str());
        std::wstring files = Path.append(L"/lip.exe");
        if (fileExistsInDirectory(files)) { times++;}
        else std::cout << "lip ??????????? ????? lip ¡¤?????" << std::endl;
    }
    else  {
        std::system("pause");
        exit(0);
    }
}
void InstallLeviLamina() {
    std::string YesOrNo;
    std::cout << "???? LeviLamina (yes / no) ";
    std::cin >> YesOrNo;
    if (YesOrNo == "y" || YesOrNo == "yes") {
        std::system("lip install github.com/LiteLDev/LeviLamina");
    }
};


