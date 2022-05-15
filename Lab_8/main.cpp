#include <vector>
#include <iostream>
#include "dot_coord.h"
#include<time.h>

using namespace std;

template<typename T>

T mean(const vector<T> & nums) {
    T sum{};
	for (const auto &n: nums) {
		sum = sum + n;
	}
	return sum/nums.size();
}

int main() {
	vector<int> vectInt{ 10, 20, 30 };
	vector<float> vectFloat{ 3.14, 2.71828, 9.8 };

	cout << "Average of int vector : " << mean(vectInt) << endl << "Average of float vector : " << mean(vectFloat) << endl;

	srand(time(0));
	cout << "Int dot coordinates: ";
	vector<dotCoord<int>> myCoordInt;
	for (int i = 0; i < 5; i++) {
		dotCoord<int> newCoord;
		newCoord.SetX((int)(rand() % 100));
		newCoord.SetY((int)(rand() % 100));
		myCoordInt.push_back(newCoord);
		cout << "( " << newCoord.GetX() << " ; " << newCoord.GetY() << " ); ";
	}

	cout << "\n\n" << "Float dot coordinates: ";
	vector<dotCoord<float>> myCoordFloat;
	for (int i = 0; i < 5; i++) {
		dotCoord<float> newCoord;
		newCoord.SetX((float)((rand() % 100) * 0.1));
		newCoord.SetY((float)((rand() % 100) * 0.1));
		myCoordFloat.push_back(newCoord);
		cout << "( " << newCoord.GetX() << " ; " << newCoord.GetY() << " ); ";
	}

	dotCoord<int> IntDotCoordMean = mean(myCoordInt);
	dotCoord<float> FloatDotCoordMean = mean(myCoordFloat);
	cout << endl << "Average of int dot coordinates vector : " << "( " << IntDotCoordMean.GetX() << " ; " << IntDotCoordMean.GetY() << " ); " << endl;
	cout << "Average of float vector : " << "( " << FloatDotCoordMean.GetX() << " ; " << FloatDotCoordMean.GetY() << " ); " << endl;
	return 0;
}
