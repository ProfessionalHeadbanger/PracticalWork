#pragma once

#include <string>
#include "Student.h"
//я на всякий буду писать комменты, чтобы меньше вопросов было
//решил сделать сначала структуру студента с конструктором
struct StudentOutput
{
    std::string last_name;
    float average_mark;
    StudentOutput(){};
    StudentOutput(Student student)
    {
        this->last_name = student.last_name;
        this.average_mark = 0;
        for(int i =0; i < 5; i++)
            this.average_mark+= student.marks[i];
        this.average_mark /= 5.0;
    }
};
