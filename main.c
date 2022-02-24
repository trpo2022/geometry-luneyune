#include <math.h>
#include <stdbool.h>
#include <stdio.h>

struct Circle {
    float x;
    float y;
    float radius;
};

struct Circle init_circle(
        float x,
        float y,
        float radius) // Function which returns circle with following parameters
{
    return (struct Circle){.x = x, .y = y, .radius = radius};
}
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
        struct Circle circle) // Function which print WKT-format circle
{
    printf("circle(%.4f %.4f, %.4f)", circle.x, circle.y, circle.radius);
}

float circle_perimeter(struct Circle circle) // Function which returns a
                                             // perimeter of given circle
{
    return circle.radius * 6.28;
}

float destination(
        struct Circle circle1,
        struct Circle circle2) // Function returns destination between centers
                               // of circles
{
    return sqrt(pow(circle1.x - circle2.x, 2) + pow(circle1.y - circle2.y, 2));
}

int main()
{
    return 0;
}