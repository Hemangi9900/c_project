#include <stdio.h>
#include <string.h>
#include <ctype.h>

//  *****  declare the all structure and nested structure *****

struct fare_class
{
    char fare[20], class[30];
    struct state_city
    {
        char str_from[50], str_to[50];
        char state[50], city[50];
        struct date
        {
            int dd, mm, yyyy;
            char flight_name[50], time[50];
            struct passenger
            {
                int id;
                char first_name[100];
                char last_name[100];
                int moblie_no;
                int age;
                struct login
                {
                    char username[50], password[60];
                } l;
            } c;
        } d;
    } s, f[28], f1[44];
} p, fr[7], cl[5];

// ****  decalre all the funcation  ****

void welcome();
void login();
void passenger();
void city_state();
void state_s();
void city_c();
int avlid(int);
int valid(int *, int *, int *);
void airline();
void s_fare();
void s_class();
void classandfare();
void searchbyid();
void searchbyname();
void delete();
void update();
void insert();
void airline_update();

// ******************   main part of the program  ***************

int main()
{

    welcome();
    login();
    int ch, ch1, n1;

    do
    {
        printf("\n **********   MENU  *********  \n");
        printf("1.Insert the record\n");
        printf("2.Display the record\n");
        printf("3.search the record\n");
        printf("4.Delete the record\n");
        printf("5.Update the record\n");
        printf("6.Exit\n");

        printf("Enter the choise =");
        scanf("%d", &ch);
        printf("\n");
        FILE *F19;
        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            
            F19 = fopen("customers.txt", "r");
            printf("C_name \t  \t C_id \t S_from \t S_to \t Flight_name  \t Time \t Date/month/year \t Fare \t Class \n");
            printf("%s \t %d \t %s \t %s \t  %s \t %s \t %d / %d / %d \t %s \t %s \n", p.s.d.c.first_name, p.s.d.c.id, p.s.str_from, p.s.str_to,p.s.d.flight_name, p.s.d.time, p.s.d.dd, p.s.d.mm, p.s.d.yyyy, p.fare, p.class);
            fclose(F19);
            break;
        case 3:
            printf("1. search by id\n");
            printf("2. search by name\n");

            printf("Enter the choise =");
            scanf("%d", &n1);
            printf("\n");

            switch (n1)
            {
            case 1:
                searchbyid();
                break;

            case 2:
                searchbyname();
                break;
            }
            break;

            case 4:
                delete ();
                break;

            case 5:
                update();
                break;
        }
        printf("If continue with menu enter 1 othewise 0 :=  ");
        scanf("%d", &ch1);
    } while (ch1 == 1);
}

//  *********  start all funcation defination  *********

void welcome()
{
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                     TO                    =");
    printf("\n\t\t\t        =               Airline Ticket              =");
    printf("\n\t\t\t        =               Booking  SYSTEM             =");
    printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\n\n");
}

void passenger()
{
    FILE *f1;
    f1 = fopen("customers.txt", "w");
    
    printf("\n Enter passenger id =");
    scanf("%d",&p.s.d.c.id);

    printf("\n Enter passenger first name :=");
    scanf("%s",p.s.d.c.first_name);


    printf("\n Enter passenger last name :=");
    scanf("%s",p.s.d.c.last_name);

    printf("\n Enter passenger moblie_no :=");
    scanf("%d",&p.s.d.c.moblie_no);

    printf("\n Enter passenger Age :=");
    scanf("%d",&p.s.d.c.age);


    fclose(f1);
    printf("\n");
}

