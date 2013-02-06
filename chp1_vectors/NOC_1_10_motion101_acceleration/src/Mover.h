// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com


class Mover {
public:
    
    ofVec2f location, velocity;
    float width, height, topspeed;
    
    Mover() {
        
        location.set(ofGetWidth()/2, ofGetHeight()/2);
        velocity.set(0, 0);
        topspeed = 5;
    }
        
    void update() {
        // Compute a vector that points from location to mouse
        ofVec2f mouse(ofGetMouseX(),ofGetMouseY());
        ofVec2f acceleration(mouse);
        acceleration -= location;
        // Set magnitude of acceleration
        acceleration.normalize();
        acceleration *= 0.2;
        
        // Velocity changes according to acceleration
        velocity += acceleration;
        // Limit the velocity by topspeed
        velocity.limit(topspeed);
        // Location changes by velocity
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