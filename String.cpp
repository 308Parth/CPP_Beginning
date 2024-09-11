#include <iostream>

int main()
{
    std::string name;

    //std::cout << "Enter your name: ";
    //std::getline(std::cin, name);

    /*if(name.length() > 12){
        std::cout << "Your name cant be over 12 caracter";
    }
    else{
        std::cout << "Welcome"<< name;
    }*/

   /*if(name.empty())
   {
    std::cout << "Pleas! enter your name" ;
   }

   else{
    std::cout << "Hello " << name;
   }*/

  /*name.clear();
  std::cout << "Hello" << name;*/

  /*name.append("@gmail.com");   //append method
  std::cout << "Your username is now " << name;
  std::cin >> name;*/

  std::cout << "Enter your name: ";
  std::getline(std::cin,name);
  //std::cout << name.at(1);
  //name.insert(0,"@");
  name.erase(0,3);

  std::cout << name.find(' ');

    return 0;
}