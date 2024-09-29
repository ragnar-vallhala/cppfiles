#include<stdio.h>

/*
 * Get number of subjects from user
 * Then get marks in each subject from user
 * Calculate the average marks
 */
int main()
{
  int n;
  printf("Enter the number of subjects: ");
  scanf("%d",&n);
  
  float total=0;
  
  /*
   * for(iterator;condition;change)
   * {
   *    code
   * }
   *
  */ 
  
  for(int i=1;i<=n;i=i+1)
  {
      printf("Enter the marks of subject %d: \n",i);
      float marks=0;
      scanf("%f",&marks);
      total=total+marks;
  }
  float avg = total/n;
  printf("Average marks: %f", avg);
  return 0;
}
