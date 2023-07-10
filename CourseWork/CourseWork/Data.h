#pragma once

#include "Student.h"
#include <fstream>

using TInfo = Student;

class Data
{
private:
    std::fstream *file;
public:
    Data(std::string filename);
    void set_student(std::string first_name, std::string last_name, int marks[5]);
    void file_close();
    TInfo* first_list();
    TInfo* second_list();
    // Tree search_tree();
    // Tree avl_tree();
    ~Data();
};

Data::Data(std::string filename)
{
    file = new std::fstream(filename);
}

void Data::set_student(std::string first_name, std::string last_name, int marks[5])
{
    Student tmp(first_name, last_name, marks);
    //file << tmp;
}

void Data::file_close()
{
    //file.close();
}

Data::~Data()
{
    delete file;
}
