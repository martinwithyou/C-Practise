#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
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
