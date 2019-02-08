#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* init(char* game_camp){

	for(int i=0;i<21;i++){
		if((i>=0 && i<=6) || (i>=14 &&i<=20)) {	
			if(i%2==0)		
				*(game_camp+i)='|';
			else
				*(game_camp+i)=' ';
		}
		else{
			if(i%2!=0)		
				*(game_camp+i)='|';
			else
				*(game_camp+i)=' ';	
		}	
	}
	return game_camp;		
}	
	
void draw(char* game_camp){
	for(int i=0;i<21;i++){
		printf("%c",*(game_camp+i));
		if(i==6||i==13||i==20)
			printf("\n");
	}

}

void play(char* game_camp){
	char buffer[256];
	int x
	memset(buffer,' ',255);
	while(gamseisEnd()){
		draw(game_camp);
		printf("Insert coordinate\n");
		scanf(%s,buffer);
		control = sscanf(buffer,"%d",&x);
		if(control<2)
			printf("Coordinate error: insert a nuber from 1 to 9\n");
		switch
	}
}
	

int main(){
	char* game_camp;
	game_camp = (char*)malloc(sizeof(char)*3*7);
	init(game_camp);
	draw(game_camp);
	return 0;
}