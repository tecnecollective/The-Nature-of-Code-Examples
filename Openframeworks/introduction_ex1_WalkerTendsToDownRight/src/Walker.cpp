

#include "Walker.h"

Walker::Walker () {
    x = ofGetWidth() / 2;
    y = ofGetHeight() / 2;
    
}

void Walker::render() {
    ofSetColor(0);
    ofRect(x, y, 1, 1);
}

void Walker::step() {
    float r = ofRandom(1);
    
    if(r < 0.4) {
        x++;
    } else if (r < 0.5) {
        x--;
    } else if (r < 0.9) {
        y++;
    } else  {
        y--;
    }
    
    //Equivalent to Processing constrain function
    x = ofClamp(x, 0, ofGetWidth());
    y = ofClamp(y, 0, ofGetHeight());
    
}