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
    this->m_EmpArray = new Worker*[this->m_EmpNum];
    this->int_Emp();
    for(int i=0;i<this->m_EmpNum;i++){
        cout <<this->m_EmpArray[i]->m_Id<<""<<endl;
        cout <<this->m_EmpArray[i]->m_Name<<""<<endl;
        cout <<this->m_EmpArray[i]->m_DeptId<<""<<endl;
    }
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
//
void WorkerManager::Del_Emp(){
    cout << "********please input number**********" <<endl; 
    int id = 0;
    cin >> id;
    int index = this-> IsExist(id);
    if(index != -1){
        for(int i = index; i < this->m_EmpNum-1; i++){
           this->m_EmpArray[i]=this->m_EmpArray[i+1];
        }
        this -> m_EmpNum--;
        this -> save();
        cout << "****success****"<<endl;
        system("pause");
        system("cls"); 
    }else{
        cout << "****failed****"<<endl; 
    }
};
//
int WorkerManager::IsExist(int id){
    int index = -1;
    for(int i = 0; i<this->m_EmpNum;i++){
        if(this->m_EmpArray[i]->m_Id == id){
            index = i;
        }
    }
    return index;
};
//
void WorkerManager::Show_Emp(){
    if(this->m_FileIsEmpty){
        cout << "********empty file**********" <<endl; 
    }else{
        for(int i=0;i< m_EmpNum;i++){
            this->m_EmpArray[i]->ShowInfo();
        }
    }
    system("pause");
    system("cls");
}
//
 void WorkerManager::int_Emp(){
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int dId;

    int index=0;
    while(ifs >> id && ifs >> name && ifs >> dId){
        Worker * worker = NULL;
        if(dId == 1 ){
            worker = new Employee(id, name, 1);  
        }else if(dId == 2){
            worker = new Maneger(id, name, 2);
        }else{
            worker = new Boss(id, name, 3);
        }
        this->m_EmpArray[index] = worker;
        index++;
    }
    ifs.close();
 }
//
void WorkerManager::Sort_Emp(){
    if(this->m_FileIsEmpty){
        cout << "******no file"<<endl;
    }else{
        cout << "******sort***"<<endl;
        cout << "******1"<<endl;
        cout << "******2"<<endl;
        int select = 0;
        cin >> select;
        for(int i =0; i< m_EmpNum; i++){
            int minOrMax = i;
            for(int j = i+1;j<this->m_EmpNum;j++){
                if(select == 1 ){
                    if(this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id){
                        minOrMax = j;
                    }
                }else{
                    if(this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id){
                        minOrMax = j;
                    } 
                }
            }
            //result
            if(i != minOrMax){
                Worker * temp = this->m_EmpArray[i];
                this->m_EmpArray[i]=this->m_EmpArray[minOrMax];
                this->m_EmpArray[minOrMax] = temp;
            }
        }
        cout << "*****result******"<<endl;
        this->save();
        this->Show_Emp();
    }
};
//
void WorkerManager::Clean_File(){
    cout << "******clean the file"<<endl;
    cout << "****1***yes"<<endl;
    cout << "****2***back"<<endl; 
    int select = 0;
    cin >> select;
    if(select == 1){
        ofstream ofs(FILENAME, ios::trunc);
        ofs.close();
        if(this->m_EmpArray != NULL){
            for(int i =0; i<this->m_EmpNum;i++){
                delete this->m_EmpArray[i];
                this->m_EmpArray[i] = NULL;
            }
            delete[] this->m_EmpArray;
            this->m_EmpArray = NULL;
            this->m_EmpNum = 0;
            this->m_FileIsEmpty = true;
            cout << "******clean the file"<<endl;
        }
    }
    system("pause");
    system("cls");  
};
//
void WorkerManager::find_Emp(){
    if(this->m_FileIsEmpty){
        cout << "********no file**********" <<endl;
    }else{
            cout << "****1***find by id"<<endl;
            cout << "****2***find by name"<<endl;

            int select = 0;
            cin >> select;
            if(select == 1 ){
                int id;
                cout << "********input number**********" <<endl;
                int ret = IsExist(id);
                if(ret != -1){
                    cout << "********show result**********" <<endl;
                    this->m_EmpArray[ret]->ShowInfo();
                }else{
                    cout << "********wrong number**********" <<endl;
                }


            }else if(select == 2){

                string name;
                cout << "********input name**********" <<endl;
                cin >> name;
                bool flag = false;
                for(int i = 0; i< m_EmpNum; i++){
                    if(this->m_EmpArray[i]->m_Name == name){
                        flag = true;
                        cout << "********show result**********" <<endl;
                        cout << "**********" << this->m_EmpArray[i]->m_Id <<endl;
                        this->m_EmpArray[i]->ShowInfo();
                    }
                    if(flag == false){
                        cout << "********no one can we find**********" <<endl;
                    }
                }
                


            }else{
                cout << "********wrong number**********" <<endl;
            }
    }
};
//modify
void WorkerManager::Mod_Emp(){
    if(this->m_FileIsEmpty){
        cout << "********no file**********" <<endl;
    }else{
        cout << "********input number**********" <<endl;
        int id;
        cin >> id;

        int ret = this->IsExist(id);
        if(ret != -1){
            delete this->m_EmpArray[ret];
            int newId = 0;
            string newName = "";
            int dSelect = 0;
            cout << "****id***"<<endl;
            cin >> newId; 
            cout << "***name****"<<endl;
            cin >> newName;
            cout << "****1***empluee"<<endl;
            cout << "****2***maneger"<<endl;
            cout << "****3***boss"<<endl;
            cin >> dSelect;
            Worker * worker = NULL;
            switch (dSelect)
            {
                case 1:
                    worker = new Employee(newId, newName, 1);
                    break;
                case 2:
                    worker = new Maneger(newId, newName, 2);
                    break;
                case 3:
                    worker = new Boss(newId, newName, 3);
                    break;
                default:
                    break;
            }
            this-> m_EmpArray[ret] = worker;
            cout << "***successfully****"<<endl;
            this->save();
        }else{
            cout << "***nothing can find****"<<endl;
        }
    }
    system("pause");
    system("cls");
};
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

