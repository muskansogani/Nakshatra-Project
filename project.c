#include <stdio.h>
#include <stdlib.h>
int bicycles = 0, 
    bikes = 0,
    cars = 0,
    buses = 0,
    total_space_consumed = 0,
    total_charges = 0;

char show_menu();    
void show_details();    
void bicycle_count();     
void count_bikes(); 
void count_cars();       
void count_buses();       
void deletion();  
void main()
{
    char confirm_exit;
    char confirm_delete;
    printf("\n\t\tWelcome to the parking lot managment system %c", 1);
    printf("\n----------------------------------------------------");
    while (1)
    {
        switch (show_menu())
        {
        case '1':
            bicycle_count();
            printf("Entry recorded successfully\n");
            break;
        case '2':
            count_bikes();
            printf("Entry recorded successfully\n");
            break;
        case '3':
            count_cars();
            printf("Entry recorded successfully\n");
            break;
        case '4':
            count_buses();
            printf("Entry recorded successfully\n");
            break;
        case '5':
            printf("\n********************************************");
            show_details();
            printf("\n********************************************");

            break;
        case '6':
            printf("\nAre you sure you want to DELETE ALL details ? Press y/Y to confirm : ");
            getchar();
            scanf("%c", &confirm_delete);
            if (confirm_delete == 'y' || confirm_delete == 'Y')
            {
                deletion();
            }
            break;
        case '7':
            printf("\nAre you sure you eant to EXIT the program ? Press y/Y to confirm : ");
            getchar();
            scanf("%c", &confirm_exit);
            if (confirm_exit == 'y' || confirm_exit == 'Y')
            {
                exit(0);
            }
            break;
        default:
            printf("\nPlease select valid code\n");
        }
        getchar(); //gets the enter hitted by user
    }
}
void bicycle_count()
{
    if (bicycles < 200)
    {
        bicycles++;
        total_charges += 5;
        total_space_consumed++;
    }
    else
        printf("\nSorry, no free space left for cycle parking.");
}
void count_bikes()
{
    if (bikes < 150)
    {
        bikes++;
        total_charges += 10;
        total_space_consumed++;
    }
    else
        printf("\nSorry, no free space left for motor-bike parking.");
}
void count_cars()
{
    if (cars < 100)
    {
        cars++;
        total_charges += 20;
        total_space_consumed++;
    }
    else
        printf("\nSorry, no free space left for care parking.");
}
void count_buses()
{
    if (buses < 15)
    {
        buses++;
        total_charges += 20;
        total_space_consumed++;
    }
    else
        printf("\nSorry, no free space left for bus parking.");
}
void deletion()
{
    bicycles = 0,
    bikes = 0,
    cars = 0,
    buses = 0,
    total_space_consumed = 0,
    total_charges = 0;
}
void show_details()
{
    printf("\n\t\t\tDETAILS");
    printf("\n1.Bicycle Details - ");
    printf("\nTotal Bicycles Parked : %d", bicycles);
    printf("\nTotal Free Space Left For Bicycles : %d/200", 200 - bicycles);
    printf("\nTotal Amount Received For Bicycles : %d", bicycles * 5);

    printf("\n\n2.Bike Details - ");
    printf("\nTotal Bikes Parked : %d", bikes);
    printf("\nTotal Free Space Left For Bikes : %d/150", 150 - bikes);
    printf("\nTotal Amount Received For Bikes : %d", bikes * 10);

    printf("\n\n3.Car Details - ");
    printf("\nTotal Cars Parked : %d", cars);
    printf("\nTotal Free Space Left For Cars : %d/100", 100 - cars);
    printf("\nTotal Amount Received For Cars : %d", cars * 20);

    printf("\n\n4.Bus Details - ");
    printf("\nTotal Buses Parked : %d", buses);
    printf("\nTotal Free Space Left For Buses : %d/15", 15 - buses);
    printf("\nTotal Amount Received For Buses : %d", buses * 20);

    printf("\n\nTotal Vehicles Parked : %d", total_space_consumed);
    printf("\nTotal Free Space Left : %d/465", 465 - total_space_consumed);
    printf("\nTotal Amount Earned : %d\n", total_charges);
}
char show_menu()
{
    printf("\nSelect an option :");
    printf("\n1 -> For Bicycle");
    printf("\n2 -> For Bike");
    printf("\n3 -> For Car");
    printf("\n4 -> For Bus");
    printf("\n5 -> Display Details ");
    printf("\n6 -> Delete an entry");
    printf("\n7 -> Exit");
    printf("\nSELECT CODE : ");
    char code_selected;
    scanf("%c", &code_selected);
    return code_selected;
}
