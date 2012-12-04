

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
    int choice = int(ofRandom(0, 4));
    
    //Uncomemnt to see last choice in the console
    //ofLogVerbose() << "last choice" << choice;
    
    //Note: you may use a switch statement in this case
    if(choice == 0) {
        x++;
    } else if (choice == 1) {
        x--;
    } else if (choice == 2) {
        y++;
    } else if (choice == 3) {
        y--;
    }
    
    //Equivalent to Processing constrain function
    x = ofClamp(x, 0, ofGetWidth());
    y = ofClamp(y, 0, ofGetHeight());    
}