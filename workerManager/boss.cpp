#include "boss.h"        
Boss::Boss(int id, string name, int dId){
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = dId;
}
        
void Boss::ShowInfo(){
cout << "*******************" << this->m_Id <<endl;
cout << "*******************" << this->m_Name <<endl;
cout << "*******************" << this->m_DeptId <<endl;
};
        
string Boss::getDeptName(){
    return string("Boss");
};