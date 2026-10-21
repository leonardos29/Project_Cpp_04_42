#include "Dog.hpp"

Dog::Dog(void)
: Animal("Dog"),
  _brain(new Brain())
{
    std::cout << "Default constructor called for Dog Class" << std::endl;
}

Dog::Dog(Dog const &other)
: Animal(other),
  _brain(new Brain(*other._brain))
{
     std::cout << "Copy constructor called for Dog Class" << std::endl;
}
Dog &Dog::operator=(Dog const &other)
{
     std::cout << "Copy assignment operator called for Dog Class" << std::endl;
     if(this != &other)
     {
        Animal::operator=(other);
        Brain *temp = new Brain(*other._brain);
        delete _brain;
        _brain = temp;
     }
    return(*this);
}

Dog::~Dog(void)
{
    std::cout << "Destructor called for Dog Class" << std::endl;
    delete _brain;
}
void Dog::makeSound(void) const
{
    std::cout << "woof! woof!" << std::endl;
}

const Brain &Dog::getBrain(void) const
{
    return(*_brain);
}

void Dog::setIdea(int index, std::string const &idea)
{
    _brain->setIdea(index,idea);
}