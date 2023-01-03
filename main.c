#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grandtotal=600;
	float phy,maths,computer,english,urdu,pst;
	float total;
	float avg;
	float percentage;
	
	

	printf("Enter the marks of 6 subjects:");
	printf("\nphysics: ");
	scanf("%f",&phy);
	printf("\nmaths: ");
	scanf("%f",&maths);
	printf("\ncomputer: ");
	scanf("%f",&computer);
	printf("\nenglish: ");
	scanf("%f",&english);
	printf("\nurdu: ");
	scanf("%f",&urdu);
	printf("\npst: ");
	scanf("%f",&pst);
	total=phy+maths+computer+english+urdu+pst;
	printf("\nTotal marks: %f",total);
	
	percentage=total/grandtotal*100;
	printf("\npercentage: %f",percentage);
	
	
	
	
	
	
	
	return 0;
}
