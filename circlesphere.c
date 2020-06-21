#include<stdio.h>
#define PI 3.14
#include<math.h>

//Write four functions described below. - circleCircumference receives radius and returns circle’s circumference. 
//- circleArea receives radius and returns circle’s area. 
//- sphereArea receives radius and returns sphere’s area. 
//- sphereVolume receives radius and returns sphere’s volume. 
//Select appropriate data types for function arguments and return types for the functions. 
//Use the functions in a program that asks user to enter radius and computes and displays circle circumference, circle area, sphere area, and sphere volume. 

float circleArea(int r);
float circleCircumference(int r);
float areaSphere(int r);
float volumeSphere(int r);

int main(){
	
	int n;
	char x,y,z;
	printf("Please enter a radius:");
	scanf("%d",&n);
	
	printf("Press 'D' to perform circle related operations, and 'S' to perform globe related operations.");
	scanf(" %c",&x);
	switch(x){
		
		case 'D':
			printf("\nIf you want to calculate the perimeter, press 'c' and 'a' for the field.");
			scanf(" %c",&y);
			if(y=='c'){
				printf("\nCircumference of the circle:%.2f",circleCircumference(n));
			}
			else if(y=='a'){
				printf("\nArea of the circle:%.2f",circleArea(n));
			}
			else{
				printf("\nPlease enter 'c' or 'a' .");
			}
			break;
		case 'S':
		    printf("\nIf you want to calculate the area press 'a' and 'v' for the volume.");
			scanf(" %c",&z);	
			if(z=='a'){
				printf("\nArea of sphere:%.2f",areaSphere(n));
			}
			else if(z=='v'){
				printf("\nVolume of sphere:%.2f",volumeSphere(n));
			}
			else{
				printf("\nPlease enter 'a' or 'v' .");
			}
			break;
		default:
		    printf("Please enter 'D' or 'S' .");
			break;	
	}
	
	return 0;
}

float circleArea(int r){
	
	float circle_area=PI*r*(r*1.0);
	
	return circle_area;
	
}
float circleCircumference(int r){
	
	float circle_circumference=2*PI*(r*1.0);
	
	return circle_circumference;
	
}
float areaSphere(int r){
	
	float area_sphere=4*PI*(r*r*1.0);
	
	return area_sphere;
}
float volumeSphere(int r){
	
	float volume_sphere=(4/3.0)*PI*(r*r*r*1.0);
	
	return volume_sphere;
	
}

