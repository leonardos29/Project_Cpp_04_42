#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const &other);
        Cat& operator=(Cat const &other);
        virtual ~Cat(void);
        const Brain &getBrain(void) const;
        void setIdea(int index, std::string const &idea);
        virtual void makeSound(void) const;
    private:
          Brain *_brain;
};

#endif