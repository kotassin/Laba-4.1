#define _CRT_SECURE_NO_WARNINGS
_CRT_SECURE_NO_WARNINGS

#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

class road {
	int wheels;
	int passengers;
public:
	int toGetWheels() { return wheels; }
	void toSetWheels(int num) { wheels = num; }
	int toGetPass() { return passengers; }
	void toSetPass(int num) { passengers = num; }
};

class truck: public road {
	int cargo;
public:
	void toSetCargo(int size) { cargo = size; }
	int toGetCargo() { return cargo; }
	void show();
};

enum type {car, van, waggon};

class automobile : public road {
	enum type cartype;
public:
	void toSetType(type t) { cartype = t; }
	enum type toGetType() { return cartype; }
	void show();
};

class motorcycle : public road {
	string brand;
	int worth;
public:
	motorcycle() {}
	/*	register int i;
		for (i = 0; i <=siz; i++) a[siz] = {15, 16, 17};
	}*/
	void toSetWorth(int wt) { worth = wt; }
	int toGetWorth() { return worth; }
	void toSetBrand();
	string toGetBrand() { return brand; }
	void show();
	motorcycle operator+(motorcycle op);
	motorcycle operator-(motorcycle op);
	motorcycle operator*(motorcycle op);
	motorcycle operator=(motorcycle op);
	bool operator==(motorcycle op);
};

#endif

