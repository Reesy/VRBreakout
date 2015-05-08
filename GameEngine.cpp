//
//  GameEngine.cpp
//  VRBreakout
//
//  Created by James Rees on 08/05/2015.
//  Copyright (c) 2015 James Rees. All rights reserved.
//

#include "GameEngine.h"

GameEngine::GameEngine(){
    
    //main entry point
    std::cout << "Begin game!" << std::endl;
    GameMain();
    
};

GameEngine::~GameEngine(){
    
}

void GameEngine::GameMain(){
    
        glfwInit();
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
        glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    
        GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "VR Breakout!", nullptr, nullptr);
        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);

        glewExperimental = GL_TRUE;
        glewInit();
        glEnable(GL_DEPTH_TEST);

        // main loop
        while (!glfwWindowShouldClose(window)){
            
            glfwPollEvents();
            
            glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            
            glfwSwapBuffers(window);
        }
        glfwTerminate();
    
}

void GameEngine::update(){
    
 
}

void GameEngine::render(){
 
    
}

