#include<stdio.h>
#include<math.h>
#include<conio.h>
typedef struct {
	double sth, keneticEnerygy, potentialEnergy;
}Value;

void inputch();
Value calculateLateVelocoty1(double, double, double);
Value calculateLateVelocoty2(double, double, double);
Value calculateLateVelocoty3(double, double, double);

int main()
{
	printf("Program to calculate linear speed\n\n");
	printf("Please press Enter every time after typing\n\n");
	printf("s = distance(m)\nu = early speed(m/s)\nv = late velocity(m/s)\na = acceleration(m/s^2)\nt = time(s)\n\n");
	inputch();

	return 0;
}

void inputch()
{
	char checkCh1[8] = { 'u','a','t' };
	char checkCh2[8] = { 's','u','a' };
	char checkCh3[8] = { 's','u','t' };
	double constant[100];
	int i = 0, check;
	printf("\nInput your number of data that you want from choice below\n\n");
	printf("1. u,a,t\n2. s,u,a\n3. s,u,t\nyour chioce is : ");
	scanf_s("%d", &check);
	getchar();
	if (check == 1)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%c = ", checkCh1[j]);
			scanf_s("%lf", &constant[j]);
			getchar();
		}
		Value k = calculateLateVelocoty1(constant[0], constant[1], constant[2]);
		printf("\n\nYour Velocity is : %.2lf m/s.\n", k.sth);
		if (k.keneticEnerygy == 0)
		{
			printf("\nKenetic Energy doesn't calculate\n");
		}
		else
		{
			printf("\nKenetic Energy is : %.2lf J.\n", k.keneticEnerygy);

		}


	}
	else if (check == 2)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%c = ", checkCh2[j]);
			scanf_s("%lf", &constant[j]);
			getchar();
		}
		Value k = calculateLateVelocoty2(constant[0], constant[1], constant[2]);
		printf("\n\nYour Velocity is : %.2lf m/s.\n", k.sth);
		if (k.keneticEnerygy == 0)
		{
			printf("\nKenetic Energy doesn't calculate\n");
		}
		else
		{
			printf("\nKenetic Energy is : %.2lf J.\n", k.keneticEnerygy);

		}

	}
	else if (check == 3)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%c = ", checkCh3[j]);
			scanf_s("%lf", &constant[j]);
			getchar();
		}
		Value k = calculateLateVelocoty3(constant[0], constant[1], constant[2]);
		printf("\n\nYour Velocity is : %.2lf m/s.\n", k.sth);
		if (k.keneticEnerygy == 0)
		{
			printf("\nKenetic Energy doesn't calculate\n");
		}
		else
		{
			printf("\nKenetic Energy is : %.2lf J.\n", k.keneticEnerygy);

		}

	}
	else
	{
		printf("\nError please try again");
	}

}

Value calculateLateVelocoty1(double a, double b, double c)
{
	Value k;
	char ch;
	double m;
	k.sth = a + (b * c);
	printf("You want to calculate Kenetic Enerygy (y/n) :");
	scanf_s("%c", &ch);
	getchar();
	if (ch == 'y')
	{
		printf("Enter your weight(kg) : ");
		scanf_s("%lf", &m);
		getchar();
		k.keneticEnerygy = 0.5*m*pow(k.sth,2);
	}
	else if (ch == 'n') { k.keneticEnerygy = 0; }
	else { printf("Doesn't match in choce"); k.keneticEnerygy = 0; }

	return k;
}
Value calculateLateVelocoty2(double a, double b, double c)
{
	Value k;
	char ch;
	double m;
	k.sth = sqrt(pow(b, 2) + (2 * a * c));
	printf("You want to calculate Kenetic Enerygy (y/n) :");
	scanf_s("%c", &ch);
	getchar();
	if (ch == 'y')
	{
		printf("Enter your weight(kg) : ");
		scanf_s("%lf", &m);
		getchar();
		k.keneticEnerygy = 0.5 * m * pow(k.sth, 2);
	}
	else if (ch == 'n') { k.keneticEnerygy = 0; }
	else { printf("Doesn't match in choce"); k.keneticEnerygy = 0; }

	return k;
}
Value calculateLateVelocoty3(double a, double b, double c)
{
	Value k;
	char ch;
	double m;
	k.sth = ((2.0*a)/c) - b;
	printf("You want to calculate Kenetic Enerygy (y/n) :");
	scanf_s("%c", &ch);
	getchar();
	if (ch == 'y')
	{
		printf("Enter your weight(kg) : ");
		scanf_s("%lf", &m);
		getchar();
		k.keneticEnerygy = 0.5 * m * pow(k.sth, 2);
	}
	else if (ch == 'n') { k.keneticEnerygy = 0; }
	else { printf("Doesn't match in choce"); k.keneticEnerygy = 0; }

	return k;
}