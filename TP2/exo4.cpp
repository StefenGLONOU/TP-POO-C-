#include <iostream>
#include "exo4.hpp"
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

Point3D::Point3D(){
  srand(time(NULL));
  x = rand() % 101; 
  y = rand() % 101;
  z = rand() % 101;
}

Point3D::Point3D(const float &newx, const float &newy, const float &newz){
  x = newx;
  y = newy;
  z = newz;
}
   
void Point3D::setXYZ(const float &newx, const float &newy, const float &newz){
  x = newx;
  y = newy;
  z = newz;
}

void Point3D::setX(const float &newx){
  x = newx;
}
void Point3D::setY(const float &newy){
  y = newy;
}
void Point3D::setZ(const float &newz){
  z = newz;
}

float Point3D::getX(){
  return x;
}

float Point3D::getY(){
  return y;

}
float Point3D::getZ(){
  return z;
}

void Point3D::print(){
  cout << "Le point a pour coordonnees x = " << x << ", y = " << y << ", z = " << z << endl; 
}

float Point3D::distanceTo(const Point3D &otherPoint3D){
  float dx = x - otherPoint3D.x;
  float dy = y - otherPoint3D.y;
  float dz = z - otherPoint3D.z;

  return (sqrt(dx * dx + dy * dy + dz * dz));
}


int main(){
  Point3D p1;
  Point3D p2;

  p2.setXYZ(51,15,34);

  p1.print();
  p2.print();
  //p1.setY(2.0f);
  //p1.print();
  //p1.setZ(3.0f);
  //p1.print();

  cout << "La distance entre ces deux points est : d = " << p1.distanceTo(p2) << endl;
  return 0;
}
