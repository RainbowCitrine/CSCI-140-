/*

Online Book Merchants offers premium customers 1 free book with every purchase of 
5 or more books and offers 2 free books with every purchase of 8 or more books. 
It offers regular customers 1 free book with every purchase of 7 or more books, 
and offers 2 free books with every purchase of 12 or more books.

Write a statement that assigns freeBooks the appropriate value based on the 
values of the bool variable isPremiumCustomer and the int variable nbooksPurchased.

*/

#include <iostream> 

int main()
{
    bool isPremiumCustomer; 
    std::string prompt; 
    
    std::cout << "Are you a premium customer (y/n)?: ";
    std::cin >> prompt; 
    
    if(prompt == "y")
    isPremiumCustomer = true; 
    else 
    isPremiumCustomer = false; 
    
    int nbooksPurchased = 0;
    int freeBooks = 0; 
    
    std::cout << "Please enter the amount of books you have purchased: "; 
    std::cin >> nbooksPurchased; 
    
    if(nbooksPurchased >= 5 && nbooksPurchased < 8 && isPremiumCustomer)
        freeBooks +=1; 
    
    else if(nbooksPurchased >= 8 && isPremiumCustomer)
        freeBooks += 2; 
    
    else if(nbooksPurchased >= 7 && nbooksPurchased < 12 && isPremiumCustomer == false)
        freeBooks +=1; 
    
    else if(nbooksPurchased >= 12 && isPremiumCustomer == false)
        freeBooks += 2; 
        

    std::cout << "The amount of free books you have are " << freeBooks << std::endl;
    
}
