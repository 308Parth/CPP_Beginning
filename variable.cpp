#include <iostream>

int main() {
    // Integer
    int x;  //declaration
    x = 5;  //assignment
    int y = 6;
    int sum = x + y;
    
    // Integer(whole number)
    int age = 21; 
    int years = 2024; 
    int days = 7.5;

    //Double (NUmbers including decimal)
    double price = 10.09;
    double gpa = 2.5;
    double temprature = 25.3;

    // Single character
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forsale = false;

    // string (objects that represents a sequence of test )
    std::string name = " Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello" << name <<'\n';
    std::cout << "You are " << age << " years old" << '\n';
    


    return 0;
}