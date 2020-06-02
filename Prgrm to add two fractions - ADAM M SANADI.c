#include <stdio.h>
int main()
{
    int a, b,c,d,x,y,i,gcd;
    printf("Enter the numerator for 1st number :\n");
    scanf("%d",&a);
    printf("Enter the denominator for 1st number :\n");
    scanf("%d",&b);
    printf("Enter the numerator for 2nd number :\n");
    scanf("%d",&c);
    printf("Enter the denominator for 2nd number :\n");
    scanf("%d",&d);
    x=(a*d)+(b*c); 
    y=b*d;
    for(i=1; i <= x && i <= y; ++i)
    {
        if(x%i==0 && y%i==0)
            gcd = i;
    }
    printf("The added fraction is %d/%d\n",x/gcd,y/gcd);
    printf("\n");
    return 0;
}