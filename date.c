#include <stdio.h>
#include <stdlib.h>

int valid(int *, int *, int *);
void t_class();

int main()
{
	int dd, mm, yy, result;
	char flight_name[100], date[50];

	printf("Enter the (date/month/year) : =");
	scanf("%d/%d/%d", &dd, &mm, &yy);

	result = valid(&dd, &mm, &yy);
	if (result == 0)
	{
		printf("\n **dear tarvelar select your flight following below** \n");
		printf("\n no. flight name                      \t    timing  \n");
		printf("\n 1. Vistara               \t      9:45(A.M)        6:50(p.m)");
		printf("\n 2. IndiGo                \t      10:45(A.M)       7:50(p.m)");
		printf("\n 2. IndiGo                \t      8:45(A.M)        5:30(p.m)");
		printf("\n 3. AirIndia              \t      10:45(A.M)       6:35(p.m)");
		printf("\n 4. SpiceJet              \t      9:00(A.M)        9:45(p.m)");
		printf("\n 5. AirAsia               \t      10:30(A.M)       10:30(p.m)");
		printf("\n 6. GoAir                 \t      11:45(A.M)       11:00(p.m)");
		printf("\n 7. AirExpress            \t      9:45(A.M)        9:15(p.m)");
		printf("\n 8. AllianceAir           \t      9:15(A.M)        8:30(p.m)");
		printf("\n");
		printf("\n choose your flight as per as root(enter flight name) := ");
		scanf("%s", flight_name);
		printf("\n Enter your time as per as schedule  := ");
		scanf("%s", date);
	}
	else
	{
		printf("Invalid Date");
	}
	t_class();
	return 0;
}
int valid(int *a, int *b, int *c)
{
	if (*a >= 1 && *a <= 31 && *b >= 1 && *b <= 12 && *c > 2022 && *c <= 2025)
	{
		if (*c % 4 == 0 && *b == 2 && *a <= 29)
		{
			return 0;
		}
		else if (*b == 2 && *a <= 28)
		{
			return 0;
		}
		else if ((*b == 1 || *b == 3 || *b == 5 || *b == 7 || *b == 9 || *b == 11) && *a <= 31)
		{
			return 0;
		}
		else if ((*b == 4 || *b == 6 || *b == 8 || *b == 10 || *b == 12) && *a <= 30)
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
	return 1;
}
void t_class()
{
	int n, *ptr, ch1, class;
	printf("\n please enter the set you want to book := ");
	scanf("%d", &n);
	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == NULL)
	{
		printf("\n sorry!unable to allocate memory");
		exit(0);
	}
	do
	{
		printf("\n ********* CLASS ******");
		printf("\n 1.Economy");
		printf("\n 2.Premium Economy");
		printf("\n 3.Business");
		printf("\n 4.First class");
		printf("\n");
		printf("\n choose your class(1 to 4):= ");
		scanf("%d", &class);
		switch (class)
		{
		case 1:
			printf("\n ***WELCOME TO ECONOMY CLASS***");
			break;
		case 2:
			printf("\n ***WELCOME TO PREMIUM ECONOMY CLASS***");
			break;
		case 3:
			printf("\n ***WELCOME TO BUSINESS CLASS***");
			break;
		case 4:
			printf("\n ***WELCOME TO FRIST CLASS***");
			break;
		default:
			printf("\n dear traveler please choose valid class....");
		}
		printf("\n If you want to modify the class details then press 2 athorwise press 1");
		printf("\n");
		printf("\n 1.Submit");
		printf("\n 2.Back \n");
		scanf("\n %d", &ch1);
	} while (ch1 == 2);
	free(ptr);
}