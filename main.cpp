#include <iostream>

using namespace std;

struct suhang
{
	double Biul;
	double score;
};

int main()
{
	double suhangB;
	double testB;
	double suhangCNT;

	cout << "비율은 백율률로 입력 \n\n" << endl;
	cout << "수행평가의 비율을 입력 : " << endl;
	cin >> suhangB;

	testB = 100 - suhangB;
	cout << "수행평가의 개수를 입력 : " << endl;
	cin >> suhangCNT;


	struct suhang sususu[20];

	cout << "각 수행평가의 비율과 점수를 입력받습니다. \n " << endl;


	for (int i = 0; i < suhangCNT; i++)
	{
		cout << "비율 :  ";
		cin >> sususu[i].Biul;

		sususu[i].Biul /= 100;

		cout << "점수 :  ";
		cin >> sususu[i].score;

		cout << endl;
	}

	double sum = 0;
	double A = 0;
	double B = 0;
	for (int i = 0; i < suhangCNT; i++)
	{
		sususu[i].score = sususu[i].score * sususu[i].Biul;
		sum += sususu[i].score;
	}


	A = 89.5 - sum;            //지필의 점수
	B = 79.5 - sum;

	A = (A / testB) * 100;
	B = (B / testB) * 100;

	cout << "A를 받으려면 : " << A << endl;
	cout << "B를 받으려면 : " << B << endl;


	system("PAUSE");

	return 0;
}
