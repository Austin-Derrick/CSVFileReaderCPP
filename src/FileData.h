#pragma once

#include <string>
#include <vector>

using std::string;

class FileData{
    public:
        FileData();
        ~FileData();
        std::vector<std::vector<std::string> > rows;
        void printFileData(std::vector<std::vector<std::string> > rows);
        void getUniqueValue(FileData* fileData);
};