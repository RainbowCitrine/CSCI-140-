// Please write a simple code to delete 1/3 elements of a vector. 

#include <iostream> 
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3};
    v.erase(v.begin()); 
    for(int i = 0; i < v.size(); ++i) std::cout << v.at(i) << " ";
}
