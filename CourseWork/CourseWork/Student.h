#pragma once

#include <string>
//я на всякий буду писать комменты, чтобы меньше вопросов было
//решил сделать сначала структуру студента с конструктором
struct Student
{
    std::string first_name;
    std::string last_name;
    int* marks;
    double average_mark;
    Student(){
        marks = new int[5];
    };
    Student(std::string first_name, std::string last_name, int marks[5])
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->marks = new int[5];
        for (size_t i = 0; i < 5; i++)
        { 
            this->marks[i] = marks[i];
            this->average_mark += this->marks[i];
        }
        this->average_mark /= 5.0;  
    }
    
    friend std::ofstream& operator<< (std::ofstream& os, Student& St)
    {
        os << St.first_name << " " << St.last_name << " " << St.marks[0] << " " << St.marks[1] << " " << St.marks[2] << " " << St.marks[3] << " " << St.marks[4] << "\n";
        return os;
    }
    friend std::ifstream& operator>> (std::ifstream& in, Student& St)
    {
        in >> St.first_name >> St.last_name >> St.marks[0] >> St.marks[1] >> St.marks[2] >> St.marks[3] >> St.marks[4];
        St.average_mark = 0;
        for (size_t i = 0; i < 5; i++)
        {
            St.average_mark+= St.marks[i];
        }
        St.average_mark /= 5.0;  
        return in;
    }
};

