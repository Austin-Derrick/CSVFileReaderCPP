#pragma once

#include "Person.h"
#include <vector>
#include <string>

class School{
    public:
        std::string Name;
        std::vector<Person> students;
        void PrintStudents();
        School();
        ~School();
};