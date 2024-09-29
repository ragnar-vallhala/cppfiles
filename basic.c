#include<stdio.h>
int main()
{
  // char ch = 'a';          // character char
  // char* name = "267834"; // string char*
  // printf("%s\n",name);  // %s is for string
  // printf("%c\n",ch);    // %c is fro character
  
  // ASCII charcter set
  // a -> 97 
  // A -> 65
  // 1 -> 49
  
  // char a;
  // scanf("%c",&a);
  // printf("%d\n",a);
  // int a;
  // scanf("%d",&a);
  // printf("%c\n",a);
  
  /*int age;
  printf("Enter your age: ");
  scanf("%d",&age);

  if(age>=20)
  {
    printf("You are adult\n");
  }
  else if(age<=18 && age>=13)
  {
    printf("You are teen\n");
  }
  else if(age<13 && age>3)
  {
    printf("You are kid\n");
  }
  else
  {
    printf("You are infant\n");
  }


  printf("Program completed\n");
  */
  int n;
  scanf("%d",&n);
  /*if(n%2==0)
  {
    if(n%3==0)
    {
      printf("Divisible by both 2 and 3.\n");
    }
    else
    {
      printf("Only divisible by 2.\n");
    }
  }
  else if(n%3==0)
  {
    printf("Divisible by only 3.\n");
  }
  else
  {
    printf("Divisible by none of the 2 and 3\n");
  }
  */
  
  if(n%6==0)
  {

      printf("Divisible by both 2 and 3.\n");
  }
  else if(n%2==0)
  {

      printf("Only divisible by 2.\n");
  }
  else if(n%3==0)
  {

    printf("Divisible by only 3.\n");
  }
  else
  {

    printf("Divisible by none of the 2 and 3.\n");
  }

  return 0;
}
