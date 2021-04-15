#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> people;
    std::ifstream file;
    file.open("../src/people.csv");
    
    if (file.is_open())
    {
        std::string name;
        while (getline(file, name))
        {
            people.push_back(name);
        }
        file.close();
    }
    
    for (int i = 0; i < people.size();i++)
    {
        std::cout<<people[i]<<std::endl;
    }
}