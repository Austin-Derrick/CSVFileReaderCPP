# pragma once

#include <string>

using std::string;

class Person
{
public:
    std::string ID;
    std::string Name;
    std::string Email;
    Person(std::string id, std::string name, std::string email);
    ~Person();
};
