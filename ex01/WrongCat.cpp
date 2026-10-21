#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "Default constructor called for WrongCat Class" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{
     std::cout << "Copy constructor called for WrongCat Class" << std::endl;
}
WrongCat &WrongCat::operator=(WrongCat const &other)
{
     std::cout << "Copy assignment operator called for WrongCat Class" << std::endl;
     if(this != &other)
        WrongAnimal::operator=(other);
    return(*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "Destructor called for WrongCat Class" << std::endl;
}
void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Sound!" << std::endl;
}
