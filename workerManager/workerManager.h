#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
class WorkerManager{
    public:
        WorkerManager();
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


};