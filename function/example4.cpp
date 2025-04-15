#include <iostream>

std::string string_concatinate(std::string string1, std::string string2);

int main(){

    std::string first_name = "Samarth";
    std::string last_name = "Patil";

    std::string full_name = string_concatinate(first_name, last_name);

    std::cout << "Hello ! " << full_name;

    return 0;
}

std::string string_concatinate(std::string string1, std::string string2){
    return string1 + ' ' + string2;
}