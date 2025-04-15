#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter your name : ";
    std::getline(std::cin, name);

    if(name.length() > 12){
        std::cout << "Plese enter below 12 characterts\n" ;
    }
    else{
        std::cout << "Well Come " << name << std::endl;
    }

    if(name.empty()){
        std::cout << "Please enter your name\n";
    }
    else{
        std::cout << "Hello !"<< name << std::endl;
    }

    name.clear();

    std::cout << "Hello !" << name << std::endl;

    name.append("@gmail.com");
    std::cout << "Your Username is : " << name << std::endl;

    name.insert(0, "@");
    std::cout<< name.at(0) << std::endl;

    std::cout << name.find(' ');

    name.erase(0, 3);

    return 0;
}