#include<stdio.h>
int main()
{
    int day,month,year ;
    int x,y;
    // printf("enter day month and year: ");
    // scanf("%d%d%d",&day,&month,&year);
    
    printf("enter day month and year in dd-mm-yyyy formate:");
    scanf("%d-%d-%d",&day,&month,&year);

    printf("day = %d\nmonth = %d\nyear = %d\n",day,month,year);

    // here we wrote two modifire by sepreting # in formate string of scanf() function so if we enter first value of x suppose 15 then 
    // control assign x = 15 but if after entring 15 if we din't enter # and we entered value of y suppose 28 then control will be 
    // assign y = garbage value because in formate string of scanf() function we use sepreter as # so until we will not enter # after value
    // of x then control will not assign y.

    // printf("enter two number: ");
    // scanf("%d#%d",&x,&y);
    // printf("x = %d y = %d\n",x,y);
    
    return 0;
}