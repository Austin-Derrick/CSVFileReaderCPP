# pragma once

#include <string>
#include <vector>

using std::string;

class Person
{
public:
    std::string ID;
    std::string FirstName;
    std::string LastName;
    std::string Email;
    Person(std::string id, std::string firstName, std::string lastName, std::string email);
    Person(std::vector<std::string> personInfo);
    ~Person();
};
