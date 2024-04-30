#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double accrued_amount;
    double principal_amount;
    double annual_rate;
    double compounding_periods;
    double time_in_years;

    std::cout << "Hello, please enter the principal amount" << std::endl;
    std::cin >> principal_amount;


    std::cout << "Please enter the annual rate" <<std::endl;
    std::cin >> annual_rate;
    annual_rate /= 100;

    std::cout << "Please enter the amount of compounding periods" <<std::endl;
    std::cin >> compounding_periods;


    std::cout << "Please enter the time in years (ex. half a year is 0.5)" <<std::endl;
    std::cin >> time_in_years;


    accrued_amount = principal_amount * pow((1 + (annual_rate/compounding_periods)), compounding_periods * time_in_years);

    std::cout << std::fixed << std::setprecision(2) << accrued_amount;



}