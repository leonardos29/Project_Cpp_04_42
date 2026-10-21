#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const &other);
        Dog& operator=(Dog const &other);
        virtual ~Dog(void);
        Brain const &getBrain(void) const;
        void setIdea(int index, std::string const &idea);
        virtual void makeSound(void) const;
    private:
        Brain *_brain;
};

#endif