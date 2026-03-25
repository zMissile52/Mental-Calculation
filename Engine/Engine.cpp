#include "Engine.h"

Engine& Engine::Instance()
{
	static Engine instance;
	return instance;
}

void Engine::Init() {
    window->Init();
}

void Engine::Start()
{
	window->Update();
	window->Render();
}
