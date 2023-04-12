#include <iostream>
using namespace std;

int main()
{
	struct uzytkownicy {
		string name;
		string lname;
		int id;
		string kod;
	};

	uzytkownicy tab[2];

	for (int i = 0; i < 2; i++)
	{
		cout << "Podaj imie: ";
		cin >> tab[i].name;
		cout << "Podaj nazwisko: ";
		cin >> tab[i].lname;
		cout << "Podaj id: ";
		cin >> tab[i].id;
		cout << "Podaj kod: ";
		cin >> tab[i].kod;
	}

	for (int i = 0; i < 2; i++)
	{
		cout << tab[i].name << endl;
		cout << tab[i].lname << endl;
		cout << tab[i].id << endl;
		cout << tab[i].kod << endl;
	}
}