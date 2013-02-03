// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com


class Mover {
public:
    
    ofVec2f location, velocity, acceleration;
    float width, height, topspeed;
    
    Mover() {
        
        location.set(ofGetWidth()/2, ofGetHeight()/2);
        velocity.set(0, 0);
        acceleration.set(-0.001, 0.01);
        topspeed = 10;
    }
        
    void update() {
        velocity += acceleration;
        velocity.limit(topspeed);
        location += velocity;
    }
    
    void display() {
        ofSetLineWidth(2);
        ofSetColor(127);
        ofCircle(location.x, location.y, 24, 24);
    }
    

    void checkEdges() {
        
        if (location.x > ofGetWidth()) {
            location.x = 0;
        }
        else if (location.x < 0) {
            location.x = ofGetWidth();
        }
        
        if (location.y > ofGetHeight()) {
            location.y = 0;
        }
        else if (location.y < 0) {
            location.y = ofGetHeight();
        }
    }
    
};