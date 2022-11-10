#include <iostream>
#include <math.h>
#include "Source.h"
using namespace std;

int task1(int a,int b,int c) {
	int s1= ((a + b) * c) / 2; //Trapezoid area
	cout << "Trapezoid area = " << s1;
	return 0;
}
int task2(double a, int b) {
	int c = 2 * a * b; //circumference
	int s2 = a * b * b; //area of a circle
	cout << "Circumference = " << c << " , area of a circle = " << s2;
	return 0;
}
int task3(int x, int y) {
	int c = sqrt(x*x+y*y); //hypotenuse
	int s3 = (x + y) / 2;       //area of a right triangle
	cout << "Hypotenuse = " << c << " , area of a right triangle = " << s3;
	return 0;
}
int task4(int a) {
	int sum = 0;
	while (a > 10) {     //As long as the number has more than 1 digit, we separate the last number using division with a remainder, and then remove the last digit from the number
		sum += a % 10;
		a /= 10;
	}
	sum += a;   //We add to the resulting sum the remaining number (1 digit of the whole number)
	cout << "Tne sum of the digits = " << sum;
	return 0;
}
float task5(float a, float b) {
	float r = sqrt(a * a + b * b);
	float q = asin(b / r);
	cout << "(" << r << " , " << q << ")";
	return 0;
}
float task6(float a, float b) {                     
	float r = sqrt(a * a + b * b);
	float q = asin(b / r);
	float cosa = cos(q);
	float sina = sin(q);
	cout << "(" << cosa << " , " <<sina << ")";
	return 0;
}
int task7(int a, int b, int c) {
	int d = (b * b) - (4 * a * c); //We consider the discriminant
	if (d == 0) //If discriminant = 0, there will be 1 root
	{
		int x1 = (-b + sqrt(d)) / (2 * a);
		cout << "x =" << x1 << endl;
	}
	if (d > 0) //If the discriminant > 0, there will be 2 roots
	{
		int x1 = (-b + sqrt(d)) / (2 * a);
		int x2 = (-b - sqrt(d)) / (2 * a);
		cout << "x1 =" << x1 << endl;
		cout << "x2 =" << x2 << endl;
	}
	if (d < 0) //If the discriminant is less than zero, then there are no roots
	{
		cout << "No roots" << endl;
	}
	return 0;
}
int task8() {
	cout << "Enter the first side of the triangle: " << endl;
	int a;
	cin >> a;
	cout << "Enter the second side: " << endl;
	int b;
	cin >> b;
	cout << "Enter the third side: " << endl;
	int c;
	cin >> c;
	int med1 = (sqrt(2 * a * a + 2 * b * b - c * c)) / 2;   //Calculate the medians of a triangle
	int med2 = (sqrt(2 * a * a + 2 * c * c - b * b)) / 2;
	int med3 = (sqrt(2 * c * c + 2 * b * b - a * a)) / 2;
	int med1_1 = (sqrt(2 * med1 * med1 + 2 * med2 * med2 - med3 * med3)) / 2;   //From the medians of the original triangle, we represent the triangle and find the medians in it
	int med2_2 = (sqrt(2 * med1 * med1 + 2 * med3 * med3 - med2 * med2)) / 2;
	int med3_3 = (sqrt(2 * med3 * med3 + 2 * med2 * med2 - med1 * med1)) / 2;
	cout << "The medians of the triangle are " << med1_1 << " , " << med2_2 << " , " << med3_3;
	return 0;
}
int task9(int a) {
	//1 hour = 3600 sec, 1 day = 86400 sec
	int hour = a / 3600;
	int min = (a - hour * 3600) / 60;
	cout << hour << " hours . " << min<< " minutes";
	return 0;
}
int task10(int a, int b, int c) {
	if (a == b || b == c || a == c) {                  //If 2 sides of a triangle are equal, then the triangle is isosceles
		cout << "The triangle is isosceles ";
	}
	else {
		cout << " The triangle is not isosceles";
	}
	return 0;
}
int task11(int a) {
	if (a > 1000) {                    //We calculate whether there is a discount based on the purchase amount
		int disc = a / 100 * 10;
		int price = a - disc;
		cout << "Purchase amount including discount = " << price;
	}
	else {
		cout << "There is no discount";
	}
	return 0;
}
int task12(int a, int b) {
	int idealw = a - 100;      //We calculate the ideal weight and compare it with the entered one, give recommendations
	if (b < idealw) {
		cout << "You need to gain weight";
	}else if (b > idealw) {
		cout << "You need to lose weight";
	}
	else{
		cout << "You are perfect";
	}
	return 0;
}
int task13() {
	int a = 1 + rand() % 9;      //We choose 2 random numbers from a given interval
	int b = 1 + rand() % 9;
	cout << "The first number: " << a << endl;
	cout << "The second number: " << b << endl;
	system("pause");
	cout << "Enter the product of the two number: " << endl;    //Asking the user to multiply 2 numbers
	int c;
	cin >> c;
	if (c == a * b) {                             //Checking the user's response
		cout << "Right answer";
	}
	else {
		cout << "You made a mistake";
	}
	return 0;
}
int task14() {
	//the cost of a call to tele2 is 3 rubles, we considered further the outcome of this
	cout << "Enter the duration (minutes) of the conversation: " << endl;
	double a;
	cin >> a;
	cout << "Enter the day of week (a number from 1 to 7): " << endl;
	int d;
	cin >> d;
	if (1 <= d && d <= 5) {                                  //We check on which day the conversation took place in order to correctly calculate the cost, since there is a discount on the weekend
		cout << "The cost of the call = " << a * 3;
	}
	else if (d == 6 || d == 7) {
		double c = a * 3;
		double s = c - c * 0.2;
		cout << "The cost of the call with discount = " << s;
	}
	return 0;
}
int task15(){
	cout << "Enter the month number: " << endl;     //Enter the number of the month and check which month and time of year it corresponds to
	int month;
	cin >> month;
	switch (month) {
	case 1:
		cout << "January, winter";
		break;
	case 2:
		cout << "February, winter";
		break;
	case 3:
		cout << "March, spring";
		break;
	case 4:
		cout << "April, spring";
		break;
	case 5:
		cout << "May, spring";
		break;
	case 6:
		cout << "June, summer";
		break;
	case 7:
		cout << "July, summer";
		break;
	case 8:
		cout << "August, summer";
		break;
	case 9:
		cout << "September, autumn";
		break;
	case 10:
		cout << "October, autumn";
		break;
	case 11:
		cout << "November, autumn";
		break;
	case 12:
		cout << "December, winter";
		break;
	}
	return 0;
	}
