

#include "Walker.h"

Walker::Walker () {
    location = ofVec2f (ofGetWidth() / 2, ofGetHeight() / 2);
    
    noff.x = ofRandom(0, 1000);
    noff.y = ofRandom(0, 1000);
    
    
}

void Walker::display() {
    ofSetColor(0);
    ofNoFill();
    ofCircle(location.x, location.y, 48);
    ofFill();
    ofSetColor(127);
    ofCircle(location.x, location.y, 48);
    
}

void Walker::walk() {
    location.x = ofMap(ofNoise(noff.x), 0, 1, 0, ofGetWidth());
    location.y = ofMap(ofNoise(noff.y), 0, 1, 0, ofGetHeight());
    
    noff += ofVec2f(0.01,0.01);;
}