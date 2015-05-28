//
//  GameObject.cpp
//  VRBreakout
//
//  Created by James Rees on 08/05/2015.
//  Copyright (c) 2015 James Rees. All rights reserved.
//

#include "GameObject.h"

GameObject::GameObject(){
    
};

GameObject::~GameObject(){

};

void GameObject::setPosition(float x, float y, float z){
    this->Position.x = x;
    this->Position.y = y;
    this->Position.z = z;
}

void GameObject::setPosition(glm::vec3 position){
    this->Position = position;
}


glm::vec3 GameObject::getSize(){

	return this->Scale;

}

void GameObject::setSize(float x, float y, float z){
    this->Scale.x = x;
    this->Scale.y = y;
    this->Scale.z = z;
	this->thisBounds.left = -x / 2;
	this->thisBounds.right = x / 2;
	this->thisBounds.up = y - (y / 2);
	this->thisBounds.down = y - (y / 2);
	this->thisBounds.front = z - (z / 2);
	this->thisBounds.back = z + (z / 2);
}

bounds GameObject::getBounds(){

	return this->thisBounds;

}
void GameObject::setX(float x){
    this->Position.x = x;
}

void GameObject::setY(float y){
    this->Position.y = y;
}
void GameObject::setZ(float z){
    this->Position.z = z;

}

void GameObject::translateX(float x){
	this->Position.x += x;
	this->thisBounds.left += x;
	this->thisBounds.right += x; 
}
void GameObject::translateY(float y){
	this->Position.y += y;
	this->thisBounds.up += y;
	this->thisBounds.down += y;

}
void GameObject::translateZ(float z){
	this->Position.z += z;
	this->thisBounds.front += z;
	this->thisBounds.back += z;
}
void GameObject::translate(float x, float y, float z){
	this->Position.x += x;
	this->Position.y += y;
	this->Position.z += z;
}

float GameObject::normaliseToUnits(float NDC){

	return NDC * 1000;

}

float GameObject::normaliseToScreen(float UNITS){

	return UNITS / 1000;


}
glm::vec3 GameObject::getPosition(){
    return this->Position;
}

void GameObject::setVelocity(float vel){
	this->velocity = vel;
}
