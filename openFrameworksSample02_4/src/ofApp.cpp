#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0, 0, 0); // �w�i�F�̐ݒ�
	ofEnableAlphaBlending(); // �����x���g�p�\��
	ofSetColor(31, 127, 255, 127); // �`��F��ݒ�i�A���t�@�t���j
	ofSetCircleResolution(64); // �~�̉𑜓x��ݒ�
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float x; // �~��x���W
	float y; // �~��y���W
	float radius; // �~�̔��a

	x = ofGetWidth() / 2; // x���W����ʂ̒��~��
	y = ofGetHeight() / 2; // y���W����ʂ̒��~��
	radius = ofGetWidth() / 40; // ���a�̏����l��ݒ�

	x = x + 20; // x���W��20�s�N�Z���E��
	y = y + 30; // y���W��30�s�N�Z������
	radius = radius + 40; // ���a��40�s�N�Z������������
	ofCircle(x, y, radius); // ��ڂ̉~��`��

	x = x + 20; // x���W��20�s�N�Z���E��
	y = y + 30; // y���W��30�s�N�Z������
	radius = radius + 40; // ���a��40�s�N�Z������������
	ofCircle(x, y, radius); // ��ڂ̉~��`��

	x = x + 20; // x���W��20�s�N�Z���E��
	y = y + 30; // y���W��30�s�N�Z������
	radius = radius + 40; // ���a��40�s�N�Z������������
	ofCircle(x, y, radius); // �O�ڂ̉~��`��

	x = x + 20; // x���W��20�s�N�Z���E��
	y = y + 30; // y���W��30�s�N�Z������
	radius = radius + 40; // ���a��40�s�N�Z������������
	ofCircle(x, y, radius); // �l�ڂ̉~��`��

	x = x + 20; // x���W��20�s�N�Z���E��
	y = y + 30; // y���W��30�s�N�Z������
	radius = radius + 40; // ���a��40�s�N�Z������������
	ofCircle(x, y, radius); // �܂ڂ̉~��`��
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
