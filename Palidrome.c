#include <stdio.h>
main()
{
int n,reversed=0,remainder,original;
printf("enter an integer: ");
scanf("%d",&n);
while (n != 0) {
remainder = n % 10;
reversed = reversed * 10 + remainder;
n /= 10;
if (original == reversed)
printf("%d is a palindrome.", original);
else
printf("%d is not a palindrome.", original);

}
