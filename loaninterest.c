#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int loopyear=1;
int year=0;
float capital=0;
float capitalrounded=0;
float interestrate=0;
float interest=0;
float interestrounded=0;


printf ("please enter your capital sum in pence\n");
scanf("%f",&capital);

printf ("please enter your rate of interest\n");
scanf("%f",&interestrate);

printf ("please enter the loan period in years\n");
scanf("%d",&year);

printf ("Year Interest Sum\n");
printf ("----+--------+---\n");

capital=capital/100;


while (year >= loopyear)
{
interest=capital*interestrate/100;
capital+=interest;
capitalrounded=capital;
interestrounded=interest;
printf ("%d %.2f %.2f \n", loopyear, interestrounded, capitalrounded);


loopyear++;
}


return 0;
}
