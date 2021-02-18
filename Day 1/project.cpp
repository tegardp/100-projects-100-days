#include <iostream>
#include <string>

int main() {
    std::string city;
    std::string pet;
    std::cout<<"which city did you grew up in?\n";
    std::cin>>city;
    std::cout<<"What is the name of your pet?\n";
    std::cin>>pet;
    std::cout<<"Your Brand Name Would be: "
             <<city<<" "<<pet<<"\n";
}