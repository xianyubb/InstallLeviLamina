// InstallLeviLamina.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>


void installLse(std::string LipCommand) {
    std::string YesOrNo;
    std::cout << "是否安装 LSE (yes / no) ";
    std::cin >> YesOrNo;
    if (YesOrNo == "y" || YesOrNo == "yes") {
        std::system((LipCommand + " install github.com/LiteLDev/LegacyScriptEngine").c_str());
    }
};

void install(std::string LipCommand) {
    const std::string config = "config GoModuleProxyURL";
    const std::string DownLoadSource[2] = { "https://github.bibk.top","https://goproxy.cn" };
    std::string YesOrNo;
    std::cout << "是否切换下载源 (yes / no) ";
    std::cin >> YesOrNo;
    if (YesOrNo == "y" || YesOrNo == "yes") {
        std::cout << "选择切换的下载源 (输入 yes / no) " << std::endl;
        std::cout << "1. " << DownLoadSource[0] << std::endl;
        std::cout << "2. " << DownLoadSource[1] << std::endl;
        std::cin >> YesOrNo;
        if (YesOrNo == "y" || YesOrNo == "yes") std::system((LipCommand + " " + config + " " + DownLoadSource[0]).c_str());
        else std::system((LipCommand + " " + config + " " + DownLoadSource[1]).c_str());
        std::system((LipCommand + " install github.com/LiteLDev/LeviLamina").c_str());
        installLse(LipCommand);
    }
    else {
        std::system((LipCommand + " install github.com/LiteLDev/LeviLamina").c_str());
        installLse(LipCommand);
    }
};



void start() {
    std::cout << "欢迎使用 LeviLamina 一键开服包" << std::endl;
    std::cout << "Author: xianyubb" << std::endl;
    std::cout << "QQ: 2149656630" << std::endl;
    std::cout << "Group: 865286891" << std::endl;
}

bool fileExistsInDirectory(const std::string& directory, const std::string& filename) {
    std::ifstream file(directory + "/" + filename);
    return file.good();
}

int main()
{
    start();
    
    const std::string filepath = "./lip";
    std::string filename = "lip.exe"; // 替换为你要检查的文件名
    if (fileExistsInDirectory(filepath, filename)) {
        std::cout << "找到了 lip 包管理器 开始安装 LeviLamina..." << std::endl;
        install("lip\\lip.exe");
    }
    else {
        std::cout << "没有找到 LIP 包管理器" << std::endl;
        std::cout << "即将使用系统环境中的 LIP 安装 LeviLamina..." << std::endl;
        std::cout << "若跳出 'lip' 不是内部或外部命令，也不是可运行的程序或批处理文件。" << std::endl;
        std::cout << "请您安装 lip 包管理器 并放置在 本程序目录下的 lip 文件夹 里面装 lip.exe 即可" << std::endl;
        std::cout << "您也可以将 lip 加于环境变量之中 " << std::endl;
        install("lip");
    }
    std::cout << "安装完毕" << std::endl;
    std::system("pause");
    return 0;
}

