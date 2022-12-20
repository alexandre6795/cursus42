#include <stdio.h>
int fn(int i)
{
	if (i<=5)
	{
		i++;
printf("%d",i);
		fn(i);
printf("%d",i);
}
}
int main()
{
	fn(0);
	return(0);
}
