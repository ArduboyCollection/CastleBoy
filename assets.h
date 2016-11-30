#ifndef ASSETS_H
#define ASSETS_H

// background.png
// 120x16
PROGMEM const unsigned char background[] = {
// width, height
120, 16,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
0x40, 0x80, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
0x00, 0x80, 0x40, 0x20, 0x10, 0x20, 0x50, 0xA0, 0x40, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x80, 
0x40, 0x80, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA8, 0x54, 0x80, 
0x40, 0x80, 0x40, 0xA8, 0x54, 0x00, 0x50, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 
0x40, 0x20, 0x10, 0x88, 0x04, 0xA8, 0x54, 0xA8, 0x50, 0xA0, 
0x50, 0xA0, 0x40, 0x20, 0x10, 0x08, 0x04, 0x82, 0x01, 0x80, 
0x41, 0x2A, 0x15, 0x2A, 0x55, 0xA2, 0x41, 0x8A, 0x15, 0x2A, 
0x54, 0xA8, 0x50, 0xA0, 0x40, 0x80, 0x00, 0x80, 0x00, 0x80, 
0x00, 0x80, 0x40, 0x20, 0x50, 0x28, 0x14, 0x0A, 0x05, 0x02, 
0x01, 0x80, 0x40, 0xA0, 0x50, 0x20, 0x40, 0x00, 0x05, 0xAA, 
0x55, 0xAA, 0x54, 0xA8, 0x54, 0xA2, 0x41, 0x80, 0x40, 0xA0, 
0x51, 0xAA, 0x55, 0xAA, 0x15, 0x0A, 0x04, 0x02, 0x01, 0x82, 
0x55, 0xAA, 0x54, 0xA8, 0x54, 0xA8, 0x50, 0xA8, 0x50, 0xA0, 
0x40, 0xA0, 0x40, 0x80, 0x40, 0xA0, 0x50, 0x8A, 0x15, 0x0A, 
0x11, 0x0A, 0x15, 0x2A, 0x15, 0x20, 0x55, 0xA0, 0x40, 0x80


};

PROGMEM const unsigned char background_mask[] = {
// width, height
120, 16,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF


};

PROGMEM const unsigned char background_plus_mask[] = {
// width, height
120, 16,
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 
0x40, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 
0x00, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 0x20, 0xFF, 0x10, 0xFF, 
0x20, 0xFF, 0x50, 0xFF, 0xA0, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 
0x40, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x00, 0xFF, 0xA8, 0xFF, 0x54, 0xFF, 0x80, 0xFF, 
0x40, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 0xA8, 0xFF, 0x54, 0xFF, 
0x00, 0xFF, 0x50, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x00, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 
0x80, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 
0x40, 0xFF, 0x20, 0xFF, 0x10, 0xFF, 0x88, 0xFF, 0x04, 0xFF, 
0xA8, 0xFF, 0x54, 0xFF, 0xA8, 0xFF, 0x50, 0xFF, 0xA0, 0xFF, 
0x50, 0xFF, 0xA0, 0xFF, 0x40, 0xFF, 0x20, 0xFF, 0x10, 0xFF, 
0x08, 0xFF, 0x04, 0xFF, 0x82, 0xFF, 0x01, 0xFF, 0x80, 0xFF, 
0x41, 0xFF, 0x2A, 0xFF, 0x15, 0xFF, 0x2A, 0xFF, 0x55, 0xFF, 
0xA2, 0xFF, 0x41, 0xFF, 0x8A, 0xFF, 0x15, 0xFF, 0x2A, 0xFF, 
0x54, 0xFF, 0xA8, 0xFF, 0x50, 0xFF, 0xA0, 0xFF, 0x40, 0xFF, 
0x80, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 
0x00, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 0x20, 0xFF, 0x50, 0xFF, 
0x28, 0xFF, 0x14, 0xFF, 0x0A, 0xFF, 0x05, 0xFF, 0x02, 0xFF, 
0x01, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 0xA0, 0xFF, 0x50, 0xFF, 
0x20, 0xFF, 0x40, 0xFF, 0x00, 0xFF, 0x05, 0xFF, 0xAA, 0xFF, 
0x55, 0xFF, 0xAA, 0xFF, 0x54, 0xFF, 0xA8, 0xFF, 0x54, 0xFF, 
0xA2, 0xFF, 0x41, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 0xA0, 0xFF, 
0x51, 0xFF, 0xAA, 0xFF, 0x55, 0xFF, 0xAA, 0xFF, 0x15, 0xFF, 
0x0A, 0xFF, 0x04, 0xFF, 0x02, 0xFF, 0x01, 0xFF, 0x82, 0xFF, 
0x55, 0xFF, 0xAA, 0xFF, 0x54, 0xFF, 0xA8, 0xFF, 0x54, 0xFF, 
0xA8, 0xFF, 0x50, 0xFF, 0xA8, 0xFF, 0x50, 0xFF, 0xA0, 0xFF, 
0x40, 0xFF, 0xA0, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 0x40, 0xFF, 
0xA0, 0xFF, 0x50, 0xFF, 0x8A, 0xFF, 0x15, 0xFF, 0x0A, 0xFF, 
0x11, 0xFF, 0x0A, 0xFF, 0x15, 0xFF, 0x2A, 0xFF, 0x15, 0xFF, 
0x20, 0xFF, 0x55, 0xFF, 0xA0, 0xFF, 0x40, 0xFF, 0x80, 0xFF, 


};

