#include "calculator.h"

calculator::calculator()
{
    this->input1 = 1; 
    this->input2 = 1; 
}
calculator::calculator(int new1, int new2)
{
    this->input1 = new1;
    this->input2 = new2;
}
void calculator::setInputOne(int newin)
{
    this->input1 = newin; 
}
void calculator::setInputTwo(int newin1)
{
    this->input2 = newin1; 
}
int calculator::getInputOne()
{
    return input1; 
}
int calculator::getInputTwo()
{
    return input2; 
}
int calculator::addition()
{
    return input1 + input2; 
}
int calculator::subtraction()
{
    return input1 - input2; 
}
int calculator::multiplication()
{
    return input1 * input2; 
}
float calculator::division()
{
    return static_cast<float>(input1) / input2; 
}
