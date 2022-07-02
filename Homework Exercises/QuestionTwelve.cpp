/*

Write a for loop that prints in ascending order 
all the positive multiples 
of 5 that are less than 175, separated by spaces.

*/

#include <iostream> 

int main()
{
    for(int i = 5; i < 175; ++i) //LESS THAN not LESS THAN OR EQUAL TOO 
    {
        if(i % 5 == 0)
        std::cout << i << " "; 
    }
}
