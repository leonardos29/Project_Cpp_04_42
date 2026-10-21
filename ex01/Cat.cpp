#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Default constructor called for Cat Class" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
     std::cout << "Copy constructor called for Cat Class" << std::endl;
}
Cat &Cat::operator=(Cat const &other)
{
     std::cout << "Copy assignment operator called for Cat Class" << std::endl;
     if(this != &other)
        Animal::operator=(other);
    return(*this);
}

Cat::~Cat(void)
{
    std::cout << "Destructor called for Cat Class" << std::endl;
}
void Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}
