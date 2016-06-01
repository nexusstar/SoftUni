/* count characters from keyboard input */
#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

int main(){

	string line;
	int allAlpha = 0;
	int allUpper = 0;
	int allLower = 0;
	int allOther = 0;

	cout << "Enter text: ";
	getline(cin, line);

	for (char & c : line)
	{
		if(isalpha(c))
		{
			allAlpha++;

			if (isupper(c)) allUpper++;
			else allLower++;
		}
		else allOther++;
	}
	cout << line << endl;
	cout << "All alphabetic: " << allAlpha << endl;
	cout << "All not alphabetic: " << allOther << endl;
	cout << "Upper-case alphabetic: " << allUpper << endl;
	cout << "Lower-case alphabetic: " << allLower << endl;

	return 0;
}
