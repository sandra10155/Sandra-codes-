/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate 2D array 
*/

    #include <stdio.h>
    #include <stlib.h>
    #include <time.h>
    
int main() {
int chain [3] [5] [10];
int branch,floor, room;
int total occupied=0;
stand (time (0));
for(branch=0;branch<3;branch++){
for (floor=0;floor<5;floor++){
for (room=0;room<10;room++){
chain [branch] [floor] [room]=rand()%2;
if (chain [branch] [floor] [room]==1)
total occupied++;
           }
       }
   }
 printf("total occupied rooms across all branches: %d\n",total occupied );
 
return 0;
}