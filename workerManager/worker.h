#pragma once
#include <iostream>
using namespace std;
#include <string>

class Worker{
    public:

        int m_Id;

        string m_Name;

        int m_DeptId;

        virtual void ShowInfo() = 0;

        virtual string getDeptName() = 0;
};