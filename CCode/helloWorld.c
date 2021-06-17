// Hello world program

#include <stdio.h>
void greetings(char name[]);
int main(){
	char name[] = "Alia bhat";
	greetings(name);
}
void greetings(char name[]){
	printf("Hey, where was you? ... %s",name);
}
