#include <stdio.h>
#include <string.h>



int setUp();
int switchStatement(int input);
int inputint();
float inputfloat();
void backString();
void getDate();


int debug = 0;


int main(int argc, char *argv[]){
	if(argv[1] == NULL){
		fprintf(stderr, "Error: Usage: %s [debug | no-debug]\n", argv[0]);
		return 1;
	}
	int debugComp = strcmp("debug", argv[1]);
	int nodebugComp = strcmp("no-debug", argv[1]);
	if(debugComp == 0){
		debug = 1;
		int input = setUp();
		switchStatement(input);
		while(input != 5){
			input = setUp();
			switchStatement(input);
		}
	}
	else if(nodebugComp == 0){
		int input = setUp();
		switchStatement(input);
		while(input != 5){
			input = setUp();
			switchStatement(input);
		}
	}


	return 0;
}








int setUp(){
	int input;
	fprintf(stderr, "Enter the number and the following will happen:\n");
	fprintf(stderr, "1 - Add 2 numbers \n");
	fprintf(stderr, "2 - Multiply 2 numbers \n");
	fprintf(stderr, "3 - Read in string and reverse the string as output.\n");
	fprintf(stderr, "4 - Output the current date and time\n");
	fprintf(stderr, "5 - Exit\n");	
	scanf("%d", &input);
	return input;
}

int inputint(){
	int num, num2;
	fprintf(stderr, "Enter a number: ");
	scanf("%d", &num);
	fprintf(stderr, "Enter a number: ");
	scanf("%d",&num2);
	int result = num + num2;
	fprintf(stderr, "Result is: %d\n", result);
	return result;
}
float inputfloat(){
	float num, num2;
	fprintf(stderr, "Enter a number: ");
	scanf("%f", &num);
	fprintf(stderr, "Enter a number: ");
	scanf("%f", &num2);
	fprintf(stderr, "One: %f\nTwo: %f\n", num, num2);
	float result = num * num2;
	fprintf(stderr, "Product is %0.3f\n", result);
	return result;
}



void backString(){
	char phrase[100];
	getchar(); //to clear the buffer from scanf
	fprintf(stderr, "Enter a phrase: ");
	fgets(phrase, 100, stdin);
	phrase[strlen(phrase) - 1] = '\0';
	fprintf(stderr, "The string is \"%s\"\n", phrase);
	for(int i = strlen(phrase); i >= 0; i--){
		fprintf(stderr,  "%c", phrase[i]);
	}
	fprintf(stderr, "\n");

}


void getDate(){

}



int switchStatement(int input){
	
	switch(input){
			case 1:
				inputint();
				break;
			case 2:
				inputfloat();
				break;
			case 3:
				backString();
				break;
			case 4:
				getDate();
				break;
			case 5:
				break;
	}
	return 0;
}