void login()
{
    FILE *f2;

    char username[100], password[20];
    int i, ch, ch1;
    int upper = 0, lower = 0, digit = 0;

    printf(" \n Please Login for app := \n");

    printf("1.Continue with Google \n");
    printf("2.Create New Account\n");
    printf("\n");

    printf("Enter choice number =");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
                f2 = fopen("l1.txt", "w");

                printf("Enter username =");
                scanf("%s", p.s.d.c.l.username);
                printf("\n");

            pas:
                printf("Enter password (include must be uppercase,lowercase,numeric) =");
                scanf("%s", p.s.d.c.l.password);
                fclose(f2);

            for (i = 0; i < strlen(p.s.d.c.l.password); i++)
            {
                if (islower(p.s.d.c.l.password[i]))
                {
                    lower++;
                }
                else if (isupper(p.s.d.c.l.password[i]))
                {
                    upper++;
                }
                else if (isdigit(p.s.d.c.l.password[i]))
                {
                    digit++;
                }
            }

            if (lower != 0 && upper != 0 && digit != 0)
            {
                printf("\n Loging is successful\n");
            }
            else
            {
                printf("\n Incoreect Password! (include must be uppercase,lowercase,numeric) \n");
                goto pas;
            }
            printf("\n");
            break;

        case 2:
                f2 = fopen("l1.txt", "w");
                printf("Enter username =");
                scanf("%s", p.s.d.c.l.username);
                fclose(f2);
                printf("\n");

            pss:
            printf("Enter password (include must be uppercase,lowercase,numeric) =");
            scanf("%s", p.s.d.c.l.password);
            fclose(f2);

            for (i = 0; i < strlen(p.s.d.c.l.password); i++)
            {
                if (islower(password[i]))
                {
                    lower++;
                }
                else if (isupper(p.s.d.c.l.password[i]))
                {
                    upper++;
                }
                else if (isdigit(p.s.d.c.l.password[i]))
                {
                    digit++;
                }
            }

            if (lower != 0 && upper != 0 && digit != 0)
            {
                printf("\n Loging is successful\n");
            }
            else
            {
                printf("\n Incoreect Password! (include must be uppercase,lowercase,numeric) \n");
                goto pss;
            }
            printf("\n");
            break;
    }
}
void city_state()
{
    int ch;
    // about state 
    strcpy(p.f[0].state, "Andhra Pradesh");
    strcpy(p.f[1].state, "Assam");
    strcpy(p.f[2].state, "Bihar");
    strcpy(p.f[3].state, "Chhattisgrah");
    strcpy(p.f[4].state, "New Delhi");
    strcpy(p.f[5].state, "Goa");
    strcpy(p.f[6].state, "Gujarat");
    strcpy(p.f[7].state, "Haryana");
    strcpy(p.f[8].state, "Jammu and Kashmir");
    strcpy(p.f[9].state, "Jharkhand");
    strcpy(p.f[10].state, "Karnataka");
    strcpy(p.f[11].state, "Kerala");
    strcpy(p.f[12].state, "Madhya Pradesh");
    strcpy(p.f[13].state, "Maharashtra");
    strcpy(p.f[14].state, "Odisha");
    strcpy(p.f[15].state, "Punjab");
    strcpy(p.f[16].state, "Rajasthan");
    strcpy(p.f[17].state, "Tamil Nadu");
    strcpy(p.f[18].state, "Himachal Pradesh");
    strcpy(p.f[19].state, "Daman and Diu");
    strcpy(p.f[20].state, "Arunachal Pradesh");
    strcpy(p.f[22].state, "Bihar");
    strcpy(p.f[23].state, "Andaman and Nicobar Islands");
    strcpy(p.f[24].state, "Uttar Pradesh");
    strcpy(p.f[25].state, "Telangana");
    strcpy(p.f[26].state, "West Bengal");
    strcpy(p.f[27].state, "Uttarakhand");

    // about city
    strcpy(p.f1[0].city, "Port Blair");
    strcpy(p.f1[1].city, "Triputi");
    strcpy(p.f1[2].city, "Pasighat");
    strcpy(p.f1[3].city, "Raipur");
    strcpy(p.f1[4].city, "Diu");
    strcpy(p.f1[5].city, "New Delhi");
    strcpy(p.f1[6].city, "Tezpur");
    strcpy(p.f1[7].city, "Rajkot");
    strcpy(p.f1[8].city, "Surat");
    strcpy(p.f1[9].city, "Karnal");
    strcpy(p.f1[10].city, "Shimla");
    strcpy(p.f1[11].city, "Jammu");
    strcpy(p.f1[12].city, "Jamshedpur");
    strcpy(p.f1[12].city, "Ranchi");
    strcpy(p.f1[13].city, "Mysore");
    strcpy(p.f1[14].city, "Agatti");
    strcpy(p.f1[15].city, "Satna");
    strcpy(p.f1[16].city, "Indore");
    strcpy(p.f1[17].city, "Nashik");
    strcpy(p.f1[18].city, "Mumbai");
    strcpy(p.f1[19].city, "Shilong");
    strcpy(p.f1[20].city, "Aizawl");
    strcpy(p.f1[21].city, "Dimapur");
    strcpy(p.f1[22].city, "Jeypore");
    strcpy(p.f1[23].city, "Pondichery");
    strcpy(p.f1[24].city, "Ludhiana");
    strcpy(p.f1[25].city, "Patiala");
    strcpy(p.f1[26].city, "Kota");
    strcpy(p.f1[27].city, "Gangtok");
    strcpy(p.f1[28].city, "Salem");
    strcpy(p.f1[29].city, "Hydrabad");
    strcpy(p.f1[30].city, "Agartala");
    strcpy(p.f1[31].city, "Agra");
    strcpy(p.f1[32].city, "Pantnagr");
    strcpy(p.f1[33].city, "Behala");
    strcpy(p.f1[34].city, "Cooch Behar");
    strcpy(p.f1[35].city, "Panagarh");
    strcpy(p.f1[36].city, "Kolhapur");
    strcpy(p.f1[37].city, "Belgaum");
    strcpy(p.f1[38].city, "Bhavnagar");
    strcpy(p.f1[39].city, "Bokaro");
    strcpy(p.f1[40].city, "satna");
    strcpy(p.f1[41].city, "Kullu");
    strcpy(p.f1[42].city, "Jeypore");
    strcpy(p.f1[43].city, "Pathankot");

    printf("\n 1.for state to state destination");
    printf("\n");
    printf("\n 2.for city to city(one state)");

    printf("\n");
    printf("\n Enter your choice according to your wish= ");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
                state_s(p.f);
                break;

        case 2:
                city_c(p.f1);
                break;
    }
}
void state_s()
{
    FILE *f4;

    char str_from[20], str_to[20];
    int from = 0, to = 0;

rechoice:
    printf("\n");
    printf("\nAndhra Pradesh \nAssam \nBihar \nChhattisgrah \nNew Delhi \nGoa \nGujarat \nHaryana \nJammu and Kashmir \nJharkhand \nKarnataka \nKerala \nMadhya Pradesh \nMaharashtra \nOdisha \nPunjab \nRajasthan \nTamil Nadu \nHimachal Pradesh \nDaman and Diu \nArunachal Pradesh \nBihar \nAndaman and Nicobar Islands \nUttar Pradesh \nTelangana \nWest Bengal \nUttarakhand");

    printf("\n");
    f4 = fopen("customers.txt", "w");
    printf("\nenter the departure destination= ");
    scanf("%s", p.s.str_from);
    
    printf("\n");
    printf("\nenter the final destination= ");
    scanf("%s", p.s.str_to);
    
    fclose(f4);

    if (p.s.str_from != NULL)
    {
        for (int i = 0; i < 28; i++)
        {
            if (strcmp(p.f[i].state, p.s.str_from) != 0)
            {
                from++;
            }
        }
    }

    if (from == 28)
    {
        printf("\n");
        printf("\nyou have inserted wrong infformation");
        goto rechoice;
    }
    else
    {
        printf("\n");
        printf("your departure destination=%s \n", p.s.str_from);
    }

    /////
    if (p.s.str_to != NULL)
    {
        for (int i = 0; i < 28; i++)
        {
            if (strcmp(p.f[i].state, p.s.str_to) != 0)
            {
                to++;
            }
        }
    }

    if (to == 28)
    {
        printf("\n");
        printf("\nyou have inserted wrong infformation");
        goto rechoice;
    }
    else
    {
        printf("\n");
        printf("your final destination=%s \n", p.s.str_to);
    }
}


