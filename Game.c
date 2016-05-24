#include<stdio.h>
#include<time.h>
int roll(char* dice, int size){
	// Use this for rolling dice. Don't call the convert function just used inside of here
	int a = 1, b = 6;
	dice[0]=((rand() % (b-a+1)) + a);
	dice[1]=((rand() % (b-a+1)) + a);
	convert(dice, 1); //0,1
}
int convert(char* dice, int size){
	int x;
	for(x = 0; x <= 1; x++){
		if(dice[x] == 1){
			dice[x] == '?';
		}
    }
}
