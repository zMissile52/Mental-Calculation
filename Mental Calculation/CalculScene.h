#pragma once
#include <Scene.h>
#include <TextRenderer.h>
#include <CollisionComponent.h>
#include "CalculGenerator.h"
#include <iostream>




class CalculScene : public Scene
{
public:
	CalculScene() {
		calcul = CreateObject(200.f, 250.f);
		calcul->AddComponent<CalculGenerator>();

		Object* c = CreateObject(0.f, 0.f);

		
	}

	Object* calcul;
};
