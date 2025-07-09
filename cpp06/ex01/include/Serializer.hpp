#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <cstdlib>
# include <string>
# include <iostream>
# include "data.hpp"

typedef unsigned int *uintptr_t;

class Serializer{
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &copy);
        Serializer &operator=(const Serializer &other);
    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};


#endif