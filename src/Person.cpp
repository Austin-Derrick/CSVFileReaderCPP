#include "Person.h"
#include <iostream>

Person::Person(std::string id, std::string firstName, std::string lastName, std::string email){
    ID = id;
    FirstName = firstName;
    LastName = lastName;
    Email = email;
}

Person::Person(std::vector<std::string> personInfo){
    
    
    ID = personInfo[0];
    FirstName = personInfo[1];
    LastName = personInfo[2];
    Email = personInfo[3];
}

Person::~Person(){
    delete this;
}