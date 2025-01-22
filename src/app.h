#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define APP_EXPORT __declspec(dllexport)
#else
  #define APP_EXPORT
#endif

APP_EXPORT void app();
APP_EXPORT void app_print_vector(const std::vector<std::string> &strings);
