#include "workerManager.h"
#include "employee.h"
#include "maneger.h"
#include "boss.h"
WorkerManager::WorkerManager(){
    this -> m_EmpNum = 0;
    this -> m_EmpArray = NULL;
}
WorkerManager::~WorkerManager(){
    
}
//show menu
void WorkerManager::Show_Menu(){
    cout << "*******************" <<endl;
    cout << "********welcome***********" <<endl;
    cout << "*****0.退出职工信息*****" <<endl;
    cout << "*****1.添加职工信息*****" <<endl;
    cout << "*****2.显示职工信息*****" <<endl;  
    cout << "*****3.删除职工信息*****" <<endl; 
    cout << "*****4.修改职工信息*****" <<endl;
    cout << "*****5.查找职工信息*****" <<endl;
    cout << "*****6.恢复职工信息***********" <<endl; 
    cout << "*****7.清空职工信息*****" <<endl;
    cout << "******************" <<endl;    
}
//Exit
void WorkerManager::ExitSystem(){
    cout << "欢迎下次使用" <<endl;
    system("pause");
    exit(0);
}
//add
void WorkerManager::Add_Emp(){
    cout << "********input**********" <<endl; 
    int addNum = 0;
    cin >> addNum;
    if(addNum>0){
        int newSize = this->m_EmpNum + addNum;
        Worker ** newSpace = new Worker*[newSize];
        if(this->m_EmpArray != NULL){
            for(int i=0;i<this->m_EmpNum;i++){
                newSpace[i]=this->m_EmpArray[i];
            }
        }
        for(int i=0;i<addNum;i++){
            int id;
            string name;
            int dSelect;

            cout << "****"<<i+1 << "***id"<<endl;
            cin >> id; 
            cout << "****"<<i+1 << "***name"<<endl;
            cin >> name;
            cout << "****1" << "***empluee"<<endl;
            cout << "****2" << "***empluee"<<endl;
            cout << "****3" << "***empluee"<<endl;
            cin >> dSelect;
            Worker * worker = NULL;
            switch (dSelect)
            {
                case 1:
                    worker = new Employee(id, name, 1);
                    break;
                case 2:
                    worker = new Maneger(id, name, 2);
                    break;
                case 3:
                    worker = new Boss(id, name, 3);
                    break;
                default:
                    break;
                newSpace[this->m_EmpNum + i] = worker;
            }
            delete [] this->m_EmpArray;
            this->m_EmpArray = newSpace;
            this->m_EmpNum = newSize;
            cout << "****3" << addNum <<"***empluee"<<endl;
        }
    }else{
        cout << "*******wrong****"<<endl;
    }
    system("pause");
    system("cls");
}

