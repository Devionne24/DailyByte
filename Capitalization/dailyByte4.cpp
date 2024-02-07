#include <iostream>

using namespace std;

bool isProperCap(string alpha) {
	int isCapFirst = 0; int isCap = 0;

	//Will increment the variables if the first letter in the word in capitalized
	if (isupper(alpha[0])) {
		isCapFirst++; 
		isCap++;
	}

	//Goes through the rest of the string to see if any other words are capitalized, incrementing if they are
	for (int i = 1; i < alpha.length(); i++) {
		if (isupper(alpha[i])) isCap++;
	}

	//Will return true if only the first letter is capitalized, if all are capitalized, or if none are capitalized
	if (isCapFirst == isCap) return true;
	else if (isCap == alpha.length()) return true;
	else return false;
}

int main() {
	bool result;
	result = isProperCap("USA");
	cout << result << endl;
	result = isProperCap("Calvin");
	cout << result << endl;
	result = isProperCap("compUter");
	cout << result << endl;
	result = isProperCap("coding");
	cout << result << endl;
}