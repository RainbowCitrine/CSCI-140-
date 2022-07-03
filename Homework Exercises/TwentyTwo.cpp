/*

Ch.8

Given parallel arrays 
students {John, Brad, Angel, Ben, Simon}
GPA         {2.5,     2.8,    3.2,    2.4,     3.8 }

Please use one for loop to display each student and their GPA. 

*/

#include <iostream> 
#include <string> 

int main()
{
    const int SIZE = 5; 
    std::string students[SIZE] = {"John", "Brad", "Angel", "Ben", "Simo"};
    double GPA[SIZE] =  {2.5,     2.8,    3.2,    2.4,     3.8 };
    
    for(int i = 0; i < SIZE; ++i)
    {
        std::cout << students[i] << " " << GPA[i] << std::endl; 
    }
}