// candle.png
// 2 frames
// 8x8
PROGMEM const unsigned char candle[] = {
// width, height
8, 8,
// frame 0
0x00, 0x00, 0x00, 0x4C, 0xF3, 0x4C, 0x00, 0x00, 
// frame 1
0x00, 0x00, 0x00, 0x5C, 0xF6, 0x5C, 0x00, 0x00, 

};

PROGMEM const unsigned char candle_mask[] = {
// width, height
8, 8,
// frame 0
0x00, 0x00, 0x4C, 0xFF, 0xFF, 0xFF, 0x4C, 0x00, 
// frame 1
0x00, 0x00, 0x5C, 0xFE, 0xFF, 0xFE, 0x5C, 0x00, 

};

PROGMEM const unsigned char candle_plus_mask[] = {
// width, height
8, 8,
// frame 0
0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x4C, 0xFF, 0xF3, 0xFF, 
0x4C, 0xFF, 0x00, 0x4C, 0x00, 0x00, 
// frame 1
0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x5C, 0xFE, 0xF6, 0xFF, 
0x5C, 0xFE, 0x00, 0x5C, 0x00, 0x00, 

};

// entity_destroy.png
// 3 frames
// 8x8
PROGMEM const unsigned char entity_destroy[] = {
// width, height
8, 8,
// frame 0
0x00, 0x00, 0x60, 0xB8, 0xB1, 0x60, 0x00, 0x00, 
// frame 1
0x00, 0x40, 0xE0, 0xE4, 0xE0, 0xE0, 0x40, 0x00, 
// frame 2
0x00, 0x00, 0x70, 0x9D, 0x9E, 0x70, 0x00, 0x00, 

};

PROGMEM const unsigned char entity_destroy_mask[] = {
// width, height
8, 8,
// frame 0
0x00, 0x60, 0xF8, 0xFD, 0xFB, 0xF1, 0x60, 0x00, 
// frame 1
0x40, 0xE0, 0xF4, 0xFE, 0xF4, 0xF0, 0xE0, 0x40, 
// frame 2
0x00, 0x70, 0xFD, 0xFF, 0xFF, 0xFE, 0x70, 0x00, 

};

PROGMEM const unsigned char entity_destroy_plus_mask[] = {
// width, height
8, 8,
// frame 0
0x00, 0x00, 0x00, 0x60, 0x60, 0xF8, 0xB8, 0xFD, 0xB1, 0xFB, 
0x60, 0xF1, 0x00, 0x60, 0x00, 0x00, 
// frame 1
0x00, 0x40, 0x40, 0xE0, 0xE0, 0xF4, 0xE4, 0xFE, 0xE0, 0xF4, 
0xE0, 0xF0, 0x40, 0xE0, 0x00, 0x40, 
// frame 2
0x00, 0x00, 0x00, 0x70, 0x70, 0xFD, 0x9D, 0xFF, 0x9E, 0xFF, 
0x70, 0xFE, 0x00, 0x70, 0x00, 0x00, 

};

