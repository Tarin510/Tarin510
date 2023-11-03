#include<stdio.h>
#include<string.h>
struct player

{
  char name[24];
  char country[16];
  int runs;
  double average;
};

int main()
{
 struct player arr[10];

  for(int i=0;i<=10;i++)
  {
      printf("Enter the name for player %d:",i);
      scanf("%s",&arr[i].name);
      printf("Enter the country name for player %d:",i);
      scanf("%s",&arr[i].country);
       printf("Enter the runs for player %d:",i);
      scanf("%d",&arr[i].runs);
      printf("Enter the average for player %d:",i);
      scanf("%lf",&arr[i].average);
  }
double  max=0;
char ans[24];
  for(int i=0;i<10;i++)
  {
      if(arr[i].average>max)
      {

     max=arr[i].average;
    strcpy(ans,arr[i].name);
      }
  }
   printf("%s",ans);

 return 0;


}
