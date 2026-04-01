#pragma once
#include <Scene.h>
#include <TextRenderer.h>
#include <iostream>
class CalculScene : public Scene
{
public:
	CalculScene() {
		Object* text = CreateObject();
		
		text->AddComponent<TextRenderer>("test");
	}

	
};

