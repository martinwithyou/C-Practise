#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>
#include <string>
class SpeechManager{
    public:
        //
        SpeechManager();
        //
        ~SpeechManager();
        //
        void show_Menu();
        //
        void exitSystem();
        //
        void initSpeech();
        //
        void createSpeaker();
        //
        void startSpeech();
        //
        void speechDraw();
        //
        void speechContest();
        //
        void showScore();
        //
        void saveRecord();
        //
        vector<int>v1;
        //
        vector<int>v2;
        //
        vector<int>vVictory;
        //
        map<int, Speaker>m_Speaker;
        //
        int m_Index;
};
