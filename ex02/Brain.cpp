#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Default constructor called for Brain Class" << std::endl;
}
Brain::Brain(Brain const &other)
{
     std::cout << "Copy constructor called for Brain Class" << std::endl;
     copyIdeas(other);
}
Brain &Brain::operator=(Brain const &other)
{
     std::cout << "Copy assignment operator called for Brain Class" << std::endl;
     if(this != &other)
        copyIdeas(other);
     return(*this);
}

Brain::~Brain(void)
{
    std::cout << "Destructor called for Brain Class" << std::endl;
}
std::string Brain::getIdea(int index) const
{
    if(index < 0 || index >= _size)
    {
        std::cout << "invalid index" << std::endl;
        return "";
    }
    return(_ideas[index]);
}

void Brain::setIdea(int index, std::string const &idea)
{
    if(index < 0 || index >= _size)
    {
        std::cout << "invalid index" << std::endl;
        return;
    }
    _ideas[index] = idea;
}

void Brain::copyIdeas(Brain const &other)
{
    for(int i = 0; i < _size; i++)
        _ideas[i] = other._ideas[i];
}
