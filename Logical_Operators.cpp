#include <iostream>

int main(){

    /* && = check if two conditions are true 
       || = check if at least one of two conditions is true 
       !  = reverses the logical state of its operand
    */
   
   int temp;

   //std::cout << "Enter the temprature : ";
   //std::cin >> temp ;

   /*
   if(temp > 0 && temp < 30){     //"&&"
    std::cout << "The temprature is good!";
   }
   else {
    std::cout << "The temprature is bad!";
   }
   */

   /*
   if(temp <= 0 || temp >= 30){     //"||"
    std::cout << "The temprature is bad!";
   }
   else {
    std::cout << "The temprature is good!";
   }
   */
  bool sunny = true ;

  if(!sunny){         //"!""      //as we hsve used bool we dont have to give condition o sunny == true again
    std::cout << "It is sunny outside";
  }
  else{
    std::cout << "It is cloudy outside";
  }

   return 0;
}