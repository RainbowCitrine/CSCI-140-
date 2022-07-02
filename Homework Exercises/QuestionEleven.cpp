/* 
HTTP is the protocol that governs communications 
between web servers and web clients (i.e. browsers). Part 
of the protocol includes a status code returned by the server to tell the browser 
the status of its most recent page request. Some of the codes and their meanings 
are listed below:

200, OK (fulfilled)
403, forbidden
404, not found
500, server error
Given an int variable status, write a switch statement that prints out the appropriate 
label from the above list based on status.
*/


#include <iostream> 

int main()
{
    int status; 
    std::cout << "Please enter the status of the HTTP protocol: "; 
    std::cin >> status; 

    switch (status)
    {
    case 200: std::cout << "OK (fulfilled)"; break; 
    case 403: std::cout << "fordidden"; break; 
    case 404: std::cout << "not found"; break; 
    case 500: std::cout << "server error"; break; 
    default: std::cout << "not an HTTP protocol"; break;  

    }
}
