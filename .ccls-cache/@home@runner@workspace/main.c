#include <stdio.h>
 
//initializes variables

int main(void) {
  int number = 10000;
  int sum = 0;
  
// The while loop prevests numbers over 9999 from being entered into the program. Prints an opening statemnet and accepts user input.
  
while (number > 9999) {
printf("\nThis program accepts a number from a user and checks if the input is a perfect number.\n\nEnter a number less than 10,000: ");
scanf("%d", &number);
}

// The for loop checks if the number is a perfect number and prints the results.    
  
for (int i = 1; i <= number / 2; i++) { 
  if (number % i == 0) {
     sum += i;
  }
}
if ( sum == number) {
  printf("\n%d is a perfect number", number);   
}
if (sum != number) {
  printf("\n%d is not a perfect number", number);
  }

  return 0;
}