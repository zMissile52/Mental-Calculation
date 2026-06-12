#pragma once
#include <iostream>
#include <Component.h>
#include <TextRenderer.h>

#define NbOperator 3

enum class Operator {
	ADDITION = 0,
	SOUSTRACTION = 1,
	MULTIPLICATION = 2,
	DIVISION = 3,
	NONE = 4
};


class CalculGenerator : public Component
{
public:
	void Init() override;

	void Update(float dt) override;

	void setCalcul();

	int Divisible(int b);

	std::vector<int> Divisibles(int b);

	int Resultat(int a, int b, Operator o);


	//random number between 0 - range
	int RandomNumber(int range);

	int RandomSign(int i);

	std::string StringOperator(Operator o);

private:
	int a = 0, b = 0;

	Operator operation;

	std::pair<bool, bool> tempInput = std::pair(false, false);

};

