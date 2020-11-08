#pragma once
#include "Module.h"
#include "GL/glew.h"

class ModuleRenderExercise : public Module
{
public:
	ModuleRenderExercise();
	~ModuleRenderExercise();

	bool Init();
	bool CleanUp();
	update_status Update();

private:
	unsigned CreateTriangleVBO();
	void DestroyVBO(unsigned vbo);
	void RenderVBO(unsigned vbo);

	unsigned vbo;
	unsigned program;
	
};

