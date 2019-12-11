#include<stdio.h>


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

	printf("비율은 백율률로 입력 \n\n");
	printf("수행평가의 비율을 입력 : ");
	scanf_s("%lf", &suhangB);

	testB = 100 - suhangB;
	printf("수행평가의 개수를 입력");
	scanf_s("%lf", &suhangCNT);

	struct suhang sususu[20];

	printf("각 수행평가의 비율과 점수를 입력받습니다.\n\n");

	for (int i = 0; i < suhangCNT; i++)
	{
		printf("비율 : ");
		scanf_s("%lf", &sususu[i].Biul);
		sususu[i].Biul /= 100;
		printf("점수 : ");
		scanf_s("%lf", &sususu[i].score);
		printf("\n");
	}

	double sum = 0, n;		//합 
	double A = 89.5, B = 79.5;
	for (int i = 0; i < suhangCNT; i++)
	{
		sususu[i].score = sususu[i].score * sususu[i].Biul;
		sum += sususu[i].score;
	}


	
	A = 89.5 - sum;			//지필의 점수 
	B = 79.5 - sum;

	A = (A / testB) * 100;
	B = (B / testB) * 100;

	printf("A를 받으려면 : %lf\n", A);

	printf("B를 받으려면 : %lf", B);


	system("PAUSE");
}