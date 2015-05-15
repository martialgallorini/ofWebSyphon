#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    
    syphonServer.setName("Awesomium web page");
    
    browser.setup(5300, 1000);
    browser.loadURL("http://api.plumelabs.com/udl2.html");
}

//--------------------------------------------------------------
void ofApp::update(){
    browser.updateCore();
    browser.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    //browser.draw(0, 0);
    ofSetColor(ofColor::black);
    ofBackground(220);
    ofDrawBitmapString("La page est affichable via Syphon", 20, 70);
    string flux = "Taille du flux : " + ofToString(browser.getWidth()) + " x " + ofToString(browser.getHeight()) + " pixels";
    ofDrawBitmapString(flux, 20, 110);
    string fpsStr = "Performances : " + ofToString(ofGetFrameRate(), 2) + " fps";
    ofDrawBitmapString(fpsStr, 20, 130);
    syphonServer.publishTexture(&browser.frame.getTextureReference());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == '1'){
        browser.loadURL("http://api.plumelabs.com/udl2.html");
    }
    if (key == '2'){
        browser.loadURL("http://api.plumelabs.com/udl3.html");
    }
    if (key == '3'){
        browser.loadURL("http://api.plumelabs.com/udl4.html");
    }
    if (key == '4'){
        browser.loadURL("http://api.plumelabs.com/udl5.html");
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
