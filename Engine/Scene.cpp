#include "Scene.h"

void Scene::Init() {
	for (Object* o : objects) {
		o->Init();
	}
}

void Scene::Update(float dt)
{
	for (Object* o : objects) {
		o->Update(dt);
	}
}


void Scene::Render(sf::RenderWindow* w) {
	for (Object* o : objects) {
		o->Render(w);
	}
}

Object* Scene::CreateObject()
{
	Object* object = new Object();
	objects.emplace_back(object);

	return object;
}
