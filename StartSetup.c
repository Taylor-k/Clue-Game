#include <stdio.h>
#include <time.h>
void spacer(){
     int x;
     for(x = 0; x < 5; x++){
         printf("\n");
     }
}
void tabSpacer(){
     printf("\t     ");
}
int mainScreen(int pamt){
    int x, dummy;
    spacer();
    for(x = 0; x < 2; x++){
          tabSpacer();
    }
    printf("     Welcome to the game CLUE!");
    spacer();
    for(x = 0; x < 2; x++){
          tabSpacer();
    }
    printf("Please enter the amount of players: ");
    scanf("%d", &pamt);
    if(pamt > 6){
       for(x = 0; x < 2; x++){
          tabSpacer();
       }
       printf("    Error! Max player amount is 6");
       sleep(5000);
       return 0;
    }
    if(pamt < 2){
        for(x = 0; x < 2; x++){
          tabSpacer();
        }
        printf(" Error! Game needs 2 players to play!");
        sleep(5000);
       return 0;    
    }
    system("cls");
    return pamt;
}
