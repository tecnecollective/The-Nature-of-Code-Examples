#pragma once

#include "ofMain.h"

class Walker {
    
public:
    ofVec2f location;
    ofVec2f noff;
    
    Walker();
    void display();
    void walk();
};