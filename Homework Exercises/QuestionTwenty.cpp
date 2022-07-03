/*

Please write a function printVector, with one parameter vector<int>, 
that will print elements in a vector to the console.

*/







#include <iostream> 
#include <vector> 

void printVector(std::vector<int> v)
{
    for(int i = 0; i < v.size(); ++i) std::cout << v.at(i) << " "; 
}

int main()
{
    std::vector<int> v = {1, 2, 3}; 
    printVector(v); 
    
}
