// Lab_03_3.cpp
// ������ ��������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 1

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; 
	double R; 
	double y; 

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -6 - R)
		y = 0;
	else
		if (-6 - R < x <= -6)
			y = -sqrt((R * R) - ((x + 6) * (x + 6)));
		else
			if (-R < x <= 0)
				y = (((R * R) + R * x) / -R + 6);
			else
				if (0 < x <= 3)
					y = (R - (R * x / 3));
				else
					if (3 < x)
						y = ((R * x - 3 * R) / 6);


	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}