// player.png
// 22 frames
// 16x16
PROGMEM const unsigned char player[] = {
// width, height
16, 16,
// frame 0
0x00, 0x00, 0x00, 0x00, 0x80, 0xD0, 0xE8, 0xDC, 0xBC, 0x6C, 
0x7C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xE3, 0xF5, 0x36, 0x18, 0x06, 0x16, 0xF8, 0xA3, 0x80, 0x00, 
0x00, 0x00, 
// frame 1
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x70, 
0xB8, 0x5C, 0xDA, 0xD7, 0x2F, 0x5B, 0x5F, 0x02, 0xE8, 0xA0, 
0x80, 0x00, 
// frame 2
0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 0xE4, 0xEE, 0x5E, 0xB6, 
0xBE, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0xE3, 0xF5, 0x96, 0x40, 0x36, 0x00, 0x00, 0x00, 
0x00, 0x00, 
// frame 3
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x40, 
0xB8, 0x7C, 0x7A, 0x97, 0x4F, 0xDB, 0xDF, 0x02, 0x00, 0x00, 
0x00, 0x00, 
// frame 4
0x00, 0xF0, 0x18, 0x18, 0x30, 0x48, 0x24, 0x6E, 0xDE, 0xB6, 
0xBE, 0x44, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x03, 0x04, 0x00, 
0x80, 0xA0, 0x30, 0x17, 0x06, 0x02, 0x14, 0xF0, 0xA1, 0x81, 
0x00, 0x00, 
// frame 5
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x43, 0x03, 
0x86, 0x44, 0xCA, 0xD7, 0x2F, 0x5B, 0x5F, 0x02, 0xE0, 0xA0, 
0x80, 0x00, 
// frame 6
0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE2, 0xE4, 0xEE, 0xDE, 
0xDE, 0xDE, 0xC4, 0x20, 0x60, 0x20, 0x00, 0x00, 0x00, 0x03, 
0xE2, 0xB1, 0x93, 0x0B, 0x03, 0x0B, 0x1B, 0xF1, 0xA0, 0x80, 
0x00, 0x00, 
// frame 7
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x80, 
0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
0xA8, 0x5C, 0xBC, 0xBD, 0x3B, 0xB7, 0xAF, 0x4F, 0xA1, 0x60, 
0x60, 0x20, 
// frame 8
0x00, 0x00, 0x00, 0x00, 0xC0, 0xE8, 0xF4, 0xEE, 0x5E, 0x36, 
0xBE, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x32, 0x09, 0x1D, 0x0C, 0x01, 0x0D, 0x04, 0x01, 0x00, 0x00, 
0x00, 0x00, 
// frame 9
0x00, 0x00, 0x00, 0x00, 0x80, 0xD0, 0xE8, 0xDC, 0xBC, 0x7C, 
0x7C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x65, 0x13, 0x3B, 0x19, 0x02, 0x1A, 0x09, 0x03, 0x00, 0x00, 
0x00, 0x00, 
// frame 10
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xA0, 0xE8, 
0x02, 0x5F, 0x5F, 0x2F, 0xD7, 0xDA, 0x5C, 0xB8, 0x70, 0x60, 
0x00, 0x00, 
// frame 11
0x00, 0x00, 0x00, 0x00, 0x08, 0x7C, 0x6C, 0xBC, 0xDC, 0xE8, 
0xD0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
0xA3, 0xF8, 0x16, 0x06, 0x18, 0x36, 0xF5, 0xE3, 0x00, 0x00, 
0x00, 0x00, 
// frame 12
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xA0, 0xE8, 
0x02, 0x5F, 0x5B, 0x2F, 0xD7, 0xDA, 0x5C, 0xB8, 0x70, 0x60, 
0x00, 0x00, 
// frame 13
0x00, 0x00, 0x00, 0x00, 0x04, 0xBE, 0xB6, 0x5E, 0xEE, 0xE4, 
0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x36, 0x40, 0x96, 0xF5, 0xE3, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 
// frame 14
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x02, 0xDF, 0xDB, 0x4F, 0x97, 0x7A, 0x7C, 0xB8, 0x40, 0xC0, 
0x00, 0x00, 
// frame 15
0x00, 0x00, 0x80, 0xC0, 0x44, 0xBE, 0xB6, 0xDE, 0x6E, 0x24, 
0x48, 0x30, 0x18, 0x18, 0xF0, 0x00, 0x00, 0x00, 0x81, 0xA1, 
0xF0, 0x14, 0x02, 0x06, 0x17, 0x30, 0xA0, 0x80, 0x00, 0x04, 
0x03, 0x00, 
// frame 16
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xA0, 0xE0, 
0x02, 0x5F, 0x5B, 0x2F, 0xD7, 0xCA, 0x44, 0x86, 0x03, 0x43, 
0x3E, 0x00, 
// frame 17
0x20, 0x60, 0x20, 0xC4, 0xDE, 0xDE, 0xDE, 0xEE, 0xE4, 0xE2, 
0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xA0, 
0xF1, 0x1B, 0x0B, 0x03, 0x0B, 0x93, 0xB1, 0xE2, 0x03, 0x00, 
0x00, 0x00, 
// frame 18
0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0xA1, 
0x4F, 0xAF, 0xB7, 0x3B, 0xBD, 0xBC, 0x5C, 0xA8, 0x30, 0x00, 
0x00, 0x00, 
// frame 19
0x00, 0x00, 0x00, 0x00, 0x84, 0xBE, 0x36, 0x5E, 0xEE, 0xF4, 
0xE8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0x04, 0x0D, 0x01, 0x0C, 0x1D, 0x09, 0x32, 0x00, 0x00, 
0x00, 0x00, 
// frame 20
0x00, 0x00, 0x00, 0x00, 0x08, 0x7C, 0x7C, 0xBC, 0xDC, 0xE8, 
0xD0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x03, 0x09, 0x1A, 0x02, 0x19, 0x3B, 0x13, 0x65, 0x00, 0x00, 
0x00, 0x00, 
// frame 21
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xA0, 0xE8, 
0x02, 0x5F, 0x5F, 0x2F, 0xD7, 0xDA, 0x5C, 0xB8, 0x70, 0x60, 
0x00, 0x00, 

};

