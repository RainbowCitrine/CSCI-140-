/*
Write an if/else statement that compares the variable age with 65, adds 1 to the variable seniorCitizens 
if age is greater than or equal to 65, and adds 1 to the variable nonSeniors otherwise.

*/

#include <iostream> 

int main()
{
    int seniorCitizens = 0, nonSeniors = 0, age; 
    
    std::cout << "Please enter your age: "; 
    std::cin >> age; 

    if(age >= 65)
    {
        seniorCitizens +=1; 
    }
    else
    {
        nonSeniors += 1; 
    }
    
    std::cout << "There are a total of " << seniorCitizens << " Senior Citizens and " << nonSeniors << " Non Seniors" << std::endl; 
}
