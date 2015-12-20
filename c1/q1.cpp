#include <iostream>
#include <string>

using namespace std;

bool isUnique(string myStr) {
	for (int i = 0; i < myStr.length(); i++) {
		for (int j = 0; j < myStr.length(); j++) {
			if (myStr[i] == myStr[j] && i != j){
				cout << myStr[i] << " " << myStr[j] << "test\n";
				return false;
			}
		}
	}
	return true;
}

int main(int argc, char const *argv[]) {
	string myStr;
	cout << "type a string: ";
	cin >> myStr;
	if(isUnique(myStr)){
		cout << "the string has only unique characters\n";
	} else {
		cout << "there's a repeated character\n";
	}
	return 0;
}