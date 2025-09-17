#include <iostream>
#include "Trajectory.hpp"
#include <cmath>

using namespace std;

void Trajectory::print(){
  for(int i =0; i< numberOfPoints; i++){
    cout << "Point " << i << ": ";
    points[i].print;
  }
  
}

Point3D& Trajectory::getPoint(const int &n){
  if (n>=0 && , < numberOfPoints){
    return points[n];
  }else{
    cerr << "Index hors limite" << endl;
    return points[0];
  }
}

float Trajectory::getTotalDistance(){
  float total = 0.0f;
  for(size_t = 0; i < numberOfPoints -1; i++){
    total += points[i].distanceTo([points[i+1]]);
  }
  return total;
}


int main(){
  Trajectory traj;
  cout << "Points de la trajectoire :" << endl;
  traj.print();

  cout << "Distance total :" << traj.getTotalDistance() << endl;
  cout << "Modification de";
  

  return 0;
}

