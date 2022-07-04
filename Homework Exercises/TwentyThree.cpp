/*
Ch.8
Rainfall Statistics
Write a program that lets the user enter the total rainfall for each of 12 months (starting with January) into an array of doubles. The program should calculate and display (in this order):

the total rainfall for the year,
the average monthly rainfall,
and the months with the highest and lowest amounts.
Months should be expressed as English names for months in the Gregorian calendar, i.e.: January, February, March, April, May, June, July, August, September, October, November, December.

Input Validation: Do not accept negative numbers for monthly rainfall figures. When a negative value is entered, the program outputs "invalid data (negative rainfall) -- retry" and attempts to reread the value.

*/


#include <iostream> 
#include <string> 

int main()
{
    const int SIZE = 12; 
    std::string x[SIZE] = {"January",  "February", "March", "April", "May", "June", "July", "August", "Spetember", "October", "November", "December"}; 
    double rainfall[SIZE];
    int minRain = 0, maxRain = 0, average = 0, total = 0;  

    for(int i = 0; i < SIZE; ++i)
    {
        std::cout << "Enter the rainfall for " << x[i] << ": "; 
        std::cin >> rainfall[i]; 

        while(rainfall[i] < 0)
        {
            std::cout << "You cannot have a negative value please retry: ";
            std::cin >> rainfall[i]; 
        }
    }

    for(int i = 0; i < SIZE; ++i)
    {
        if(rainfall[i] < rainfall[minRain])
            minRain = i; 
        
        if(rainfall[i] > rainfall[maxRain])
            maxRain = i; 

        total += rainfall[i]; 
    }
    average = total / SIZE; 

        std::cout << std::endl; 
        std::cout << "The total rainfall is: " << total << std::endl;
        std::cout << "The average monthly rainfall is " << average << std::endl; 
        std::cout << "The month with the minimum rainfall is " << x[minRain] << std::endl; 
        std::cout << "The month with the maximum rainfall is " << x[maxRain] << std::endl; 
    
}
