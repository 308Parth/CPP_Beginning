#include <iostream>

void happyBirthday(std::string name , int age){  // we have to declare the funtion before the main function
    
    std::cout << "Happy Birthday to "<< name << '\n';
    std::cout << "You are " << age << "years old ! \n";
}

int main()
{
    // functions = a block of reusable code

    std::string name = "Parth";
    int age = 18;

    happyBirthday(name , age); //you can use it as many times you want
    happyBirthday(name , age);
    happyBirthday(name , age);

    return 0;
}