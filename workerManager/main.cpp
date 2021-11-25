#include <iostream>
using namespace std;
#include "workerManager.h"
int main(){ 
    WorkerManager wm;
    int choice;
    while(true){
        wm.Show_Menu();
        cin >> choice;
        switch (choice)
        {
            case 0:
                //turn_off
                wm.ExitSystem();
                //return 0;
                break;  
            case 1:
                //add
                wm.Add_Emp();
                break;
            case 2:
                //show
                wm.Show_Emp();
                break;
            case 3:
                //delete
                {
                    cout << "********please delete someone***********" <<endl;
                    string name;
                    cin >> name;
                }
                break; 
            case 4:
                //modify
                break;
            case 5:
                //select
                break;
            case 6:
                //sort
                break;
            case 7:
                //clear
                break;      
            default:
                system("cls");
                break;
        }
    };
    return 0;
}