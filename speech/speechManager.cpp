#include "speechManager.h"

SpeechManager::SpeechManager(){

}

SpeechManager::~SpeechManager(){
    
}
void SpeechManager::show_Menu(){
    cout << "*******************" << endl;
    cout << "*******welcome************" << endl;
    cout << "*******1.start************" << endl;
    cout << "*******2.show record************" << endl;
    cout << "*******3.clear************" << endl;
    cout << "*******0.exit************" << endl;
    cout << "*******************" << endl;
    cout << endl;
}
void SpeechManager::exitSystem(){
    cout << "*******welcome one more time************" << endl;
    system("pause");
}