#pragma once

#include "Student.h"
#include "Tree.h"
#include <fstream>
#include <vector>

using Vec = std::vector<StudentOutput>;


class Data
{
private:
    std::string filename;
public:
    Data(std::string filename);
    Vec first_list();
    Vec second_list();
    Tree search_tree();
    Tree avl_tree();
};

Data::Data(std::string textBox1)
{
    this->filename = textBox1;
}


inline Vec Data::first_list()
{
    std::ifstream file(filename);
    Vec res;
    Student tmp;
    int n = 0;
    while(!file.eof())
    {
        file >> tmp;
        StudentOutput out(tmp);
        res[n] = out;
        n++;
    }
    int count_of_ex = 0;
    for(int i = 0; i < n; i++)
    {
        if(res[i].average_mark == 5)
            {
                for(int j = i; j < count_of_ex; j--)
                    std::swap(res[j],res[j-1]);
                count_of_ex++;
            }
    }
    file.close();
    return res;
}

inline Vec Data::second_list()
{
    std::ifstream file(filename);
    Vec res;
    Student tmp;
    int n = 0;
    while(!file.eof())
    {
        file >> tmp;
        StudentOutput out(tmp);
        res[n] = out;
        n++;
    }
    int min_in;
    for(int i = 0; i < n; i++)
    {
        min_in = i;
        for(int j = i; j < n; j++)
            if(res[j].average_mark<res[min_in].average_mark) 
                min_in = j;
        std::swap(res[i],res[min_in]);
    }
    file.close();
    return res;
}

inline Tree Data::search_tree()
{
    Tree res;
    res = Build_Search(filename);
    return res;
}

inline Tree Data::avl_tree()
{
    Tree res;
    res = Build_AVL(filename);
    return res;
}