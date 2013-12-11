/**
 * Namespaces and Scope Resolution
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

 using namespace std;

 namespace geom{
 	class Point{
 		public:
 			Point(int p_x,int p_y);
 			int getX();
 			void setX(int value);
 			int getY();
 			void setY(int value);
 		private:
	 		int x;
	 		int y;
 	};
 	Point::Point(int p_x,int p_y){ x=p_x;y=p_y;}
 	inline int Point::getX(){ return x; }
 	inline void Point::setX(int value){ x=value; }
 	inline int Point::getY(){ return y; }
 	inline void Point::setY(int value){ y=value; }
 }

 int main(int argc,char* argv[]){
 	geom::Point point(10,-10);
 	cout << "point : " << endl;
 	cout << "\t x : " << point.getX() << endl;
 	cout << "\t y : " << point.getY() << endl;
 	return (EXIT_SUCCESS);
 }
