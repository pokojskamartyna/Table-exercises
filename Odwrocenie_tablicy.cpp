#include <iostream>
using namespace std;

int inversion_of_tab(int tab[], int size_tab);

int main() {

	//int* tab = new int[12];
	//tab[12] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	//delete [] tab;
	int tab[12] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	//int size_tab = sizeof(tab);
	int n = 12;
	
	cout << "Tablica przed odwroceniem: " << endl;
	for (int i = 0; i<n; i++)
	{
		cout << tab[i] << " ";
	};
	
	cout << endl << "Tablica po odwroceniu: " << endl;

	inversion_of_tab(tab, n);
	system("pause");
}

int inversion_of_tab(int tab[], int size_tab)
{
	size_tab = 11;
	for (int i = size_tab; i >=0; i--) {
			cout << tab[i] << " ";
		}
	return 0;
}