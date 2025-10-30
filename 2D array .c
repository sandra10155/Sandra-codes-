/*
Name: Sandra Chepchirchir 
Registration No: PA106/G/28702/25
Description :Program to illustrate 2D array 
*/

    #include <stdio.h>
    #include <stlib.h>
    #include <time.h>
    
int main() {
int occupancy [5] [10];
int floor, room, occupied, vacant;
stand (time (0));
for(floor=0;floor<5;floor++){
occupied=vacant=0;
for (room=0;room<10;room++){
occupancy[floor] [room]=rand()%2;
if (occupancy[floor] [room]==1)
occupied++;
else
vacant++;
}

printf("floor %d ->occupied:%d,vacant: %d\n ",floor+1,occupied,vacant);
}
return 0;
}