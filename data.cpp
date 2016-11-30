#include "data.h"

#include "assets.h"

#define X 0,
#define G 1,
#define B 2,
#define C 3,
#define S 4,

//PROGMEM const uint8_t map_test[] = {
//  // width, height
//  32, 6,
//  X X X X X X X X X X X X X X X C X X X X X X X S X X C X X X X X
//  X X X X X X X C X X X X X X X X X S X X B B B B X X X X X X C X
//  X X X X C X X X X X X X X X B B B B X X X X X X X X X X X X X X
//  X X X X X X G G G X X X B B X X X B X X X X X X X X X X X X X X
//  X X X G G G G G G G X X X X X X C B B B X X X X X X X X X X X S
//  G G G G G G G G G G G G G G G G G G G G G G X X G G X X G G G G
//};

PROGMEM const uint8_t map_test[] = {
  // width, height
  16, 6,
  X X X X X X X X X X X X X X X X
  X X X X X X X X X X X X X X X S
  X X X X C X X X S X X X B B B B
  X X C X X G G G G X X B B X X X
  X X X G G G G G G X X X X X C X
  G G G G G G G G G G G G G G G G
};


const uint8_t* Data::mapData()
{
  return map_test;
}
