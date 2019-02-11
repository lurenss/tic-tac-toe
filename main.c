#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


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

void ia(char* game_camp){
	int x;
	int flag=1;
	srand(time(NULL));
	do{
		x=rand()%9;
		switch(x){
			case 1:
				if(*(game_camp+1)!=' '){
					break;		
				}
				else{
					*(game_camp+1)='o';
					flag=0;
					break;
				}
			case 2:
				if(*(game_camp+3)!=' '){
					break;
				}	
				else{
					*(game_camp+3)='o';
					flag=0;
					break;
				}	
			case 3:
				if(*(game_camp+5)!=' '){
					break;
				}	
				else{
					*(game_camp+5)='o';
					flag=0;
					break;
				}	
			case 4:
				if(*(game_camp+8)!=' '){
					break;
				}	
				else{
					*(game_camp+8)='o';
					flag=0;
					break;
				}	
			case 5:
				if(*(game_camp+10)!=' '){
					break;
				}	
				else{
					*(game_camp+10)='o';
					flag=0;
					break;
				}	
			case 6:
				if(*(game_camp+12)!=' '){
					break;
				}	
				else{
					*(game_camp+12)='o';
					flag=0;
					break;
				}	
			case 7:
				if(*(game_camp+15)!=' '){
					break;
				}	
				else{
					*(game_camp+15)='o';
					flag=0;
					break;
				}	
			case 8:
				if(*(game_camp+17)!=' '){
					break;
				}	
				else{
					*(game_camp+17)='o';
					flag=0;
					break;
				}	
			case 9:
				if(*(game_camp+19)!=' '){
					break;
				}	
				else{
					*(game_camp+19)='o';
					flag=0;
					break;
				}
			default:
            	printf("Coordinate error: insert a number from 1 to 9\n");	
		}
	}
	while(flag);	

}

void game(char* game_camp){
	if((*(game_camp+1)=='x' && *(game_camp+3)=='x' && *(game_camp+5)=='x') || (*(game_camp+8)=='x' && *(game_camp+10)=='x' && *(game_camp+12)=='x') || 
		(*(game_camp+15)=='x' && *(game_camp+17)=='x' && *(game_camp+19)=='x') || (*(game_camp+1)=='x' && *(game_camp+8)=='x' && *(game_camp+15)=='x')
		|| (*(game_camp+3)=='x' && *(game_camp+10)=='x' && *(game_camp+17)=='x') || (*(game_camp+5)=='x' && *(game_camp+12)=='x' && *(game_camp+19)=='x')
		|| (*(game_camp+1)=='x' && *(game_camp+10)=='x' && *(game_camp+19)=='x') ||(*(game_camp+5)=='x' && *(game_camp+10)=='x' && *(game_camp+15)=='x'))

		printf("You win\n");
	else{
		if((*(game_camp+1)=='o' && *(game_camp+3)=='o' && *(game_camp+5)=='o') || (*(game_camp+8)=='o' && *(game_camp+10)=='o' && *(game_camp+12)=='o') || 
			(*(game_camp+15)=='o' && *(game_camp+17)=='o' && *(game_camp+19)=='o') || (*(game_camp+1)=='o' && *(game_camp+8)=='o' && *(game_camp+15)=='o')
			|| (*(game_camp+3)=='o' && *(game_camp+10)=='o' && *(game_camp+17)=='o') || (*(game_camp+5)=='o' && *(game_camp+12)=='o' && *(game_camp+19)=='o')
			|| (*(game_camp+1)=='o' && *(game_camp+10)=='o' && *(game_camp+19)=='o') ||(*(game_camp+5)=='o' && *(game_camp+10)=='o' && *(game_camp+15)=='o'))

			printf("You lose\n");
		else{
			if(*(game_camp+1)!=' ' && *(game_camp+3)!=' ' && *(game_camp+5)!=' ' && *(game_camp+8)!=' ' && *(game_camp+10)!=' ' && *(game_camp+12)!=' '  
				&& *(game_camp+15)!=' ' && *(game_camp+17) !=' ' && *(game_camp+19)!=' ')

				printf("Draw \n"); 

		}	
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
					ia(game_camp);
					game(game_camp);
					break;
				}
			case 2:
				if(*(game_camp+3)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+3)='x';
					ia(game_camp);
					game(game_camp);
					break;
				}	
			case 3:
				if(*(game_camp+5)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+5)='x';
					ia(game_camp);
					game(game_camp);
					break;
				}	
			case 4:
				if(*(game_camp+8)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+8)='x';
					ia(game_camp);
					game(game_camp);
					break;
				}	
			case 5:
				if(*(game_camp+10)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+10)='x';
					ia(game_camp);
					game(game_camp);
					break;
				}	
			case 6:
				if(*(game_camp+12)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+12)='x';
					ia(game_camp);
					game(game_camp);
					break;
				}	
			case 7:
				if(*(game_camp+15)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+15)='x';
					ia(game_camp);
					game(game_camp);
					break;
				}	
			case 8:
				if(*(game_camp+17)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+17)='x';
					ia(game_camp);
					game(game_camp);
					break;
				}	
			case 9:
				if(*(game_camp+19)!=' '){
					printf("Position already occupied\n");
					break;
				}	
				else{
					*(game_camp+19)='x';
					ia(game_camp);
					game(game_camp);
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