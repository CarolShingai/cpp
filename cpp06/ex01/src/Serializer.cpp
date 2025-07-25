#include "../include/Serializer.hpp"
#include "../include/data.hpp"

Serializer::Serializer(){}

Serializer::~Serializer(){}

Serializer::Serializer(const Serializer &copy){
    *this = copy;
}

Serializer &Serializer::operator=(const Serializer &other){
    (void)other;
    return *this;
}

uintptr_t Serializer::serialize(Data *ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data *>(raw);
}