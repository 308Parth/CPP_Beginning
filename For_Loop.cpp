#include <iostream>

int main()
{
    /* do while loop = do some block of code first,
                        THEN repeat again if conditions is true */

     /*int number;

        std::cout << "Enter a possitive #: ";
        std::cin >> number ;

     while(number < 0){
        std::cout << "Enter a possitive #:";
        std::cin >> number;
     }

        std::cout << "This # is: " << number;*/

    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while(number < 0);
    
    std::cout << "This # is: " << number ;
     
    return 0;
}