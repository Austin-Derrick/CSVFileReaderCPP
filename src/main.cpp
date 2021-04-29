#include "Person.cpp"
#include "School.cpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>

int main(){

    //School* mcSchool =  new School();

    std::vector<std::vector<std::string> > people;
    std::ifstream file;
    bool badData = false;
    file.open("../src/sample.csv");

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
                if (lineInfo == "")
                {
                    badData = true;
                    break;
                }
                else
                {
                    tempPerson.push_back(lineInfo);
                }
            }
            if(badData){
                continue;
            }
            else{
                people.push_back(tempPerson);
                badData = false;
            }
        }
        file.close();
    }
    else
    {
        std::cout<<"File is closed or file not found"<<std::endl;
    }
    
    file.close();

    // for (int i = 0; i < people.size(); i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         std::cout<<people[i][j]<<std::endl;
    //     }
        
    // }
    //std::cout<<people.size()<<std::endl;
    
    ///mcSchool->LoadStudents(people);
    // mcSchool->PrintStudents();
    //mcSchool->~School();
    
    
    
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
    //     size_t end = people[i].find(',');
    //     std::string ID = people[i].substr(start, end);
    //     people[i].erase(end, 1);

    //     start = end;
    //     end = people[i].find(',');
    //     std::string name = people[i].substr(start, end - start);
    //     people[i].erase(end, 1);

    //     start = end;
    //     end = people[i].find("\n");
    //     std::string email = people[i].substr(start, end);

    //     school.students.push_back(Person(ID, name, email));
    // }

    // for (int i = 0; i < school.students.size(); i++)
    // {
    //     std::cout<<school.students[i].ID<<std::endl;
    //     std::cout<<school.students[i].Name<<std::endl;
    //     std::cout<<school.students[i].Email<<std::endl;
    // }
}