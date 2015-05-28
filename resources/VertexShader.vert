#version 330 core
layout (location = 0) in vec3 position; // The position variable has attribute position 0
layout (location = 1) in vec3 normal;
out vec4 vertexColor; // Specify a color output to the fragment shader

uniform mat4 projection;
uniform mat4 model;
uniform mat4 view;
uniform vec3 inColor;

void main()
{
    gl_Position = projection * view * model * vec4(position, 1.0);
   // gl_Position = vec4(position, 1.0);
    //vertexColor = vec4(0.5f, 0.0f, 0.0f, 1.0f); // Set the output variable to a dark-red color
	 vertexColor = vec4(inColor,1.0); 
}