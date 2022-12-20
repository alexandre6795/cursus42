  #include <unistd.h>
  #include <stdio.h>
int funct(int *a, int *b);

int main() 
{
    int i1 = 4;
	int i2 = 2;
	funct(&i1, &i2);

	return(0);
 }

int funct(int *a, int *b)
{
	int temp;
 temp = *a;

 *a = *a / *b;
*b = temp % *b; 

printf("%d\n", *a);
printf("%d\n", *b);
write (1, &a, 1);
return(0);

	
}
