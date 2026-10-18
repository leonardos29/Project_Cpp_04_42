#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Default constructor called for Dog Class" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other)
{
     std::cout << "Copy constructor called for Dog Class" << std::endl;
}
Dog &Dog::operator=(Dog const &other)
{
     std::cout << "Copy assignment operator called for Dog Class" << std::endl;
     if(this != &other)
        Animal::operator=(other);
    return(*this);
}

Dog::~Dog(void)
{
    std::cout << "Destructor called for Dog Class" << std::endl;
}
void Dog::makeSound(void) const
{
    std::cout << "woof! woof!" << std::endl;
}
