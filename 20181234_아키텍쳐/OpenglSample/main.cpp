#include"FileManager.h"
#include"Object.h"
#include"Renderer.h"
#include"FPS.h"

int main(void)
{
	FPS* fps = new FPS();
	Renderer* renderer = new Renderer();
	renderer->init();
	fps->setFPS();

	FileManager* fileManager = new FileManager();
	Object* cube = new Object();
	cube->setProgramID(fileManager->LoadShaders("vs.shader", "fs.shader"));
	cube->setTexture(fileManager->loadDDS("uvtemplate.DDS"));
	
	renderer->setObject (cube);
	while (true)
	{
		while (fps->getFPS() <= 16) {

			renderer->renderer();
		}
	}

	delete fileManager;
	delete cube;
	delete renderer;
	delete fps;

	return 0;
} 