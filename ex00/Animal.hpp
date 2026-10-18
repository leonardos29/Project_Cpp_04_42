#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    public:
        Animal(void);
        Animal(std::string const &type);
        Animal(Animal const &other);
        Animal& operator=(Animal const &other);
        virtual ~Animal(void);
        const std::string &getType(void) const;
        virtual void makeSound(void) const;

    protected:
        std::string _type;
};

#endif