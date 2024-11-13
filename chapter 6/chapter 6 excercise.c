#include <stdio.h>
int main()
{
    // To choose an option between division , multiplication , addition and subtraction//

    int a,b;
    int choice;
    float result;
    printf("Choose an option:\n");
    printf("1.Division between a and b.\n");
    printf("2.Multiplication between a and b.\n");
    printf("3.addition of a and b.\n");
    printf("4.subtraction between a and b.\n");
    printf("Enter your Choice(1 or 2 or 3 or 4):");
    scanf("%d",&choice);
    system("cls");


if (choice == 1)
    {
        //division//

    printf("Choose an option:\n");
    printf("11.Result without typecasting.\n");
    printf("22.Result with typecasting.\n");
    printf("Enter your choice(11 or 22):");
    scanf("%d",&choice);
    system("cls");

    if (choice == 11)
    {
        //without typecasting//

        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = a/b;
        printf("Without typecasting:%.4f\n",result);
    }

    else if (choice == 22)
    {
        //with typecasting//

        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = (float)a/b;
        printf("With typecasting:%.4f\n",result);
    }
    else
    {
        printf("Invalid choice");
    }
}



else if (choice == 2)

{
    //multiplication//



    printf("Choose an option:\n");
    printf("11.Result without typecasting.\n");
    printf("22.Result with typecasting.\n");
    printf("Enter your choice(11 or 22):");
    scanf("%d",&choice);
    system("cls");


    if (choice == 11)
    {
        //without typecasting//

        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = a * b;
        printf("Without typecasting:%.6f\n",result);
    }

    else if (choice == 22)
    {
        //with typecasting//

        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = (float)a*b;
        printf("With typecasting:%.6f\n",result);
    }
    else
    {
        printf("Invalid choice");
    }
}


else if(choice == 3)
{

    //addition//


    printf("Choose an option:\n");
    printf("11.Result without typecasting.\n");
    printf("22.Result with typecasting.\n");
    printf("Enter your choice(11 or 22):");
    scanf("%d",&choice);
    system("cls");

    if (choice == 11)
    {
        //without typecasting//

        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%dd",&b);
        system("cls");
        result = a+b;
        printf("Without typecasting:%.2f\n",result);
    }

    else if (choice == 22)
    {
        //with typecasting//

        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = (float)a+b;
        printf("With typecasting:%.2f\n",result);
    }
    else
    {
        printf("Invalid choice");
    }
}


else if (choice == 4)
{
    //subtraction//

    printf("Choose an option:\n");
    printf("11.Result without typecasting.\n");
    printf("22.Result with typecasting.\n");
    printf("Enter your choice(11 or 22):");
    scanf("%d",&choice);
    system("cls");

    if (choice == 11)
    {
        //without typecasting//

        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = a-b;
        printf("Without typecasting:%.2f\n",result);
    }

    else if (choice == 22)
    {
        //with typecasting//

        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        system("cls");
        result = (float)a-b;
        printf("With typecasting:%.2f\n",result);
    }
    else
    {
        printf("Invalid choice");
    }
}

else
{
    printf("Invalid choice");
}


return 0;
}
