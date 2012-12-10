#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(30);
    ofSetVerticalSync(true);
    ofBackground(255);
    ofEnableSmoothing();
    ofSetCircleResolution(30);

}

//--------------------------------------------------------------
void testApp::update(){
    w.walk();
}

//--------------------------------------------------------------
void testApp::draw(){
    w.display();
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