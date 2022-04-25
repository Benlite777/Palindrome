#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, rev=0, rem=0, temp;
printf("Enter a positive integer\n");
scanf("%d",&num);
temp = num;
while(temp != 0)
{
rem = temp % 10;
temp = temp / 10;
rev = rev * 10 + rem;
}

if(num == rev)
{
printf("%d is a palindrome \n",num);
}
else
{
printf("%d is not a palindrome\n",num);
}
}
