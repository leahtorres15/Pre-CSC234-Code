// Program does ??

#include <stdio.h>
#include <math.h>

float rectangleArea(float length, float width);
float circleArea(float length, float width);

int main() {
    float length = x;
    float width = y;
    printf("%f\n",float circleArea(float x, float y) - float rectangleArea(float x, float y));
    return 0;
}

float rectangleArea(float length, float width){
    return length*width;
}

float circleArea(float length, float width){
    double x = length*0.5;
    double y = width*0.5;
    float radius = sqrt((pow(x,2)) + (pow(y,2)));
    return (radius*radius* M_PI);
}
