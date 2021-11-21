#include<iostream>
#define pie 3.14
using namespace std;

void volume(int length ,int breadth,int height){
	cout<<"Volume of Cuboid with given length ,breadth and  - "<<length<<","<<breadth<<","<<height<<":"<<endl<<length*(breadth)*height<<endl;
}
void volume(int side){

		cout<<"volume of cube with given side  "<<side<<":"<<endl<<side*side*side<<endl;
}
void volume (float radius,float height){
	cout<<"Volume of Cylinder with given radius and height - "<<radius<<","<<height<<":"<<endl<< pie*radius*radius*height<<endl;
}

int main(){
	int length ,breadth  , side,height;
	float radius,height2;
	cout<<"Enter the side of cube : \n";
	cin>>side;
	volume(side);
	cout<<"Enter the length ,breadth and height of Cuboid : \n";
	cin>>length>>breadth>>height;
	volume(length,breadth,height);
	cout<<"Enter the radius and height of Cylinder : \n";
	cin>>radius>>height;
	volume(radius,height);
return 0;	
	
}
