#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
    int n=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=2; i<=n;i++)
    {
        bool isPrime = true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                isPrime=false;
                break;
            }
        }        
        if(isPrime)
        {
            printf("%d is prime.\n",i);
        }
        else
        {
            printf("%d is not prime.\n",i);
        }
    }
    return 0;
}