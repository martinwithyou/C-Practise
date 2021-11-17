#include <iostream>
using namespace std;
#include <string>
//#define MAX;

struct Person
{
   string m_Name;
   int m_Sex;
   int m_Age;
   string m_Phone;
   string m_Addr;
};

struct Addressbooks
{
    struct Person personArray[1000];
    int m_Size;
};

// add
void addPerson(Addressbooks * abs){
    if(abs -> m_Size == 1000){
        cout << "*****无法添加*****" <<endl;
        return;
    }else{
        //name
        string name;
        cout << "********please input name***********" <<endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        //sex
        cout << "********please input sex***********" <<endl;
        cout << "********1->male***********" <<endl;
        cout << "********2->female***********" <<endl;
        int sex = 0;
        while(true){
            cin >> sex;
            if(sex == 1 || sex == 2){
            abs->personArray[abs->m_Size].m_Sex = sex;
            }else{
            cout << "********you are wrong***********" <<endl; 
            }
        }

        //age
        cout << "********please input age***********" <<endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        //phone
        cout << "********please input phone number***********" <<endl;
        string m_Phone = "";
        cin >> m_Phone;
        abs->personArray[abs->m_Size].m_Phone = m_Phone;

        //address
        cout << "********please input phone m_Addr***********" <<endl;
        string m_Addr = "";
        cin >> m_Addr;
        abs->personArray[abs->m_Size].m_Addr = m_Addr;

        //add successfully
        abs->m_Size++;
        cout << "********add successfully***********" <<endl;
        system("pause");
        system("cls");
    }
}

// showMenu
void showMenu(){
    cout << "*******************" <<endl;
    cout << "*****添加联系人*****" <<endl;
    cout << "*****显示联系人*****" <<endl;  
    cout << "*****删除联系人*****" <<endl; 
    cout << "*****查找联系人*****" <<endl; 
    cout << "*****修改联系人*****" <<endl; 
    cout << "*****清空联系人*****" <<endl;
    cout << "*****退出通讯录*****" <<endl;
    cout << "******************" <<endl;
}
int main(){  
    Addressbooks abs;
    int select = 0;
    while(true){
        showMenu();
        cin >> select;
        switch (select)
        {
            case 1:
                //add
                addPerson(&abs);
                break;
            case 2:
                //show
                break;
            case 3:
                //delete
                break; 
            case 4:
                //select
                break;
            case 5:
                //modify
                break;
            case 6:
                //clear
                break;   
            case 0:
                //turn_off
                cout << "欢迎下次使用" <<endl;
                system("pause");
                return 0;
                break;   
            default:
                break;
        }
    };
    return 0;
}