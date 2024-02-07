#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

bool isPalidrome(string pali) {
	string s;
	//Algorithm allows for the original string to change to all lowercase
	transform(pali.begin(), pali.end(), pali.begin(), tolower);

	//Goes through the original string to delete any non-alphabeticals
	for (int j = 0; j < pali.length(); j++) {
		if (!isalpha(pali[j])) {
			if (!isalpha(pali[j + 1])) {
				pali.erase(j, 2);
			}
			else {
				pali.erase(j, 1);
			}
		}
	}
	pali.erase(remove(pali.begin(), pali.end(), ' '), pali.end());
	//Inverses string into a separate string
	for (int i = pali.length() - 1; i >= 0; i--) {
		s = s + pali[i];
	}
	
	//Checks to see if those two strings are equal
	return pali == s;
}

int main() {
	bool result;
	result = isPalidrome("lev:el");
	cout << result << endl;
	result = isPalidrome("R :acecar.");
	cout << result << endl;
	result = isPalidrome("racecar");
	cout << result << endl;
	result = isPalidrome("Devionne");
	cout << result << endl;
	result = isPalidrome("A man, a plan, a canal : Panama.");
	cout << result << endl;
}