#include <stdio.h>
#include <math.h>

double div(double, double);
double modulus(int, int);
// double pow(double,double);
void display();

int main()
{
    int choice;
    double n1, n2, res;
    while (1)
    {
        display();
        printf("enter your choice--->");
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }
        if (choice < 1 || choice > 7)
        {
            fprintf(stderr, "invalid choice");
            continue;
        }
        printf("plz enter first no:");
        scanf("%lf", &n1);
        printf("plz enter second no:");
        scanf("%lf", &n2);

        switch (choice)
        {
        case 1:
            res = n1 + n2;
            break;
        case 2:
            res = n1 - n2;
            break;
        case 3:
            res = n1 * n2;
            break;
        case 4:
            res = div(n1, n2);
            break;
        case 5:
            res = modulus(n1, n2);
            break;
        case 6:
            res = pow(n1, n2);
            printf("Result: %.2lf ^ %.0lf = %.2lf", n1, n2, res);
        }

        break;

        /*if (!isnan(res))
        {
          printf("\nResult of operation is: %.2f\n", res);
        }*/
    };

    return 0;
}

double div(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "INVALID ARGUMENT\n");
        return NAN;
    }
    else
    {
        return a / b;
    }
}

double modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "INVALID ARGUMENT\n");
        return NAN;
    }
    else
    {
        return a % b;
    }
}

void display()
{

    printf("<------------------CALCULATOR--------------->\n");
    printf("SELECT OPERATION\n");
    printf("\n1-->ADDITION");
    printf("\n2-->SUBTRACTION");
    printf("\n3-->MULTIPLICATION");
    printf("\n4-->DIVISION");
    printf("\n5-->MODULUS");
    printf("\n6-->POWER");
    printf("\n7-->EXIT");
}