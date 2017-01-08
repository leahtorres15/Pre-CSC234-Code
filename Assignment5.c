// Program does ??

#include <stdio.h>
#include <math.h>

float rectangleArea(float length, float width);
float circleArea(float length, float width);

int main() {
    float x=2;
    float y=15;

    for(int i=0; i<11; i++){
        float len = x+(2*i);
        float wid = y-(.3*i);
        float diff = circleArea(len, wid) - rectangleArea(len, wid);
        printf("Difference in areas using length %f and width %f: %f\n", 
                len, wid, diff);
    }
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


