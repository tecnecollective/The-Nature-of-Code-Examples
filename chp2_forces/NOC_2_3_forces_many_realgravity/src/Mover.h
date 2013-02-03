// The Nature of Code
// Daniel Shiffman
// http://natureofcode.com


class Mover {
public:
    
    ofVec2f location, velocity, acceleration;
    float mass;
    
    Mover() {
        
    }

    Mover(float m, float x, float y) {
        mass = m;
        location.set(x,y);
        velocity.set(0,0);
        acceleration.set(0,0);
    }
    
    void applyForce(ofVec2f force) {
        force /= mass;
        acceleration += force;
    }
    
    void update() {
        velocity += acceleration;
        location += velocity;
        acceleration.set(0,0);
    }
    
    void display() {
        ofSetLineWidth(2);
        ofSetColor(0,127);
        ofCircle(location.x,location.y,mass*8);
    }
    
    void checkEdges() {
        
        if (location.x > ofGetWidth()) {
            location.x = ofGetWidth();
            velocity.x *= -1;
        } else if (location.x < 0) {
            velocity.x *= -1;
            location.x = 0;
        }
        
        if (location.y > ofGetHeight()) {
            velocity.y *= -1;
            location.y = ofGetHeight();
        }
        
    }

    
};