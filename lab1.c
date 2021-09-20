#include <stdio.h>
#include <string.h>
#include <time.h>

int setUp(int debug);
int switchStatement(int input, int debug);
int inputint(int debug);
float inputfloat(int debug);
void backString(int debug);
void getDate();

int main(int argc, char *argv[]){
	int debug = 0;
	if(argv[1] == NULL){
		fprintf(stderr, "Error: Usage: %s [debug | no-debug]\n", argv[0]);
		return 1;
	}
	else if(strcmp("debug", argv[1]) == 0){
		debug = 1;
		int input = setUp(debug);
		switchStatement(input, debug);
		while(input != 5){
			input = setUp(debug);
			switchStatement(input, debug);
		}
	}
	else if(strcmp("no-debug", argv[1]) == 0){
		int input = setUp(debug);
		switchStatement(input, debug);
		while(input != 5){
			input = setUp(debug);
			switchStatement(input, debug);
		}
	}
	else{
		fprintf(stderr, "Error: Usage: %s [debug | no-debug]\n", argv[0]);
		return 1;
	}
	return 0;
}

int setUp(int debug){
	int input;
	fprintf(stderr, "Choose from a list:\n");
	fprintf(stderr, "1 - Add 2 numbers \n");
	fprintf(stderr, "2 - Multiply 2 numbers \n");
	fprintf(stderr, "3 - Read in string and reverse the string as output.\n");
	fprintf(stderr, "4 - Output the current date and time\n");
	fprintf(stderr, "5 - Exit\n");	
	scanf("%d", &input);
	if(debug == 1){
		fprintf(stderr, "The input is: %d\n", input);
	}
	return input;
}

int switchStatement(int input, int debug){
	switch(input){
			case 1:
				inputint(debug);
				break;
			case 2:
				inputfloat(debug);
				break;
			case 3:
				backString(debug);
				break;
			case 4:
				getDate(debug);
				break;
			case 5:
				break;
	}
	return 0;
}

int inputint(int debug){
	int num, num2;
	fprintf(stderr, "Enter a number: ");
	scanf("%d", &num);
	if(debug == 1){
		fprintf(stderr, "The first number is: %d\n", num);
	}	
	fprintf(stderr, "Enter a number: ");
	scanf("%d",&num2);
	if(debug == 1){
		fprintf(stderr, "The second number is: %d\n", num2);
	}
	int result = num + num2;
	fprintf(stderr, "Sum is: %d\n", result);
	return result;
}
float inputfloat(int debug){
	float num, num2;
	fprintf(stderr, "Enter a number: ");
	scanf("%f", &num);
	if(debug == 1){
		fprintf(stderr, "The first number is: %0.3f\n", num);
	}	
	fprintf(stderr, "Enter a number: ");
	scanf("%f", &num2);
	if(debug == 1){
		fprintf(stderr, "The second number is: %0.3f\n", num2);
	}
	float result = num * num2;
	fprintf(stderr, "Product is %0.3f\n", result);
	return result;
}



void backString(int debug){
	char phrase[100];
	getchar(); //to clear the buffer from scanf
	fprintf(stderr, "Enter a phrase: ");
	fgets(phrase, 100, stdin);
	phrase[strlen(phrase) - 1] = '\0';
	if(debug == 1){
		fprintf(stderr, "The string is \"%s\"\n", phrase);
	}
	for(int i = strlen(phrase); i >= 0; i--){
		fprintf(stderr,  "%c", phrase[i]);
	}
	fprintf(stderr, "\n");

}


void getDate(){
		time_t mytime;
		mytime = time(NULL);
		fprintf(stderr, "%s",ctime(&mytime));
}








