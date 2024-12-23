#ifndef UTILS_H
#define UTILS_H

#include <cstdio>
#include <cstdarg>
#include <chrono>

// Timer class to measure elapsed time
class Timer {
public:
    Timer();  // Start the timer
    ~Timer(); // Stop the timer and print elapsed time

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
};

// Debug print function (only works if DEBUG is defined)
void debug_print(const char *format, ...);

#endif // UTILS_H
