#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Maneger :public Worker{
    public:

        Maneger(int id, string name, int dId);

        virtual void ShowInfo();
        
        virtual string getDeptName();
};