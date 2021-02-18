#include<iostream>
#include<iomanip>

int main() {
    float total_bill;
    int tip_percentage;
    int num_of_people;
    float calculate;


    std::cout<<"Total Bill: ";
    std::cin>>total_bill;
    std::cout<<"Tip Percentage (10, 12, 15): ";
    std::cin>>tip_percentage;
    std::cout<<"Number of People: ";
    std::cin>>num_of_people;

    calculate = (total_bill + total_bill * tip_percentage / 100) / num_of_people;

    std::cout<<std::fixed
             <<std::setprecision(2)
             <<calculate;
}