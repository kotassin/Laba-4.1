#include "Transport.h"

void truck::show() {
	cout << "   TRUCK " << endl;
	cout << " Wheels: " << toGetWheels() << endl;
	cout << " Passengers: " << toGetPass() << endl;
	cout << " Cargo capacity in cubic feet: " << cargo << endl;
}

void automobile::show() {
	cout << "   AUTOMOBILE " << endl;
	cout << " Wheels: " << toGetWheels() << endl;
	cout << " Passengers: " << toGetPass() << endl;
	cout << " Type: ";
	switch (toGetType()) {
	case van: cout << "camper" << endl;
		break;
	case car: cout << "car" << endl;
		break;
	case waggon: cout << "waggon" << endl;
		break;
	}
	cout << endl;
}

void motorcycle::show() {
	cout << "   MOTORCYCLE" << endl;
	cout << " Wheels: " << toGetWheels() << endl;
	cout << " Passengers: " << toGetPass() << endl;
	cout << " Brand name: " << toGetBrand() << endl;
}

void motorcycle::toSetBrand() {
	string name;
	cout << " Please, input brand name: "; cin >> brand; cout << endl;
}

motorcycle motorcycle::operator+(motorcycle op) {
	motorcycle temp;
	temp.worth = worth + op.worth;
	return temp;
}

motorcycle motorcycle::operator-(motorcycle op) {
	motorcycle temp;
	temp.worth = worth - op.worth;
	return temp;
}

motorcycle motorcycle::operator*(motorcycle op) {
	motorcycle temp;
	temp.worth = worth * op.worth;
	return temp;
}

motorcycle motorcycle::operator=(motorcycle op) {
	worth = op.worth;
	return *this;
}

bool motorcycle::operator==(motorcycle op) {
	if (worth == op.worth) return true;
	else 
		return false;
}



