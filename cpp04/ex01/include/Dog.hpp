#ifndef DOG_H
# define DOG_H

# include "./Animal.hpp"
# include "./Brain.hpp"

class Dog : public Animal{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        ~Dog();

        void makeSound(void) const;
        Brain *getBrain(void) const;
};

#endif
