#include "School.h"
#include "Person.h"
#include <iostream>

School::School(){
    
}

School::~School(){
    delete this;
}

void School::PrintStudents(){
    for (int i = 0; i < 499; i++)
    {
        std::cout<<students[i]->ID<<std::endl;
        std::cout<<students[i]->FirstName<<std::endl;
        std::cout<<students[i]->Email<<std::endl;
    }
}

void School::LoadStudents(std::vector<std::vector<std::string> > studentsFromFile){
    
    for (int i = 0; i < studentsFromFile.size(); i++)
    {
        
        students.push_back(new Person(studentsFromFile[i]));
    }

    std::cout<<"loaded successfully"<<std::endl;
}