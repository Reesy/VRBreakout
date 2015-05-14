//
//  RenderObject.cpp
//  VRBreakout
//
//  Created by James Rees on 10/05/2015.
//  Copyright (c) 2015 James Rees. All rights reserved.
//
#ifdef __MINGW32__
#include "stdafx.h"
#endif
#include "RenderObject.h"

RenderObject::RenderObject(){
    
    
}

RenderObject::~RenderObject(){
    
    
    
}

void RenderObject::draw(glm::mat4 view, glm::mat4 projection){
    if(this->initialised){
        
     //   this->testShader.Use();
       
        glm::mat4 model;

        

       // model = glm::scale(model, glm::vec3(this->getScale().x, this->getScale().y, this->getScale().z));
        


        //glUniformMatrix4fv(modelLocation, 1, GL_FALSE, glm::value_ptr(model));
        //glUniformMatrix4fv(viewLocation, 1, GL_FALSE, glm::value_ptr(view));
        //glUniformMatrix4fv(projectionLocation, 1, GL_FALSE, glm::value_ptr(projection));
        
       // glBindVertexArray(this->VAO);
        //glDrawArrays(GL_TRIANGLES, 0, 6);
        //glBindVertexArray(0);
        
        
    }
    
    
}

void RenderObject::drawBounds(){
    
}

void RenderObject::setShader(Shader drawShader){
    
//    this->testShader = drawShader;
    
}

void RenderObject::init(GLfloat inVerts[], Shader drawShader){
    
    
}

