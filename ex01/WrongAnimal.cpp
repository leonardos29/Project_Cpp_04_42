#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default WrongAnimal")
{
    std::cout << "Default constructor called for WrongAnimal Class" << std::endl;
}
WrongAnimal::WrongAnimal(std::string const &type) : _type(type)
{
     std::cout << "Constructor WrongAnimal Class called for " << _type << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &other) : _type(other._type)
{
     std::cout << "Copy constructor WrongAnimal Class called for " << _type << std::endl;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
     std::cout << "WrongAnimal Class Copy assignment operator called for " << _type << std::endl;
     if(this != &other)
        _type = other._type;
    return(*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Destructor WrongAnimal Class called for " << _type << std::endl;
}
const std::string &WrongAnimal::getType(void) const
{
    return(_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong Animal Sound" << std::endl;
}
