#ifndef ANIMAL_H
#define ANIMAL_H
#include <string> 

template <typename type>
class Animal
{
private: 
    unsigned int weight; 
    std::string breed; 
    char gender; 
    bool neutered; 
    type inputFood; 
public: 
    Animal(unsigned int, std::string, char, bool, type); 
    void feed(type inputFood);
    void setWeight(unsigned int);
    void setBreed(std::string); 
    void setGender(char); 
    void setNeutered(bool); 
    unsigned int getWeight(); 
    std::string getBreed(); 
    bool getNeutered(); 
    type getInputFood();   
    char getGender(); 
    void DisplayAnimal(); 
};
#endif
