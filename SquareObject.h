#pragma once
#include "RenderObject.h"

class SquareObject : public RenderObject
{

public:

	SquareObject();
	~SquareObject();

	void draw(glm::mat4 &view, glm::mat4 &projection);
	void drawBounds();
	void init(GLfloat inVerts[], Shader);
};

