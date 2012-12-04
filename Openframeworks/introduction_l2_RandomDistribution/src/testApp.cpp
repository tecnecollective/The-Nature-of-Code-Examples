#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    randomCounts.reserve(20);
    
    ofSetLogLevel(OF_LOG_VERBOSE);
    ofLogVerbose() << randomCounts[10];
    
    //init the objects in the vector (not needed in java).
    for (int i = 0; i< 20; i++) {
        randomCounts.push_back(0);
    }
    
    ofBackground(255);
}

//--------------------------------------------------------------
void testApp::update(){
    int index = int(ofRandom(0, randomCounts.size()));
    randomCounts[index]++;
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(175);
    float w = ofGetWidth()/randomCounts.size();
    
    for (int x = 0; x < randomCounts.size(); x++) {
        ofRect(x*w,ofGetHeight()-randomCounts[x],w-1,randomCounts[x]);
    }
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