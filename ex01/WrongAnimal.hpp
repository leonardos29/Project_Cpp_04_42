#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(std::string const &type);
        WrongAnimal(WrongAnimal const &other);
        WrongAnimal& operator=(WrongAnimal const &other);
        virtual ~WrongAnimal(void);
        const std::string &getType(void) const;
        void makeSound(void) const;

    protected:
        std::string _type;
};

#endif