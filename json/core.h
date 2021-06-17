
#include <cmath>
#include <cstdint>
#include <string>
#include <iostream>
#include <streambuf>
#include <sstream>
#include <chrono>
#include <vector>
#include <queue>
#include <list>
#include <thread>
#include <atomic>
#include <fstream>
#include <map>
#include <functional>
#include <algorithm>
#include <array>
#include <cstring>
#include <cassert>
#include <filesystem>
#include <locale>
#include <codecvt>
#include <variant>
#include <utility>
#ifdef WINDOWS
#define VC_EXTRALEAN
#define WIN32_LEAN_AND_MEAN
#endif

inline std::ostream& Debug()
{
    return std::cout;
}
#define debug Debug()

namespace fs
{
    bool isValidFolder(std::string folder);
}