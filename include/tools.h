#ifndef TOOLS_H
#define TOOLS_H

#include <windows.h>

// 设置控制台为 UTF-8 编码，解决中文乱码
inline void initConsole() {
    SetConsoleOutputCP(CP_UTF8);
}

// 自动在程序启动时调用
class ConsoleInit {
public:
    ConsoleInit() {
        initConsole();
    }
};

static ConsoleInit consoleInit;

#endif