PROGMEM const unsigned char player_mask[] = {
// width, height
16, 16,
// frame 0
0x00, 0x00, 0x00, 0x80, 0xD0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 
0xFE, 0xFC, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 
0xF7, 0xFF, 0xFF, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xE3, 0xC0, 
0x00, 0x00, 
// frame 1
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xF0, 0xF8, 
0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 
0xE0, 0x80, 
// frame 2
0x00, 0x00, 0x00, 0x00, 0xC8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFE, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0xE3, 0xF7, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x00, 0x00, 
0x00, 0x00, 
// frame 3
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF8, 
0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0x00, 
0x00, 0x00, 
// frame 4
0xF0, 0xF8, 0xFC, 0x3C, 0x78, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFE, 0xE4, 0xC0, 0x80, 0x00, 0x03, 0x07, 0x0F, 0x84, 
0xE0, 0xF0, 0xFF, 0x3F, 0x1F, 0x1F, 0xFF, 0xFF, 0xF3, 0xE3, 
0x81, 0x00, 
// frame 5
0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x7F, 0xFF, 0xC7, 
0xCF, 0xEE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF2, 0xF0, 
0xE0, 0x80, 
// frame 6
0x00, 0x00, 0x00, 0x80, 0xC0, 0xE2, 0xF7, 0xFE, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFE, 0xF4, 0xF0, 0x70, 0x00, 0x00, 0x03, 0xE7, 
0xF7, 0xFB, 0xFF, 0x9F, 0x0F, 0x1F, 0xFF, 0xFF, 0xF1, 0xE0, 
0x80, 0x00, 
// frame 7
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x80, 0xC0, 0xC0, 
0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xF8, 
0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 
0xF0, 0x70, 
// frame 8
0x00, 0x00, 0x00, 0xC0, 0xE8, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFE, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 
0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x1F, 0x0F, 0x07, 0x01, 0x00, 
0x00, 0x00, 
// frame 9
0x00, 0x00, 0x00, 0x80, 0xD0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 
0xFE, 0xFC, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 
0xFF, 0x7F, 0x7F, 0x3F, 0x3F, 0x3F, 0x1F, 0x0F, 0x03, 0x00, 
0x00, 0x00, 
// frame 10
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFE, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 
0x60, 0x00, 
// frame 11
0x00, 0x00, 0x00, 0x08, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 
0xF8, 0xD0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE3, 
0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0xFF, 0xFF, 0xF7, 0xE3, 0x00, 
0x00, 0x00, 
// frame 12
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFE, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 
0x60, 0x00, 
// frame 13
0x00, 0x00, 0x00, 0x04, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 
0xFC, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xF7, 0xE3, 0x01, 0x00, 0x00, 
0x00, 0x00, 
// frame 14
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xE0, 
0xC0, 0x00, 
// frame 15
0x00, 0x80, 0xC0, 0xE4, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 
0xFC, 0x78, 0x3C, 0xFC, 0xF8, 0xF0, 0x00, 0x81, 0xE3, 0xF3, 
0xFF, 0xFF, 0x1F, 0x1F, 0x3F, 0xFF, 0xF0, 0xE0, 0x84, 0x0F, 
0x07, 0x03, 
// frame 16
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 
0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0xF2, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEE, 0xCF, 0xC7, 0xFF, 
0x7F, 0x3E, 
// frame 17
0x70, 0xF0, 0xF4, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF7, 
0xE2, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF1, 
0xFF, 0xFF, 0x1F, 0x0F, 0x9F, 0xFF, 0xFB, 0xF7, 0xE7, 0x03, 
0x00, 0x00, 
// frame 18
0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xC0, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xF0, 0xF1, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0x30, 
0x00, 0x00, 
// frame 19
0x00, 0x00, 0x00, 0x84, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 
0xFC, 0xE8, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x07, 0x0F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F, 0x7F, 0x32, 0x00, 
0x00, 0x00, 
// frame 20
0x00, 0x00, 0x00, 0x08, 0xFC, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 
0xF8, 0xD0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
0x0F, 0x1F, 0x3F, 0x3F, 0x3F, 0x7F, 0x7F, 0xFF, 0x65, 0x00, 
0x00, 0x00, 
// frame 21
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFE, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 
0x60, 0x00, 

};

