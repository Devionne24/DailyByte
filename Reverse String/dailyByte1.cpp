#include <iostream>

using namespace std;

void reverseString(string reg) {
	string s = "";
	for (int i = reg.length() - 1; i >= 0; i--) {
		s.push_back(reg[i]);
	}
	cout << s << endl;
}
void reverseStringArray(string reg) {
	string s = "";
	char array[10] = {};
	for (int i = 0; i < reg.length(); i++) {
		array[i] = reg[i];
	}
	for (int j = reg.length() - 1; j >= 0; j--) {
		s = s + array[j];
	}
	cout << s << endl;
}

int main() {
	reverseString("Devionne");
	reverseStringArray("DevionneLi");
	//reverseString("Im awesome");
}
