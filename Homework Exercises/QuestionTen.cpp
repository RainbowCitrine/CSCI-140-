/*Please write an input validation loop that will only allow and stop asking 

if input is (>100) or (<10 and >0) 

*/

#include <iostream> 

int main()
{
    int credits; 
    std::cin >> credits; 
    std::cout << ((credits < 30)?"freshman": ((credits < 60 && credits > 29)?"sophomore": ((credits < 90 && credits > 59)?"junior": ((credits > 89)?"senior": "invalid"))));
}


