#pragma once
#include <Scene.h>
#include <TextRenderer.h>
#include <CollisionComponent.h>
#include <iostream>

enum class Operator {
	ADDITION = 0,
	SOUSTRACTION = 1,
	MULTIPLICATION = 2,
	DIVISION = 3
};


class CalculScene : public Scene
{
public:
	CalculScene() {
		calcul = CreateObject(200.f, 250.f);
		calcul->AddComponent<TextRenderer>("");

		setCalcul();

		Object* c = CreateObject(100.f, 100.f);

		c->AddComponent<CollisionComponent>(50.f, 50.f);

		
	}

	void setCalcul() {
		TextRenderer* render = calcul->GetComponent<TextRenderer>();

		Operator operation = (Operator)RandomNumber(3);


		int a = 0, b = 0;

		switch (operation) {
		case Operator::ADDITION:
		case Operator::SOUSTRACTION:
			a = RandomSign(rand() % 101);
			b = RandomSign(rand() % 101);
			break;
		case Operator::MULTIPLICATION:
			a = RandomSign(rand() % 11);
			b = RandomSign(rand() % 11);
			break;
		case Operator::DIVISION:
			b = rand() % 11;
			// calcul et recupere les divisible de b, on en choisi un au hasard qui sera egale à a
			a = Divisible(b);
			break;
		}
		
		render->SetText(std::to_string(a) + StringOperator(operation) + std::to_string(b) + " = ");
	}

	int Divisible(int b) {
		std::vector<int> divisibles = Divisibles(b);
		int res = divisibles[(rand() % divisibles.size())];
		return res;
	}

	std::vector<int> Divisibles(int b) {
	std::vector<int> list;
	for (int i = b; i <= 100; i++) {
		if (i % b == 0) {
			std::cout << i << std::endl;
			list.emplace_back(i);
		}
	}

	return list;
}

	int Resultat(int a, int b, Operator o) {
		switch (o) {
		case Operator::ADDITION:
			return a + b;
			break;
		case Operator::SOUSTRACTION:
			return a - b;
			break;
		case Operator::MULTIPLICATION:
			return a * b;
			break;
		case Operator::DIVISION:
			return a / b;
			break;
		default:
			return NULL;
			break;
		}
	}


	//random number between 0 - range
	int RandomNumber(int range) {
		return rand() % range + 1;
	}

	int RandomSign(int i) {
		int r = rand() % 3;

		if (r == 1) {
			return -i;
		}
		return i;
	}

	std::string StringOperator(Operator o) {
		switch (o) {
		case Operator::ADDITION:
			return " + ";
			break;
		case Operator::SOUSTRACTION:
			return " - ";
			break;
		case Operator::MULTIPLICATION:
			return " x ";
			break;
		case Operator::DIVISION:
			return " / ";
			break;
		default:
			return "";
			break;
		}
	}

	Object* calcul;
};
