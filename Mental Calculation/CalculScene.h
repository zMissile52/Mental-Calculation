#pragma once
#include <Scene.h>
#include <TextRenderer.h>
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
		calcul = CreateObject(300.f, 450.f);
		calcul->AddComponent<TextRenderer>("");

		setCalcul();
	}

	void setCalcul() {
		TextRenderer* render = calcul->GetComponent<TextRenderer>();
		int a = RandomNumber(10), b = RandomNumber(10);
		std::string operation = StringOperator((Operator)RandomNumber(3));
		render->SetText(std::to_string(a) +  operation + std::to_string(b));
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

