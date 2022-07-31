#include <iostream>
#include <stdlib.h>
using namespace std;
class queen
{
private:
	int x[20], count;

public:
	void ques(int);
	int place(int, int);
	void printq();
	void disp();
	queen() : count(0) {}
};

void queen::ques(int k)
{
	for (int i = 1; i <= 4; i++)
	{
		if (place(k, i))
		{
			x[k] = i;
			if (k == 4)
			{
				printq();
				count++;
			}

			else
				ques(k + 1);
		}
	}
}

int queen::place(int k, int i)
{
	for (int j = 1; j < k; j++)
		if (x[j] == i || abs(x[j] - i) == abs(j - k))
			return 0;
	return 1;
}

void queen::printq()
{
	for (int i = 1; i <= 4; i++)
	{
		cout << "\t\t\t";
		for (int j = 1; j <= 4; j++)
		{
			if (x[i] == j)
				cout << "\tQ";
			else
				cout << "\tx";
		}

		cout << endl;
	}
	cout << "\n\n\n\n\n\n\n";
}
void queen::disp()
{
	if (count == 0)
		cout << "\n\t No solution possible";
	else
		cout << "\n\t No of solution possible" << count;
}

int main()
{
	queen q;
	q.ques(1);
	q.disp();

	return 0;
}
