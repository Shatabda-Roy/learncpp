#include <iostream>
double getNumber() {
	double inputNumber;
	std::cout << "Enter a double value: ";
	std::cin >> inputNumber;
	return inputNumber;
}
char getOperator() {
	std::cout << "HINT - Enter one of the following: +, -, *, or /" << "\n";
	std::cout << "Enter an operator: ";
	char charOperator;
	std::cin >> charOperator;
	return charOperator;
}
int main(void) {
	double numX = getNumber();
	double numY = getNumber();
	char op = getOperator();
	double result;
	switch (op)
	{
	case '+':
		result = numX * numY;
		std::cout << numX << " " << op << " " << numY << " is " << result;

		break;
	case '-':
		result = numX + numY;
		std::cout << numX << " " << op << " " << numY << " is " << result;
		break;
	case '*':
		result = numX * numY;
		std::cout << numX << " " << op << " " << numY << " is " << result;

		break;
	case '/':
		result = numX / numY;
		std::cout << numX << " " << op << " " << numY << " is " << result;
	default:
		break;
	}
	std::cout << "\n";
	return 0;
}