PROGMEM const unsigned char player_plus_mask[] = {
// width, height
16, 16,
// frame 0
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xD0, 
0xD0, 0xF8, 0xE8, 0xFC, 0xDC, 0xFE, 0xBC, 0xFE, 0x6C, 0xFE, 
0x7C, 0xFE, 0x08, 0xFC, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 
0xE3, 0xF7, 0xF5, 0xFF, 0x36, 0xFF, 0x18, 0x3F, 0x06, 0x3F, 
0x16, 0xFF, 0xF8, 0xFF, 0xA3, 0xFF, 0x80, 0xE3, 0x00, 0xC0, 
0x00, 0x00, 0x00, 0x00, 
// frame 1
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 
0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0xF0, 0x70, 0xF8, 
0xB8, 0xFC, 0x5C, 0xFE, 0xDA, 0xFF, 0xD7, 0xFF, 0x2F, 0xFF, 
0x5B, 0xFF, 0x5F, 0xFF, 0x02, 0xFF, 0xE8, 0xFE, 0xA0, 0xF8, 
0x80, 0xE0, 0x00, 0x80, 
// frame 2
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC8, 
0xC8, 0xFC, 0xE4, 0xFE, 0xEE, 0xFF, 0x5E, 0xFF, 0xB6, 0xFF, 
0xBE, 0xFF, 0x04, 0xFE, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0x01, 0xE3, 0xE3, 0xF7, 0xF5, 0xFF, 0x96, 0xFF, 
0x40, 0xFF, 0x36, 0x7F, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
// frame 3
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 
0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE0, 0x40, 0xF8, 
0xB8, 0xFC, 0x7C, 0xFE, 0x7A, 0xFF, 0x97, 0xFF, 0x4F, 0xFF, 
0xDB, 0xFF, 0xDF, 0xFF, 0x02, 0xFF, 0x00, 0x02, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
// frame 4
0x00, 0xF0, 0xF0, 0xF8, 0x18, 0xFC, 0x18, 0x3C, 0x30, 0x78, 
0x48, 0xFC, 0x24, 0xFE, 0x6E, 0xFF, 0xDE, 0xFF, 0xB6, 0xFF, 
0xBE, 0xFF, 0x44, 0xFE, 0xC0, 0xE4, 0x80, 0xC0, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x03, 0x03, 0x07, 0x04, 0x0F, 0x00, 0x84, 
0x80, 0xE0, 0xA0, 0xF0, 0x30, 0xFF, 0x17, 0x3F, 0x06, 0x1F, 
0x02, 0x1F, 0x14, 0xFF, 0xF0, 0xFF, 0xA1, 0xF3, 0x81, 0xE3, 
0x00, 0x81, 0x00, 0x00, 
// frame 5
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 
0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3E, 0x3E, 0x7F, 0x43, 0xFF, 0x03, 0xC7, 
0x86, 0xCF, 0x44, 0xEE, 0xCA, 0xFF, 0xD7, 0xFF, 0x2F, 0xFF, 
0x5B, 0xFF, 0x5F, 0xFF, 0x02, 0xFF, 0xE0, 0xF2, 0xA0, 0xF0, 
0x80, 0xE0, 0x00, 0x80, 
// frame 6
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 
0xC0, 0xE2, 0xE2, 0xF7, 0xE4, 0xFE, 0xEE, 0xFF, 0xDE, 0xFF, 
0xDE, 0xFF, 0xDE, 0xFF, 0xC4, 0xFE, 0x20, 0xF4, 0x60, 0xF0, 
0x20, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0xE7, 
0xE2, 0xF7, 0xB1, 0xFB, 0x93, 0xFF, 0x0B, 0x9F, 0x03, 0x0F, 
0x0B, 0x1F, 0x1B, 0xFF, 0xF1, 0xFF, 0xA0, 0xF1, 0x80, 0xE0, 
0x00, 0x80, 0x00, 0x00, 
// frame 7
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x80, 0xC0, 0x00, 0x80, 0x80, 0xC0, 0x80, 0xC0, 
0x80, 0xC0, 0x80, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0xF8, 
0xA8, 0xFC, 0x5C, 0xFE, 0xBC, 0xFF, 0xBD, 0xFF, 0x3B, 0xFF, 
0xB7, 0xFF, 0xAF, 0xFF, 0x4F, 0xFF, 0xA1, 0xFF, 0x60, 0xF1, 
0x60, 0xF0, 0x20, 0x70, 
// frame 8
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE8, 
0xE8, 0xFC, 0xF4, 0xFE, 0xEE, 0xFF, 0x5E, 0xFF, 0x36, 0xFF, 
0xBE, 0xFF, 0x84, 0xFE, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 
0x32, 0x7F, 0x09, 0x3F, 0x1D, 0x3F, 0x0C, 0x1F, 0x01, 0x1F, 
0x0D, 0x1F, 0x04, 0x0F, 0x01, 0x07, 0x00, 0x01, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
// frame 9
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xD0, 
0xD0, 0xF8, 0xE8, 0xFC, 0xDC, 0xFE, 0xBC, 0xFE, 0x7C, 0xFE, 
0x7C, 0xFE, 0x08, 0xFC, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 
0x65, 0xFF, 0x13, 0x7F, 0x3B, 0x7F, 0x19, 0x3F, 0x02, 0x3F, 
0x1A, 0x3F, 0x09, 0x1F, 0x03, 0x0F, 0x00, 0x03, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
// frame 10
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0xA0, 0xF8, 0xE8, 0xFE, 
0x02, 0xFF, 0x5F, 0xFF, 0x5F, 0xFF, 0x2F, 0xFF, 0xD7, 0xFF, 
0xDA, 0xFF, 0x5C, 0xFE, 0xB8, 0xFC, 0x70, 0xF8, 0x60, 0xF0, 
0x00, 0x60, 0x00, 0x00, 
// frame 11
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0xFC, 
0x7C, 0xFE, 0x6C, 0xFE, 0xBC, 0xFE, 0xDC, 0xFE, 0xE8, 0xFC, 
0xD0, 0xF8, 0x80, 0xD0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x80, 0xE3, 
0xA3, 0xFF, 0xF8, 0xFF, 0x16, 0xFF, 0x06, 0x3F, 0x18, 0x3F, 
0x36, 0xFF, 0xF5, 0xFF, 0xE3, 0xF7, 0x00, 0xE3, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
// frame 12
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0xA0, 0xF8, 0xE8, 0xFE, 
0x02, 0xFF, 0x5F, 0xFF, 0x5B, 0xFF, 0x2F, 0xFF, 0xD7, 0xFF, 
0xDA, 0xFF, 0x5C, 0xFE, 0xB8, 0xFC, 0x70, 0xF8, 0x60, 0xF0, 
0x00, 0x60, 0x00, 0x00, 
// frame 13
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0xFE, 
0xBE, 0xFF, 0xB6, 0xFF, 0x5E, 0xFF, 0xEE, 0xFF, 0xE4, 0xFE, 
0xC8, 0xFC, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x3F, 0x36, 0x7F, 0x40, 0xFF, 0x96, 0xFF, 0xF5, 0xFF, 
0xE3, 0xF7, 0x01, 0xE3, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
// frame 14
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
0x02, 0xFF, 0xDF, 0xFF, 0xDB, 0xFF, 0x4F, 0xFF, 0x97, 0xFF, 
0x7A, 0xFF, 0x7C, 0xFE, 0xB8, 0xFC, 0x40, 0xF8, 0xC0, 0xE0, 
0x00, 0xC0, 0x00, 0x00, 
// frame 15
0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE4, 0x44, 0xFE, 
0xBE, 0xFF, 0xB6, 0xFF, 0xDE, 0xFF, 0x6E, 0xFF, 0x24, 0xFE, 
0x48, 0xFC, 0x30, 0x78, 0x18, 0x3C, 0x18, 0xFC, 0xF0, 0xF8, 
0x00, 0xF0, 0x00, 0x00, 0x00, 0x81, 0x81, 0xE3, 0xA1, 0xF3, 
0xF0, 0xFF, 0x14, 0xFF, 0x02, 0x1F, 0x06, 0x1F, 0x17, 0x3F, 
0x30, 0xFF, 0xA0, 0xF0, 0x80, 0xE0, 0x00, 0x84, 0x04, 0x0F, 
0x03, 0x07, 0x00, 0x03, 
// frame 16
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0xA0, 0xF0, 0xE0, 0xF2, 
0x02, 0xFF, 0x5F, 0xFF, 0x5B, 0xFF, 0x2F, 0xFF, 0xD7, 0xFF, 
0xCA, 0xFF, 0x44, 0xEE, 0x86, 0xCF, 0x03, 0xC7, 0x43, 0xFF, 
0x3E, 0x7F, 0x00, 0x3E, 
// frame 17
0x20, 0x70, 0x60, 0xF0, 0x20, 0xF4, 0xC4, 0xFE, 0xDE, 0xFF, 
0xDE, 0xFF, 0xDE, 0xFF, 0xEE, 0xFF, 0xE4, 0xFE, 0xE2, 0xF7, 
0xC0, 0xE2, 0x80, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0xA0, 0xF1, 
0xF1, 0xFF, 0x1B, 0xFF, 0x0B, 0x1F, 0x03, 0x0F, 0x0B, 0x9F, 
0x93, 0xFF, 0xB1, 0xFB, 0xE2, 0xF7, 0x03, 0xE7, 0x00, 0x03, 
0x00, 0x00, 0x00, 0x00, 
// frame 18
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 
0x80, 0xC0, 0x80, 0xC0, 0x80, 0xC0, 0x00, 0x80, 0x80, 0xC0, 
0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x20, 0x70, 0x60, 0xF0, 0x60, 0xF1, 0xA1, 0xFF, 
0x4F, 0xFF, 0xAF, 0xFF, 0xB7, 0xFF, 0x3B, 0xFF, 0xBD, 0xFF, 
0xBC, 0xFF, 0x5C, 0xFE, 0xA8, 0xFC, 0x30, 0xF8, 0x00, 0x30, 
0x00, 0x00, 0x00, 0x00, 
// frame 19
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x84, 0xFE, 
0xBE, 0xFF, 0x36, 0xFF, 0x5E, 0xFF, 0xEE, 0xFF, 0xF4, 0xFE, 
0xE8, 0xFC, 0xC0, 0xE8, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x01, 0x07, 0x04, 0x0F, 0x0D, 0x1F, 0x01, 0x1F, 0x0C, 0x1F, 
0x1D, 0x3F, 0x09, 0x3F, 0x32, 0x7F, 0x00, 0x32, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
// frame 20
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0xFC, 
0x7C, 0xFE, 0x7C, 0xFE, 0xBC, 0xFE, 0xDC, 0xFE, 0xE8, 0xFC, 
0xD0, 0xF8, 0x80, 0xD0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
0x03, 0x0F, 0x09, 0x1F, 0x1A, 0x3F, 0x02, 0x3F, 0x19, 0x3F, 
0x3B, 0x7F, 0x13, 0x7F, 0x65, 0xFF, 0x00, 0x65, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
// frame 21
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0x80, 0xE0, 0xA0, 0xF8, 0xE8, 0xFE, 
0x02, 0xFF, 0x5F, 0xFF, 0x5F, 0xFF, 0x2F, 0xFF, 0xD7, 0xFF, 
0xDA, 0xFF, 0x5C, 0xFE, 0xB8, 0xFC, 0x70, 0xF8, 0x60, 0xF0, 
0x00, 0x60, 0x00, 0x00, 

};

