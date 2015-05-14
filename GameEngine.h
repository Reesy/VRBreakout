//
//  GameEngine.h
//  VRBreakout
//
//  Created by James Rees on 08/05/2015.
//  Copyright (c) 2015 James Rees. All rights reserved.
//

#ifndef __VRBreakout__GameEngine__
#define __VRBreakout__GameEngine__
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "Shader.h"
#include "GameObject.h"
#include "RenderObject.h"
#include <stdio.h>
#include <iostream>

class GameEngine{
    GLFWwindow* window;
    int WIDTH = 800;
    int HEIGHT = 600;
    GLuint VBO, VAO;
    glm::mat4 model;
    glm::mat4 view;
    glm::mat4 projection;
    
    double xpos, ypos;
    
 
    
public:
    GameEngine();
    ~GameEngine();
    
    void GameMain();
    void input();
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
    
    void render(float interpolation);
    void update();
    void debugMode();
   
};


#endif /* defined(__VRBreakout__GameEngine__) */
