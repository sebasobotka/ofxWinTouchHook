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
	ofBackground(ofColor::black);

	for (auto& touch:touches) {
		ofNoFill();
		ofCircle(touch.second, 30);
	}
}

//--------------------------------------------------------------
void ofApp::touchDown(ofTouchEventArgs & touch) {
	touches.insert(pair<int, ofPoint>(touch.id, ofPoint(touch.x, touch.y)));
}

void ofApp::touchMove(ofTouchEventArgs & touch) {
	touches[touch.id].set(touch.x, touch.y);
}

void ofApp::touchUp(ofTouchEventArgs & touch) {
	touches.erase(touch.id);
}

