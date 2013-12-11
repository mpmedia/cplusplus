#include <string>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

namespace geom
{
	struct Point
	{
		int x,y;
		float getDistance(Point *p);
		~Point();
	};
	float Point::getDistance(Point *p){
		int c = p->x - x ; 
		int s = p->y - y ; 
		return sqrt(c*c + s*s);
	}
	Point::~Point(){
		cout << "destructing point"<< endl;
	}
	struct Vector
	{
		Point* i,j;
		Vector* add(Vector *v);
	};
	Vector* Vector::add(Vector *v){
		return v;
	}
}

using namespace geom;

int main(int argc, char const *argv[])
{	
	string x1,y1,x2,y2;
	cout << "This program compute the distance between 2 points\n";
	cout << "--------------------------------------------------\n";
	cout << "Enter x for point 1 : \n";
	cin >> x1 ;
	cout << "Enter y for point 1 : \n";
	cin >> y1;
	cout << "Enter x for point 2 : \n";
	cin >> x2;
	cout << "Enter y for point 2 : \n";
	cin >> y2;
	Point* point1=new Point();
	Point* point2=new Point();
	point1->x= atoi(x1.c_str());
	point1->y= atoi(y1.c_str());
	point2->x= atoi(x2.c_str());
	point2->y= atoi(y2.c_str());
	cout << "point1 is : ["<<x1<<","<<y1<<"]\n";
	cout << "point2 is : ["<<x2<<","<<y2<<"]\n";
	cout << "Distance between point1 and point2 is : " << point1->getDistance(point2) << "\n";
	cout << "address of point1 : " << &point1 << "\n";
	cout << "address of point2 : " << &point2 << "\n";
	delete point1;
	delete point2;
	return 0;
}