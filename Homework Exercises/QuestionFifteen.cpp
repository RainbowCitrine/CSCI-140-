/*

Please move function definition to below main() 
function, and write function prototype for it.

int total (int num1, int num2) { return num1+num2; }
int main()
{
   .....
}

*/

#include <iostream>

int total(int num1, int num2){return num1 + num2;}

int main()
{
    int num1 = 10, num2 = 20; 
     
    std::cout << "Total is: " << total(num1, num2);

}
