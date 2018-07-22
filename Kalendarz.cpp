#include <iostream>
#include <string>
using namespace std;

string checkMonth(float n);

int main() {

	cout << "Podaj liczbe, dla ktorej chcesz poznac odpowiednik miesiaca" << endl;
	float n;
	cin >> n;
	cout << "Twoja liczba: " << n << " to odpowiednik miesiaca: " << checkMonth(n) << endl;

	system("pause");
	return 0;
}

string checkMonth(float n)
{
	string miesiace[12] = { "styczen", "luty", "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien",
		"pazdziernik", "listopad", "grudzien" };
	int odpowiednik_float = static_cast<int>(n);

	if (n > 12.1) {
		cout << "Nie znaleziono odpowiednika miesiaca dla " << n << endl;
		return 0;
	}
	
	return miesiace[odpowiednik_float - 1];
}
