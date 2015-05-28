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
	
		
        
        paddle.init(vertices, mainShader);
		paddle.setColor(0.5f, 0.0f, 0.0f);
		paddle.setSize(0.5, 0.04, 1.0);
		paddle.translateY(-12);

		ball.init(vertices, mainShader);
		ball.setColor(0.0f, 0.0f, 1.0f);
		ball.setSize(0.02, 0.02, 1.0);
	
		std::cout << "Right : " << paddle.getBounds().right << std::endl;
		std::cout << "Left : " << paddle.getBounds().left << std::endl;
		std::cout << "Up : " << paddle.getBounds().up << std::endl;
		std::cout << "Down : " << paddle.getBounds().down << std::endl;
		std::cout << "Front : " << paddle.getBounds().front << std::endl;
		std::cout << "Back : " << paddle.getBounds().back << std::endl;
     
        projection = glm::perspective(45.0f, (GLfloat)WIDTH / (GLfloat)HEIGHT, 0.1f, 100.0f);
		
        view = glm::translate(view, glm::vec3(0, 0, -1));

        // main loop
        while (!glfwWindowShouldClose(window)){
           
            glfwPollEvents();
			update();
			glfwGetCursorPos(window, &xpos, &ypos);
			 
            render();
			
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



void GameEngine::render(){

	//clears screen
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//render code:
	
	paddle.draw(this->view, this->projection);
	ball.draw(this->view, this->projection);
    glfwSwapBuffers(window);
	
}

void GameEngine::update(){
	if (paddle.getBounds().right > 2){
		
		velocity = -0.01;
	}
	
	if (paddle.getBounds().left < -2){
		velocity = 0.01;
	}
	
	paddle.translateX(velocity);

}

void GameEngine::debugMode(){
    
    
    
}

