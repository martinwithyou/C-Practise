#include "speechManager.h"
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <numeric>
#include <fstream>
SpeechManager::SpeechManager(){
    //
    this->initSpeech();
    //
    this->createSpeaker();
    //
    this->loadRecord();

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
void SpeechManager::showScore(){
    cout << "......no" << this->m_Index << "times" << endl;
    vector<int>v;
    if(this->m_Index == 1){
        v = v2;
    }else{
        v = vVictory;
    }
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout << "player no" << *it << "name" << this->m_Speaker[*it].m_Name << "score" << this->m_Speaker[*it].m_Score << endl; 
    }
    cout << endl;
    system("cls");
    this->show_Menu();

};
void SpeechManager::saveRecord(){
    ofstream ofs;
    ofs.open("speech.csv",ios::out|ios::app);
    for(vector<int>::iterator it = vVictory.begin();it !=vVictory.end();it++){
        ofs << *it << "," << m_Speaker[*it].m_Score[1]<<",";

    }
    ofs << endl;
    ofs.close();
    cout << "have finished" << endl;
};
void SpeechManager::loadRecord(){
    ifstream ifs("speech.csv",ios::in);
    //
    if(!ifs.is_open()){
        this->fileIsEmpty = true;
        cout << "no file" << endl;
        ifs.close();
        return;
    }
    //
    char ch;
    ifs >> ch;
    if(ifs.eof()){
        cout << "file is empty" << endl;
        this->fileIsEmpty =true;
        ifs.close();
        return;
    }
    //
    this->fileIsEmpty = false;
    ifs.putback(ch);
    string data;
    while(ifs >> data){
        cout << data << endl;
        vector<string>v;

        int pos = -1;
        int start  = 0;
        int index = 0;
        while(true){
            pos = data.find(",", start);
            if(pos == -1){
                break;
            }
            string temp = data.substr(start, pos - start);
            cout << temp << endl;
            start = pos + 1;
        }

        this->m_Record.insert(make_pair(index,v));
        index++;

    }
    ifs.close();
    for(map<int vector<string>>::iterator it = m_Record.begin();it!=m_Record.end();it++){

    }

};
void SpeechManager::showRecord(){
    for(int i = 0;i<this->m_Record.size();i++){
        cout << "no" << i+1 << "times";
        cout << "no" << this->m_Record[i][0] << this->m_Record[i][3]<< "times" << endl;
        cout << "no" << this->m_Record[i][1] << this->m_Record[i][4] << "times" << endl;
        cout << "no" << this->m_Record[i][2]  << this->m_Record[i][5]<< "times" << endl;
    }
    system("pause");
    system("cls");
};
void SpeechManager::startSpeech(){
    //
    this->speechDraw();
    //
    this->speechContest();
    //
    this->showScore();
    //
    this->m_Index++;
    //
    this->speechDraw();
    //
    this->speechContest();
    //
    this->showScore();
    //
    this->saveRecord();
    //
    cout << "game over" << endl;
    //
    system("pause");

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
void SpeechManager::speechContest(){
    cout << "no." << this->m_Index << "times" << endl;
    //
    multimap<double, int, greater<double> > groupScore;
    //
    int num = 0;
    //
    vector<int>v_Src;
    if(this->m_Index == 1){
        v_Src = v1;
    }else{
        v_Src = v2;
    }

    for(vector<int>::iterator it = v_Src.begin();it != v_Src.end();it++){
        deque<double>d;
        for(int i = 0; i<10; i++){
            double score =(rand()%401+ 600)/10.f;
            cout << score << "";
            d.push_back(score);
        }
        sort(d.begin(),d.end(),greater<double>());
        d.pop_front();
        d.pop_back();

        double sum = accumulate(d.begin(), d.end(), 0.0f);
        double avg = sum / (double)d.size();

        this->m_Speaker[*it].m_Score[this->m_Index - 1 ] = avg;

        groupScore.insert(make_pair(avg, *it));
        //
        if(num % 6 == 0){
            cout << num/6 << "group" << endl;
            for(multimap<double, int, greater<double> >::iterator it = groupScore.begin();it != groupScore.end();it++){
                cout << "no" << it->second << "name" << this->m_Speaker[it->second].m_Name << endl;
                cout << "score" << this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
            }
            int count = 0;
            for(multimap<double, int, greater<double> >::iterator it = groupScore.begin();it != groupScore.end();it++){
                if(this->m_Index == 1){
                    v2.push_back((*it).second);
                }else{
                    vVictory.push_back((*it).second);
                }
            }
            groupScore.clear();
        }

    }
};