/*
The Earth’s ocean levels have risen an average of 1.8 millimeters per year over the past century. Write a program that computes and displays the number of centimeters and number of inches the oceans rose during this time. One millimeter is equivalent to 0.1 centimeters. One centimeter is equivalent to 0.3937 inches. The output of your program should be of this form:
    The ocean rose X centimeters or Y inches in the last 100 years. 
where X and Y are the two numbers your program calculated.
*/

/*

    Logical Explanation Hint: 
    To write this program you need to use the hint professor gives you inside of the cout statement.
    We know that a century equals 100 so multiply it by 1.8 to get your total milimeters. Next 
    simply convert your milimeters to centimeters by mulitplying your milimeters by * 1.8 
    
    The rest is all yours good luck!
*/

#include <iostream> 
#include <iomanip> 

int main()
{
    double century = 100; 
    double milimeters = 1.8 * century; 
    double centimeters = milimeters *0.1;
    double inches = centimeters * 0.3937; 
    
    std::cout << "The ocean rose " << std::setprecision(0) << std::fixed <<centimeters << " centimeters or " << inches << " inches in the last 100 years" << std::endl; 
    return 0; 
}
