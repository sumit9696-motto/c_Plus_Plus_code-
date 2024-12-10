#include <stdio.h>
int main(){
int m,p,c,e,h,t_m;
double presenteg;
 printf("Enter a PHY number Mark: \n"); 
  scanf("%d", &p);
  printf("Enter a math number Mark: \n"); 
  scanf("%d", &m);
  printf("Enter a chem number Mark: \n"); 
  scanf("%d", &c);
  printf("Enter a english number Mark: \n"); 
  scanf("%d", &e);
  printf("Enter a hindi number Mark: \n"); 
  scanf("%d", &h);
t_m=p+m+c+e+h;
presenteg=(t_m/500)*;
if (presenteg<40)
{
    printf("Fail");
}
else if (presenteg>=40&&presenteg<50)
{
    printf("third division");
}
else if (presenteg>=50&&presenteg<60)
{
    printf("second division");
}
else if (presenteg>=60&&presenteg<70)
{
    printf("first division");
}
else if (presenteg=<80)
{
    printf("EXCELENT ");
}
  printf("1 PHY %d \n", p);
  printf("2 che %d \n", c);
  printf("3 math %d \n", m);
  printf("4 english %d \n", e);
  printf("5 hindi %d \n", h);  
  printf("TOTALMARK : %d \n", t_m,);
    printf("presenteg  %lf \n", presenteg);




    return 0;
}