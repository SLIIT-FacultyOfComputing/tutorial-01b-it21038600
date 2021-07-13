/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int marks1,marks2;
  float average;

 
  printf("marks 1:");
 
  scanf("%d",&marks1 );
 
  printf("marks 2:");
  
  scanf("%d",&marks2);
  
  average = (marks1 + marks2)/2;
 
  printf("%.2f",average);
  
  return 0;
}

