#include <iostream>

int myNum = 3; //Global variable

void printNum();

int main()
{
    // Local variables = declared inside a function or block {}
    // Global variable = declared outside of all functions 

    int myNum = 1; //local variable
    printNum();
    std::cout << ::myNum << '\n'; //'::' for global variable

    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << ::myNum << '\n';
}