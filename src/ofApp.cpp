#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    
    syphonServer.setName("oF Web Page");
    
    browser.setup(5200, 1000);
    urlAddress = "http://url.here";
    browser.loadURL(urlAddress);
}

//--------------------------------------------------------------
void ofApp::update(){
    browser.updateCore();
    browser.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    browser.draw(0, 0);
    ofSetColor(ofColor::black);
    ofBackground(220);
    
    ofDrawBitmapString("La page est affichable via Syphon", 20, 40);
    
    string flux = "Taille du flux : " + ofToString(browser.getWidth()) + " x " + ofToString(browser.getHeight()) + " pixels";
    ofDrawBitmapString(flux, 20, 70);
    
    string urlText = "URL actuelle : " + urlAddress;
    ofDrawBitmapString(urlText, 20, 100);

    string fpsStr = "Performances : " + ofToString(ofGetFrameRate(), 2) + " fps";
    ofDrawBitmapString(fpsStr, 20, 130);
    
    ofDrawBitmapString("touche 'n' pour changer d'URL", 20, 160);
    ofDrawBitmapString("touche 'r' pour re-charger la page", 20, 180);
//    ofDrawBitmapString("touche '->' pour URL suivante", 20, 200);
//    ofDrawBitmapString("touche '<-' pour URL precedente", 20, 220);
    
    syphonServer.publishTexture(&browser.frame.getTextureReference());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'n'){
    urlAddress = ofSystemTextBoxDialog("Saisir une URL", urlAddress);
    browser.loadURL(urlAddress);
    }
    if (key == 'r'){
        browser.loadURL(urlAddress);
    }
//    if (key == OF_KEY_LEFT){
//        urlAddress = "http://url.here";
//        browser.loadURL(urlAddress);
//    }
//    if (key == OF_KEY_RIGHT){
//        urlAddress = "http://url.here";
//        browser.loadURL(urlAddress);
//    }
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
