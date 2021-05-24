//
// Created by SHSongs on 2021-02-19.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassName.h"
#include <Calc.h>
#include <cmath>

using testing::Eq;

bool Approximation_EQ(double val0, double val1)
{
	if (abs(val0 - val1) < 0.1)
	{
		return true;
	}
	return false;
}
namespace
{
	class ClassDeclar : public testing::Test
	{
	public:
		ClassName obj;

		ClassDeclar()
		{
		}
	};
}

TEST_F(ClassDeclar, nameOfT1)
{
	Calc calc = Calc();

	calc.init(10, 2);

	ASSERT_EQ(90.0, calc.testRatio);
}

TEST_F(ClassDeclar, nameOfT2)
{
	Calc calc = Calc();

	calc.init(10, 2);
	calc.performanceAssessmentScoreArr[0].ratio = 0.05;
	calc.performanceAssessmentScoreArr[0].score = 100;
	calc.performanceAssessmentScoreArr[1].ratio = 0.05;
	calc.performanceAssessmentScoreArr[1].score = 100;

	ASSERT_EQ(10, calc.calcSum());
}


TEST_F(ClassDeclar, nameOfT3)
{
	Calc calc = Calc();

	calc.init(10, 2);
	calc.performanceAssessmentScoreArr[0].ratio = 0.05;
	calc.performanceAssessmentScoreArr[0].score = 100;
	calc.performanceAssessmentScoreArr[1].ratio = 0.05;
	calc.performanceAssessmentScoreArr[1].score = 100;
	calc.calcSum();
	const double A = 89.5;
	const double B = 79.5;

	ASSERT_EQ(true, Approximation_EQ(88.3333, calc.calcScore(A)));
	ASSERT_EQ(true, Approximation_EQ(77.2222, calc.calcScore(B)));
}
