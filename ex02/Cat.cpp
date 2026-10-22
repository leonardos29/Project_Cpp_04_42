#include "Cat.hpp"

Cat::Cat(void)
: Animal("Cat"),
  _brain(new Brain())
{
    std::cout << "Default constructor called for Cat Class" << std::endl;
}

Cat::Cat(Cat const &other)
: Animal(other),
  _brain(new Brain(*other._brain))
{
     std::cout << "Copy constructor called for Cat Class" << std::endl;
}
Cat &Cat::operator=(Cat const &other)
{
     std::cout << "Copy assignment operator called for Cat Class" << std::endl;
     if(this != &other)
     {
        Animal::operator=(other);
        Brain *temp = new Brain(*other._brain);
        delete _brain;
        _brain = temp;
     }
    return(*this);
}

Cat::~Cat(void)
{
    std::cout << "Destructor called for Cat Class" << std::endl;
    delete _brain;
}
void Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

const Brain &Cat::getBrain(void) const
{
    return(*_brain);
}

void Cat::setIdea(int index, std::string const &idea)
{
    _brain->setIdea(index,idea);
}