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

		for(int j = 0; j < 3; j++) {
			for (int i = 0; i < 3; i++) {
				Object* c = CreateObject((wX - buttonSize*3)/2 + buttonSize/2 + i * gapX, (wY/2) + j * gapY);
				c->AddComponent<CollisionComponent>(buttonSize, buttonSize);
			}
		}
		
		
		
	}

	Object* calcul;
	float wX = 600;
	float wY = 900;

	float gapX = 100.f;
	float gapY = 100.f;

	float buttonSize = 100.f;
};
