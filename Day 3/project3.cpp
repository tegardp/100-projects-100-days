#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

int main () {
    int countTrue = 0;
    int countLove = 0;
    int results;
    std::string name1;
    std::string name2;
    std::string concatName;

    std::cout<<"name1: ";
    std::getline(std::cin,name1);
    std::cout<<"name2: ";
    std::getline(std::cin,name2);
    std::transform(name1.begin(), name1.end(), name1.begin(), [](unsigned char c) -> unsigned char { return std::tolower(c); });
    std::transform(name2.begin(), name2.end(), name2.begin(), [](unsigned char c) -> unsigned char { return std::tolower(c); });
    concatName = name1+name2;
    
    for(int i=0; i < concatName.length(); i++) {
        if(concatName[i] == 't' || concatName[i] == 'r' || concatName[i] == 'u' || concatName[i] == 'e' && countTrue < 10 ) {
            countTrue++;
        }
        if(concatName[i] == 'l' || concatName[i] == 'o' || concatName[i] == 'v' || concatName[i] == 'e' && countTrue < 10 ) {
            countLove++;
        }
    }

    results = countTrue * 10 + countLove;

    if(results < 10 || results > 90) {
        std::cout<<"Your score is "<<results
            <<", you go together like coke and mentos.";
    } else if (results > 40 || results < 50){
        std::cout<<"Your score is "<<results
            <<", you are alright together.";
    } else {
        std::cout<<"Your score is"<<results;
    }
}