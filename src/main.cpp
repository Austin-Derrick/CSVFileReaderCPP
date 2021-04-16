#include "Person.cpp"
#include "School.cpp"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

int main(){

    // Person person = Person(1, "Austin", "Cake");
    std::vector<std::string> people;

    School school = School();
    // school.students.push_back(person);

    // std::cout<<school.students[0].ID<<std::endl;
    // std::cout<<school.students[0].Name<<std::endl;
    // std::cout<<school.students[0].Email<<std::endl;
    // std::cout<<person.Name<<std::endl;
    // std::cout<<person.Email<<std::endl;

    std::ifstream file;
    file.open("../src/people.csv");
    
    if (file.is_open())
    {
        std::string person;
        while (getline(file, person))
        {
            people.push_back(person);
        }
        file.close();
    }
    
    for (int i = 0; i < people.size(); i++)
    {
        size_t start = 0;
        size_t end = people[i].find(' ');
        std::string ID = people[i].substr(start, end);
        people[i].erase(end, 1);

        start = end;
        end = people[i].find(' ');
        std::string name = people[i].substr(start, end - start);
        people[i].erase(end, 1);

        start = end;
        end = people[i].find("\n");
        std::string email = people[i].substr(start, end);

        school.students.push_back(Person(ID, name, email));
    }

    for (int i = 0; i < school.students.size(); i++)
    {
        std::cout<<school.students[i].ID<<std::endl;
        std::cout<<school.students[i].Name<<std::endl;
        std::cout<<school.students[i].Email<<std::endl;
    }
}