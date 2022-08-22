#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <iostream> 
#include <string>
template<typename type>
class Dog: public Animal<type> 
{
    std::string color; 
    
public: 
    Dog(unsigned int weight, std::string breed, bool neutered, char gender, type inputFood, std::string color): Animal<type>(weight, breed, gender, neutered, inputFood)
    {
        this->color = color; 
    } 
    void sound()
    {
        std::cout << "Dog Barks!" << std::endl; 
    }
    void setColor(std::string x)
    {
        this->color = x; 
    }
    std::string getcolor()
    {
        return color;
    }
    void DisplayColor()
    {
        std::cout << "Color: " <<color << std::endl; 
    }
    void printInfo()
    {
        std::cout << "Your Dog's information is" << std::endl; 
    }
}; 
#endif
