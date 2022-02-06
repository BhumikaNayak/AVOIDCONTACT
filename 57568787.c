#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int totalpeople,infectedpeople; //declaration of variables
        scanf("%d %d",&totalpeople,&infectedpeople);
        fflush(stdin);
        
        if(totalpeople==infectedpeople)
        {
            printf("%d\n",2*totalpeople-1);
        }
        else
        {
            printf("%d\n",totalpeople+infectedpeople);
        }
    }
    return 0;
}
//Code By Bhumika Nayak