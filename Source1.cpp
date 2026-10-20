#include <iostream>
#include <strind>
using namespace std;

void showProducts() {
	cout << "\n=== ТОВАРЫ ===\n";
	cout << "1. Клавиатура - 2500сом \n";
	cout << "2. Мышь - 1000сом \n";
	cout << "3. Наушники - 1500сом \n";
	cout << "4. Монитор - 15000сом \n";


}
void searchProducts() {
	string name;

	cout << "Введите название товара: ";
	cin >> name;

	cout << "Поиск товара: " << name << endl;

}