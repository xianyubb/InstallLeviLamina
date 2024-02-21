

#include "First.h"
#include "start.h"



int main() {
    if (times == 0) LipSet();

    std::cout << "请选择接下来的操作..." << std::endl;
    std::cout << "1. 更换 lip 下载源" << std::endl;
    std::cout << "2. 安装LeviLamina" << std::endl;
    std::cout << "3. 安装LegacyScriptEngine" << std::endl;
    std::cout << "4. 安装插件" << std::endl;
    std::cout << "5. 更新插件" << std::endl;
    std::cout << "6. 启动服务器" << std::endl;
    std::cout << "7. 退出程序" << std::endl;

    std::string Action = "";
    std::cin >> Action;

    switch (std::stoi(Action)) {
    case 1: {
        ChangeDownLoad();
        main();
        std::system("pause");
    };
    case 2: {
        InstallLeviLamina();
        main();
        std::system("pause");
    };
    case 3: {
        InstallLegacyScriptEngine();
        main();
        std::system("pause");
    };
    case 4: {

    };
    case 5: {

    };
    case 6: {
        start();
    };
    case 7: {
        exit(0);
    }
    }



    return 0;
};
