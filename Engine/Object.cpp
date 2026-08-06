#include "Object.h"


Object::Object(sf::Vector2f pos)
{
	transform.pos = pos;
}

void Object::Init() {
	for (Component* c : components) {
		c->Init();
	}
}


void Object::Update(float dt) {
	for (Component* c : components) {
		c->Update(dt);
	}
}

void Object::Render(sf::RenderWindow* w) {
	for (Component* c : components) {
		c->Render(w);
	}
}

Transform& Object::GetTransform()
{
	return transform;
}

