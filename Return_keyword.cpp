#include <iostream>

/*double square(double length);
double cube(double length);

int main(){

    // return = return a value back to the spot
    //          where you called the encompassing function

    double length =  6.0;
    double area = square(length); 
     double volume = cube(length);
    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";
    
    return 0;             
}

double square(double length){
    //double result = length * length;
    //return result;
     return length * length;
     }
double cube(double length){
     return length * length * length;}
*/

std::string concatStrings(std::string string1, std::string string2); 

int main()
{
   std::string firstName = "Parth";
   std::string lastName = "Padmawar";
   std::string fullName = concatStrings(firstName, lastName);
  
   std::cout << "Hello " << fullName;

   return 0;
}
std::string concatStrings(std::string string1, std::string  string2){
    return string1 + " " + string2;
}