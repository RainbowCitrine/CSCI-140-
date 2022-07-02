/*

Declare a vector of int, with 5 elements {5.10.15.20.25}, then add element 30 to the end of the vector, using C++. 

*/




#include <iostream> 
#include <vector> 

int main()
{
    std::vector<int> vect = {5, 10, 15, 20, 25}; 
    vect.push_back(30); 
    for(int i = 0; i < vect.size(); ++i) std::cout << vect.at(i) << " "; 
}
