/************************************************************
************************************************************/
#include "ofApp.h"

//--------------------------------------------------------------
ofApp::ofApp()
: PORT(12345)
, val_slider(0)
{
}

void ofApp::setup(){
	/********************
	********************/
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofSetWindowShape(WIDTH, HEIGHT);
	ofSetEscapeQuitsApp(false);
	
	/********************
	********************/
	receiver.setup(PORT);
}

//--------------------------------------------------------------
void ofApp::update(){

	while(receiver.hasWaitingMessages()){
		ofxOscMessage m;
		receiver.getNextMessage(m);
        
		if(m.getAddress() == "/1/fader1"){
			// val_slider = m.getArgAsInt32(0);
			val_slider = m.getArgAsFloat(0);
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(30);
	
	printf("%5.2f\r", val_slider);
	fflush(stdout);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
