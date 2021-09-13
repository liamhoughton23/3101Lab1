#include <stdio.h>



int setUp();


int main(int argc, char *argv[]){
	int input = setUp();
	printf("%d", input);


}


int setUp(){
	int input;
	printf("Enter the number and the following will happen:\n ");
	printf("1 - Add 2 numbers \n");
	printf("2 - Multiply 2 numbers \n");
	printf("3 - Read in string and reverse the string as output.\n");
	printf("4 - Output the current date and time\n");
	scanf("%d", &input);
       	return input;	



}
