#include "CalculGenerator.h"

void CalculGenerator::Init() {
	if (GetOwner()->GetComponent<TextRenderer>() == nullptr) {
		std::cout << "CalculGenerator : pas de TextRender" << std::endl;
		GetOwner()->AddComponent<TextRenderer>("");
	}

	setCalcul();
}

void CalculGenerator::Update(float dt) {
	tempInput.first = tempInput.second;
	tempInput.second = sf::Keyboard::isKeyPressed(sf::Keyboard::Key::R);
	if (tempInput.first == false && tempInput.second == true) {
		setCalcul();
	}
}

void CalculGenerator::setCalcul() {
	TextRenderer* render = owner->GetComponent<TextRenderer>();

	operation = (Operator)RandomNumber(NbOperator);


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
		if (b != 0) {
			a = Divisible(b);
		}
		else {
			a = rand() % 11;
		}
		break;
	}

	render->SetText(std::to_string(a) + StringOperator(operation) + std::to_string(b) + " = ");
}

int CalculGenerator::Divisible(int b) {
	std::vector<int> divisibles = Divisibles(b);
	int res = divisibles[(rand() % divisibles.size())];
	return res;
}

std::vector<int> CalculGenerator::Divisibles(int b) {
	std::vector<int> list;
	for (int i = b; i <= 100; i++) {
		if (i % b == 0) {
			std::cout << i << std::endl;
			list.emplace_back(i);
		}
	}
	return list;
}

int CalculGenerator::Resultat(int a, int b, Operator o) {
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
int CalculGenerator::RandomNumber(int range) {
	return rand() % range + 1;
}

int CalculGenerator::RandomSign(int i) {
	int r = rand() % 3;

	if (r == 1) {
		return -i;
	}
	return i;
}

std::string CalculGenerator::StringOperator(Operator o) {
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