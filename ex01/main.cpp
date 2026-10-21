#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const int size = 6;
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
        Cat c1, c2;
        c1.setIdea(0, "mouse");
        c2 = c1;                   

        b.setIdea(0, "ball");
        c2.setIdea(0, "fish");

        std::cout << "a:  " << a.getBrain().getIdea(0) << " (expect bone)" << std::endl;
        std::cout << "b:  " << b.getBrain().getIdea(0) << " (expect ball)" << std::endl;
        std::cout << "c1: " << c1.getBrain().getIdea(0) << " (expect mouse)" << std::endl;
        std::cout << "c2: " << c2.getBrain().getIdea(0) << " (expect fish)" << std::endl;
    }
    return 0;
}