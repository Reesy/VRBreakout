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
struct bounds {

	float left;
	float right;
	float up;
	float down;
	float back;
	float front; //faces the camera, only used in 2D 

};
class GameObject{

    
public:
	float velocity;
	glm::vec3 Position;
	glm::vec3 Scale; //size
	bounds thisBounds;
    GameObject();
    ~GameObject();
    //All of these positions must be in NDC. range -1 to 1
    //Using left hand rule
    //these all will be applied to a model matrix
    void setPosition(float, float, float);
    void setPosition(glm::vec3);
    void setX(float);
    void setY(float);
    void setZ(float);
	void setSize(float, float, float);
	void translateX(float);
	void translateY(float);
	void translateZ(float);
	void translate(float, float, float);
	void setVelocity(float);
	float normaliseToUnits(float); //normalises screen to 1000 to -1000
	float normaliseToScreen(float); //normalises to NDC -1 to 1
	bounds getBounds();
    glm::vec3 getPosition();
	glm::vec3 getSize();
};

#endif /* defined(__VRBreakout__GameObject__) */
