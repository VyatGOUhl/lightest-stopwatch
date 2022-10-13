#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru"); 
	int a;/
	cout << "Кол-во секунд:";
	cin >> a;
	cout << "Старт" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "Прошло:" << i << "Секунд" << endl;
		Sleep(1000);
	}
	cout << "Стоп" << endl;
}
