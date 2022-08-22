#include <iostream>
#include<fstream>
#include <bits/stdc++.h>

#include"Class.h"
using namespace std;

class BinaryCalculator : public Calculator
{
public:

BinaryCalculator(int x,int y):Calculator(x,y)
{

}
int addition () 
{ 
return binaryOf(Calculator::addition()); 

}
int subtraction () 
{ 
return binaryOf(Calculator::subtraction()); 

}
int multiplication () 
{ 
return binaryOf(Calculator::multiplication()); 

}
int division()
{
return binaryOf(Calculator::division()); 
}
void swapArrayReverse(int a[], int t)
{
int i, j, tempValue;
j = t-1;
for(i=0; i<j; i++, j--)
{
tempValue = a[i];
a[i] = a[j];
a[j] = tempValue;
}
}
int conversion(int array[], int len) 
{

swapArrayReverse(array,len);

int output = 0;
int power = 1;

for (int i = 0; i < len; i++)
{
output += array[(len - 1) - i] * power;
power = power*10;
}

return output;
}

int binaryOf( int val) 
{

int array[32];



int number_of_digits = 0;
while (val > 0)
{
array[number_of_digits] = val % 2;
val = val / 2;
number_of_digits++;
}

int result = conversion(array,number_of_digits);


return result;
}
};

int main()
{
std::ifstream inFile("calculators.csv");
std::string line;
  int num1, num2, type; 
if (inFile.is_open())
{
while(inFile >> line)
{
num1 = stoi(line);
  inFile >> line; 
num2 = stoi(line); 
  inFile >> line; 
type = stoi(line); 
  

if(type==10)
{
std::cout << "Decimal calculator" << std::endl;
Calculator obj(num1,num2);
std::cout<<"Addition: "<<obj.addition()<<std::endl;

std::cout<<"Subtraction: "<<obj.subtraction()<<std::endl;

std::cout<<"Multiplication: "<<obj.multiplication()<<std::endl;

std::cout<<"Division: "<<obj.division()<<std::endl;

  std::cout << std::endl;
}
else if(type==2)
{
std::cout << "Binary calculator" << std::endl;
BinaryCalculator obj(num1,num2);
std::cout<<"Addition: "<<obj.addition()<<std::endl;

std::cout<<"Subtraction: "<<obj.subtraction()<<std::endl;

std::cout<<"Multiplication: "<<obj.multiplication()<<std::endl;

std::cout<<"Division: "<<obj.division()<<std::endl;

  std::cout << std::endl;
 
}
   
}
}
return 0;
}

