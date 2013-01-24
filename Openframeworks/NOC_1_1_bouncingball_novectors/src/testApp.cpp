// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Example 1-1: Bouncing Ball, no vectors

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofSetFrameRate(60);

    //Sets white background
    ofBackground(255);
    
    ofSetVerticalSync(true);
    //disable background cleanup
    ofSetBackgroundAuto(false);

    ofEnableSmoothing();

    x = 100;
    y = 100;
    xspeed = 2.5;
    yspeed = 2;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    // set the background colour
    ofBackground(255);
    
    // Add the current speed to the location.
    x = x + xspeed;
    y = y + yspeed;
    
    if ((x > ofGetWidth()) || (x < 0)) {
        xspeed = xspeed * -1;
    }
    if ((y > ofGetHeight()) || (y < 0)) {
        yspeed = yspeed * -1;
    }
    
    // Display circle at x location
    ofSetColor(127);  // I'm not aware of any simple way to draw an outline (e.g. stroke(0);) in OF.  - JM
    ofCircle(x, y, 24);
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}