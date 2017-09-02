#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0); // 背景色の設定
	ofEnableAlphaBlending(); // 透明度を使用可能に
	ofSetColor(31, 127, 255, 127); // 描画色を設定（アルファ付き）
	ofSetCircleResolution(64); // 円の解像度を設定
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float x; // 円のx座標
	float y; // 円のy座標
	float radius; // 円の半径

	x = 1024 / 2; // x座標を画面の中止に
	y = 768 / 2; // y座標を画面の中心に
	radius = 100; // 半径の初期値を

	ofCircle(x, y, radius); // 一つ目の円を描く
	x = x + 20; // x座標を20増加させる
	y = y + 30; // y座標を30増加させる
	radius = radius + 40; // 半径を40増加させる
	ofCircle(x, y, radius); // 二つ目の円を描く
	x = x + 20; // x座標を20増加させる
	y = y + 30; // y座標を30増加させる
	radius = radius + 40; // 半径を40増加させる
	ofCircle(x, y, radius); // 三つ目の円を描く
	x = x + 20; // x座標を20増加させる
	y = y + 30; // y座標を30増加させる
	radius = radius + 40; // 半径を40増加させる
	ofCircle(x, y, radius); // 四つ目の円を描く
	x = x + 20; // x座標を20増加させる
	y = y + 30; // y座標を30増加させる
	radius = radius + 40; // 半径を40増加させる
	ofCircle(x, y, radius); // 五つ目の円を描く
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
