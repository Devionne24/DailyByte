#include <iostream>
#include <array>
#include <string>

using namespace std;

string longPrefix(string arr[]) {
	string final = "", tmp1 = "", tmp2 = "", tmp3 = "";
	int size = sizeof(arr);

	for (int i = 0; i < size; i++) {
		switch (i)
		{
		case 0:
			tmp1 = tmp1 + arr[i];
			break;
		case 1:
			tmp2 = tmp2 + arr[i];
			break;
		case 2:
			tmp3 = tmp3 + arr[i];
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < tmp1.length(); i++) {
		if (tmp1[i] == tmp2[i] && tmp1[i] == tmp3[i]) {
			final = final + tmp1[i];
		}
		else {
			break;
		}
	}

	return final;
	/*for (int i = 0; i < arr[i].length(); i++) {

	}*/

}

int main() {
	string m[3] = {"colorado", "cold", "color"};
	string result = "";
	result = longPrefix(m);
	cout << result << endl;
	string b[3] = { "a", "b", "c" };
	result = longPrefix(b);
	cout << result << endl;
	string d[3] = { "spot", "spotty", "spotted"};
	result = longPrefix(d);
	cout << result << endl;
}