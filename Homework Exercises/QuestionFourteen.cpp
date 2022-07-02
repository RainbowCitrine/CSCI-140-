/*

Write the definition of a function named swapints 
that is passed two int variables. 
The function returns nothing but exchanges the values of the two variables. 
So, if j and k have (respectively) the values 15 and 23, and the invocation 
swapints(j,k) is made, then upon return, the values of j and k will be 
23 and 15 respectively.

*/

#include <iostream> 

void swapints(int &i, int &j)
{
    int temp; 
    temp = i; 
    i = j;
    j = temp;
}

int main()
{
    int a = 15, b = 23; 
    
    std::cout << "Before Swap: " << a << " " << b << std::endl; 
    swapints(a, b); 
    
    std::cout << "After Swap: " << a << " " << b;
}
