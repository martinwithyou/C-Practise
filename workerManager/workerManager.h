#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "maneger.h"
#include "boss.h"

#include <fstream>
#define FILENAME "empFile.txt"
class WorkerManager{
    public:
        //
        WorkerManager();
        //
        ~WorkerManager();
        //show
        void Show_Menu();
        //exit
        void ExitSystem();
        //add
        int m_EmpNum;
        //
        Worker ** m_EmpArray;
        //
        void Add_Emp();
        //
        void save();
        //
        bool m_FileIsEmpty;
        //
        int get_EmpNum();
        //
        void int_Emp();
        //
        void Show_Emp();
        //
        void Del_Emp();
        //
        int IsExist(int id);
        //
        void Mod_Emp();
        //
        void find_Emp();
        //
        void Sort_Emp();
        //
        void Clean_File();

};