void city_c()
{
    FILE *f6;

    int from = 0, to = 0;

rechoice:
    printf("\n");
    printf("\nPort Blair || Triputi || Pasighat \nRaipur || Diu || New Delhi \nTezpur || Rajkot || Surat \nKarnal || Shimla || Jammu \nJamshedpur || Ranchi || Mysore \nAgatti || Satna || Indore \nNashik || Mumbai || Shilong || Aizawl \nDimapur || Jeypore || Pondichery \nLudhiana || Patiala || Kota \nGangtok || Salem || Hydrabad \nAgartala || Agra || Pantnagr \nBehala || Cooch Behar || Panagarh \nKolhapur || Belgaum || Bhavnagar \nBokaro || satna || Kullu \nJeypore || Pathankot");
    printf("\n");
    f6 = fopen("customers.txt", "w");
    printf("\nenter the departure destination= ");
    scanf("%s", p.s.str_from);
    
    printf("\n");
    printf("\nenter the final destination= ");
    scanf("%s", p.s.str_to);
    
    fclose(f6);

    if (p.s.str_from != NULL)
    {
        for (int i = 0; i < 44; i++)
        {
            if (strcmp(p.f1[i].city, p.s.str_from) != 0)
            {
                from++;
            }
        }
    }

    if (from == 44)
    {
        printf("\n");
        printf("\nyou have inserted wrong infformation");
        goto rechoice;
    }
    else
    {
        printf("\n");
        printf("your departure destination=%s \n", p.s.str_from);
    }

    ///
    if (p.s.str_to != NULL)
    {
        for (int i = 0; i < 44; i++)
        {
            if (strcmp(p.f1[i].city, p.s.str_to) != 0)
            {
                to++;
            }
        }
    }

    if (to == 44)
    {
        printf("\n");
        printf("\nyou have inserted wrong infformation");
        goto rechoice;
    }
    else
    {
        printf("\n");
        printf("your final destination=%s \n", p.s.str_to);
    }
}


