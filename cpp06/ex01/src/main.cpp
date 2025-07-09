#include "../include/Serializer.hpp"
#include <iostream>

int main(){
    Data *movie = new Data();

    movie->title = "Indiana Jones and the Last Crusade";
    movie->gender = "Adventure";
    movie->director = "Steven Spielberg";
    movie->duration = "2 h 7 min";
    movie->year = 1989;
    movie->imdb = 8.2;

    // Serializa o ponteiro
    uintptr_t ptr = Serializer::serialize(movie);

    // Desserializa o ponteiro
    Data *restored = Serializer::deserialize(ptr);

    // Teste: imprime os dados para conferir
    std::cout << "Original pointer: " << movie << std::endl;
    std::cout << "Original title: " << movie->title << std::endl;
    std::cout << "Serialized value: " << ptr << std::endl;
    std::cout << "Restored pointer: " << restored << std::endl;
    std::cout << "Restored title: " << restored->title << std::endl;

    delete movie;
    return 0;
}