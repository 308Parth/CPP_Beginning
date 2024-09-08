#include <iostream>

int main (){
    
    /*  Ternary oprator ?: = replacement to an if/else statement
        Condition ? expression1 : expression2
    */

    //int grade = 50;
    //grade >= 60 ? std::cout << "You Pass!" : std::cout << "You fail!";

    //int number = 9;
    //number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN" ;

    bool hungry = true;

    //hungry ? std::cout << "You are hungry" : std::cout << "Your are full";
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}