#include <iostream>

enum cardinal_direction
  {
   north=25, south, east, west
  };


auto main() -> int
{
  std::cout<<"North : "<<sizeof(north)<<"\n";
  cardinal_direction wind_direction = south;
  std::cout<<"Wind direction : "<<wind_direction<<"\n";
  int somenumber = west;
  std::cout<<"int : "<<somenumber<<"\n";
}