// player_attack_left.png
// 16x3
PROGMEM const unsigned char player_attack_left[] = {
// width, height
16, 3,
0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 
0x02, 0x02, 0x02, 0x02, 0x02, 0x02

};

PROGMEM const unsigned char player_attack_left_mask[] = {
// width, height
16, 3,
0x02, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07

};

PROGMEM const unsigned char player_attack_left_plus_mask[] = {
// width, height
16, 3,
0x00, 0x02, 0x02, 0x07, 0x00, 0x07, 0x02, 0x07, 0x00, 0x07, 
0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 
0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 
0x02, 0x07, 

};

// player_attack_right.png
// 16x3
PROGMEM const unsigned char player_attack_right[] = {
// width, height
16, 3,
0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
0x02, 0x00, 0x02, 0x00, 0x02, 0x00

};

PROGMEM const unsigned char player_attack_right_mask[] = {
// width, height
16, 3,
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x02

};

PROGMEM const unsigned char player_attack_right_plus_mask[] = {
// width, height
16, 3,
0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 
0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 0x02, 0x07, 
0x02, 0x07, 0x00, 0x07, 0x02, 0x07, 0x00, 0x07, 0x02, 0x07, 
0x00, 0x02, 

};

// skeleton.png
// 2 frames
// 16x16
PROGMEM const unsigned char skeleton[] = {
// width, height
16, 16,
// frame 0
0x00, 0x00, 0x00, 0x18, 0x24, 0xAC, 0xBC, 0x5C, 0x18, 0x40, 
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x60, 0x92, 0x0A, 0x60, 0x96, 0x0A, 0x02, 0x03, 0x00, 0x00, 
0x00, 0x00, 
// frame 1
0x00, 0x00, 0x00, 0x08, 0x06, 0x48, 0x4A, 0x1E, 0x8C, 0x20, 
0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 
0x00, 0x11, 0xA9, 0x45, 0x20, 0xC4, 0x0A, 0x01, 0x00, 0x00, 
0x00, 0x00, 

};

