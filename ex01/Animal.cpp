#include "Animal.hpp"

Animal::Animal(void) : _type("Default Animal")
{
    std::cout << "Default constructor called for Animal Class" << std::endl;
}
Animal::Animal(std::string const &type) : _type(type)
{
     std::cout << "Constructor Animal Class called for " << _type << std::endl;
}
Animal::Animal(Animal const &other) : _type(other._type)
{
     std::cout << "Copy constructor Animal Class called for " << _type << std::endl;
}
Animal &Animal::operator=(Animal const &other)
{
     std::cout << "Animal Class Copy assignment operator called for " << _type << std::endl;
     if(this != &other)
        _type = other._type;
    return(*this);
}

Animal::~Animal(void)
{
    std::cout << "Destructor Animal Class called for " << _type << std::endl;
}
const std::string &Animal::getType(void) const
{
    return(_type);
}

void Animal::makeSound(void) const
{
    std::cout << "Default Sound" << std::endl;
}
