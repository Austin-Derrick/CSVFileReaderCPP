#pragma once

#include "Person.h"
#include <vector>
#include <string>


class School{
    public:
        std::string Name;
        std::vector<Person*> students;
        void LoadStudents(std::vector<std::vector<std::string> > studentsFromFile);
        void PrintStudents();
        School();
        ~School();
};