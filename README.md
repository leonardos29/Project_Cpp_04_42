# C++ Module 04

> Subtype polymorphism, abstract classes and deep copy in C++98, built as part of the [42 School](https://42.fr) curriculum.

## About

This module introduces **subtype polymorphism** in C++98. Through an `Animal` / `Dog` / `Cat` hierarchy, it explores how virtual dispatch works, why base classes need virtual destructors, how to make classes that own dynamic memory safe to copy, and how to prevent a class from being instantiated.

All code follows the **Orthodox Canonical Form** and the 42 C++ rules: no STL containers or algorithms, no `using namespace`, no `friend`, and no C++11 features.

## Exercises

| Exercise | Topic | What it covers |
|----------|-------|----------------|
| `ex00` | Polymorphism | `Animal`, `Dog`, `Cat`, virtual `makeSound()`, virtual destructor, and a `WrongAnimal` / `WrongCat` pair showing what happens **without** `virtual` |
| `ex01` | Deep copy | `Brain` class (100 `std::string` ideas) owned by `Dog` and `Cat`, deep copy in the copy constructor and assignment operator, `delete` through `Animal*` |
| `ex02` | Abstract class | `Animal` made non-instantiable through a pure virtual function |

> `ex03` (Interface & recap) is optional and is not part of this repository.

## Key concepts

- **Static vs. dynamic type** and early vs. late binding
- **Virtual functions**, vtable and vptr
- **Virtual destructors** and correct destruction order through a base pointer
- **Overriding vs. hiding**, and why the `const` qualifier is part of the signature
- **Shallow vs. deep copy**, and safe self-assignment
- **Pure virtual functions** and abstract classes

## Build and run

Each exercise has its own `Makefile`.

```bash
cd ex00        # or ex01, ex02
make           # builds the executable
./polymorphism # run the tests (executable name may vary per exercise)
```

| Rule | Action |
|------|--------|
| `make` | Build the project |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and executable |
| `make re` | Rebuild from scratch |

Compiler flags: `c++ -Wall -Wextra -Werror -std=c++98`

## Memory check

```bash
valgrind --leak-check=full ./polymorphism
```

## Project structure

```
cpp04/
├── ex00/   Animal, Dog, Cat, WrongAnimal, WrongCat
├── ex01/   + Brain, deep copy
└── ex02/   Animal as an abstract class
```

## Tests

Besides the `main` provided in the subject, each exercise includes its own tests, such as:

- Virtual vs. non-virtual `makeSound()` (`Animal` vs. `WrongAnimal`)
- Stack objects, to observe construction
