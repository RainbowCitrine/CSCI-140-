#include <iostream> 

int main()
{
    const int SIZE = 10; 
    int* ptr = new int[SIZE]; 
    int t; 
    int counter = 0; 

    for(int i = 0; i < SIZE; ++i) 
    {
        std::cin >> ptr[i]; 
    }
    for(int i = 0; i < SIZE/2; ++i)
    {
        counter += 5; 
        t = ptr[i]; 
        ptr[i] = ptr[SIZE - i -1]; 
        ptr[SIZE-i-1] = t; 
    }
    for(int i = 0; i < SIZE; ++i)
    {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "The time and space complexity is O(n^3) and total time is "<< counter;
}
