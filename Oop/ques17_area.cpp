#include<iostream>
#define pie 3.14
using namespace std;
class Area{
	public:
void area(int length ,int breadth){
	cout<<"Enter the length and breadth of Rectangle : \n";
	cin>>length>>breadth;
	cout<<"Area of Reactangle with given length and breadth - "<<length<<","<<breadth<<" "<<endl<<length*(breadth)<<endl;
}
void area(int side){
cout<<"Enter the side of square : \n";
	cin>>side;
		cout<<"Area of Square with given side  "<<side<<":"<<endl<<side*side<<endl;
}
void area (float radius){
		cout<<"Enter the radius of Circle : \n";
	cin>>radius;
	cout<<"Area of Circle with given radius - "<<radius<<":"<<endl<< pie*radius*radius<<endl;
}
};
int main(){
	int length ,breadth  , side;
	float radius;
	Area a1;
	
	a1.area(side);
	
	a1.area(length,breadth);

	a1.area(radius);
return 0;	
	
}
