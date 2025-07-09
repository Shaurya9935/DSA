#include<stdio.h>
int main()
{
    int a=0, b=1, c, n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        if(i <= 1)
        {
            c = i;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);  // Added space for readability
    }
    return 0;
}


