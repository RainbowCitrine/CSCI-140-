#include "Animal.h"
#include <string> 
#include <iostream> 
template <typename type>
Animal<type>::Animal(unsigned int newI, std::string newS, char newC, bool newB, type newType)
{
    this->weight = newI; 
    this->breed = newS;
    this->gender = newC; 
    this->neutered = newB; 
    this->inputFood = newType;
}
template <typename type>
void Animal<type>::feed(type food)
{
    this->inputFood = food; 
    std::cout << "The " << breed << " just ate a " << inputFood << std::endl; 
}
template <typename type>
void Animal<type>::setWeight(unsigned int newW)
{
    this->weight = newW; 
}
template <typename type>
void Animal<type>::setBreed(std::string rand)
{
    this->breed = rand; 
}
template <typename type>
void Animal<type>::setGender(char rand)
{
    this->gender = rand; 
}
template <typename type>
void Animal<type>::setNeutered(bool rand)
{
    this->neutered = rand; 
}
template <typename type>
std::string Animal<type>::getBreed()
{
    return breed; 
}
template <typename type>
bool Animal<type>::getNeutered()
{
    return neutered; 
}
template <typename type>
type Animal<type>::getInputFood()
{
    return inputFood; 
}
template <typename type>
unsigned int Animal<type>::getWeight()
{
    return weight; 
}
template <typename type>
char Animal<type>::getGender()
{
    return gender; 
}
template <typename type>
void Animal<type>::DisplayAnimal()
{
    std::cout<< "Breed: " << breed << std::endl; 
    std::cout << "Weight: " << weight << std::endl; 
    if(gender == 'F' || gender == 'f')
    std::cout << "Gender: Female" << std::endl; 
    else 
    std::cout << "Gender: Male" << std::endl; 

    if(neutered == 1)
    std::cout << "Neutered: Yes" << std::endl;
    else 
    std::cout << "Neutered: No" << std::endl; 

    
    std::cout << "Prefers to eat " << inputFood << std::endl; 
}
