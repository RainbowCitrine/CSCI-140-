/*

Ch.3
Write a program that asks for five test scores. 
The program should calculate the average test score and display it.
The number displayed should be formatted in fixed-point notation, with one decimal point of precision.

Here is one sample run: 
Enter five test scores: 84 75 90 88 96 
Average=86.6

*/

#include <iostream> 

int main()
{
    double arr[5]; 
    std::cout << "Please enter five test scores: "; 
    double sum, average; 
    for(int i = 0; i < 5; ++i)
    {
        std::cin >> arr[i]; 
        sum += arr[i]; 
    }
    average = sum / 5; 
    
    printf("The average is: %.1f", average); //This can be subbed from the set precision function to get the exact result
}
