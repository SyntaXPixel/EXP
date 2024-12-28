#include<stdio.h>
int main(){

int n;
int i;
int j;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            printf("*", j);
        }
        printf("\n");
        
    }

        for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("*", j);
        }
        printf("\n");
        
    }


    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        
    }


    for (i=n; i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        
    }
    

        for (i=n; i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
        
    }
    
    return 0;
}