PROGMEM const unsigned char skeleton_mask[] = {
// width, height
16, 16,
// frame 0
0x00, 0x00, 0x18, 0x3C, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xF8, 
0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 
0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x0F, 0x07, 0x03, 0x00, 
0x00, 0x00, 
// frame 1
0x00, 0x00, 0x0C, 0x1E, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 
0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x1E, 
0x1F, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x1B, 0x01, 0x00, 
0x00, 0x00, 

};

PROGMEM const unsigned char skeleton_plus_mask[] = {
// width, height
16, 16,
// frame 0
0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x3C, 0x24, 0xFE, 
0xAC, 0xFE, 0xBC, 0xFE, 0x5C, 0xFE, 0x18, 0xFC, 0x40, 0xF8, 
0x80, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 
0x60, 0xF2, 0x92, 0xFF, 0x0A, 0xFF, 0x60, 0xFF, 0x96, 0xFF, 
0x0A, 0x9F, 0x02, 0x0F, 0x03, 0x07, 0x00, 0x03, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
// frame 1
0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x08, 0x1E, 0x06, 0x7F, 
0x48, 0xFF, 0x4A, 0xFF, 0x1E, 0xFF, 0x8C, 0xFE, 0x20, 0xFC, 
0x40, 0xE0, 0x80, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x1E, 
0x00, 0x1F, 0x11, 0xBF, 0xA9, 0xFF, 0x45, 0xFF, 0x20, 0xFF, 
0xC4, 0xFF, 0x0A, 0xDF, 0x01, 0x1B, 0x00, 0x01, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 

};

