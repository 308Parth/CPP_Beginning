#include <iostream>

// cout << (insertion opreator)
// cin >> (extraction opratior)

int main()
{
    std::string name;
    int age;


    /*   
    std::cout << "What's your full name?:" ;
    //std::cin >> name ;
    std::getline(std::cin, name);   //we have to use 'getline' functuion because in 'cin' we cannot give space in input

    std::cout << "What's your age?:" ;
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    return 0;*/

    //When we take getline function down we dont get the proper output so we have to do some changes as following:
 
    std::cout << "What's your age?:" ;
    std::cin >> age;

    std::cout << "What's your full name?:" ;
    //std::cin >> name ;
    std::getline(std::cin >> std::ws, name);   

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    return 0;
}