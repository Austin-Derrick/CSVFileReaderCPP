#include "FileData.cpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>

void checkRowItem(std::string lineInfo){
    
}

void ParseCSVToObject(FileData* fileData){
    std::ifstream file;
    std::vector<std::string> tempRow;
    std::string row;
    std::string lineInfo;

    file.open("../src/Food_Inspections.csv");

    if (file.is_open())
    {

        while (file.good())
        {
            getline(file, row);
            
            std::stringstream s(row);

            while (s.good())
            {
                getline(s, lineInfo, ',');
                tempRow.push_back(lineInfo);
                lineInfo = "";
            }
            fileData->rows.push_back(tempRow);
            tempRow.clear();
        }
        file.close();
    }
    else
    {
        std::cout<<"File is closed or file not found"<<std::endl;
    }
}

void printRows(FileData* fileData){
    for (int i = 0; i < fileData->rows.size(); i++)
    {
        for (int j = 0; j < fileData->rows[i].size(); j++)
        {
            std::cout<<fileData->rows[i][j]<<std::endl;
        }
    }
}

void findUniqueValue(FileData* fileData){
    int risk_01 = 0;
    int risk_02 = 0;
    int risk_03 = 0;
    
    for (int i = 0; i < fileData->rows.size(); i++)
    {
        for (int j = 0; j < fileData->rows[i].size(); j++)
        {
            if (fileData->rows[i][j] == "Risk 1 (High)")
            {
                risk_01++;
            }
            else if (fileData->rows[i][j] == "Risk 2 (Medium)")
            {
                risk_02++;
            }
            else if (fileData->rows[i][j] == "Risk 3 (Low)")
            {
                risk_03++;
            }
        }
    }
    std::cout<<"Risk 1 (High): "<<risk_01<<std::endl;
    std::cout<<"Risk 2 (Medium): "<<risk_02<<std::endl;
    std::cout<<"Risk 3 (Low): "<<risk_03<<std::endl;
    
}

int main(){

    FileData* fileData =  new FileData();
    ParseCSVToObject(fileData);
    findUniqueValue(fileData);
    //printRows(fileData);

    // general rule
    //if variaable lives longer than the method that allocates it
    // move semantics
    // std::move
    // IRC c++ 
    // play with move memory addresses
    // minimize copying
    // looking at main method and check where you are doing the work

    

}