#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "----- Animal: makeSound virtual -----" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }

    std::cout << "----- WrongAnimal: makeSound NAO virtual -----" << std::endl;
    {
        const WrongAnimal* wrongAnimal = new WrongAnimal();
        const WrongAnimal* wrongCatBase = new WrongCat();
        WrongCat* wrongCatReal = new WrongCat();

        std::cout << wrongCatBase->getType() << " " << std::endl;
        wrongAnimal->makeSound();
        wrongCatBase->makeSound();   // tipo estatico WrongAnimal
        wrongCatReal->makeSound();   // tipo estatico WrongCat

        delete wrongAnimal;
        delete wrongCatBase;
        delete wrongCatReal;
    }
    return 0;
}