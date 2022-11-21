#include <iostream>
#include <string>

using namespace std;

//void input(string s, string t) {
	//cin >> s >> t;
//}

void sameChar(string s, string t) {
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		for (int j = i; j < s.length(); j += s.length()) {
			if (s[i] == t[j]) {
				count++;
			}
		}
	}
	cout << count;
}


int main() {
	string s, t;
	cin >> s >> t;
	//input(s, t);

	sameChar(s, t);
}

