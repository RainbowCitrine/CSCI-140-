//Please write a piece of code to generate a random value between (10,  20) range 

//Logic Hint: Just use the c library to perform this program as it requires sheer basics of C++ 

#include <iostream> 
#include <ctime> 


int main()
{
    srand(time(NULL)); 
    int randomNumber = rand() % (21 - 10) + 10; 
    std::cout << randomNumber; 
}
