#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev=0,t;
    printf("enter a number\n");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
                   rev=rev*10;
                   rev=rev+t%10;
                   t=t/10;
    }
    if(n==rev)
               printf("%d is a palindrome\n ",n);
    else
               printf("%d is not a palindrome\n",n);
    return 0;
}
