#include "speechManager.h"

SpeechManager::SpeechManager(){
    this->initSpeech();

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
void SpeechManager::initSpeech(){
    //
    this->v1.clear();
    this->v2.clear();
    this->vVictory.clear();
    this->m_Speaker.clear();
    this->m_Index = 1;
};