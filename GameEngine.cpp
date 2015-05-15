//
//  GameEngine.cpp
//  VRBreakout
//
//  Created by James Rees on 08/05/2015.
//  Copyright (c) 2015 James Rees. All rights reserved.

#include "GameEngine.h"

GameEngine::GameEngine(){
    
    //main entry point
    std::cout << "Begin game!" << std::endl;
    GameMain();
    
};

GameEngine::~GameEngine(){
    
}

void GameEngine::GameMain(){
        GLfloat vertices[] = {
            // Positions
            0.5f,  0.5f, 0.0f,  // Top Right
            0.5f, -0.5f, 0.0f,  // Bottom Right
           -0.5f,  0.5f, 0.0f,  // Top Left

            // Second triangle
            0.5f, -0.5f, 0.0f,  // Bottom Right
           -0.5f, -0.5f, 0.0f,  // Bottom Left
           -0.5f,  0.5f, 0.0f   // Top Left
        };
		std::cout << sizeof(vertices) << std::endl;
        glfwInit();
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
        glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    
        window = glfwCreateWindow(WIDTH, HEIGHT, "VR Breakout!", nullptr, nullptr);
        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);
        glfwSetKeyCallback(window, this->key_callback);
   
        glewExperimental = GL_TRUE;
        glewInit();
        glEnable(GL_DEPTH_TEST);
        glfwGetFramebufferSize(window, &WIDTH, &HEIGHT); // Mac specific, used for fixing NDC
    
        glViewport(0, 0, WIDTH, HEIGHT);
		
		Shader mainShader("resources/VertexShader.vert", "resources/FragmentShader.frag");
	

        
        redSquare.init(vertices, mainShader);
    
  
        int TICKS_PER_SECOND = 25;
        int SKIP_TICKS = 1000 / TICKS_PER_SECOND;
        std::cout << "Skip ticks: " << SKIP_TICKS << std::endl;
        int MAX_FRAMESKIP = 5;
        int loops;
        float interpolation;
        double next_game_tick = glfwGetTime();

        projection = glm::perspective(45.0f, (GLfloat)WIDTH / (GLfloat)HEIGHT, 0.1f, 100.0f);
        view = glm::translate(view, glm::vec3(0, 0, -2));

        // main loop
        while (!glfwWindowShouldClose(window)){
            loops = 0;
            glfwPollEvents();
          //  glm::mat4 model;
            
           // model = glm::scale(model, glm::vec3(0.8, 0.25 ,1));
           
		
            while(glfwGetTime() > next_game_tick && loops < MAX_FRAMESKIP){
                update();
                next_game_tick += SKIP_TICKS;
                loops++;
                
            }
            
            glfwGetCursorPos(window, &xpos, &ypos);
            
            interpolation = float(glfwGetTime() + SKIP_TICKS - next_game_tick) / float(SKIP_TICKS);
          //  mainShader.Use();
            render(interpolation);
			
        }
    
        glfwTerminate();
}

void GameEngine::input(){
    
}

void GameEngine::key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GL_TRUE);
    if (key == GLFW_KEY_SPACE && action == GLFW_PRESS){
        
    }
    if (key == GLFW_KEY_UP && action == GLFW_PRESS){
        
    }
    if (key == GLFW_KEY_DOWN && action == GLFW_PRESS){
        
    }
    if (key == GLFW_KEY_LEFT && action == GLFW_PRESS){
        
    }
    if (key == GLFW_KEY_RIGHT && action == GLFW_PRESS){
        
    }
}



void GameEngine::render(float interpolation){

    //position = position + speed
    //view_position = position + (speed * interpolation)
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //render code here

	redSquare.draw(this->view, this->projection);

    glfwSwapBuffers(window);
	
}

void GameEngine::update(){
    

}

void GameEngine::debugMode(){
    
    
    
}

