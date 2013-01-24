// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com

// Example 2-4: Fluid Resistance

// Forces (Gravity and Fluid Resistance) with Vectors

// Demonstration of multiple force acting on bodies (Mover class)
// Bodies experience gravity continuously
// Bodies experience fluid resistance when in "water"

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofSetFrameRate(60);
    ofBackground(255);     
    ofSetVerticalSync(true);
    ofEnableSmoothing();
    ofEnableAlphaBlending();

    
    liquid = new Liquid(0, ofGetHeight()/2, ofGetWidth(), ofGetHeight()/2, 0.1);
    movers.clear();
    for (int i=0;i<11;i++) {
        movers.push_back(Mover(ofRandom(1, 4),ofRandom(0,ofGetWidth()),0));
    }
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    liquid->display();
    
    for (int i = 0; i < movers.size(); i++) {
        
        // Is the Mover in the liquid?
        if (liquid->contains(movers[i])) {
            // Calculate drag force
            ofVec2f dragForce = liquid->drag(movers[i]);
            // Apply drag force to Mover
            movers[i].applyForce(dragForce);
        }
        
        // Gravity is scaled by mass here!
        gravity.set(0, 0.1*movers[i].mass);
        // Apply gravity
        movers[i].applyForce(gravity);
        
        // Update and display
        movers[i].update();
        movers[i].display();
        movers[i].checkEdges();
    }
    
    ofSetColor(0);
    string text = "click mouse to reset";
    ofDrawBitmapString(text, 30,20);
}

void testApp::reset() {
    for (int i=movers.size();i>0;i--) {
        movers.erase(movers.begin() + i);
    }
    for (int i = 0; i < 11; i++) {
        movers.push_back(Mover(ofRandom(0.5, 3),40+i*70, 0));
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
    reset();
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