#include "Class.h"

Calculator::Calculator()

{

input1=1;

input2=1;

}

Calculator::Calculator(int x,int y)

{

input1=x;

input2=y;

}

int Calculator::addition()

{

return input2+input1;

}

int Calculator::subtraction()

{

return input1-input2;

}

int Calculator::multiplication()

{

return input2*input1;

}

float Calculator::division()

{

return (float)input1/(float)input2;

}

int Calculator::getinput1()

{

return input1;

}

int Calculator::getinput2()

{

return input2;

}

void Calculator::setinput1(int input1)

{

this->input1=input1;

}

void Calculator::setinput2(int input2)

{

this->input2=input2;

}
