/*

Apply the idea of default arguments, 
please write a function total, 
with 2 parameters num1 and num2, 
by default if user only call total() without passing arguments, 
it should cout "3+2 = 5"

*/

#include <iostream> 

void total(int num1 = 3, int num2 = 2){int sum = 0; sum = num1 + num2; std::cout << sum;}

int main()
{
    total(); 
}



