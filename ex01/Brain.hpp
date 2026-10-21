#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:
        Brain(void);
        Brain(Brain const &other);
        Brain& operator=(Brain const &other);
        ~Brain(void);
        std::string getIdea(int index) const;
        void setIdea(int index, std::string const &idea);
    private:
        static const int _size = 100;
        void copyIdeas(Brain const &other);
        std::string _ideas[_size];
};

#endif