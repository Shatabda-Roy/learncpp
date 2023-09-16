#include <iostream>
#include <cstdint>
double GetHeight();
void BallDistance(std::uint16_t AtSecond, double TowerHeight);

int main(void) {
	double towerHeight = GetHeight();
	BallDistance(0, towerHeight);
	BallDistance(1, towerHeight);
	BallDistance(2, towerHeight);
	BallDistance(3, towerHeight);
	BallDistance(4, towerHeight);
	BallDistance(5, towerHeight);
	return 0;
}

double GetHeight() {
	double height;
	std::cout << "Enter the height of the tower: ";
	std::cin >> height;
	std::cout << "\n";
	return height;
}
void BallDistance(std::uint16_t AtSecond, double TowerHeight) {
	double distanceFallen = (9.80665 * (AtSecond * AtSecond)) / 2;
	double currentBallHeight = (TowerHeight - distanceFallen);
	if (currentBallHeight > 0) {
		std::cout << "At " << AtSecond << " seconds, the ball is at height: " << currentBallHeight;
	}
	else if (currentBallHeight <= 0) {
		std::cout << "At " << AtSecond << " seconds, the ball is on the ground";
	}

	std::cout << "\n";
}
