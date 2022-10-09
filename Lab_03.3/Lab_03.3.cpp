#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double R;

	cout << "x= "; cin >> x;
	cout << "R= "; cin >> R;

	if (x <= -5)
		y = -3;
	else
		if (x > -5 && x <= -R)
			y = (3*R+3*x)/(-R+5);
		else
			if (x > -R && x <= R)
				y = sqrt(R * R - x * x); 
				if (x > R && x <= 8)
					y = (R*x-R*R) / 8-R;
				else
					if (x > 8)
						y = R;

	cout << endl;
	cout << "y= " << y << endl;

	cin.get();
	return 0;
}