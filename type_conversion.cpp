#include <iostream>

int main() {
    
    /* type conversion = conversion a value of on data type to another
                          Implicit = automatic 
                          Explicit = Procode value with new data type (int)
    */

   //double x = (int) 3.14;
   //std::cout << x;
//--------------------------------------------------------------------------------------------------------------------------------

   //char x = 100;
   //std::cout << x;

//--------------------------------------------------------------------------------------------------------------------------------
   
   int correct = 8;
   int question = 10;
   double score = correct/(double)question * 100;  // in p/q 'q' acts like the decimal so we have to give (double)

   std::cout << score << "%" ;
   

   return 0;
}