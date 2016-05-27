#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_int(int a, int b);
void cardnames(int weapon, int guest, int room);
int main(void)
{
    int weaponcard[9], guestcard[6], roomcard[9], weapon, guest, room, deal=1, totalplayers=6, playernumber=1;

    srand(time(NULL));
    for(deal<totalplayers; deal=1; deal++) //Generates 1 of each card for a player, and prevents cards from being dealt twice.
    {                     
           weapongen:
           weapon = rand() % 9 + 1;
           if(weaponcard[weapon]==1)
                                    goto weapongen;
           else
                                    weaponcard[weapon] = 1;
           guestgen:
           guest = rand() % 6 + 1;
           if(guestcard[guest]==1)
                                    goto guestgen;
           else
                                    guestcard[guest] = 1;
           roomgen:
           room = rand() % 9 + 1;
           if(roomcard[room]==1)
                                    goto roomgen;
           else
                                    roomcard[room] = 1;
                                    
           printf("Player %d:\n",playernumber);
           cardnames(weapon, guest, room);
           playernumber++;
    }
    
    system("pause");
    return 0;
}

void cardnames(int weapon, int guest, int room)
{
     if(weapon==1)
     printf("Your weapon card is Knife.\n");
     else if(weapon==2)
     printf("Your weapon card is Candlestick.\n");
     else if(weapon==3)
     printf("Your weapon card is Pistol.\n");
     else if(weapon==4)
     printf("Your weapon card is Poison.\n");
     else if(weapon==5)
     printf("Your weapon card is Trophy.\n");
     else if(weapon==6)
     printf("Your weapon card is Rope.\n");
     else if(weapon==7)
     printf("Your weapon card is Bat.\n");
     else if(weapon==8)
     printf("Your weapon card is Ax.\n");
     else if(weapon==9)
     printf("Your weapon card is Dumbell.\n");
     
     if(guest==1)
     printf("Your guest card is Mustard.\n");
     else if(guest==2)
     printf("Your guest card is Plum.\n");
     else if(guest==3)
     printf("Your guest card is Green.\n");
     else if(guest==4)
     printf("Your guest card is Peacock.\n");
     else if(guest==5)
     printf("Your guest card is Scarlet.\n");
     else if(guest==6)
     printf("Your guest card is White.\n");
     
     if(room==1)
     printf("Your room card is Hall.\n");
     else if(room==2)
     printf("Your room card is Dining Room.\n");
     else if(room==3)
     printf("Your room card is Kitchen.\n");
     else if(room==4)
     printf("Your room card is Patio.\n");
     else if(room==5)
     printf("Your room card is Observatory.\n");
     else if(room==6)
     printf("Your room card is Theater.\n");
     else if(room==7)
     printf("Your room card is Living Room.\n");
     else if(room==8)
     printf("Your room card is Spa.\n");
     else if(room==9)
     printf("Your room card is Guest House.\n");
}
     
