/*
One acre of land is equivalent to 43,560 square feet. 
Write a program that calculates the number of acres in a tract of land with 389,767 square feet.
*/ 

/*
    Logical Hint: This program requires basic division knowledge all the programmer has to do is 
    divide the original square feet given by the tract arc to get the correct answer. In this case 
    the programmer can also use printf if their professor wants the EXACT rounded data
*/

#include <iostream> 


int main()
{
    double oneArc = 43560; 
    double tractArc = 389767;
    double totalArc = tractArc / oneArc; 
    
   printf("The total amount of square feet in the land is: %.3f", totalArc); 
}
