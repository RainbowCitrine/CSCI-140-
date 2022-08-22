#ifndef CALCULATOR_H
#define CALCULATOR_H

class calculator
{
private: 
    int input1; 
    int input2; 

public: 
    calculator(); 
    calculator(int, int); 
    void setInputOne(int);
    void setInputTwo(int); 
    int getInputOne();
    int getInputTwo(); 
    int addition(); 
    int subtraction();
    int multiplication(); 
    float division();  
};

#endif 
