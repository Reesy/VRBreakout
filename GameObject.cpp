//
//  GameObject.cpp
//  VRBreakout
//
//  Created by James Rees on 08/05/2015.
//  Copyright (c) 2015 James Rees. All rights reserved.
//
#ifdef __MINGW32__
#include "stdafx.h"
#endif
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

void GameObject::setScale(glm::vec3 scale){
    this->Scale = scale;
}
void GameObject::setScale(float x, float y, float z){
    this->Scale.x = x;
    this->Scale.y = y;
    this->Scale.z = z;
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

glm::vec3 GameObject::getPosition(){
    return this->Position;
}