int task16() {
	cout << "Enter a six-digit number: " << endl;
	int x;
	cin >> x;
	if (x > 99999 && x < 1000000) {     //Check number for 6-digits
		if (x / 100000 + x / 10000 % 10 + x / 1000 % 10 == x / 100 % 10 + x / 10 % 10 + x % 10) {    //We split the number into numbers and check its "happiness"
			cout << "The number is lucky";
		}
		else {
			cout << "The number is not lucky";
		}
	}
	else {
		cout << "Mistake";     //If the number is not 6-digits, print "error"
	}
	return 0;
}
int task17() {
	cout << "Enter the number: " << endl;
	int a;
	cin >> a;
	int digit = a % 10;         //We select the last digit of the number, and choose the most appropriate declension of the word "copeika"
	cout << a;
	if (1 <= a && a <= 99) {
		switch (digit) {
		case 0:	
			cout << " copeek";
			break;
		case 1:
			cout << " copeika";
			break;
		case 2:
			cout << " copeiki";
			break;
		case 3:
			cout << " copeiki";
			break;
		case 4:
			cout << " copeiki";
			break;
		case 5:
			cout << " copeek";
			break;
		case 6:
			cout << " copeek";
			break;
		case 7:
			cout << " copeek";
			break;
		case 8:
			cout << " copeek";
			break;
		case 9:
			cout << " copeek";
			break;
		}
	}
	else {
		cout << " is wrong number";
	}
	return 0;
}
int task18() {
	cout << "Enter the 4-digit number: " << endl;
	int num;
	cin >> num;
	int a = num / 1000;      //Divide a number into component digits
	int b = num / 100 % 10;
	int c = num / 10 % 10;
	int d = num % 10;
	if (a == d && b == c) {                            //We check pairs of numbers to identify the polyndrom (1 and 4 digits and 2 and 3 must be the same)
		cout << " This number is a palindrome ";
	}
	else
	{
		cout << " This number is not a palindrome "; 
	}
	return 0;
}
int task19() {
	cout << "Enter the 3-digit number: " << endl;
	int num3;
	cin >> num3;
	cout << "Enter the b-number: " << endl;
	int num;
	cin >> num;
	int a = num3 / 100 % 10;      //Divide a number into component digits
	int b = num3 / 10 % 10;
	int c = num3 % 10;
	int mult = a * b * c;                  //We find the product of digits and compare it with the entered value
	if (mult > num) {                                 
		cout << "The product of digits is bigger than b-number"<<endl;
	}
	else
	{
		cout << " The product of digits is smaller than b-number"<<endl;
	}
	int sum = a + b + c;                   //We find the sum of the digits and check it for a multiplicity of 7
	if ((sum % 7) == 0) {
		cout << "The sum of digits multiplies 7";
	}
	else
	{
		cout << "The sum of digits doesn't multiply 7";
	}
	return 0;
}
int task20() {
	cout << "Enter the 1st number: "<<endl;
	int a;
	cin >> a;
	cout << "Enter the 2d number: "<<endl;
	int b;
	cin >> b;
	cout << "Enter the 3d number: "<<endl;
	int c;
	cin >> c;
	cout << "Enter the 4th number: " << endl;
	int d;
	cin >> d;
	if (a > 0 && b > 0 && c > 0 && d > 0) {     //Checking if numbers are positive
		if (a < c && b < d || a < d && b < c) {           //Compare pairs of values
			cout << "The rectangle can be placed into another ";
		}
		else
		{
			cout << "The rectangle cannot be placed into another";
		}
	}
	else
	{
		cout << "The number cannot be negative";
	}
	return 0;
}


