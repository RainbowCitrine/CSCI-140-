/*
Ch.4

Clunker Motors Inc. is recalling all vehicles from model years 1995-1998 and 2004-2006. 
Given a variable modelYear write a statement that prints the message 
"RECALL" to standard output if the value of modelYear falls within those two ranges.

*/

#include <iostream> 

int main()
{
    int model; 
    std::cout << "Please enter the model of your car: "; 
    std::cin >> model; 
    
    if(model >= 1995 && model <= 1998 || model >= 2004 && model <= 2006)
    std::cout << "RECALL"; 
    else 
    std::cout << "DONT RECALL"; 
}