int avlid(int id)
{
    FILE *f8;
    int c = 0;

    f8 = fopen("customers.txt", "r");
    while (!feof(f8))
    {
        fread(&p, sizeof(p), 1, f8);
        if (id == p.s.d.c.id)
        {
            fclose(f8);
            return 1;
        }
    }
    fclose(f8);
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


void airline()
{
    FILE *f10;
    int result;

    f10 = fopen("customers.txt", "w");
    printf("Enter the (date/month/year) : =");
    scanf("%d/%d/%d", &p.s.d.dd, &p.s.d.mm, &p.s.d.yyyy);
    fclose(f10);

    result = valid(&p.s.d.dd, &p.s.d.mm, &p.s.d.yyyy);
    if (result == 0)
    {
        rechoise :
        printf("\n *dear tarvelar select your flight following below* \n");
        printf("\n no. flight name          \t   timing  \n");
        printf("\n 1. Vistara               \t      9:45(a.m) ");
        printf("\n 2. IndiGo                \t      10:45(p.m) ");
        printf("\n 3. AirIndiaExpress       \t      8:45(p.m) ");
        printf("\n 4. AirIndia              \t      10:55(a.m) ");
        printf("\n 5. SpiceJet              \t      9:00(a.m) ");
        printf("\n");
        printf("\n choose your flight as per as root(enter flight name) := ");
        scanf("%s", p.s.d.flight_name);
        printf("\n Enter your time as per as schedule  := ");
        scanf("%s", p.s.d.time);
        if(strcmp(p.s.d.flight_name,"Vistara")==0 && strcmp(p.s.d.time,"9:45(a.m)")==0)
        {
            printf("\n your flight is := %s \n",p.s.d.flight_name);
            printf("\n your flight timing is := %s \n",p.s.d.time);
        }
        else if(strcmp(p.s.d.flight_name,"IndiGo")==0 && strcmp(p.s.d.time,"10:45(p.m)")==0)
        {
            printf("\n your flight is := %s \n",p.s.d.flight_name);
            printf("\n your flight timing is := %s \n",p.s.d.time);
        }
        else if(strcmp(p.s.d.flight_name,"AirIndiaExpress")==0 && strcmp(p.s.d.time,"8:45(p.m)")==0)
        {
            printf("\n your flight is := %s \n",p.s.d.flight_name);
            printf("\n your flight timing is := %s \n",p.s.d.time);
        }
        else if(strcmp(p.s.d.flight_name,"AirIndia")==0 && strcmp(p.s.d.time,"10:55(a.m)")==0)
        {
            printf("\n your flight is := %s \n",p.s.d.flight_name);
            printf("\n your flight timing is := %s \n",p.s.d.time);
        }
        else if(strcmp(p.s.d.flight_name,"SpiceJet")==0 && strcmp(p.s.d.time,"9:00(a.m)")==0)
        {
            printf("\n your flight is := %s \n",p.s.d.flight_name);
            printf("\n your flight timing is := %s \n",p.s.d.time);
        }
        else
        {
            printf("\n please enter valid name ");
            goto rechoise ;
        }
    }
    else
    {
        printf("Invalid Date");
    }
}
void classandfare()
{

    strcpy(fr[1].fare, "Regular Fares");
    strcpy(fr[2].fare, "Armed Force");
    strcpy(fr[3].fare, "Student");
    strcpy(fr[4].fare, "Senior Citizon");
    strcpy(fr[5].fare, "Doctor&Nurses");
    strcpy(fr[6].fare, "Double Seat");

    s_fare(fr);

    strcpy(cl[1].class, "Economy");
    strcpy(cl[2].class, "Premium Economy");
    strcpy(cl[3].class, "Business");
    strcpy(cl[4].class, "First class");

    s_class(cl);
}
void s_fare()
{
    FILE *f11;
    int num_fare;

    printf("\n *** FARE *** ");
    printf("\n 1.Regular Fares");
    printf("\n 2.Armed Force");
    printf("\n 3.Student");
    printf("\n 4.Senior Citizon");
    printf("\n 5.Doctor&Nurses");
    printf("\n 6.Double Seat");

    f11 = fopen("customers.txt", "w");
    printf("\n Dear passenger select your fare type(1 to 4)  := ");
    scanf("%d", &num_fare);
    fclose(f11);
    printf("\n your choosen fare type := %s \n", fr[num_fare].fare);
}

void s_class()
{
    FILE *f12;
    int num_class;

    printf("\n *** CLASS **");
    printf("\n 1.Economy");
    printf("\n 2.Premium Economy");
    printf("\n 3.Business");
    printf("\n 4.First class");
    printf("\n");
    f12 = fopen("customers.txt", "w");
    printf("\n choose your class(1 to 4):= ");
    scanf("%d", &num_class);
    fclose(f12);
    printf("\n your choosen class is=%s\n\n", cl[num_class].class);

    if (num_class == 1)
    {
        printf("Payment RS=20000\n");
    }
    else if (num_class == 2)
    {
        printf("Payment RS=30000\n");
    }
    else if (num_class == 3)
    {
        printf("Payment RS=15000\n");
    }
    else
    {
        printf("Payment RS=25000\n");
    }
}
void searchbyid()
{
    FILE *f9;
    int n, result, s;

    printf("\n passenger  id =");
    scanf("%d", &n);

    result = avlid(n);
    if (result == 0)
    {
        printf("Invalid \n");
    }
    else
    {
        f9 = fopen("customers.txt", "r");
        s = p.s.d.c.id;
        if (s == n)
        {
            printf("valid\n");
        }
        fclose(f9);
    }
}
void searchbyname()
{
    FILE *f13;
    FILE *f17;

    char p_name[50];
    int c = 0;

    printf("Enter passenger name =");
    scanf("%s", p_name);

    f13 = fopen("customers.txt", "r");
    if (strcmp(p_name, p.s.d.c.first_name) == 0)
    {
        printf("valid\n");
        c++;
    }
    if (c == 0)
    {
        printf("No records found in data\n");
    }
    fclose(f13);

    f17 = fopen("customers.txt", "r");
    printf("%s\n", p.s.d.c.first_name);
    fclose(f17);
}
void delete()
{
    FILE *f14;
    FILE *f15;

    int n, s, result;

    printf("Enter passenger id=");
    scanf("%d", &n);

    result = avlid(n);
    if (avlid(n) == 0)
    {
        printf("This id is not avialble\n");
    }
    else
    {
        f14 = fopen("customers.txt", "r");
        f15 = fopen("templfile.txt", "w");

        s = p.s.d.c.id;
        while (fread(&p, sizeof(p), 1, f14))
        {
            if (s != n)
            {
                fwrite(&p, sizeof(p), 1, f15);
            }
        }
        fclose(f14);
        fclose(f15);

        f14 = fopen("customers.txt", "w");
        f15 = fopen("templfile.txt", "r");

        while (fread(&p, sizeof(p), 1, f15))
        {
            fwrite(&p, sizeof(p), 1, f14);
        }
        printf("Record deleted\n");
        fclose(f14);
        fclose(f15);
    }
}
void update()
{
    FILE *f16;
    FILE *f17;
    int n, s, choice, result;

    printf("Enter passenger id=");
    scanf("%d", &n);

    result = avlid(n);
    if (result == 0)
    {
        printf("This id is not avialble\n");
    }
    else
    {
        f16 = fopen("customers.txt", "r");
        f17 = fopen("templfile.txt", "w");
        s = p.s.d.c.id;
        if (s != n)
        {
            fwrite(&p, sizeof(p), 1, f17);
        }
        else
        {
            printf("1.passenger name =\n");
            printf("2.passenger id =\n");
            printf("3.Airline name =\n");

            printf("Enter the choise  =");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("Enter passenger name =");
                scanf("%s", p.s.d.c.first_name);
                break;

            case 2:
                printf("Enter passenger id =");
                scanf("%d", &p.s.d.c.id);
                break;
            case 3:
                airline_update();
            }
            fwrite(&p, sizeof(p), 1, f17);
            fclose(f16);
            fclose(f17);
        }
    }

    f16 = fopen("customers.txt", "w");
    f17 = fopen("templfile.txt", "r");

    while (fread(&p, sizeof(p), 1, f17))
    {
        fwrite(&p, sizeof(p), 1, f16);
    }
    fclose(f16);
    fclose(f17);

    f16 = fopen("customers.txt", "r");
    printf("%s\n", p.s.d.c.first_name);
    fclose(f16);
}
void insert()
{
    passenger();
    city_state();
    airline();
    classandfare();
}
void airline_update()
{
    char update_flight_name[50];
    printf("\n no. flight name ");
    printf("\n 1. Vistara  ");
    printf("\n 2. IndiGo   ");
    printf("\n 2. IndiGo   ");
    printf("\n 3. AirIndia ");
    printf("\n 4. SpiceJet ");
    printf("\n");
    printf("\n choose your update flight as per as root(enter flight name) := ");
    scanf("%s", update_flight_name);
}