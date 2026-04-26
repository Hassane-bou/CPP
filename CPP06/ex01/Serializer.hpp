#pragma once


#include <iostream>
#include <string>
#include <cstdint>    

struct Data
{
    int age;
    std::string  name;
    int goals;
};

class Serializer{
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& obj);
        Serializer& operator=(const Serializer& obj);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};