/*


In this lab assignment, please use C++ to build a program that let user repeatedly enter a number (escape with sentinel "-999"), and at the end, print out the amount of:
 - input value should be a double value.
 - integer numbers user has entered, and the total of them. (using isNumber(int) function)
 - prime numbers user has entered, and the total of them. (using isPrime(int) function)
 - real numbers user has entered, and the total of them. (using isNumber(float) function)

i.e.: users input:
3
5
9
2.6
1.8
-999

output:
User has entered:
1 integer, total: 9
2 prime numbers, total: 8
2 float values, total: 4.4


*/



#include <iostream> 
#include <vector>
#include <math.h>


float dec(double num)
{
  //Use the absolute function included in the math.h library 
    if(abs(num-int(num))>0) 
    {
        return 0; //Return true 
    }
    return 1; //Return false 
 
}
int prime(double num)
{
   
   
    int x = int(num); 
    for(int i = 2; i <= x/2; ++i) //Loop for prime num
    {
        if(x % i == 0)
        {
            return 1; //Return false if not prime
            break; 
        }
    }
    if(dec(num) == 0)
    {
        return 1; //Return false if it is a decimal
    }
   
    return 0; //Return true if it is prime 
   
    
}
int intNumber(double num)
{
    int flag = 0;
  //If the num is not a decimal or prime then it is an int
    if(dec(num) != 0 && prime(num) != 0) 
    {
        return 0; //Return true if an int 
    }
    return 1; //Return false if not an int 
}

int main()
{
    const double SENT = -999; 
    double value; 
    int size = 100; 
    int counter = 0; 
    std::vector<float> v; //Used vector to echo the sequence
    int counterPrime = 0, counterInt = 0, counterFloat = 0; 
    float sum1 = 0, sum2 = 0; 
    float sum = 0; 
    std::cout << "Please enter your sequence of numbers and enter -999 to stop" << std::endl; 
    do
    {
        std::cin >> value; 
        v.push_back(value); 
        if(prime(value) == 0)
        {
            counterPrime++; 
            sum1 += value; 
           
        }
        else if(dec(value) == 0)
        {
            counterFloat++;    
            sum += value;  
           
        }
        else if(intNumber(value) == 0)
        {
            counterInt++;
            sum2 += value; 
        }
    }while (value != SENT);
    counterPrime = counterPrime - 1; 
    sum1 += 999; 
    std::cout << "Your sequence is: ";
    v.pop_back(); 
    for(int i = 0; i < v.size(); ++i)
    {
        std::cout << v.at(i) << " "; //Syntax for sequence
    }
    std::cout << std::endl; 


    //Use if else statements to print the correct sentence for the users inputs 
    if(counterInt == 1)
    {
        std::cout << "You have " <<counterInt << " integer and the total is " << sum2 <<std::endl; 
    }
    else if(counterInt > 1)
    {
        std::cout << "You have " <<counterInt << " integers and the total is " << sum2 <<std::endl; 
    }
    
    if(counterPrime == 1)
    {
        std::cout << "You have " <<counterPrime << " prime number and the total is " << sum1 << std::endl;
    }
    else if(counterPrime > 1)
    {
        std::cout << "You have " <<counterPrime << " prime numbers and the total is " << sum1 << std::endl;
    }
    if(counterFloat == 1)
    {
        std::cout << "You have " <<counterFloat << " float number and the total is " << sum  << std::endl; 
    }
    else if(counterFloat > 1)
    {
        std::cout << "You have " <<counterFloat << " float numbers and the total is " << sum  << std::endl; 
    }


}
