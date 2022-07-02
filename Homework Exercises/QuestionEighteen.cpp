/*

Please print an array Arr of 4 elements {2, 4, 6, 8} using range-based for loop


*/

#include <iostream> 


int main()
{
   const int SIZE = 4; 
   int arr[SIZE] = {2, 4, 6, 8}; 

   for(int i = 0; i < SIZE; ++i) std::cout << arr[i] << " "; 
}

