#ifndef DOG_H
# define DOG_H

# include "./AAnimal.hpp"
# include "./Brain.hpp"

class Dog : public AAnimal{
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
