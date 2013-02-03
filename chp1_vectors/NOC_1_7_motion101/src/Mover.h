// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com


class Mover {
public:
    
    ofVec2f location, velocity;
    float width, height;
    
    Mover() {
        width = ofGetWidth();
        height = ofGetHeight();
        location.set(
                     
                     ofRandom(0,ofGetWidth()),
                     ofRandom(0,ofGetHeight())
                     
                     );

        velocity.set(ofRandom(-2,2),ofRandom(-2,2));
    }
        
    void update() {
        location += velocity;
    }
    
    void display() {
        ofSetColor(127);
        ofCircle(location.x, location.y, 24);
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