int main() {
	// #1
	cout << " Task 1" << endl;
	cout << "Enter the values of the sides and height of the triangle: " << endl;
	int b1, b2, h;
	cin >> b1 >> b2 >> h;
	task1(b1, b2, h);
	cout << " - answer 1" << endl;

	//#2
	cout << "Task 2" << endl;
	cout << "Enter the radius of the circle: " << endl;
	int r;
	double pi = 3.14;
	cin >> r;
	task2(pi, r);
	cout << " - answer 2" << endl;

	//#3
	cout << " Task 3" << endl;
	cout << "Enter the values of the sides of the triangle: " << endl;
	int a, b;
	cin >> a >> b;
	task3(a, b);
	cout << " - answer 3" << endl;

	//#4
	cout << "Task 4" << endl;
	cout << "Enter the number: " << endl;
	int w;
	cin >> w;
	task4(w);
	cout << " - answer 4" << endl;

	//#5
	cout << "Task 5" << endl;
	cout << "Enter coordinates; " << endl;
	int x1, y1;
	cin >> x1 >> y1;
	task5(x1, y1);
	cout << " - answer 5" << endl;

	//#6
	cout << "Task 6" << endl;
	cout << "Enter coordinates: " << endl;
	float x2, y2;
	cin >> x2 >> y2;
	task6(x2, y2);
	cout << " - answer 6" << endl;

	//#7
	cout << "Task 7" << endl;
	cout << "Enter odds: " << endl;
	int x,y,z;
	cin >> x >> y >> z;
	task7(x, y, z);
	cout << " - answer 7" << endl;

	//#8
	cout << "Task 8" << endl;
	task8();
	cout << " - answer 8" << endl;

	//#9
	cout << "Task 9" << endl;
	cout << "Enter the numbers of seconds: " << endl;
	int sec;
	cin >> sec;
	task9(sec);
	cout << " - answer 9" << endl;

	//#10
	cout << "Task 10" << endl;
	cout << "Enter the values of the sides of the triangle: " << endl;
	int e, f, g;
	cin >> e >> f >> g;
	task10(e, f, g);
	cout << " - answer 10" << endl;

	//#11
	cout << "Task 11" << endl;
	cout << "Enter the purchase amount: " << endl;
	int price;
	cin >> price;
	task11(price);
	cout << " - answer 11" << endl;

	//#12
	cout << "Task 12" << endl;
	cout << "Enter height and weight: " << endl;
	int height, weight;
	cin >> height >> weight;
	task12(height, weight);
	cout << " - answer 12" << endl;

	//#13
	cout << "Task 13" << endl;
	task13();
	cout << " - answer 13" << endl;

	//#14
	cout << "Task 14" << endl;
	task14();
	cout << " - answer 14" << endl;

	//#15
	cout << "Task 15" << endl;
	task15();
	cout << " - answer 15" << endl;

	//#16
	cout << "Task 16" << endl;
	task16();
	cout << " - answer 16" << endl;

	//#17
	cout << "Task 17" << endl;
	task17();
	cout << " - answer 17" << endl;

	//#18
	cout << "Task 18" << endl;
	task18();
	cout << " - answer 18" << endl;

	//#19
	cout << "Task 19" << endl;
	task19();
	cout << " - answer 19" << endl;

	//#20
	cout << "Task 20" << endl;
	task20();
	cout << " - answer 20" << endl;

	return 0;
}
