#include <iostream>

int main()
{
    //If statements = do something if a condition is True.
    //                if not , then don't do it.
    
    int age ;

    std::cout << "Enter your age : " ;
    std::cin >> age ;


    if(age >= 100){
        std::cout << "You are to old to enter this site!";
    }
    if(age >= 18){
        std::cout << "Welcome to the site!";
        }
    else if(age <= 0) {
        std::cout << "You are not born yet!";
    }
    else{
        std::cout << "You are not old enough to enter!";
    }
    

    return 0;
}