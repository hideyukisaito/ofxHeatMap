#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    heatmap.setup(ofGetWidth(), ofGetHeight(), 32);
}

//--------------------------------------------------------------
void ofApp::update()
{
    heatmap.update(OFX_HEATMAP_CS_SPECTRAL_SOFT);
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofBackground(0, 0, 0);
    
    ofSetColor(255, 255);
    heatmap.draw(0, 0);
    
    ofSetWindowTitle(ofToString(ofGetFrameRate()));
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
    heatmap.addPoint(x, y);
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
