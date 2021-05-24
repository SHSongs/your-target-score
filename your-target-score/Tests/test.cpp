//
// Created by SHSongs on 2021-02-19.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassName.h"
#include <Calc.h>

using testing::Eq;

namespace
{
	class ClassDeclar : public testing::Test
	{
	public:
		ClassName obj;
		Calc calc;

		ClassDeclar()
		{
			calc;
		}
	};
}

TEST_F(ClassDeclar, nameOfT1)
{
	calc.performanceAssessmentCNT = 2;
	calc.performanceAssessmentRatio = 10;

	ASSERT_EQ(2, calc.performanceAssessmentCNT);
}

TEST_F(ClassDeclar, nameOfT2)
{
	obj.setAge(58);
	ASSERT_THAT(58, testing::Eq(obj.getAge()));
}

TEST_F(ClassDeclar, SimulatorTest)
{
	ASSERT_EQ("None", "None");

}