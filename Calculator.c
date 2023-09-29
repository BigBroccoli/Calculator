// Cameron Schwartzberg
// 9-26-2023
// Basic Calculator
// Lab 5

#include <stdio.h>

double addition(double x, double y);

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
            printf("Adding your two numbers together: %lf + %lf = %lf", userInput1, userInput2, addition(userInput1, userInput2));
            break;
        case(2):
            printf("Subtraction TBA");
            break;
        case(3):
            printf("Multiplication TBA");
            break;
        case(4):
            printf("Division TBA");
            break;
    }
}

double addition(double x, double y){
    return x + y;
}