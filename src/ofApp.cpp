#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    
    syphonServer.setName("Awesomium web page");
    
    browser.setup(5300, 1000);
    browser.loadURL("http://api.plumelabs.com/udl4.html");
    //browser.setup(1920, 1080);
    //browser.loadURL("http://www.creativeapplications.net/");

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
    ofDrawBitmapString("La page ne s'affiche pas ici", 20, 50);
    ofDrawBitmapString("Elle est dispo dans un flux Syphon", 20, 70);
    string flux = "Taille du flux : " + ofToString(browser.getWidth()) + " x " + ofToString(browser.getHeight()) + " pixels";
    ofDrawBitmapString(flux, 20, 110);
    string fpsStr = "Performances : " + ofToString(ofGetFrameRate(), 2) + " fps";
    ofDrawBitmapString(fpsStr, 20, 130);
    syphonServer.publishTexture(&browser.frame.getTextureReference());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
