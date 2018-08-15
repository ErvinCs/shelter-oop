

#include "../../headers/Domain/DogValidator.h"
#include "../../headers/Exceptions/DogException.h"


bool DogValidator::validate(const std::string& breed, const std::string& name, const int& age, const std::string& photoLink)
{
    if (breed.length() < 1)
        throw DogException("Invalid breed name.\n");
    if (name.length() < 1)
        throw DogException("Invalid name.\n");
    if (age < 0)
        throw DogException("Invalid age.\n");
    return true;
}

