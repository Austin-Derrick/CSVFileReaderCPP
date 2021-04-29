#include "Person.cpp"
#include "School.cpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>

int main(){

    // Person person = Person(1, "Austin", "Cake");
    
    School school = School();

    std::vector<std::vector<std::string>> people;
    std::ifstream file;

    file.open("../src/people.csv");

    if (file.is_open())
    {
        while (file.good())
        {
            std::string person;
            getline(file, person);
            std::stringstream s(person);

            std::vector<std::string> tempPerson;
            while (s.good())
            {
                std::string lineInfo;
                getline(s, lineInfo, ',');
                tempPerson.push_back(lineInfo);
            }
            people.push_back(tempPerson);
        }
        file.close();
    }
    
    
    
    // while(file.is_open())
    // {
    //     getline(file, line);
    //     std::string person;
    //     std::stringstream s(line);
    //     while (getline(file, person))
    //     {
    //         people.push_back(person);
    //     }
    //     file.close();
    // }
    
    // for (int i = 0; i < people.size(); i++)
    // {
    //     size_t start = 0;
    //     size_t end = people[i].find(' ');
    //     std::string ID = people[i].substr(start, end);
    //     people[i].erase(end, 1);

    //     start = end;
    //     end = people[i].find(' ');
    //     std::string name = people[i].substr(start, end - start);
    //     people[i].erase(end, 1);

    //     start = end;
    //     end = people[i].find("\n");
    //     std::string email = people[i].substr(start, end);

    //     school.students.push_back(Person(ID, name, email));
    // }

    for (int i = 0; i < school.students.size(); i++)
    {
        std::cout<<school.students[i].ID<<std::endl;
        std::cout<<school.students[i].Name<<std::endl;
        std::cout<<school.students[i].Email<<std::endl;
    }
}