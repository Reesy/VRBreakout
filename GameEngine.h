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

#include "Shader.h"
#include <stdio.h>
#include <iostream>

class GameEngine{
    GLFWwindow* window;
    int WIDTH = 800;
    int HEIGHT = 600;
    GLuint VBO, VAO;
    
public:
    GameEngine();
    ~GameEngine();
    
    void GameMain();
    void input();
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
    void render(float interpolation);
    void update();
   
};


#endif /* defined(__VRBreakout__GameEngine__) */
