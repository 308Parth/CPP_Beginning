#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    /*typedef = reserved keyword used to creat an additaionl name
                (alias) for another data type.
                New identifier for an existing type 
                Helps with redability and reduces typos
                use when there is a clear benifit
                Replace with 'using' (work better w/ templates)
    */
    
         
         text_t firstName = "Parth";
         number_t age = 18;

         std::cout << firstName << '\n';
         std::cout << age << '\n';


         
    return 0;
}