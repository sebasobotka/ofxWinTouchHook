#pragma once

#include "ofMain.h"
#include "ofxWinTouchHook.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		// add the touch listeners
		void touchDown(ofTouchEventArgs& touch);
		void touchMove(ofTouchEventArgs& touch);
		void touchUp(ofTouchEventArgs& touch);
		
	private:
		map<int, ofPoint> touches;
		//map<int, ofTouchEventArgs> touchMap;
};
