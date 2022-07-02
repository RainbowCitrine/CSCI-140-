/*
Assume that isIsosceles is a bool variable, and that the variables isoCount, 
triangleCount, and polygonCount have all been declared and initialized. 
Write a statement that adds 1 to each of these count variables 
(isoCount, triangleCount, and polygonCount) if isIsosceles is true.
*/ 

#include <iostream> 

int main()
{
    bool isIsosceles = true; //Just an assumption we are not writing a full program just the STATEMENTS as stated in the question
    double isoCount, triangleCount, polygonCount; 
    
    if(isIsosceles == true)
    {
        isoCount += 1; 
        triangleCount += 1; 
        polygonCount += 1; 
    }
    
}
