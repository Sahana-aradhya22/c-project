#include <stdio.h>

int big3(int, int, int);
int rev(int);
int pal(int);
int fact(int);

int main()
{
    int choice, n, a, b, c;

    printf("1. Largest of 3\n");
    printf("2. Reverse Number\n");
    printf("3. Palindrome Check\n");
    printf("4. Factorial\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            scanf("%d%d%d", &a, &b, &c);
            printf("Largest = %d\n", big3(a,b,c));
            break;

        case 2:
            scanf("%d", &n);
            printf("Reverse = %d\n", rev(n));
            break;

        case 3:
            scanf("%d", &n);
            if(pal(n))
                printf("Palindrome\n");
            else
                printf("Not Palindrome\n");
            break;

        case 4:
            scanf("%d", &n);
            printf("Factorial = %d\n", fact(n));
            break;
    }

    return 0;
}
