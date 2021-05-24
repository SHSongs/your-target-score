#include <iostream>

using namespace std;

struct Assessment
{
	double ratio;
	double score;
};

int main()
{
	double performanceAssessmentRatio;
	double testRatio;
	double performanceAssessmentCNT;

	cout << "비율은 백율률로 입력 \n\n" << endl;
	cout << "수행평가의 비율을 입력 : " << endl;
	cin >> performanceAssessmentRatio;

	testRatio = 100 - performanceAssessmentRatio;
	cout << "수행평가의 개수를 입력 : " << endl;
	cin >> performanceAssessmentCNT;


	struct Assessment performanceAssessmentScoreArr[20];

	cout << "각 수행평가의 비율과 점수를 입력받습니다. \n " << endl;


	for (int i = 0; i < performanceAssessmentCNT; i++)
	{
		cout << "비율 :  ";
		cin >> performanceAssessmentScoreArr[i].ratio;

		performanceAssessmentScoreArr[i].ratio /= 100;

		cout << "점수 :  ";
		cin >> performanceAssessmentScoreArr[i].score;

		cout << endl;
	}

	double sum = 0;

	for (int i = 0; i < performanceAssessmentCNT; i++)
	{
		performanceAssessmentScoreArr[i].score =
				performanceAssessmentScoreArr[i].score * performanceAssessmentScoreArr[i].ratio;
		sum += performanceAssessmentScoreArr[i].score;
	}


	double A_Score = 89.5 - sum;            //지필의 점수
	double B_Score = 79.5 - sum;

	A_Score = (A_Score / testRatio) * 100;
	B_Score = (B_Score / testRatio) * 100;

	cout << "A를 받으려면 : " << A_Score << endl;
	cout << "B를 받으려면 : " << B_Score << endl;


	system("PAUSE");

	return 0;
}
