#include<stdio.h>
#include<conio.h>
int main()
{
    /* Percentage Calculator By Divyansh Singh Parihar (cr0tk)*/
    /* Variable's*/
    int maths,phy,chem,total;
    float percentage;
    /* Asking For Inputs From Users*/
    printf("****Welcome To Percentage Calculator****\n");
    printf("Enter The Marks Of Maths : \n ");
    scanf("%d",&maths);
    printf("Enter The Marks Of Physics \n");
    scanf("%d",&phy);
    printf("Enter The Marks Of Chemistry \n");
    scanf("%d",&chem);
    /*Sum Of All The Subjects Marks*/
    total = maths+phy+chem;
    /*Calculating Percentage Of The Subject*/
    percentage = total/3;
    /* Print Results*/
    printf("Your Percentage Is  =  %f",percentage);
    return 0;
}
