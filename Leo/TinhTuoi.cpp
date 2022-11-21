#include <iostream>
#include <iomanip>

int p(int a, int b, int c)	{
	return (a + (b - c));
}

using namespace std;
int main()					{
	int	ageAtpresent, yearAtpresent, otherYearage, otherYear;
	cout << "Enter the year at present: " << endl;
	cin >> yearAtpresent;
	cout << "Enter your age at present: " << endl;
	cin >> ageAtpresent;
	cout << "Enter the year you want" << endl;
	cin >> otherYear;
		otherYearage = ageAtpresent + (otherYear - yearAtpresent);
	cout << otherYearage << endl;

}