#include "workerManager.h"
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
        }
    }else{

    }
}

