#include <iostream>
//if x has multiple values and we need to use x in by its multi value
//we can define name space which will allow the x to store more than one value;

namespace first {
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){


    // we can define multi value of x;
    std::cout << first::x << '\n';

    // we can define using this syntax too. which will avoid pre defining of namespace with ::
   
    using namespace second;
    
    std::cout << x << '\n';

    return 0;
}