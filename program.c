#include <stdio.h>


void seven(int n, int *numbers ){

   for (int i = 0; i < n; i++)
   {
	   // Check if number is evenly divisible by 7
	   if (numbers[i] % 7 == 0)
	   {
		   printf("%d\n", numbers[i]);
	   }
   }

}


int main()
{
	int array_of_numbers[] = {7,14,21,35,28};
	seven(5, array_of_numbers);


	return 0;
}
