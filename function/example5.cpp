#include <iostream>

void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping1, std::string topping2);

int main(){
    // overloaded function - function having same name is called overloaded and should pass differein parameters;

    bakepizza();
    bakepizza("Extra_cheese");
    bakepizza("Extra_cheese", "paperoni");

    return 0;
}

void bakepizza(){
    std::cout << "Here is your Pizza !\n" ;
}


void bakepizza(std::string topping1){
    std::cout << "Here is your " << topping1 << "Pizza !\n";
}

void bakepizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << "Pizza !\n";
}