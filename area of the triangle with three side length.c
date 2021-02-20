/*The code calculates the area of the triangle with three side length */

#include<stdio.h>
#include<math.h>
int main(){
	
	float first_side_length;
	float second_side_length;
	float third_side_length;
	float perimeter;
	float u;
	float area;
	
	printf("Please enter the first side length of triangle:");
	scanf("%f",&first_side_length);
	printf("Please enter the second side length of triangle:");
	scanf("%f",&second_side_length);
	printf("Please enter the third side length of triangle:");
	scanf("%f",&third_side_length);
	
	perimeter= first_side_length+second_side_length+third_side_length;
	u=perimeter/2.0;
	area=sqrt(u*(u-first_side_length)*(u-second_side_length)*(u-third_side_length));
	
	
	
	if(first_side_length>perimeter-first_side_length|| first_side_length<abs(second_side_length-third_side_length)||
	second_side_length>perimeter-second_side_length|| second_side_length<abs(first_side_length-third_side_length)||
	third_side_length>perimeter-third_side_length|| third_side_length<abs(second_side_length-first_side_length)){ 
	
	printf("A triangle with these side lengths cannot be drawn.");
}

	else {
	printf("The area of this triangle is %.3f\n",area);	
	
}
return 0;	
}
