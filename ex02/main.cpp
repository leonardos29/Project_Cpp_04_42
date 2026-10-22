#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    // const Animal* meta = new Animal();   // must NOT compile (abstract class)

    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < size; i++)
        animals[i]->makeSound();
    for (int i = 0; i < size; i++)
        delete animals[i];

    std::cout << "\n--- deep copy ---" << std::endl;
    {
        Dog a;
        a.setIdea(0, "bone");
        Dog b(a);
        b.setIdea(0, "ball");

        std::cout << "a: " << a.getBrain().getIdea(0) << " (expect bone)" << std::endl;
        std::cout << "b: " << b.getBrain().getIdea(0) << " (expect ball)" << std::endl;
    }
    return 0;
}
