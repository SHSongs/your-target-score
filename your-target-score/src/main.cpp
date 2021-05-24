#include <iostream>
#include "Calc.h"

using namespace std;



int main()
{
	Calc calc = Calc();

	double ratio;
	int cnt;

	cout << "비율은 백율률로 입력 \n\n" << endl;
	cout << "수행평가의 비율을 입력 : " << endl;
	cin >> ratio;

	cout << "수행평가의 개수를 입력 : " << endl;
	cin >> cnt;

	calc.init(ratio, cnt);

	calc.inputEachAssessment();


	const double A = 89.5;
	const double B = 79.5;

	cout << "A를 받으려면 : " << calc.calcScore(A) << endl;
	cout << "B를 받으려면 : " << calc.calcScore(B) << endl;


	system("PAUSE");

	return 0;
}
