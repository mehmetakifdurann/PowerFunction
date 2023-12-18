// Created by Mehmet Akif Duran
//
// This program takes 2 inputs as base and power and calculates it. I know there is a function as pow() in math.h library but this is for practicing functions.
//

#include <stdio.h>

    //Function decleration and definition.

float powerFunc(float base, float power){
    
        // Variable decleration(s).
    
    float result = 1.0;
    
        // Executable Statements.
        
    for(power;power>0;power--){
        
        result = result * base;
        
    }
    
    return result;
}

int main(void){ // Beginning of the main
    
        // Variable Decleration(s).
    float base, power;
    
    
        // Executable Statement(s).
    
        // Explaning the user about the program.
    printf("Welcome, this program takes base and power and calculates the result.\n");
    
        // Taking inputs from the user.
    printf("Please enter the base and the power. \n");
    scanf("%f%f", &base,&power);
    
    
    printf("----------------------------\n");
    
        // Calling the function.
    printf("The result is : %.2f\n", powerFunc(base, power));
    
    
    
    
    return 0;
    
} // End of the main

