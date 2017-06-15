#include "Transport.h"

int main() {
	truck t1, t2, t3; //i changed it
	automobile c;
	motorcycle mot[3];

	t1.toSetWheels(18);
	t1.toSetPass(2);
	t1.toSetCargo(3200);

	t2.toSetWheels(6);
	t2.toSetPass(3);
	t2.toSetCargo(1200);

	t1.show(); cout << endl;
	t2.show(); cout << endl;

	c.toSetWheels(4);
	c.toSetPass(6);
	c.toSetType(van);
	
	c.show();
	
	mot[1].toSetWorth(1000); mot[2].toSetWorth(1500); mot[3].toSetWorth(2000);
	mot[1].toSetBrand();
	mot[1].toSetWheels(20);
	mot[1].toSetPass(5);
	mot[1].show();
	
	mot[1] = mot[1] + mot[2];
	cout << " Total cost: " << mot[1].toGetWorth() << endl;
	//cout << mot[1].toGetWorth() << endl << mot[2].toGetWorth() << endl << mot[3].toGetWorth() << endl;

	mot[1] = mot[1] - mot[2]; cout << " Difference: " << mot[1].toGetWorth() << endl;
	mot[1] = mot[1] * mot[2]; cout << " Multiplication: " << mot[1].toGetWorth() << endl;
	mot[1] = mot[2]; cout << " Assignment: " << mot[1].toGetWorth() << endl;
	if (mot[2] == mot[3]) cout << " The cost of 2 and 3 motorcycles is the same." << endl;
	else cout << " The cost of 2 and 3 motorcycles isn't the same" << endl;

	system("pause");
	return 0;
}