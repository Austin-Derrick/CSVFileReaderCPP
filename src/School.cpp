#include "School.h"
#include "Person.h"
#include <iostream>

School::School(){
    students = new std::vector<Person*>();
}

School::~School()
{
    // for (int i = 0; i < students->size(); i++)
    // {
    //     delete students->at(i);
    // }
    for (std::vector<Person*>::iterator it = students->begin(); it != students->end(); it++)
    {
        Person* p = *it;
        delete p;
    }
    
    std::cout<<"Deleted"<<std::endl;    
}

void School::PrintStudents(){
    for (int i = 0; i < students->size(); i++)
    {
        std::cout<<students->at(i)->ID<<std::endl;
        std::cout<<students->at(i)->FirstName<<std::endl;
        std::cout<<students->at(i)->Email<<std::endl;
    }
}

void School::LoadStudents(std::vector<std::vector<std::string> > studentsFromFile){
    
    for (int i = 0; i < studentsFromFile.size(); i++)
    {
        students->push_back(new Person(studentsFromFile[i]));
    }

    std::cout<<"loaded successfully"<<std::endl;
}