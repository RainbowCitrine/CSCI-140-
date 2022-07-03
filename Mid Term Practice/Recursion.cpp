#include <iostream>

//Sum numbers between m-n 

int recursive_sum(int m, int n)
{
    if(m == n)
        return m; //Something that will break the recursion 
    return m + recursive_sum(m+1, n); //2 +(3 +(4)) or 2 + 7 = 9
}

int main()
{
    int m = 2, n = 4; //1

    int sum = 0; //1
    for(int i = m; i <=n; ++i) // 2(n +1)
    {
        sum += i; // 1
    }

    std::cout << "Sum = " << sum << std::endl; 
    std::cout << "This time and space complexity is: O(n^2)" << std::endl; 
    std::cout << "Recursive Sum = " <<recursive_sum(m,n) << std::endl; 
}
