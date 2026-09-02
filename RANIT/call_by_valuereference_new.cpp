#include<iostream>
using namespace std;
void swapValue(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swapReference(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int x = 5;
	int y = 10;
	cout<<"ORIGINAL VALUES : X= "<< x <<",Y= "<< y <<endl;
	swapValue(x,y);
		cout<<"AFTER CALL BY VALUE : X= "<< x <<",Y= "<< y <<endl;
    swapReference(&x, &y);
    	cout<<"AFTER CALL BY REFERENCE : X= "<< x <<",Y= "<< y <<endl;
    return 0;
}
