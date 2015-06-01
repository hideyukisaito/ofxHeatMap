#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    int w = ofGetWidth();
    int h = ofGetHeight();
    
    heatmap.setup(w, h, 32);
        
    for (unsigned int i = 0, len_ = 1000; i < len_; ++i) {
        unsigned x_ = (unsigned)((w / 2) + cos(ofRandom(TWO_PI)) * ofRandom(w / 2));
        unsigned y_ = (unsigned)((h / 2) + sin(ofRandom(TWO_PI)) * ofRandom(h / 2));
        heatmap.addPoint(x_, y_);
    }
    
    heatmap.update(OFX_HEATMAP_CS_SPECTRAL_SOFT);
}

//--------------------------------------------------------------
void ofApp::update()
{

}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofBackground(0, 0, 0);
    
    ofSetColor(255, 255);
    heatmap.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{

}
