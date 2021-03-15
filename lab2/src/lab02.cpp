#include "lab02.h"

MapPoint *construct(std::string name, double latitude, double longitude){
  MapPoint *point = new MapPoint;
  point->name = name;
  point->longitude = longitude;
  point->latitude = latitude;
  return point;
}

void print(MapPoint *point){
  std::cout << "Position of " << point->name << ". Latitude: " << point->latitude
  << ". Longitude: " << point->longitude << std::endl;
}

MapPoint inTheMiddle(MapPoint *point1, MapPoint *point2, std::string name){
  MapPoint point;
  point.name = name;
  point.longitude = (point1->longitude + point2->longitude)/2;
  point.latitude = (point1->latitude + point2->latitude)/2;
  return point;
}

MapDist distance(MapPoint *point1, MapPoint point2){
  MapDist point;
  point.longitude = point1->longitude - point2.longitude;
  point.latitude = point1->latitude - point2.latitude;
  return point;
}

double distanceMag(MapDist point){
  return sqrt(pow(point.latitude, 2) + pow(point.longitude, 2));
}

std::string name(MapPoint point){
  return point.name;
}

MapPoint closestFrom(MapPoint *point, MapPoint *point1, MapPoint *point2){
  double road1, road2;
  road1 = sqrt(pow((point->longitude - point1->longitude), 2) + 
  pow((point->latitude - point1->latitude), 2));
  road2 = sqrt(pow((point->longitude - point2->longitude), 2) + 
  pow((point->latitude - point2->latitude), 2));
  if(road1 > road2)
    return *point2;
  else return *point1;
}

void move(MapPoint **point, const double moveX, const double moveY){
  (*point)->latitude += moveX;
  (*point)->longitude += moveY;
}

void clear(MapPoint *point){
  delete point;
}

void clear(MapPoint **tab, int size){
  for(int i=0; i < size; i++){
    delete tab[i];
  }
}