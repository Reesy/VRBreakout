//
//  RenderObject.cpp
//  VRBreakout
//
//  Created by James Rees on 10/05/2015.
//  Copyright (c) 2015 James Rees. All rights reserved.
//
#pragma unmanaged
#include "RenderObject.h"

RenderObject::RenderObject(){
    
    
}

RenderObject::~RenderObject(){
    
    
    
}

void RenderObject::draw(glm::mat4 &view, glm::mat4 &projection){

    
}

void RenderObject::drawBounds(){
    
}

void RenderObject::setShader(Shader drawShader){
    
    
}

void RenderObject::init(GLfloat inVertss[], Shader drawShader){

    
}
void RenderObject::setColor(float r, float g, float b){

	this->color.x = r;
	this->color.y = g;
	this->color.z = b;

}