// tileset.png
// 4 frames
// 8x8
PROGMEM const unsigned char tileset[] = {
// width, height
8, 8,
// frame 0
0xDD, 0xDD, 0x1C, 0xDD, 0xDD, 0xC1, 0xDD, 0xDD, 
// frame 1
0x28, 0x44, 0xA2, 0x45, 0x82, 0x14, 0x8A, 0x15, 
// frame 2
0x9B, 0x2B, 0xB6, 0x07, 0x6B, 0x57, 0xB3, 0x45, 
// frame 3
0x03, 0x01, 0x00, 0x01, 0x2F, 0x01, 0x0B, 0x01, 

};

PROGMEM const unsigned char tileset_mask[] = {
// width, height
8, 8,
// frame 0
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// frame 1
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// frame 2
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// frame 3
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 

};

PROGMEM const unsigned char tileset_plus_mask[] = {
// width, height
8, 8,
// frame 0
0xDD, 0xFF, 0xDD, 0xFF, 0x1C, 0xFF, 0xDD, 0xFF, 0xDD, 0xFF, 
0xC1, 0xFF, 0xDD, 0xFF, 0xDD, 0xFF, 
// frame 1
0x28, 0xFF, 0x44, 0xFF, 0xA2, 0xFF, 0x45, 0xFF, 0x82, 0xFF, 
0x14, 0xFF, 0x8A, 0xFF, 0x15, 0xFF, 
// frame 2
0x9B, 0xFF, 0x2B, 0xFF, 0xB6, 0xFF, 0x07, 0xFF, 0x6B, 0xFF, 
0x57, 0xFF, 0xB3, 0xFF, 0x45, 0xFF, 
// frame 3
0x03, 0xFF, 0x01, 0xFF, 0x00, 0xFF, 0x01, 0xFF, 0x2F, 0xFF, 
0x01, 0xFF, 0x0B, 0xFF, 0x01, 0xFF, 

};

#endif