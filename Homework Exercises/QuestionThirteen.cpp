/*

Write the definition of a function printLarger, which has two int parameters 
and returns nothing. The function prints the larger value of the two parameters 
to standard output on a single line by itself. 
(For purposes of this exercise, the "larger" means "not the smaller".)

*/

#include <iostream>

void printLarger(int a, int b){((a > b) ? std::cout << a : std::cout << b);}

int main()
{
    int a = 0, b = 0;
    std::cout << "Enter two numbers: "; 
    std::cin >> a >> b;  
    std::cout << "The larger value is: "; 
    printLarger(a, b); 
}
