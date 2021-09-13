#include <stdio.h>



int debug();
int setUp();
int switchStatement(int input);
int inputint();
float inputfloat();
void backString();
void getDate();





int main(int argc, char *argv[]){

	int input = setUp();
	switchStatement(input);
}








int setUp(){
	int input;
	printf("Enter the number and the following will happen:\n");
	printf("1 - Add 2 numbers \n");
	printf("2 - Multiply 2 numbers \n");
	printf("3 - Read in string and reverse the string as output.\n");
	printf("4 - Output the current date and time\n");	
	scanf("%d", &input);
	return input;
}

int inputint(){
	int num;
	int num2;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter a number: ");
	scanf("%d",&num2);
	int result = num + num2;
	printf("%d", result);
	return result;
}
float inputfloat(){
	float num;
	float num2;
	printf("Enter a number: ");
	scanf("%f", &num2);
	printf("Enter a number: ");
	scanf("%f", &num2);
	float result = num * num2;
	return result;
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




