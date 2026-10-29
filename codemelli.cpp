#include<iostream>
#include <string>
using namespace std;
#define stoi
int main()
{
	int A, num[10], sum = 0, nn, n1;
	string code;
	string a, b, c, d, e, f, g, h, i, j;
	cin >> A;
	for (int k = 0; k < A; k++)
	{
		cin >> code;
		a = code[0];
		b = code[1];
		c = code[2];
		d = code[3];
		e = code[4];
		f = code[5];
		g = code[6];
		h = code[7];
		i = code[8];
		j = code[9];

		num[0] = atoi(a.c_str());
		num[1] = atoi(b.c_str());
		num[2] = atoi(c.c_str());
		num[3] = atoi(d.c_str());
		num[4] = atoi(e.c_str());
		num[5] = atoi(f.c_str());
		num[6] = atoi(g.c_str());
		num[7] = atoi(h.c_str());
		num[8] = atoi(i.c_str());
		num[9] = atoi(j.c_str());

		if (((num[0] * 10) + (num[1] * 9) + (num[2] * 8) + (num[3] * 7) + (num[4] * 6) + (num[5] * 5) + (num[6] * 4) + (num[7] * 3) + (num[8] * 2)) % 11 < 2)
			nn = ((num[0] * 10) + (num[1] * 9) + (num[2] * 8) + (num[3] * 7) + (num[4] * 6) + (num[5] * 5) + (num[6] * 4) + (num[7] * 3) + (num[8] * 2)) % 11;
		else
			nn = 11 - (((num[0] * 10) + (num[1] * 9) + (num[2] * 8) + (num[3] * 7) + (num[4] * 6) + (num[5] * 5) + (num[6] * 4) + (num[7] * 3) + (num[8] * 2)) % 11);
		if (nn == num[9])
		{
			if ((num[0] == 0) && (num[1] == 0) && (num[2] == 2))
				cout << "Tehran\n";
			else if ((num[0] == 4) && (num[1] == 4) && (num[2] == 2))
				cout << "Yazd\n";
			else if ((num[0] == 1) && (num[1] == 7) && (num[2] == 5))
				cout << "Ahvaz\n";
			else if ((num[0] == 2) && (num[1] == 9) && (num[2] == 9))
				cout << "Kerman\n";
			else if ((num[0] == 0) && (num[1] == 3) && (num[2] == 8))
				cout << "Qom\n";
			else
				cout << "Other\n";

		}
		else
			cout << "Invalid\n";
	}

	return 0;
}
