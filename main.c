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

void player_move(char* game_camp){
	char buffer[256];
	int x,control;
	memset(buffer,' ',255);
	while(1){
		printf("\n");
		draw(game_camp);
		printf("Insert coordinate\n");
		scanf("%s",buffer);
		control = sscanf(buffer,"%d",&x);
		if(control<1)
			printf("Coordinate error: insert a number from 1 to 9\n");
		switch(x){
			case 1:
				if(*(game_camp+1)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+1)='x';
					break;
				}
			case 2:
				if(*(game_camp+3)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+3)='x';
					break;
				}	
			case 3:
				if(*(game_camp+5)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+5)='x';
					break;
				}	
			case 4:
				if(*(game_camp+8)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+8)='x';
					break;
				}	
			case 5:
				if(*(game_camp+10)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+10)='x';
					break;
				}	
			case 6:
				if(*(game_camp+12)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+12)='x';
					break;
				}	
			case 7:
				if(*(game_camp+15)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+15)='x';
					break;
				}	
			case 8:
				if(*(game_camp+17)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+17)='x';
					break;
				}	
			case 9:
				if(*(game_camp+19)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+19)='x';
					break;
				}
			default:
            	printf("Coordinate error: insert a number from 1 to 9\n");	
		}																																			
	}
}
	

int main(){
	char* game_camp;
	game_camp = (char*)malloc(sizeof(char)*3*7);
	init(game_camp);
	player_move(game_camp);
	return 0;
}