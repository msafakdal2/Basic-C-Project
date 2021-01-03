 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <math.h>
 
 double calculateCharges(int);
 
 int main(void)
 {
     int hour2;
 
     for(int i = 1;i<=3;++i)
     {
 
     printf("%d. the customer's parking hour",i);    scanf("%d",&hour2);
 
 
     printf("%d. the customer parking charges : %f",i,calculateCharges(hour2)); puts("");
 
     }
 }
 double calculateCharges(int hour){
     float  charges = 0;
 
         if(hour <= 3)
             charges += 2;
      else  if(hour > 3 && hour != 24)
             charges += 2 + (hour - 3) * 0.5;
      else   if(hour == 24)
             charges += 10;
 
     return charges;
 }
