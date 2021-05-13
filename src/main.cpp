#include "Person.cpp"
#include "School.cpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>

void checkRowItem(std::string lineInfo){
    if (lineInfo == ""){

    }
    
                // {
                //     badData = true;
                //     break;
                // }
                // else
                // {
                //     tempPerson.push_back(lineInfo);
                // }
}

int main(){

    std::vector<std::vector<std::string> > people;

    std::ifstream file;
    bool badData = false;
    file.open("../src/sample.csv");
    int risk_01 = 0;
    int risk_02 = 0;
    int risk_03 = 0;    
    std::vector<std::string> tempPerson;
    std::string person;
    std::string lineInfo;

    // general rule
    //if variaable lives longer than the method that allocates it
    // move semantics
    // std::move
    // IRC c++ 
    // play with move memory addresses
    // minimize copying
    // looking at main method and check where you are doing the work

    if (file.is_open())
    {
        while (file.good())
        {
            getline(file, person);
            
            std::stringstream s(person);

            while (s.good())
            {
                getline(s, lineInfo, ',');
                if (lineInfo == " "){
                    badData = true;
                    break;
                }
                else{
                    if (lineInfo == "Risk 1 (High)")
                    {
                        risk_01++;
                    }
                    else if (lineInfo == "Risk 2 (Medium)")
                    {
                        risk_02++;
                    }
                    else if (lineInfo == "Risk 3 (Low)")
                    {
                        risk_03++;
                    }
                    tempPerson.push_back(lineInfo);
                }   
                lineInfo = "";
                //tempPerson.clear();
            }

            if(badData)
            {
                continue;
            }
            else
            {
                people.push_back(tempPerson);
                badData = false;
                tempPerson.clear();
            }
            //person = "";
        }
        file.close();
    }
    else
    {
        std::cout<<"File is closed or file not found"<<std::endl;
    }

    // for (int i = 0; i < people.size(); i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         std::cout<<people[i][j]<<std::endl;
    //     }
    // }
    std::cout<<risk_01<<std::endl;
    std::cout<<risk_02<<std::endl;
    std::cout<<risk_03<<std::endl;
    
    // mcSchool->LoadStudents(people);
    // mcSchool->PrintStudents();
    
    //delete mcSchool;
}