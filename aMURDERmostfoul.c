//Louis Bub Dan EOTY group project
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
int main(void)
    {
     int culprit, mg=1, mw=1, ms=1, mb=1, pp=1, cm=1, oneperson, result, oneroom, val, oneweapon, check, randperson, randroom, randweapon, person, room, weapon, choice, test=0, hall=1, dr=1, kit=1, patio=1, observe=1, theater=1, gh=1, lr=1, spa=1, knife=1, candlestick=1, pistol=1, poison=1, trophy=1, rope=1, bat=1, ax=1, dumbbell=1, dummy;
     
    srand( time(NULL) );
    int a = 1, b = 6;
	randperson=((rand() % (b-a+1)) + a);
	int c = 1, d = 6;
	randroom=((rand() % (d-c+1)) + c);
	int e = 1, f = 6;
	randweapon=((rand() % (f-e+1)) + e);
     
     printf("Would you like to check an option off or choose a culprit? Enter 1 for check off2 for choose, or 3 to exit this menu.\n");
     scanf("%d",&test);
     while(test==1)
     {
     if(test==1)
     {
      choice=0;
      check=0;
      printf("Enter 1 if you want to check a person off. If not, enter 2.\n");
      scanf("%d",&choice);
      if(choice==1)
      {
      printf("Which person do you want to check off? If none, enter 7.\n");
      if(cm==1)
      {
      printf("1:Colonel Mustard");
      } 
      if(pp==1)
      {
      printf(" 2:Professer Plum");
      }
      if(mb==1)
      {
       printf(" 3:Mrs. Blue");
      }
      printf("\n");
      if(ms==1)
      {
       printf("4:Miss Scarlet");
       }
      if(mw==1)
      {
       printf(" 5:Mrs. White");
      }
      if(mg==1)
      {
       printf(" 6:Mr. Green");
       }
       printf("\n*already checked off below*\n");
       if(cm==0)
      {
      printf("1:Colonel Mustard");
      } 
      if(pp==0)
      {
      printf(" 2:Professer Plum");
      }
      if(mb==0)
      {
       printf(" 3:Mrs. Blue\n");
      }

      if(ms==0)
      {
       printf("4:Miss Scarlet");
       }
      if(mw==0)
      {
       printf(" 5:Mrs. White");
      }
      if(mg==0)
      {
       printf(" 6:Mr. Green");
       }
      printf("\n");
      scanf("%d",&check);
      if(check==1)
      {
       cm=0;
      }
      if(check==2)
      {
       pp=0;
      }
      if(check==3)
      {
       mb=0;
      }
      if(check==4)
      {
       ms=0;
      }
      if(check==5)
      {
       mw=0;
      }
      if(check==6)
      {
       mg=0;
      }
      }
      
      choice=0;
      check=0;
      printf("Enter 1 if you want to check a room off. If not, enter 2.\n");
      scanf("%d",&choice);

     if(choice==1)
     {
      printf("Which room do you want to check off? If none, enter 7.\n");
      if(hall==1)
      {
      printf("1:Hall");
      } 
      if(dr==1)
      {
      printf(" 2:Dining Room");
      }
      if(kit==1)
      {
       printf(" 3:Kitchen\n");
      }
      if(patio==1)
      {
       printf("4:Patio");
       }
      if(observe==1)
      {
       printf(" 5:Observatory");
      }
      if(theater==1)
      {
       printf(" 6:Theater\n");
       }
      if(lr==1)
      {
       printf("7:Living Room");
       }
      if(spa==1)
      {
       printf(" 8:Spa");
       }
      if(gh==1)
      {
       printf(" 9:Guest House\n");
       }
       printf("*already checked off below*\n");
       if(hall==0)
      {
      printf("1:Hall");
      } 
      if(dr==0)
      {
      printf(" 2:Dining Room");
      }
      if(kit==0)
      {
       printf(" 3:Kitchen\n");
      }
      if(patio==0)
      {
       printf("4:Patio");
       }
      if(observe==0)
      {
       printf(" 5:Observatory");
      }
      if(theater==0)
      {
       printf(" 6:Theater\n");
       }
      if(lr==0)
      {
       printf("7:Living Room");
       }
      if(spa==0)
      {
       printf(" 8:Spa");
       }
      if(gh==0)
      {
       printf(" 9:Guest House\n");
       }
      printf("\n");
      scanf("%d",&check);
      if(check==1)
      {
       hall=0;
      }
      if(check==2)
      {
       dr=0;
      }
      if(check==3)
      {
       kit=0;
      }
      if(check==4)
      {
       patio=0;
      }
      if(check==5)
      {
       observe=0;
      }
      if(check==6)
      {
       theater=0;
      }
      if(check==7)
      {
       lr=0;
      }
      if(check==8)
      {
       spa=0;
      }
      if(check==9)
      {
       gh=0;
      }
      
      choice=0;
      check=0;
      printf("Enter 1 if you want to check a weapon off. If not, enter 2.\n");
      scanf("%d",&choice);
      if(choice==1)
     {
      printf("Which weapon do you want to check off? If none, enter 10.\n");
      if(knife==1)
      {
      printf("1:Knife");
      } 
      if(candlestick==1)
      {
      printf(" 2:Dining Room");
      }
      if(pistol==1)
      {
       printf(" 3:pistol\n");
      }
      if(poison==1)
      {
       printf("4:Poison");
       }
      if(trophy==1)
      {
       printf(" 5:Trophy");
      }
      if(rope==1)
      {
       printf(" 6:Rope\n");
       }
      if(bat==1)
      {
       printf("7:Bat");
       }
      if(ax==1)
      {
       printf(" 8:Ax");
       }
      if(dumbbell==1)
      {
       printf(" 9:Dumbbell\n");
       }
       printf("*already checked off below*\n");
       if(knife==0)
      {
      printf("1:Knife");
      } 
      if(candlestick==0)
      {
      printf(" 2:Dining Room");
      }
      if(pistol==0)
      {
       printf(" 3:pistol\n");
      }
      if(poison==0)
      {
       printf("4:Poison");
       }
      if(trophy==0)
      {
       printf(" 5:Trophy");
      }
      if(rope==0)
      {
       printf(" 6:Rope\n");
       }
      if(bat==0)
      {
       printf("7:Bat");
       }
      if(ax==0)
      {
       printf(" 8:Ax");
       }
      if(dumbbell==0)
      {
       printf(" 9:Dumbbell\n");
       }
      printf("\n");
      scanf("%d",&check);
      if(check==1)
      {
       knife=0;
      }
      if(check==2)
      {
       candlestick=0;
      }
      if(check==3)
      {
       pistol=0;
      }
      if(check==4)
      {
       poison=0;
      }
      if(check==5)
      {
       trophy=0;
      }
      if(check==6)
      {
       rope=0;
      }
      if(check==7)
      {
       bat=0;
      }
      if(check==8)
      {
       ax=0;
      }
      if(check==9)
      {
       dumbbell=0;
      }
      choice=3;
      test=0;
      printf("Would you like to check an option off or choose a culprit? Enter 1 for check off2 for choose, or 3 to exit this menu.\n");
      scanf("%d",&test);
     }
    }
   }
  }
     if(test==2)
     {
      printf("Enter who you think is the culprit.\n1:Colonel Mustard 2:Professer Plum 3:Mrs. Blue\n4:Miss Scarlet 5:Mrs. White 6:Mr. Green\n");
      scanf("%d",&person);
      printf("Enter what room you think the murder occured in.\n1:Hall 2:Dining Room 3:Kitchen\n4:Patio 5:Observatory 6:Theater\n7:Living Room 8:Spa 9:Guest House\n");
      scanf("%d",&room);
      printf("Enter what weapon you think the murder occured with.\n1:Knife 2:Dining Room 3:pistol\n4:Poison 5:Trophy 6:Rope\n7:Bat 8:Ax 9:Dumbbell\n");
      scanf("%d",&weapon);
      if(person==randperson)
      {
       oneperson=1;
      }
      if(room==randroom)
      {
       oneroom=1;
      }
      if(weapon==randweapon)
      {
       oneweapon=1;
      }
      val=oneperson+oneroom;
      result=val+oneweapon;
      if(result==3)
      {
       printf("Correct, you win.\n");
      }
      if(result!=3)
      {
       printf("You were wrong, you lose, you get nothing, good day sir.\n");
      }
      }
     if(test==3)
     {
      printf("exiting menu...\n");
      }
     scanf("%d",&dummy);
     return 0;
}
