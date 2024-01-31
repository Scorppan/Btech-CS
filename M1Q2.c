/*Vibha has a piggybank in which she regularly saves the remaining amount from her expenditure.
The denominations which she saves is of 10,20,50,100. Input the denominations for the
same and calculate the total amount of money she saved.*/
#include<stdio.h>
void main()
{
int num_of_10_coins,num_of_20_coins,num_of_50_coins, num_of_100_coins;
float total_amt=0.0;
printf("\n Enter the number of Rs 10 coins in the piggybank: \n");
scanf("%d",&num_of_10_coins);
printf("\n Enter the number of Rs 20 coins in the piggybank: \n");
scanf("%d",&num_of_20_coins);
printf("\n Enter the number of Rs 50 coins in the piggybank: \n");
scanf("%d",&num_of_50_coins);
printf("\n Enter the number of Rs 100 coins in the piggybank: \n");
scanf("%d",&num_of_100_coins);
total_amt= num_of_10_coins*10+ num_of_20_coins*20+ num_of_50_coins*50+num_of_100_coins*100;
printf("\n Total amount in the piggybank= %.2f rupees",total_amt);
}