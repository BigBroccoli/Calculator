// Cameron Schwartzberg
// 9-26-2023
// Basic Calculator
// Lab 5

#include <stdio.h>

double addition(double x, double y);
double subtraction(double x, double y);
double multiplication(double x, double y);
double division(double x, double y);

int main(){
    double userInput1 = 0, userInput2 = 0;
    int operation = 0;

    // Asks the user to input two numbers
    printf("Input the two numbers you wish to do math with:\n");
    scanf("%lf", &userInput1);
    scanf("%lf", &userInput2);

    // Asks the user for an input for the operation wanting to be done
    printf("Choose the operation you want: 1: Addition, 2: Subtraction, 3: Multiplication, 4: Division\n");
    scanf("%d", &operation);

    // If user doesn't input a valid operation number it will continue to ask for an operation till they input a valid one
    while(operation < 1 || operation > 4){
        printf("Choose the operation you want: 1: Addition, 2: Subtraction, 3: Multiplication, 4: Division\n");
        scanf("%d", &operation);
    }
    // Will go into the operation selected, print out a litle line, and then go into the function and do the calculation
    switch(operation){
        case(1):
            printf("Adding your two numbers: %lf + %lf = %lf", userInput1, userInput2, addition(userInput1, userInput2));
            break;
        case(2):
            printf("Subtracting your two numbers: %lf - %lf = %lf", userInput1, userInput2, subtraction(userInput1, userInput2));
            break;
        case(3):
            printf("Multiplicating your two numbers: %lf * %lf = %lf", userInput1, userInput2, multiplication(userInput1, userInput2));
            break;
        case(4):
            printf("Dividing your two numbers: %lf / %lf = %lf", userInput1, userInput2, division(userInput1, userInput2));
            break;
        default:
            break;
    }
}

// Functions that will do the basic arithmetic that the user wishes to do
double addition(double x, double y){
    return x + y;
}

double subtraction(double x, double y){
    return x - y;
}

double multiplication(double x, double y){
    return x * y;
}

double division(double x, double y){
    if (y == 0){
        printf("Cannot divide by zero.");
    }
    return x / y;
}