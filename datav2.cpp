#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include<math.h>
int cla1[90][20];
int cla2[90][20];
int cla3[90][20];
int cla4[90][20];
int cla5[90][20];
float stu[90];
int absent1, absent2, absent3, absent4, absent5, c1[8], c2[8], c3[8], c4[8], c5[8];
float gaussrand_NORMAL() {
	static float V1, V2, S;
	static int phase = 0;
	float X;


	if (phase == 0) {
		do {
			float U1 = (float)rand() / RAND_MAX;
			float U2 = (float)rand() / RAND_MAX;


			V1 = 2 * U1 - 1;
			V2 = 2 * U2 - 1;
			S = V1 * V1 + V2 * V2;
		} while (S >= 1 || S == 0);


		X = V1 * sqrt(-2 * log(S) / S);
	}
	else
		X = V2 * sqrt(-2 * log(S) / S);


	phase = 1 - phase;


	return X;
}


float gaussrand(float mean, float stdc) {
	return mean + gaussrand_NORMAL() * stdc;
}

void getgpa()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 90; ++i) {
		float tmp;
		tmp = gaussrand(2.8, sqrt(0.4));
		if (tmp > 4)
		{
			tmp = 4;
		}
		if (tmp < 1)
		{
			tmp = 1;
		}
		int r;
		r = rand() % 89;
		while (stu[r] != 0)
		{
			if (r < 90)
			{
				r++;
			}
			if (r == 90)
			{
				r = 0;
			}
		}
		stu[r] = tmp;
	}
}
void outgpa()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	for (int i = 0; i < 90; i++)
	{
		printf("%.2f\n", stu[i]);
	}
}
int main()
{
	getgpa();
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	srand((unsigned int)time(NULL));
	absent1 = rand() % 4 + 5;;
	absent2 = rand() % 4 + 5;
	absent3 = rand() % 4 + 5;
	absent4 = rand() % 4 + 5;
	absent5 = rand() % 4 + 5;
	int temp, flag;
	for (int i = 0; i < absent1; i++)
	{
		temp, flag = 0;
		temp = rand() % 89;
		if (stu[temp] > 1 && stu[temp] <= 1.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 18)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 1.5 && stu[temp] <= 2)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 14)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 2 && stu[temp] <= 2.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 10)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 2.5 && stu[temp] <= 3)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 6)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 3 && stu[temp] <= 3.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 3)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 3.5 && stu[temp] <= 4)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 1)
			{
				i--;
				continue;
			}
		}
		for (int j = 0; j < i; j++)
		{
			if (temp == c1[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			c1[i] = temp;
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < absent2; i++)
	{
		temp, flag = 0;
		temp = rand() % 89;
		if (stu[temp] > 1 && stu[temp] <= 1.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 18)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 1.5 && stu[temp] <= 2)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 14)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 2 && stu[temp] <= 2.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 10)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 2.5 && stu[temp] <= 3)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 6)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 3 && stu[temp] <= 3.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 3)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 3.5 && stu[temp] <= 4)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 1)
			{
				i--;
				continue;
			}
		}
		for (int j = 0; j < i; j++)
		{
			if (temp == c2[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			c2[i] = temp;
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < absent3; i++)
	{
		temp, flag = 0;
		temp = rand() % 89;
		if (stu[temp] > 1 && stu[temp] <= 1.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 18)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 1.5 && stu[temp] <= 2)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 14)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 2 && stu[temp] <= 2.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 10)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 2.5 && stu[temp] <= 3)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 6)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 3 && stu[temp] <= 3.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 3)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 3.5 && stu[temp] <= 4)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 1)
			{
				i--;
				continue;
			}
		}
		for (int j = 0; j < i; j++)
		{
			if (temp == c3[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			c3[i] = temp;
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < absent4; i++)
	{
		temp, flag = 0;
		temp = rand() % 89;
		if (stu[temp] > 1 && stu[temp] <= 1.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 18)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 1.5 && stu[temp] <= 2)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 14)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 2 && stu[temp] <= 2.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 10)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 2.5 && stu[temp] <= 3)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 6)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 3 && stu[temp] <= 3.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 3)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 3.5 && stu[temp] <= 4)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 1)
			{
				i--;
				continue;
			}
		}
		for (int j = 0; j < i; j++)
		{
			if (temp == c4[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			c4[i] = temp;
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < absent5; i++)
	{
		temp, flag = 0;
		temp = rand() % 89;
		if (stu[temp] > 1 && stu[temp] <= 1.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 18)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 1.5 && stu[temp] <= 2)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 14)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 2 && stu[temp] <= 2.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 10)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 2.5 && stu[temp] <= 3)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 6)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 3 && stu[temp] <= 3.5)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 3)
			{
				i--;
				continue;
			}
		}
		else if (stu[temp] > 3.5 && stu[temp] <= 4)
		{
			int tmp = rand() % 20 + 1;
			if (tmp > 1)
			{
				i--;
				continue;
			}
		}
		for (int j = 0; j < i; j++)
		{
			if (temp == c5[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			c5[i] = temp;
		}
		else
		{
			i--;
		}
	}
	for (int i = 0; i < absent1; i++)
	{
		int count[4];
		for (int j = 0; j < 4; j++)
		{
			int temp = 0, flag = 0;
			temp = rand() % 19;
			for (int k = 0; k < j; k++)
			{
				if (temp == count[k])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				count[j] = temp;
			}
			else
			{
				j--;
			}
		}
		for (int j = 0; j < 20; j++)
		{
			if (j != count[1] && j != count[2] && j != count[3] && j != count[0])
			{
				cla1[c1[i]][j] = 1;
			}
		}
	}
	for (int i = 0; i < absent2; i++)
	{
		int count[4];
		for (int j = 0; j < 4; j++)
		{
			int temp = 0, flag = 0;
			temp = rand() % 19;
			for (int k = 0; k < j; k++)
			{
				if (temp == count[k])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				count[j] = temp;
			}
			else
			{
				j--;
			}
		}
		for (int j = 0; j < 20; j++)
		{
			if (j != count[1] && j != count[2] && j != count[3] && j != count[0])
			{
				cla2[c2[i]][j] = 1;
			}
		}
	}
	for (int i = 0; i < absent3; i++)
	{
		int count[4];
		for (int j = 0; j < 4; j++)
		{
			int temp = 0, flag = 0;
			temp = rand() % 19;
			for (int k = 0; k < j; k++)
			{
				if (temp == count[k])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				count[j] = temp;
			}
			else
			{
				j--;
			}
		}
		for (int j = 0; j < 20; j++)
		{
			if (j != count[1] && j != count[2] && j != count[3] && j != count[0])
			{
				cla3[c3[i]][j] = 1;
			}
		}
	}
	for (int i = 0; i < absent4; i++)
	{
		int count[4];
		for (int j = 0; j < 4; j++)
		{
			int temp = 0, flag = 0;
			temp = rand() % 19;
			for (int k = 0; k < j; k++)
			{
				if (temp == count[k])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				count[j] = temp;
			}
			else
			{
				j--;
			}
		}
		for (int j = 0; j < 20; j++)
		{
			if (j != count[1] && j != count[2] && j != count[3] && j != count[0])
			{
				cla4[c4[i]][j] = 1;
			}
		}
	}
	for (int i = 0; i < absent5; i++)
	{
		int count[4];
		for (int j = 0; j < 4; j++)
		{
			int temp = 0, flag = 0;
			temp = rand() % 19;
			for (int k = 0; k < j; k++)
			{
				if (temp == count[k])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				count[j] = temp;
			}
			else
			{
				j--;
			}
		}
		for (int j = 0; j < 20; j++)
		{
			if (j != count[1] && j != count[2] && j != count[3] && j != count[0])
			{
				cla5[c5[i]][j] = 1;
			}
		}
	}
	int num=0;
	for (int i = 0;i < 20;i++)
	{
		num = 0;
		num = rand() % 4;
		for (int j = 0; j < num; j++)
		{
			int temp = 0, flag = 0;
			temp = rand() % 89;
			cla1[temp][i] = 1;
		}
		for (int j = 0;j < 90;j++)
		{
			printf("%d %d\n", j+101, cla1[j][i]);
		}
		printf("\n");
		num = rand() % 4;
		for (int j = 0; j < num; j++)
		{
			int temp = 0, flag = 0;
			temp = rand() % 89;
			cla2[temp][i] = 1;
		}
		for (int j = 0;j < 90;j++)
		{
			printf("%d %d\n", j+201, cla2[j][i]);
		}
		printf("\n");
		num = rand() % 4;
		for (int j = 0; j < num; j++)
		{
			int temp = 0, flag = 0;
			temp = rand() % 89;
			cla3[temp][i] = 1;
		}
		for (int j = 0;j < 90;j++)
		{
			printf("%d %d\n", j+301, cla3[j][i]);
		}
		printf("\n");
		num = rand() % 4;
		for (int j = 0; j < num; j++)
		{
			int temp = 0, flag = 0;
			temp = rand() % 89;
			cla4[temp][i] = 1;
		}
		for (int j = 0;j < 90;j++)
		{
			printf("%d %d\n", j+401, cla4[j][i]);
		}
		printf("\n");
		num = rand() % 4;
		for (int j = 0; j < num; j++)
		{
			int temp = 0, flag = 0;
			temp = rand() % 89;
			cla5[temp][i] = 1;
		}
		for (int j = 0;j < 90;j++)
		{
			printf("%d %d\n", j+501, cla5[j][i]);
		}
		printf("\n");
	}
	outgpa();
}

