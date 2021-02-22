#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
    std::cout<<"Welcome to Treasure Island,\n";
    std::cout<<"Your mission is to find the treasure\n";

    std::string choice1;
    std::cout<<"Where would you like to go? Type 'left' or 'right'\n";
    std::cin>>choice1;
    std::transform(choice1.begin(), choice1.end(), choice1.begin(), [](unsigned char c) -> unsigned char {return std::tolower(c);});

    if (choice1 == "left"){
        std::string choice2;
        std::cout<<"You find a river blocking your way. Do you want to 'swim' across it or 'wait' a little bit?\n";
        std::cin>>choice2;
        std::transform(choice2.begin(), choice2.end(), choice2.begin(), [](unsigned char c) -> unsigned char {return std::tolower(c);});
        if(choice2 == "wait"){
            std::string choice3;
            std::cout<<"As you were waiting, suddenly 3 doors popped out from the ground. Which door would you like to enter? 'Red' 'Blue' 'Yellow'\n";
            std::cin>>choice3;
            std::transform(choice3.begin(), choice3.end(), choice3.begin(), [](unsigned char c) -> unsigned char {return std::tolower(c);});
            if(choice3 == "red"){
                std::cout<<"You were burned by fire. Game Over\n";
            } else if (choice3 == "blue"){
                std::cout<<"Dangerous beast already waiting inside the door. Game Over\n";
            } else if (choice3 == "yellow"){
                std::cout<<"Congratulations. You find the treasure! You WIN!!\n";
            }else {
                std::cout<<"You died without knowing why you died. Game Over\n";
            }
        } else {
            std::cout<<"Attacked by trout. Game Over\n";
        }
    } else {
        std::cout<<"Fall into Hole. Game Over\n";
    }
}