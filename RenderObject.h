//
//  RenderObject.h
//  VRBreakout
//
//  Created by James Rees on 10/05/2015.
//  Copyright (c) 2015 James Rees. All rights reserved.
//

#ifndef __VRBreakout__RenderObject__
#define __VRBreakout__RenderObject__

#include <stdio.h>
#include "Shader.h"
#include "GameObject.h"
class RenderObject : public GameObject {
    bool initialised;
    Shader testShader;
    GLfloat vertices[];
    
public:
    RenderObject();
    ~RenderObject();
    
    void draw(glm::mat4 view, glm::mat4 projection);
    void drawBounds();
    void setShader(Shader);
   
    void init(GLfloat inVerts[], Shader);
};



#endif /* defined(__VRBreakout__RenderObject__) */
