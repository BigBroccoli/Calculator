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

    printf("Input the two numbers you wish to do math with:\n");
    scanf("%d", userInput1);
    scanf("%d", userInput2);

    printf("Choose the operation you want: 1: Addition, 2: Subtraction, 3: Multiplication, 4: Division\n");
    scanf("%d", operation);

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
    return x / y;
}