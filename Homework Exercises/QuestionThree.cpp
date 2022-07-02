/*
Assume that price is an integer variable whose value is the price (in US currency) in cents of an item. 
Write a statement that prints the value of price in the form "X dollars and Y cents". 
So, if the value of price was 4321, your code would print "43 dollars and 21 cents". 
If the value was 501 it would print "5 dollars and 1 cents". If the value was 99 your code would print 
"0 dollars and 99 cents".

*/

#include <iostream> 

int main()
{
    int exampleOne = 4321; 
    int exampleTwo = 501; 
    int exampleThree = 99; 
    
    int dollarsOne = exampleOne / 100; 
    int centsOne = exampleOne % 100; 
    
    int dollarsTwo = exampleTwo / 100; 
    int centsTwo = exampleTwo % 100; 
    
    int dollarsThree = exampleThree / 100; 
    int centsThree = exampleThree % 100; 
    
    std::cout << dollarsOne << " dollars and " << centsOne << " cents" << std::endl; 
    std::cout << dollarsTwo << " dollars and " << centsTwo << " cents" << std::endl; 
    std::cout << dollarsThree << " dollars and " << centsThree << " cents" << std::endl; 
   
    
}
