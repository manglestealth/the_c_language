#include <stdio.h>
float fahrToCelsius(float fahr);

int main()
{
    for (float i=0.0; i<=300.0; i+=20.0) {
        printf("c:%f\tf:%f\n",fahrToCelsius(i),i);
    }
    return 0;
}

float fahrToCelsius(float fahr)
{
    float celsius;
    return celsius = (fahr-32.0) * (5.0/9.0);
}