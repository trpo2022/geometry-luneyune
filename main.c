#include <stdio.h>

struct Circle {
    int x;
    int y;
    int radius;
};

struct Circle init_circle(
        int x,
        int y,
        int radius); // Function which returns circle with following parameters
void circle_to_string(
        struct Circle circle,
        char* buffer,
        int size); // Function which converts circle into WKT format, and write
                   // it into buffer
struct Circle string_to_circle(
        char* string,
        int size);            // Function converts WKT-format string into circle
struct Circle input_circle(); // Function which returns a circle with parameters
                              // writen by user
void print_circle(
        struct Circle circle); // Function which print WKT-format circle

int main()
{
    return 0;
}