/*

Apply the idea of default arguments, 
please write a function total, 
with 2 parameters num1 and num2, 
by default if user only call total() without passing arguments, 
it should cout "3+2 = 5"

*/

#include <iostream> 

int total(int num1 = 3, int num2 =2){return num1 + num2;}

int main()
{
    std::cout << total(); 
}

