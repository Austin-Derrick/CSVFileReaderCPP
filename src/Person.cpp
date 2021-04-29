#include "Person.h"

Person::Person(std::string id, std::string name, std::string email){
    ID = id;
    Name = name;
    Email = email;
}

Person::~Person(){
    delete this;
}