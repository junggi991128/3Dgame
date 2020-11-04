#include"FileManager.h"
#include"Object.h"
#include"Renderer.h"

int main(void)
{
	Renderer* renderer = new Renderer();
	renderer->init();

	FileManager* fileManager = new FileManager();
	Object* cube = new Object();
	cube->setProgramID(fileManager->LoadShaders("vs.shader", "fs.shader"));
	cube->setTexture(fileManager->loadDDS("uvtemplate.DDS"));
	
	renderer->setObject (cube);
	while (true)
	{
		if (renderer->renderTime())
		{
			renderer->renderer();
		}
		if (renderer->UpdateTime())
		{
			//renderer->Update();
		}
	}

	delete fileManager;
	delete cube;
	delete renderer;

	return 0;
} 