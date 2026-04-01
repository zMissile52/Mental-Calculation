#include "Object.h"


void Object::Init() {
	for (Component* c : components) {
		//c->Init(dt);
	}
}


void Object::Update(float dt) {
	for (Component* c : components) {
		//c->Update(dt);
	}
}

void Object::Render(sf::RenderWindow* w) {
	for (Component* c : components) {
		//c->Render(w);
	}
}

