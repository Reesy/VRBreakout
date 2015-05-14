//
//  GameObject.h
//  VRBreakout
//
//  Created by James Rees on 08/05/2015.
//  Copyright (c) 2015 James Rees. All rights reserved.
//

#ifndef __VRBreakout__GameObject__
#define __VRBreakout__GameObject__

#include <stdio.h>

#include <glm/glm.hpp>
#include "LevelLoader.h"
#include "GameObject.h"

class GameObject{
    glm::vec3 Position;
    glm::vec3 Scale;
    
public:
    GameObject();
    ~GameObject();
    //All of these positions must be in NDC. range -1 to 1
    //Using left hand rule
    //these all will be applied to a model matrix
    void setPosition(float, float, float);
    void setPosition(glm::vec3);
    void setScale(float, float, float);
    void setScale(glm::vec3);
    void setX(float);
    void setY(float);
    void setZ(float);
    glm::vec3 getPosition();
    
};

#endif /* defined(__VRBreakout__GameObject__) */
