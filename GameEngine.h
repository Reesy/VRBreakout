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


#include <stdio.h>
#include <iostream>

class GameEngine{
    
    int WIDTH = 800;
    int HEIGHT = 600;
public:
    GameEngine();
    ~GameEngine();
    
    void GameMain();
    void render();
    void update();
    
};


#endif /* defined(__VRBreakout__GameEngine__) */
