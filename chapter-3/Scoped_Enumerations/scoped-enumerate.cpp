#include <iostream>

enum class cardinal_direction
  {
   north=25, south, east, west
  };


auto main() -> int
{
  cardinal_direction dir = cardinal_direction::north;
  cardinal_direction wind_direction = cardinal_direction::south;
  //int somenumber = cardinal_direction::west; /*Error will occur since the enumeration's scope is secured*/
}
