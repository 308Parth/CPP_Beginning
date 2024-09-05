#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main (){

    /*Namespace = provides a solution fofr preventing name conflicts
                  in a large projects.Each entity needs a unique name. 
                  A namespace allows for identically named entities
                  as long as the newspaces are diffrent.
    */
    using namespace second;// while using this command we dont need to use the (int x = 0) we can directy add the name space and use it no need to add prefix in std::cout
    int x = 0;
    
    std::cout << x <<'\n';
    std::cout << first::x <<'\n';
    std::cout << second::x <<'\n';
   

   return 0;
}

// there is a line line named "using namespace std " when we use it we dont need to use the prefix std in std::cout we can directy use cout. we can also use "use std::cout "