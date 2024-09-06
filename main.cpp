#include <fmt/core.h>

int main()
{
    #if defined(_WIN64) || defined(__x86_64__) || defined(__ppc64__)
        fmt::print("Compiled as x64 (64-bit)\n");
    #elif defined(_WIN32) || defined(__i386__)
        fmt::print("Compiled as x86 (32-bit)\n");
    #else
        fmt::print("Unknown architecture\n");
    #endif

    #ifdef NDEBUG
        fmt::print("Compiled as Release\n");
    #else
        fmt::print("Compiled as Debug\n");
    #endif

    return 0;
}