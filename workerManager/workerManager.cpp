#include "workerManager.h"
#include "employee.h"
#include "maneger.h"
#include "boss.h"
WorkerManager::WorkerManager(){
    //no file
    ifstream ifs;
    ifs.open(FILENAME,ios::in);
    if(!ifs.is_open()){
        cout << "****no file*********" <<endl;
        this -> m_EmpNum = 0;
        this -> m_EmpArray = NULL;
        this -> m_FileIsEmpty = true;
        ifs.close();
        return;
    }
    //hava file,no data
    char ch;
    ifs >> ch;
    if(ifs.eof()){
        cout << "****no data*********" <<endl;
        this -> m_EmpNum = 0;
        this -> m_EmpArray = NULL;
        this -> m_FileIsEmpty = true;
        ifs.close();
        return;
    }
    //have file and data
    int num = this -> get_EmpNum();
    cout << "****have"<< num << "persons" <<endl;
    this->m_EmpNum = num;
}
WorkerManager::~WorkerManager(){
    if(this->m_EmpArray!=NULL){
        delete[] this->m_EmpArray;
        this->m_EmpArray = NULL;
    }
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
//save
void WorkerManager::save(){
    ofstream ofs;
    ofs.open(FILENAME, ios::out);
    for(int i =0;i<this->m_EmpNum;i++){
        ofs <<this->m_EmpArray[i]->m_Id<<""
            <<this->m_EmpArray[i]->m_Name<<""
            <<this->m_EmpArray[i]->m_DeptId<<""<<endl;
    }
    ofs.close();
};
//
int WorkerManager::get_EmpNum(){
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    int id;
    string name;
    int dId;
    int num = 0;
    while(ifs >> id && ifs >> name && ifs >> dId){
        num++;
    }
    return num;
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
            this->m_FileIsEmpty = false;
            cout << "add**" << addNum <<"***empluee"<<endl;
            this->save();
        }
    }else{
        cout << "*******wrong****"<<endl;
    }
    system("pause");
    system("cls");
}

