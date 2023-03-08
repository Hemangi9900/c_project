#include<stdio.h>
int main()
{
	int d,m,y;
    char flight_name[100];
	printf("\n please choose your travelling date(day-month-year) := ");
	scanf("%d-%d-%d",&d,&m,&y);
    if(y>=2023 && y<=2050)
    {
        if(m>=1 && m<=12)
        {
            if(y%4==0 && m==2 && d<=29)
            {
                printf("\n no. flight name                      \t    timing  \n");
                printf("\n 1. Vistara               \t      9:45(A.M)        6:50(p.m)");
                printf("\n 2. IndiGo                \t      10:45(A.M)       7:50(p:m)");
                printf("\n 2. IndiGo                \t      8:45(A.M)        5:30(p:m)");
                printf("\n 3. AirIndia              \t      10:45(A.M)       6:35(p:m)");
                printf("\n 4. SpiceJet              \t      9:00(A.M)        9:45(p:m)");
                printf("\n 5. AirAsia               \t      10:30(A.M)       10:30(p:m)");
                printf("\n 6. GoAir                 \t      11:45(A.M)       11:00(p:m)");
                printf("\n 7. AirExpress            \t      9:45(A.M)        9:15(p:m)");
                printf("\n 8. AllianceAir           \t      9:15(A.M)        8:30(p:m)");
                printf("\n choose your flight as per as root := ");
                scanf("%s",flight_name);
            }
            else if(m==2 && d<=28)
            {
                printf("\n no. flight name                      \t    timing  \n");
                printf("\n 1. Vistara               \t      9:45(A.M)        6:50(p.m)");
                printf("\n 2. IndiGo                \t      10:45(A.M)       7:50(p:m)");
                printf("\n 2. IndiGo                \t      8:45(A.M)        5:30(p:m)");
                printf("\n 3. AirIndia              \t      10:45(A.M)       6:35(p:m)");
                printf("\n 4. SpiceJet              \t      9:00(A.M)        9:45(p:m)");
                printf("\n 5. AirAsia               \t      10:30(A.M)       10:30(p:m)");
                printf("\n 6. GoAir                 \t      11:45(A.M)       11:00(p:m)");
                printf("\n 7. AirExpress            \t      9:45(A.M)        9:15(p:m)");
                printf("\n 8. AllianceAir           \t      9:15(A.M)        8:30(p:m)");
                printf("\n choose your flight as per as root := ");
                scanf("%s",flight_name);
            }
            else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)&& d<=31)
            {
                printf("\n no. flight name                      \t    timing  \n");
                printf("\n 1. Vistara               \t      9:45(A.M)        6:50(p.m)");
                printf("\n 2. IndiGo                \t      10:45(A.M)       7:50(p:m)");
                printf("\n 2. IndiGo                \t      8:45(A.M)        5:30(p:m)");
                printf("\n 3. AirIndia              \t      10:45(A.M)       6:35(p:m)");
                printf("\n 4. SpiceJet              \t      9:00(A.M)        9:45(p:m)");
                printf("\n 5. AirAsia               \t      10:30(A.M)       10:30(p:m)");
                printf("\n 6. GoAir                 \t      11:45(A.M)       11:00(p:m)");
                printf("\n 7. AirExpress            \t      9:45(A.M)        9:15(p:m)");
                printf("\n 8. AllianceAir           \t      9:15(A.M)        8:30(p:m)");
                printf("\n choose your flight as per as root := ");
                scanf("%s",flight_name);
            }
            else if((m==4 || m==6 || m==9 || m==11)&& d<=30)
            {
                printf("\n no. flight name                      \t    timing  \n");
                printf("\n 1. Vistara               \t      9:45(A.M)        6:50(p.m)");
                printf("\n 2. IndiGo                \t      10:45(A.M)       7:50(p:m)");
                printf("\n 2. IndiGo                \t      8:45(A.M)        5:30(p:m)");
                printf("\n 3. AirIndia              \t      10:45(A.M)       6:35(p:m)");
                printf("\n 4. SpiceJet              \t      9:00(A.M)        9:45(p:m)");
                printf("\n 5. AirAsia               \t      10:30(A.M)       10:30(p:m)");
                printf("\n 6. GoAir                 \t      11:45(A.M)       11:00(p:m)");
                printf("\n 7. AirExpress            \t      9:45(A.M)        9:15(p:m)");
                printf("\n 8. AllianceAir           \t      9:15(A.M)        8:30(p:m)");
                printf("\n choose your flight as per as root := ");
                scanf("%s",flight_name);
            }
            else
            {
                printf("\n pleanse enter valid date ....");
            }
        }
        else
        {
            printf("\n input invalid...");
        }
    }
	return 0;

}
