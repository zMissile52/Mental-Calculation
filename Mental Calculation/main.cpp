#include <iostream>
#include <time.h>
#include <vector>

enum class Operator{
	ADDITION = 0,
	SOUSTRACTION = 1,
	MULTIPLICATION = 2,
	DIVISION = 3
};

// addition -> a et b appartient [0, 100]
// soustraction -> a et b appartient  [0, 100]
// division -> a [0, 100] et est divisible par b [0, 10] -> donc on fais b pour supposé a 
// multiplication -> a et b appartient [0, 10]


std::vector<int> Divisibles(int b) {
	std::vector<int> list;
	for (int i = b; i <= 100; i++) {
		if (b % i == 0) {
			list.emplace_back(i);
		}
	}

	return list;
}

int Divisible(int b) {
	std::vector<int> divisibles = Divisibles(b);
	int res = divisibles[rand() % divisibles.size()];
	return res;
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

void printOperator(Operator o) {
	switch (o) {
	case Operator::ADDITION:
		std::cout << " + ";
		break;
	case Operator::SOUSTRACTION:
		std::cout << " - ";
		break;
	case Operator::MULTIPLICATION:
		std::cout << " x ";
		break;
	case Operator::DIVISION:
		std::cout << " / ";
		break;
	default:
		std::cout << "";
		break;
	}
}

bool Operation(Operator o) {
	int a = 0, b = 0;
	int res;

	switch (o) {
	case Operator::ADDITION:
	case Operator::SOUSTRACTION:
		a = rand() % 101;
		b = rand() % 101;
		break;
	case Operator::MULTIPLICATION:
		a = rand() % 11;
		b = rand() % 11;
		break;
	case Operator::DIVISION:
		b = rand() % 11;
		// calcul et recupere les divisible de b, on en choisi un au hasard qui sera egale à a
		a = Divisible(b);
		break;
	}

	res = Resultat(a, b, o);

	int input = 0;

	std::cout << a;
	printOperator(o);
	std::cout << b << " ?" << std::endl;
	std::cout << "Entrer une réponse :" << std::endl;
	std::cin >> input;

	if (res == input) {
		std::cout << "gg" << std::endl << std::endl;
		return true;
	}

	std::cout << "raté" << std::endl << std::endl;
	return false;
}


int main() {
	int op;
	int score = 0;
	srand(time(0));

	while (true) {
		op = rand() % 4;
		std::cout << "Score : " << score << std::endl;
		if (Operation((Operator)op)) {
			score++;
		}
	}

}




