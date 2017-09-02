#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0); // ”wŒiF‚Ìİ’è
	ofEnableAlphaBlending(); // “§–¾“x‚ğg—p‰Â”\‚É
	ofSetColor(31, 127, 255, 127); // •`‰æF‚ğİ’èiƒAƒ‹ƒtƒ@•t‚«j
	ofSetCircleResolution(64); // ‰~‚Ì‰ğ‘œ“x‚ğİ’è
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float x; // ‰~‚ÌxÀ•W
	float y; // ‰~‚ÌyÀ•W
	float radius; // ‰~‚Ì”¼Œa

	x = 1024 / 2; // xÀ•W‚ğ‰æ–Ê‚Ì’†~‚É
	y = 768 / 2; // yÀ•W‚ğ‰æ–Ê‚Ì’†S‚É
	radius = 30; // ”¼Œa‚Ì‰Šú’l‚ğİ’è
	radius = radius + 40; // ”¼Œa‚ğ40‘‰Á‚³‚¹‚é
	ofCircle(x, y, radius); // ˆê‚Â–Ú‚Ì‰~‚ğ•`‚­
	radius = radius + 40; // ”¼Œa‚ğ40‘‰Á‚³‚¹‚é
	ofCircle(x, y, radius); // “ñ‚Â–Ú‚Ì‰~‚ğ•`‚­
	radius = radius + 40; // ”¼Œa‚ğ40‘‰Á‚³‚¹‚é
	ofCircle(x, y, radius); // O‚Â–Ú‚Ì‰~‚ğ•`‚­
	radius = radius + 40; // ”¼Œa‚ğ40‘‰Á‚³‚¹‚é
	ofCircle(x, y, radius); // l‚Â–Ú‚Ì‰~‚ğ•`‚­
	radius = radius + 40; // ”¼Œa‚ğ40‘‰Á‚³‚¹‚é
	ofCircle(x, y, radius); // ŒÜ‚Â–Ú‚Ì‰~‚ğ•`‚­
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
