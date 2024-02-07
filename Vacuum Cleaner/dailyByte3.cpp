#include <iostream>

using namespace std;

bool vacuumCleaner(string route) {
	int L = 0; int R = 0; int U = 0; int D = 0; 
	int positionLR = 0; int positionUD = 0;
	string routeLR = ""; string routeUD = "";

	//Spliting string into two separate strings
	for (int i = 0; i < route.length(); i++) {
		if (route[i] == 'L' || route[i] == 'R') routeLR = routeLR + route[i];
		else routeUD = routeUD + route[i];
	}

	//Going through the left-right string, incrementing for either side to see if final value will be zero when subtracted
	for (int i = 0; i < routeLR.length(); i++) {
		if (routeLR[i] == 'L') L++;
		else R++;
	}
	positionLR = L - R;

	//Same method for the up-down string
	for (int i = 0; i < routeUD.length(); i++) {
		if (routeUD[i] == 'U') U++;
		else D++;
	}
	positionUD = U - D;

	//Checking if total final value will be zero, if it is, that means it has returned to its original position
	if (positionLR - positionUD == 0) return true;
	else return false;
}

int main() {
	bool result;
	result = vacuumCleaner("LR");
	cout << result << endl;
	result = vacuumCleaner("URURD");
	cout << result << endl;
	result = vacuumCleaner("RUULLDRD");
	cout << result << endl;
}