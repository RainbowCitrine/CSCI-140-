#include <iostream> 
#include "calculator.h"


int main()
{
    
    std::cout << "Please enter two numbers: "; 
    int one = 0, two = 0; 
    std::cin >> one >> two; 

    calculator test(one, two); 

    std::cout << "The sum is: " << test.addition() << std::endl;
    std::cout << "The difference is: " << test.subtraction() << std::endl; 
    std::cout << "The product is: " << test.multiplication() << std::endl; 
    std::cout << "The quotient is: " << test.division() << std::endl;  
}
