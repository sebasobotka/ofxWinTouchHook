#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetFrameRate(60);

	// print information about digitizer installed on a device
	ofxWinTouchHook::PrintSystemMetrics();

	// enable the Windows Touch Hook
	ofxWinTouchHook::EnableTouch();

	// add touch listeners
	ofAddListener(ofxWinTouchHook::touchDown, this, &ofApp::touchDown);
	ofAddListener(ofxWinTouchHook::touchMoved, this, &ofApp::touchMove);
	ofAddListener(ofxWinTouchHook::touchUp, this, &ofApp::touchUp);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::touchDown(ofTouchEventArgs & touch) {
	ofLog() << "touch down: " << touch.x << ", " << touch.y << ", id: " << touch.id;
}

//--------------------------------------------------------------
void ofApp::touchMove(ofTouchEventArgs & touch) {
	ofLog() << "touch move: " << touch.x << ", " << touch.y << ", id: " << touch.id;
}

//--------------------------------------------------------------
void ofApp::touchUp(ofTouchEventArgs & touch) {
	ofLog() << "touch up: " << touch.x << ", " << touch.y << ", id: " << touch.id;
}