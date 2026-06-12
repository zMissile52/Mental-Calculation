#include <iostream>
#include <time.h>
#include <vector>
#include <Engine.h>
#include "CalculScene.h"

//enum class Operator{
//	ADDITION = 0,
//	SOUSTRACTION = 1,
//	MULTIPLICATION = 2,
//	DIVISION = 3
//};

// addition -> a et b appartient [0, 100]
// soustraction -> a et b appartient  [0, 100]
// division -> a [0, 100] et est divisible par b [0, 10] -> donc on fais b pour supposé a 
// multiplication -> a et b appartient [0, 10]


//std::vector<int> Divisibles(int b) {
//	std::vector<int> list;
//	for (int i = b; i <= 100; i++) {
//		if (i % b == 0) {
//			std::cout << i << std::endl;
//			list.emplace_back(i);
//		}
//	}
//
//	return list;
//}
//
//int Divisible(int b) {
//	if (b == 0) {
//		return 0;
//	}
//	std::vector<int> divisibles = Divisibles(b);
//	int res = divisibles[rand() % divisibles.size()];
//	return res;
//}
//
//int RandomSign(int i) {
//	int r = rand() % 3;
//
//	if (r == 1) {
//		return -i;
//	}
//	return i;
//}
//
//int Resultat(int a, int b, Operator o) {
//	switch (o) {
//	case Operator::ADDITION:
//		return a + b;
//		break;
//	case Operator::SOUSTRACTION:
//		return a - b;
//		break;
//	case Operator::MULTIPLICATION:
//		return a * b;
//		break;
//	case Operator::DIVISION:
//		return a / b;
//		break;
//	default:
//		return NULL;
//		break;
//	}
//}
//
//void printOperator(Operator o) {
//	switch (o) {
//	case Operator::ADDITION:
//		std::cout << " + ";
//		break;
//	case Operator::SOUSTRACTION:
//		std::cout << " - ";
//		break;
//	case Operator::MULTIPLICATION:
//		std::cout << " x ";
//		break;
//	case Operator::DIVISION:
//		std::cout << " / ";
//		break;
//	default:
//		std::cout << "";
//		break;
//	}
//}
//
//bool Operation(Operator o) {
//	int a = 0, b = 0;
//	int res;
//
//	switch (Operator::DIVISION) {
//	case Operator::ADDITION:
//	case Operator::SOUSTRACTION:
//		a = RandomSign(rand() % 101);
//		b = RandomSign(rand() % 101);
//		break;
//	case Operator::MULTIPLICATION:
//		a = RandomSign(rand() % 11);
//		b = RandomSign(rand() % 11);
//		break;
//	case Operator::DIVISION:
//		b = rand() % 11;
//		// calcul et recupere les divisible de b, on en choisi un au hasard qui sera egale à a
//		a = Divisible(b);
//		break;
//	}
//
//	res = Resultat(a, b, Operator::DIVISION);
//
//	int input = 0;
//
//	std::cout << a;
//	printOperator(Operator::DIVISION);
//	std::cout << b << " ?" << std::endl;
//	std::cout << "Entrer une réponse :" << std::endl;
//	std::cin >> input;
//
//	if (res == input) {
//		std::cout << "gg" << std::endl << std::endl;
//		return true;
//	}
//
//	std::cout << "raté" << std::endl << std::endl;
//	std::cout << "resultat : " << res << std::endl << std::endl;
//	return false;
//}


int main() {
	
	/*int op;
	int score = 0;
	srand(time(0));

	while (true) {
		op = rand() % 4;
		std::cout << "Score : " << score << std::endl;
		if (Operation((Operator)op)) {
			score++;
		}
	}*/
	
	
	srand(time(0));
	Engine engine = Engine::Instance();

	engine.GetWindowManager()->AddScene<CalculScene>();

	engine.Init();
	while (engine.Active()) {
		engine.Start();
	}
	

}




