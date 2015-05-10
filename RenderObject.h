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
    
public:
    RenderObject();
    ~RenderObject();
    
    void draw();
    void drawBounds();
    void setShader(Shader);
    void setVertices(GLfloat inVerts[]);
    
};



#endif /* defined(__VRBreakout__RenderObject__) */
