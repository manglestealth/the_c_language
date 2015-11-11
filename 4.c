//
//  4.c
//  
//
//  Created by Mangle on 15/10/25.
//
//

#include <stdio.h>

int main()
{
    float fahr,celsius;
    
    int lower,upper,step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    
    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0))+32.0;
        printf ("%3.0f %6.1f\n",fahr,celsius);
        celsius = celsius+step;
    }
}
