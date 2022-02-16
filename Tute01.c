/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int marks1 , marks2;
	float average;
	
	printf("Enter marks of subject 1: ");
	scanf("%d" , &marks1);
   
   printf("Enter marks of subject 2: ");
	scanf("%d" , &marks2);
	
	average = (float) (marks1 + marks2) / 2;
	
	printf("\n");
	printf("The Average of the 2 marks is : %.2f\n" , average);
	
  return 0;
   
}

