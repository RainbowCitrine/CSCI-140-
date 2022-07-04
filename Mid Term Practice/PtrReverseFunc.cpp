#include <iostream> 

void swap(int* a, int*b)
{
    int t = *a; 
    *a = *b; 
    *b = t; 
}

void reverse(int arr[], const int SIZE)
{
    int* ptr = arr; //Point to the beginning of the array 
    int* ptr2 = arr + SIZE -1; //Point to the end of the array 

    while(ptr < ptr2)
    {
        swap(ptr, ptr2); 
        ptr++; 
        ptr2--; 
    }
}

void print(int* arr, const int SIZE)
{

    for(int i = 0; i < SIZE; ++i)
        std::cout << arr[i] << " "; 
}

int main()
{
    const int SIZE = 10; 
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 

    std::cout << "Before reversed array: "; 
    print(arr, SIZE); 

    std::cout << std::endl; 
    std::cout << "Reversed array: "; 
    reverse(arr, SIZE); 
    print(arr, SIZE); 

    
}
