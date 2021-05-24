//
// Created by SHSongs on 2021-03-05.
//

#ifndef VIRTUALSTOCK_CALC_H
#define VIRTUALSTOCK_CALC_H

#include <iostream>

using namespace std;

namespace hello
{
	void say();
}

struct Assessment
{
	double ratio;
	double score;
};

class Calc
{
private:
	double performanceAssessmentRatio;
	int performanceAssessmentCNT;
	double sum = 0;

public:
	struct Assessment performanceAssessmentScoreArr[20];
	double testRatio;


	Calc()
	{

	}

	void init(double performanceAssessmentRatio, int performanceAssessmentCNT)
	{
		this->performanceAssessmentRatio = performanceAssessmentRatio;
		this->performanceAssessmentCNT = performanceAssessmentCNT;
		this->testRatio = 100 - this->performanceAssessmentRatio;
	}

	void inputEachAssessment()
	{
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
		calcSum();
	}

	double calcSum()
	{
		for (int i = 0; i < performanceAssessmentCNT; i++)
		{
			performanceAssessmentScoreArr[i].score =
					performanceAssessmentScoreArr[i].score * performanceAssessmentScoreArr[i].ratio;
			sum += performanceAssessmentScoreArr[i].score;
		}
		return sum;
	}

	double calcScore(double TargetScore)
	{
		double Goal = TargetScore - sum;;            //지필의 점수
		Goal = (Goal / testRatio) * 100;

		return Goal;
	}
};

#endif //VIRTUALSTOCK_CALC_H
