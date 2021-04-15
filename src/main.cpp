#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> people;
    std::ifstream file;
    file.open("../src/people.csv");
    // file.open("people.txt");
    std::string name = "";
    std::string email = "";
    std::string ID = "";
    int index = 0;
    while (file.is_open())
    {
        getline(file, name, ',');
        getline(file, email, ',');
        getline(file, ID, '\n');
        people.push_back(name);
        people.push_back(email);
        people.push_back(ID);
        if (index == 0)
        {
            index++;
        }
        else{
            file.close();

        }
        
    }
    std::cout<<people[0]<<std::endl;
    std::cout<<people[1]<<std::endl;
    std::cout<<people[2]<<std::endl;
    std::cout<<people[3]<<std::endl;
    std::cout<<people[4]<<std::endl;
    std::cout<<people[5]<<std::endl;
    // if (file.is_open())
    // {
    //     std::cout<<"File Is Open"<<std::endl;
    //     file.close();
    //     if (!file.is_open())
    //     {
    //         std::cout<<"File Is closed"<<std::endl;
    //     }
        
    // }
    // else if(!file.is_open()){

    //     std::cout<<"File Is not touched"<<std::endl;
    // }
    
}