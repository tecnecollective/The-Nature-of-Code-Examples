// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Example 1-6: Demonstration of normalizing a vector.
// Normalizing a vector sets its length to 1.

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofSetFrameRate(60);
    ofBackground(255);     //Sets white background
    ofSetVerticalSync(true);
    ofEnableSmoothing();
    
    
    centre.set(ofGetWidth()/2,ofGetHeight()/2);
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){

    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    ofSetLineWidth(2);
    ofSetColor(0);
    ofLine(0,0,mouse.x,mouse.y);
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    mouse.set(x,y);     // A vector that points to the mouse location
    mouse -= centre;    // Subtract center from mouse which results in a vector that points from center to mouse
    mouse.normalize();  // Normalize the vector
    mouse *= 150;       // Multiply its length by 150
}



//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
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