/*

Declare an array named Arr, of 10 elements of type int and initialize the elements 
(starting with the first) to the values 10, 20, ..., 100, respectively.

*/

#include <iostream> 


int main()
{
   const int SIZE = 10; 
   int arr[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; 

   for(int i = 0; i < SIZE; ++i) std::cout << arr[i] << " "; 
}

