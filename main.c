#include <stdio.h>
#define compare(s1,s2) (s1<s2)
#include <stdlib.h>
#include <string.h>

int main() {

  //  1) Write a program that reads an integer and determines and prints whether it is odd or even.

    int number;
    printf("Please enter a number: ");
    scanf("%d",&number);

    if(number%2 == 0 )
        printf("Number is even !");
     else
         printf("Number is odd !");

// -------------------------------------------------------------------------------------------------------------------

//2) Write a program that prompts the user to enter two integers,
// then compares these numbers and prints the larger number followed by the words “is larger than” smaller number.
// If the numbers are equal, print “Two integers are equal.
        int s1,s2;
        printf("Please enter two number :  ");
        scanf("%d %d",&s1,&s2);

        if (compare(s1,s2) == 1) printf("%d is greater than %d",s2,s1);
        else if( s1 == s2 ) { printf("Numbers are equal !");}
        else  { printf("%d is greater than %d",s1,s2);}

// -------------------------------------------------------------------------------------------------------------------

    //3) A mail order house sells five different products whose retail prices are: product 1 $2.98, product 2$4.50, product 3$9.98, product 4$4.49 and product 5$6.87.
// Write a program that reads a series of pairs of numbers as follows: a.product number b.quantity sold .
// Your program should use a if-else/switch statement to determine the retail price for each product.
// Your program should calculate and display the total retail value of all products sold.

    int choice,q1,q2,q3,q4,q5;
    float cost1=0,cost2=0,cost3=0,cost4=0,cost5=0,total=0;

    do {

        printf("product 1 = $2.98\n"
               "product 2 = $4.50\n"
               "product 3 = $9.98\n"
               "product 4 = $4.49\n"
               "product 5 = $6.87\n\n"
               "(Enter 7 for exit!)\n"
               "(Enter 8 to reset your cart! )\n");
        total= cost1+cost2+cost3+cost4+cost5;
        printf("\nTotal Price: %.2f\n \n",total);
        printf("Enter the product number you want to buy : ");
        scanf("%d",&choice);


        switch (choice){
            case 1:
                printf("Quantitiy: ");
                scanf("%d",&q1);
                fgetc(stdin);
                cost1 = q1*2.98;
                printf("It costs %.2f \n",cost1);
                printf("Do you want to buy it (Type Y for yes and No for N,ignore capslock): ");
                char c;
                scanf("%c",&c);
                if( c == 'Y'|| c == 'y' )
                { continue;}
                else if  (c == 'N' || c == 'n' ){
                    cost1 = 0;

                }
                break;
            case 2:
                printf("Quantitiy: ");
                scanf("%d",&q2);
                fgetc(stdin);
                cost2 = q2*4.50;
                printf("It costs %.2f ",cost2);
                printf("Do you want to buy it (Type Y for yes and No for N,ignore capslock): ");
                char d;
                scanf("%c",&d);
                if(d == 'Y'|| d == 'y' )
                { continue;}
                else if (d == 'N'|| d == 'n' )
                {
                    cost2= 0;

                }
                break;
            case 3:
                printf("Quantitiy: ");
                scanf("%d",&q3);
                fgetc(stdin);
                cost3 = q3*9.98;
                printf("It costs %.2f ",cost3);
                printf("Do you want to buy it (Type Y for yes and No for N,ignore capslock): ");
                char e;
                scanf("%c",&e);
                if(e == 'Y' || e == 'y' )
                { continue;}
                else if (e == 'N' || e == 'n' )
                {
                    cost1 = 0;

                }
                break;
            case 4:
                printf("Quantitiy: ");
                scanf("%d",&q4);
                fgetc(stdin);
                cost4 = q4*4.49;
                printf("It costs %.2f ",cost4);
                printf("Do you want to buy it (Type Y for yes and No for N,ignore capslock): ");
                char f;
                scanf("%c",&f);
                if(f == 'Y' || f== 'y' )
                { continue;}
                else if (f == 'N' || f == 'n' )
                {
                    cost1 = 0;

                }
                break;
            case 5:
                printf("Quantitiy: ");
                scanf("%d",&q5);
                fgetc(stdin);
                cost5= q5*6.87;
                printf("It costs %.2f ",cost5);
                printf("Do you want to buy it (Type Y for yes and No for N,ignore capslock): ");
                char g;
                scanf("%c",&g);
                if(g == 'Y' || g== 'y' )
                { continue;}
                else if (g == 'N' || g == 'n' )
                {
                    cost1 = 0;

                }
                break;
            case 7:
                break;
            case 8: cost1=0,cost2=0,cost3=0,cost4=0,cost5=0,total=0;
                q1=0,q2=0,q3=0,q4=0,q5=0;
                break;
            default:
                printf("Invalid Choice! ");
                break;
        }
        choice =7;
    }
    while (choice != 7);
    printf("Billing price: %.2f",total);

// -------------------------------------------------------------------------------------------------------------------

//4) Nested loops

int i,j,k,l,m,n,a,b;
    for (m = 0;  m <5 ; m++) {
        for (n = 0; n <5 ; n++) {
            printf("\t*");
        }
        printf("\n");
    }

    for (i = 0; i<5 ; i++) {
        for (j= 0;  j<i ; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (k = 0; k <6 ; k++) {
        for (l = 0; l<=k ; l++) {
            if (k == 5 || k == 0 || l == k || l == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    for (a = 0;  a<5 ; a++) {
        for (b = 0; b<6 ; b++) {
            if (a ==0 || a == 4 || b == 0 || b == 5 )
            {
                printf("\t*");
            }
            else printf("\t ");
        }
        printf("\n");
    }

// -------------------------------------------------------------------------------------------------------------------


    return 0;
}
