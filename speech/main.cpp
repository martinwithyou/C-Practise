#include <iostream>
using namespace std;
#include "speechManager.h"

int main()
{
    //show menu
    SpeechManager sm;
    sm.show_Menu();
    int choice;
    //
    while(true){
        sm.show_Menu();
        cout << "please input your choice" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                sm.exitSystem();
                break;
            default:
                system("cls");
                break;
        }
    }


    system("pause");
    return 0;

}