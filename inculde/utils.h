#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <chrono>

#ifdef DEBUG
#define debug_print(...) std::printf(__VA_ARGS__)
#else
#define debug_print(...)
#endif

class Timer {
public:
    Timer();
    ~Timer();
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
};

#endif // UTILS_H
