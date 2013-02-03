// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Example 2-4: Introducing Friction

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofSetFrameRate(60);
    ofBackground(255);     
    ofSetVerticalSync(true);
    ofEnableSmoothing();
    ofEnableAlphaBlending();

    wind.set(0.01,0);
    gravity.set(0,0.1);
    movers.clear();
    for (int i=0;i<5;i++) {
        movers.push_back(Mover(ofRandom(1, 4),ofRandom(0,ofGetWidth()),0));
    }
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    for (int i = 0; i < movers.size(); i++) {
        gravity.set(0, 0.1*movers[i].mass);

        float c = 0.05;
        ofVec2f friction = movers[i].velocity;
        friction *= -1;
        friction.normalize();
        friction *= c;
        
        movers[i].applyForce(friction);
        movers[i].applyForce(wind);
        movers[i].applyForce(gravity);
        
        movers[i].update();
        movers[i].display();
        movers[i].checkEdges();
    }
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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