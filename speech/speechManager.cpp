#include "speechManager.h"
#include "speaker.h"
#include <algorithm>
SpeechManager::SpeechManager(){
    //
    this->initSpeech();
    //
    this->createSpeaker();

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
void SpeechManager::createSpeaker(){
    string nameSeed = "asdfghjklqwe";
    for(int i = 0; i< nameSeed.size();i++){
        string name = "players";
        name += nameSeed[i];
        Speaker sp;
        sp.m_Name = name;
        for(int j = 0; j<2; j++){
            sp.m_Score[j] = 0;
        }
        this->v1.push_back(i + 1000);
        this->m_Speaker.insert(make_pair(i*10001,sp));
    }
};
void SpeechManager::startSpeech(){
    //
    this->speechDraw();
};
void SpeechManager::speechDraw(){
    cout << "no." << this->m_Index << "times" << endl;
    if(this->m_Index == 1){
        random_shuffle(v1.begin(), v1.end());
        for(vector<int>::iterator it = v1.begin(); it!= v1.end();it++){
            cout << *it << "";
        }
        cout << endl;
    }else{
        random_shuffle(v2.begin(), v2.end());
        for(vector<int>::iterator it = v2.begin(); it!= v2.end();it++){
            cout << *it << "";
        }
        cout << endl;
    }
    cout << "******************" << endl;
    system("pause");
};