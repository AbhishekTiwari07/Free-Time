#include<iosteam>

int main(){

    // Variable Assignment
    int x;
    x = 5;  // This kind of assingment using '=' is called Copy Assignment


    // Initialization
    int a;          // no initializer
    int b = 5;      // initializer after equals sign
    int c( 6 );     // initializer in parenthesis
    int d { 7 };    // initializer in braces


    // Copy Initialization
    int width = 10;

    // Direct Initialization
    int length(5);

    // Brace Initialization
    int depth{};


    // Pros of Brace is that it doesnt allow narrow conversions
    // int x{4.5};


    //Incase variable is unused and you want to avoid warning use [[maybe_unused]]
    [[maybe_unused]] bool dance = true;

    return 0;
}