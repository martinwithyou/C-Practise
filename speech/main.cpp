#include <iostream>
using namespace std;
#include "speechManager.h"
#include <string>
int main()
{
    //show menu
    SpeechManager sm;
    //
    for(map<int, Speaker>::iterator it = sm.m_Speaker.begin();it != sm.m_Speaker.end();it++){
        cout << "player number" << it->first << "player name" << it->second.m_Name << "player score" << it->second.m_Score[0] << endl;
    }
    int choice = 0;
    //
    while(true){
        sm.show_Menu();
        cout << "please input your choice" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                sm.startSpeech();
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