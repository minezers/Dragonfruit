#pragma once
#include <Windows.h>

namespace DragonFruit
{
#ifdef _WIN32
    static HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

#define DF_LOG_TEXT(...)  SetConsoleTextAttribute(DragonFruit::hConsole, WORD(15));\
                          std::cout << "[INFO] " << __VA_ARGS__ << std::endl;  // White

#define DF_LOG_INFO(...)  SetConsoleTextAttribute(DragonFruit::hConsole, WORD(2));\
                          std::cout << "[INFO] " << __VA_ARGS__ << std::endl;  // Green

#define DF_LOG_WARN(...)  SetConsoleTextAttribute(DragonFruit::hConsole, WORD(14));\
                          std::cout << "[WARN] " << __VA_ARGS__ << std::endl;  // Yellow

#define DF_LOG_ERROR(...) SetConsoleTextAttribute(DragonFruit::hConsole, WORD(12));\
                          std::cout << "[ERROR] " << __VA_ARGS__ << std::endl; // Red

#define DF_LOG_DEBUG(...) SetConsoleTextAttribute(DragonFruit::hConsole, WORD(13));\
                          std::cout << "[DEBUG] " << __VA_ARGS__ << std::endl; // Purple

#define DF_LOG_FATAL(...) SetConsoleTextAttribute(DragonFruit::hConsole, WORD(4));\
                          std::cout << "[FATAL] " << __VA_ARGS__ << std::endl; // Dark Red
#endif
}