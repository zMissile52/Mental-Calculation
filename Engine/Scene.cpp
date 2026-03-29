#include "Scene.h"

void Scene::Init() {
	for (Object* o : objects) {
		//o->Init()
	}
}

void Scene::Update(float dt)
{
	for (Object* o : objects) {
		//o->Update(float dt);
	}
}


void Scene::Render(sf::RenderWindow* w) {
	for (Object* o : objects) {
		//o->Render(sf::RenderWindow* w);
	}
}