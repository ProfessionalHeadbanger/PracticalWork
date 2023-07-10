#pragma once

#include <string>
//я на всякий буду писать комменты, чтобы меньше вопросов было
//решил сделать сначала структуру студента с конструктором
struct Student
{
    std::string first_name;
    std::string last_name;
    int marks[5];
    Student(){};
    Student(std::string first_name, std::string last_name,int marks[5])
    {
        this->first_name = first_name;
        this->last_name = last_name;
        for (size_t i = 0; i < 5; i++)
            this->marks[i] = marks[i];  
    }
};

