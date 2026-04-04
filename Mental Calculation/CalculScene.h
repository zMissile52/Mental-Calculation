#pragma once
#include <Scene.h>
#include <TextRenderer.h>
#include <iostream>
class CalculScene : public Scene
{
public:
	CalculScene() {
		Object* text = CreateObject(300.f, 450.f);
		
		text->AddComponent<TextRenderer>("test");
	}

	
};

