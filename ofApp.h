/************************************************************
************************************************************/
#pragma once

/************************************************************
************************************************************/
#include "ofMain.h"
#include "ofxOsc.h"

/************************************************************
************************************************************/
class ofApp : public ofBaseApp{
private:
	enum{
		WIDTH	= 300,
		HEIGHT	= 300,
	};
	
	ofxOscReceiver receiver;
	const int PORT;
	
	float val_slider;
	
public:
	ofApp();
	
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
};
