#include <stdio.h>

int main()
{
	int number, is_prime=1,i;
	scanf("%d", &number);
	//your code here
	//hint : loop through all the numbers less than number and see if any of them divides it
    if (number<=1) is_prime = 0;
    if (number==2 || number==3) is_prime = 1;
    if (number%2==0 || number%3==0) is_prime = 0;
    
    for (i=5; i*i<=number; i+=6) 
        if (number%i==0 || number%(i+2)==0){
            is_prime=0;
            break;
        }
	
	if (is_prime == 1) printf("yes");
	if (is_prime == 0) printf("no");
	return 0;
}