#include <iostream>
#include <string>
#include <array>

using namespace std;

string addBinary(string one, string two) {
	int sum[20], i = 0, cr = 0;
	string final = "";
	int binOne = stoi(one);
	int binTwo = stoi(two);
	while (binOne != 0 || binTwo != 0)
	{
		sum[i++] = (((binOne % 10) + (binTwo % 10) + cr) % 2);
		cr = (((binOne % 10) + (binTwo % 10) + cr) / 2);
		binOne = binOne / 10;
		binTwo = binTwo / 10;
	}

	if (cr != 0)
	{
		sum[i++] = cr;
	}
	--i;

	while (i >= 0)
	{
		final += to_string(sum[i--]);
	}

	return final;
}


int main() {
	string result = "";
	result = addBinary("100", "1");
	cout << result << endl;
	result = addBinary("11", "1");
	cout << result << endl;
	result = addBinary("0", "1");
	cout << result << endl;
}