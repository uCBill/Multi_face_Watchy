// 'dot2', 16x16px
const unsigned char dot2 [] PROGMEM = {
  0xff, 0xff, 0xf0, 0x0f, 0xc0, 0x03, 0xc0, 0x03, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 
  0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0xc0, 0x03, 0xc0, 0x03, 0xf0, 0x0f, 0xff, 0xff
};

// 'mm_hand', 28x28px
const unsigned char mm_hand [] PROGMEM = {
  0x3c, 0x00, 0x03, 0xc0, 0x66, 0x00, 0x06, 0x60, 0xc2, 0x0f, 0x04, 0x30, 0x81, 0x79, 0xe8, 0x10, 
  0x80, 0xc0, 0x30, 0x10, 0xc1, 0x80, 0x18, 0x30, 0x60, 0x00, 0x00, 0x60, 0x14, 0x00, 0x02, 0x80, 
  0x0c, 0x00, 0x03, 0x00, 0x18, 0x00, 0x01, 0x80, 0x10, 0x00, 0x00, 0x80, 0x10, 0x00, 0x00, 0x80, 
  0x30, 0x00, 0x00, 0xc0, 0x20, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x40, 0x30, 0x00, 0x00, 0xc0, 
  0x10, 0x00, 0x00, 0x80, 0x10, 0x00, 0x00, 0x80, 0x18, 0x00, 0x01, 0x80, 0x0c, 0x00, 0x03, 0x00, 
  0x14, 0x00, 0x02, 0x80, 0x60, 0x00, 0x00, 0x60, 0xc1, 0x80, 0x18, 0x30, 0x80, 0xc0, 0x30, 0x10, 
  0x81, 0x79, 0xe8, 0x10, 0xc2, 0x0f, 0x04, 0x30, 0x66, 0x00, 0x06, 0x60, 0x3c, 0x00, 0x03, 0xc0
};

// 'mm_hand_mask', 30x30px
const unsigned char mm_hand_mask [] PROGMEM = {
  0x3f, 0x00, 0x03, 0xf0, 0x7f, 0x80, 0x07, 0xf8, 0xff, 0xcf, 0xcf, 0xfc, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfc, 
  0x7f, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xe0, 
  0x3f, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xf0, 
  0x3f, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xe0, 
  0x3f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xcf, 0xcf, 0xfc, 
  0x7f, 0x80, 0x07, 0xf8, 0x3f, 0x00, 0x03, 0xf0
};

// 'clock', 200x200px
const unsigned char ClockBG [] PROGMEM = {
  0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0x87, 0xff, 0xe0, 0x0f, 0x87, 0xff, 0x80, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 
  0x07, 0xff, 0x00, 0x07, 0x07, 0xfc, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfe, 0x0f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xfc, 0x07, 0xf8, 0x00, 0xfc, 0x07, 0xf8, 0x7c, 
  0x07, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x3f, 0x80, 0x07, 0xe0, 0x00, 0x80, 0x07, 0xf0, 0x3e, 0x03, 0xff, 0xff, 0xff, 0x00, 0x0f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x3f, 0x80, 0x07, 0xc0, 0x00, 0x80, 0x07, 
  0xe0, 0x3f, 0x01, 0xff, 0xff, 0xff, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xe0, 0x3f, 0xfc, 0x07, 0x00, 0x00, 0xfc, 0x07, 0xe0, 0x3f, 0x01, 0xff, 0xff, 0xff, 0xf8, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xfc, 0x06, 0x00, 0x00, 
  0x04, 0x07, 0xe0, 0x3f, 0x01, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xe0, 0x3f, 0xfc, 0x04, 0x00, 0x00, 0x04, 0x07, 0xe0, 0x3f, 0x01, 0xff, 0xff, 
  0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xfc, 0x04, 
  0x00, 0x00, 0x04, 0x07, 0xf0, 0x7f, 0x01, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xfc, 0x04, 0x00, 0x00, 0x04, 0x05, 0xff, 0xfe, 0x03, 
  0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 
  0xfc, 0x04, 0x00, 0x00, 0x04, 0x05, 0xff, 0xfc, 0x07, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xfc, 0x04, 0x00, 0x00, 0x04, 0x05, 0xff, 
  0xf8, 0x0f, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0x3f, 0xfc, 0x04, 0x00, 0x00, 0x04, 0x05, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xf8, 0x0f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xfc, 0x04, 0x00, 0x00, 0x04, 
  0x05, 0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x3f, 0xfc, 0x04, 0x00, 0x00, 0x04, 0x04, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 
  0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xfc, 0x04, 0x00, 
  0x00, 0x04, 0x04, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xfc, 0x04, 0x00, 0x00, 0x04, 0x05, 0xf0, 0x00, 0x00, 0xff, 
  0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xfc, 
  0x07, 0x00, 0x00, 0x0c, 0x07, 0xe0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0xf8, 0x01, 0xe0, 0x00, 0xf8, 0x01, 0xe0, 0x00, 
  0x00, 0xff, 0xff, 0xff, 0xf0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x01, 0x80, 0x00, 0x20, 0x00, 0x80, 0x00, 0x20, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x01, 0x80, 0x00, 0x20, 0x00, 0x80, 0x00, 
  0x20, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x00, 0x00, 0x3f, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xff, 0x81, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x0f, 
  0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x03, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x00, 0x01, 0xff, 0xfc, 0x00, 0x03, 0xff, 0xff, 0xf1, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x07, 0xff, 
  0xff, 0xf9, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x80, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x07, 0xff, 0xff, 0xfb, 0xcf, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xe0, 0x00, 
  0x0f, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x1f, 
  0x80, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7c, 
  0x07, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfb, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3e, 0x03, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x0e, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0x3f, 0x01, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x1f, 0xff, 0xff, 
  0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0x01, 0xff, 0x0f, 0xff, 0xc0, 
  0x3c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xc7, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x3f, 0x01, 0xfe, 0x0f, 0xfe, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 
  0xff, 0xff, 0x83, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0x01, 0xf8, 0x0f, 
  0xfc, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x81, 0xc0, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0x01, 0x00, 0x0f, 0xf8, 0x19, 0x81, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x0f, 0xff, 0xff, 0x01, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 
  0x00, 0x0f, 0xf0, 0x38, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x00, 0xc0, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x07, 0xf8, 0x0f, 0xe0, 0x38, 0x40, 0x40, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x00, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf8, 0x0f, 0xf8, 0x0f, 0xe0, 0x78, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x00, 
  0xe0, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xf8, 0x0f, 0xc0, 0x78, 0x20, 
  0x20, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x83, 0xff, 0xf8, 0x0f, 0xc0, 0x78, 0x20, 0x20, 0x00, 0x00, 0x00, 0x0c, 0x07, 0xff, 
  0xff, 0x00, 0x60, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xf8, 0x0f, 0xc0, 
  0x78, 0x20, 0x20, 0x00, 0x00, 0x00, 0xff, 0xc7, 0xff, 0xff, 0x00, 0x60, 0xff, 0xfe, 0x00, 0x7f, 
  0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xf8, 0x0f, 0xc0, 0x78, 0x20, 0x20, 0x00, 0x00, 0x03, 0xff, 
  0xf3, 0xff, 0xff, 0x00, 0x60, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0xf8, 
  0x0f, 0xc0, 0x7c, 0x20, 0x20, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x70, 0xfc, 0x7c, 
  0x00, 0x7f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0xf8, 0x0f, 0xc0, 0x7c, 0x20, 0x20, 0x00, 0x00, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x70, 0xc0, 0x08, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0xf8, 0x0f, 0xc0, 0x7c, 0x20, 0x20, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x70, 
  0x0f, 0xe0, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0xf8, 0x0f, 0xe0, 0x7e, 0x60, 0x60, 
  0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x80, 0xf8, 0x7f, 0xf0, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0x00, 0x00, 0xf8, 0x0f, 0xe0, 0x3e, 0x40, 0x40, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 
  0xc0, 0xf9, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xf0, 0x3f, 
  0xc0, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xf7, 0xff, 0xe0, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xf8, 0x1f, 0x81, 0x80, 0x00, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xe1, 0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x03, 
  0xfc, 0x0f, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x03, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7e, 0x00, 0x06, 0x00, 0x00, 0x20, 0xff, 
  0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x7f, 0xc0, 0x3c, 0x00, 0x00, 0x61, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 
  0xe1, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x03, 0xe1, 0xff, 0xe6, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0x00, 0x07, 0xf1, 0xff, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xf1, 0xff, 0xfe, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfe, 0x7f, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xf3, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xf8, 
  0x7f, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 
  0xff, 0xf8, 0x07, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xfc, 0x01, 0xff, 0xff, 0xff, 0x83, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xf9, 0xff, 0xfc, 0xa0, 0x1f, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0x7c, 0x50, 0x00, 0x00, 
  0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x1f, 0x7e, 0xaa, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xbe, 0x55, 
  0x54, 0x1e, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x3f, 0x2a, 0xa8, 0x3e, 0x00, 0x03, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0x1f, 0x15, 0x50, 0x7c, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xf8, 
  0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xaa, 0xa8, 0x7c, 0x00, 0x00, 0x3f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x0f, 0xe0, 0x70, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xcf, 0x95, 0x50, 0xf8, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7c, 
  0x07, 0xc0, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xca, 0xa1, 0xf0, 0x00, 
  0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x7e, 0x03, 0x80, 0xfc, 0x0f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xc3, 0xe1, 0x43, 0xc0, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0x3f, 0x01, 0x81, 0xfc, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xf8, 0x0f, 
  0x80, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0x01, 0x01, 0xfe, 0x07, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x3f, 0x01, 0x01, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x87, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0x01, 0x01, 0xfe, 
  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x53, 
  0xff, 0xff, 0xff, 0xff, 0xf0, 0x7f, 0x01, 0x01, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 
  0x01, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x50, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x07, 0x01, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xa8, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xfc, 0x0f, 0x00, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x05, 0x54, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x7f, 0x80, 0xfe, 0x03, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0x7f, 0xff, 0xff, 
  0xff, 0xff, 0x80, 0x3f, 0x80, 0x78, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x05, 0x54, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x07, 0xc0, 0x00, 0x03, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0xaa, 0x3f, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xe0, 0x02, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x15, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0xf8, 
  0x0c, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 
  0x42, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x54, 0x75, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x80, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x02, 0xa9, 0xfa, 0x9f, 0xff, 0xff, 0xff, 0xe0, 0xff, 0x80, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x15, 0x55, 0x79, 0x1f, 0xff, 0xff, 0xff, 
  0xc0, 0x7f, 0x80, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x2a, 0xa9, 0x7c, 0x9f, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0x80, 0xff, 0xf0, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x01, 0x55, 0x55, 0x7d, 0x1f, 0xff, 
  0xff, 0xff, 0xc0, 0x7f, 0x81, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xf0, 0x00, 0x00, 0x0a, 0xaa, 0xa9, 0xfc, 0x9f, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0x01, 0xff, 0x81, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe5, 0x00, 0x01, 0x55, 0x54, 0x55, 0x7d, 
  0x1f, 0xff, 0xff, 0xff, 0xe0, 0xfe, 0x03, 0xfe, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xca, 0xaa, 0xaa, 0xaa, 0xa9, 0x89, 0x7c, 0x9f, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x07, 
  0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0x55, 0x55, 0x53, 
  0xd5, 0x7d, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x8a, 0xaa, 0xaa, 0xaa, 0xa7, 0xc8, 0xbc, 0xbf, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x95, 0x55, 0x55, 
  0x55, 0x47, 0xe4, 0xbd, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x2a, 0xaa, 0xaa, 0xaa, 0xaf, 0xf2, 0x5a, 0xbf, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x15, 
  0x55, 0x55, 0x55, 0x4b, 0xf5, 0x31, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x2a, 0xaa, 0xaa, 0xaa, 0xab, 0xf2, 0x82, 0x7f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x15, 0x55, 0x55, 0x55, 0x4b, 0xf5, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x2a, 0xaa, 0xaa, 0xaa, 0xad, 0xf2, 
  0xaa, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0x15, 0x55, 0x55, 0x55, 0x45, 0xf5, 0x54, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x2a, 0xaa, 0xaa, 0xaa, 
  0xa6, 0xf2, 0xaa, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0x55, 0x55, 0x55, 0x55, 0x57, 0x75, 0x55, 0x5f, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x2a, 0xaa, 
  0xaa, 0xaa, 0xa9, 0xca, 0xaa, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x55, 0x55, 0x55, 0x55, 0x55, 0xc5, 0x55, 0x5f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0x2a, 0xaa, 0xaa, 0xaa, 0xaa, 0x2a, 0xaa, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x15, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfe, 0x2a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x15, 0x55, 0x55, 0x55, 0x55, 
  0x55, 0x55, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x2a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x7f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x95, 0x55, 0x55, 
  0x55, 0x55, 0x55, 0x54, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa8, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd5, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x51, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xca, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa3, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xc5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x43, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
  0xa7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x95, 0x55, 0x55, 0x55, 0x55, 0x15, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0x2a, 0xaa, 0xaa, 0xaa, 
  0xaa, 0x2a, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xf8, 0x00, 0x1f, 0xff, 0xff, 0xff, 
  0x05, 0x07, 0xff, 0xff, 0xfe, 0x00, 0x55, 0x55, 0x55, 0x54, 0x54, 0x3f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xf8, 0x0f, 0xf0, 0x38, 0x0f, 0xff, 0xff, 0xfe, 0x2a, 0xa1, 0xff, 0xff, 0xfe, 0xaa, 0x82, 
  0xaa, 0xaa, 0xa0, 0xa8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0f, 0xe0, 0x7c, 0x07, 0xff, 
  0xff, 0xf9, 0x55, 0x54, 0xff, 0xff, 0xfe, 0x55, 0x40, 0x55, 0x55, 0x05, 0x50, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0x0f, 0xc0, 0xfe, 0x03, 0xff, 0xff, 0xc0, 0x2a, 0xaa, 0x7f, 0xff, 0xff, 
  0x2a, 0xa0, 0x0a, 0xa8, 0x0a, 0xa0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0x80, 0xfe, 
  0x03, 0xff, 0xff, 0x15, 0x15, 0x55, 0x3f, 0xff, 0xff, 0x15, 0x40, 0x05, 0x40, 0xe5, 0x00, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x0f, 0x80, 0xfe, 0x03, 0xff, 0xfe, 0x00, 0xaa, 0xaa, 0x9f, 
  0xff, 0xff, 0x8a, 0x80, 0x20, 0xa7, 0xf2, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 0x0f, 
  0x80, 0xfe, 0x03, 0xff, 0xfc, 0x55, 0x15, 0x55, 0x4f, 0xff, 0xff, 0xc5, 0x00, 0x50, 0x57, 0xf0, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x98, 0x0f, 0x80, 0x7e, 0x03, 0xff, 0xfc, 0xaa, 0x8a, 
  0xaa, 0xa7, 0xff, 0xff, 0xf0, 0x00, 0x2a, 0x27, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x38, 0x0f, 0x80, 0x3e, 0x07, 0xff, 0xf9, 0x55, 0x45, 0x55, 0x47, 0xff, 0xff, 0xf8, 0x00, 0x55, 
  0x07, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x78, 0x0f, 0xc0, 0x0e, 0x0f, 0xff, 0xf2, 
  0xaa, 0xa2, 0xaa, 0xa3, 0xff, 0xff, 0xfe, 0x00, 0xaa, 0x87, 0xff, 0x01, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfc, 0x78, 0x0f, 0xc0, 0x00, 0x3f, 0xff, 0xf5, 0x55, 0x50, 0x55, 0x53, 0xff, 0xff, 0xfe, 
  0x01, 0x55, 0x47, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf8, 0x0f, 0xe0, 0x00, 0xff, 
  0xff, 0xf2, 0xaa, 0xa8, 0x2a, 0xa9, 0xff, 0xff, 0xfc, 0x00, 0x2a, 0xaf, 0xfe, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf9, 0xf8, 0x0f, 0xf8, 0x00, 0x1f, 0xff, 0xe5, 0x55, 0x55, 0x15, 0x55, 0xff, 
  0xff, 0xfc, 0x03, 0x00, 0x0f, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xf8, 0x0f, 0xfe, 
  0x00, 0x0f, 0xff, 0xe2, 0xaa, 0xaa, 0xaa, 0xa8, 0xff, 0xff, 0xf8, 0x07, 0xfe, 0x1f, 0xfe, 0x01, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xf8, 0x0f, 0xf0, 0x80, 0x07, 0xff, 0xe5, 0x55, 0x54, 0x55, 
  0x54, 0xff, 0xff, 0xf0, 0x0f, 0xfe, 0x7f, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xf8, 
  0x0f, 0xc0, 0xe0, 0x03, 0xff, 0xea, 0xaa, 0xaa, 0x0a, 0xaa, 0xff, 0xff, 0xf0, 0x0f, 0xfc, 0xff, 
  0xfc, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xf8, 0x0f, 0x81, 0xf8, 0x01, 0xff, 0xe5, 0x55, 
  0x55, 0x45, 0x54, 0x7f, 0xff, 0xe0, 0x1f, 0xfc, 0xff, 0xfc, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x80, 0x00, 0x00, 0x01, 0xfe, 0x01, 0xff, 0xea, 0xaa, 0xaa, 0xaa, 0xaa, 0x7f, 0xff, 0xc0, 0x1f, 
  0xf9, 0xff, 0xfc, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x01, 0xfe, 0x01, 0xff, 
  0xe5, 0x55, 0x55, 0x15, 0x55, 0x7f, 0xff, 0xc0, 0x3f, 0xf9, 0xff, 0xfc, 0x03, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x01, 0xff, 0xe2, 0xaa, 0xaa, 0x82, 0xaa, 0x7f, 0xff, 
  0x80, 0x3f, 0xf9, 0xff, 0xf8, 0x03, 0xff, 0xff, 0x87, 0xff, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 
  0x01, 0xff, 0xe5, 0x55, 0x55, 0x55, 0x55, 0x3f, 0xff, 0x00, 0x7f, 0xf3, 0xff, 0x00, 0x00, 0x3f, 
  0xe0, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x0f, 0x01, 0xff, 0x03, 0xff, 0xf2, 0xaa, 0xaa, 0x8a, 0xaa, 
  0xbf, 0xff, 0x00, 0xff, 0xf3, 0xfc, 0x28, 0x02, 0x9f, 0x02, 0xaa, 0x0f, 0xff, 0xff, 0xf8, 0x0f, 
  0x80, 0xff, 0x03, 0xff, 0xf5, 0x55, 0x55, 0x41, 0x55, 0x3f, 0xfe, 0x00, 0xff, 0xe7, 0xf1, 0x50, 
  0x05, 0x4c, 0x55, 0x55, 0x43, 0xff, 0xff, 0xf8, 0x0f, 0x80, 0xfe, 0x07, 0xff, 0xf2, 0xaa, 0xaa, 
  0xaa, 0xaa, 0x9f, 0xfc, 0x01, 0xff, 0xe7, 0xe2, 0xa8, 0x02, 0xa0, 0xaa, 0xaa, 0xa9, 0xff, 0xff, 
  0xf8, 0x0f, 0xc0, 0x7c, 0x0f, 0xff, 0xf1, 0x55, 0x55, 0x45, 0x55, 0x5f, 0xf8, 0x01, 0xff, 0xcf, 
  0xe5, 0x50, 0x05, 0x45, 0x55, 0x55, 0x54, 0xff, 0xff, 0xf8, 0x0f, 0xf0, 0x00, 0x3f, 0xff, 0xf2, 
  0xaa, 0xaa, 0xa0, 0xaa, 0x81, 0xf8, 0x03, 0xff, 0xcf, 0xca, 0xa8, 0x02, 0xa2, 0xaa, 0xaa, 0xaa, 
  0x7f, 0xff, 0xf8, 0x0f, 0xfe, 0x00, 0xff, 0xff, 0xf9, 0x55, 0x55, 0x55, 0x55, 0x40, 0x70, 0x07, 
  0xff, 0x9f, 0xc5, 0x50, 0x05, 0x45, 0x55, 0x55, 0x55, 0x7f, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 
  0xff, 0xf8, 0xaa, 0xaa, 0xa2, 0xaa, 0xaa, 0x80, 0x07, 0xff, 0x9f, 0xca, 0xa8, 0x0a, 0x8a, 0xaa, 
  0xaa, 0xaa, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x55, 0x55, 0x50, 0x55, 0x45, 
  0x40, 0x0f, 0xff, 0x3f, 0x05, 0x55, 0x55, 0x45, 0x55, 0x55, 0x55, 0x3f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xfc, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xa0, 0x1f, 0xfe, 0x7e, 0x22, 0xaa, 0xaa, 
  0x0a, 0xaa, 0xaa, 0xaa, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x55, 0x55, 0x51, 
  0x55, 0x55, 0x50, 0x3f, 0xfe, 0x7c, 0x51, 0x55, 0x54, 0x55, 0x55, 0x55, 0x55, 0x1f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x2a, 0xaa, 0xa8, 0x2a, 0xaa, 0xa8, 0x3f, 0xfc, 0xf8, 0xa8, 
  0x2a, 0xa0, 0xaa, 0xaa, 0xaa, 0xaa, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x55, 
  0x55, 0x55, 0x55, 0x55, 0x54, 0x7f, 0xfd, 0xf1, 0x54, 0x00, 0x05, 0x55, 0x55, 0x55, 0x55, 0x1f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xaa, 0xaa, 0xa8, 0xff, 0xf9, 
  0xf2, 0xaa, 0x80, 0xaa, 0xab, 0xff, 0xff, 0xaa, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x80, 0x00, 0x04, 0x55, 0x55, 0x55, 0xff, 0xff, 0x15, 0x55, 0x55, 0x55, 0x56, 0x00, 0x01, 
  0x55, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x06, 0x0a, 0xaa, 0xaa, 
  0xff, 0xf0, 0x1a, 0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0x01, 0xaa, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x80, 0x00, 0x05, 0x05, 0x55, 0x54, 0xff, 0xc0, 0xf5, 0x55, 0x55, 0x55, 0x56, 
  0x00, 0x01, 0x55, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x0e, 0x82, 
  0xaa, 0xaa, 0xff, 0x03, 0xca, 0xaa, 0xaa, 0xaa, 0xae, 0x00, 0x01, 0xaa, 0xbf, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x0d, 0x41, 0x55, 0x54, 0xfe, 0x0f, 0xc5, 0x55, 0x55, 
  0x55, 0x54, 0x00, 0x01, 0x55, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff, 
  0x1a, 0xa0, 0xaa, 0xa2, 0xfc, 0x1f, 0xca, 0xaa, 0xaa, 0xaa, 0xac, 0xff, 0xff, 0xaa, 0x3f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9c, 0x57, 0x15, 0x44, 0x55, 0x51, 0xf8, 0x3f, 0xc5, 
  0x55, 0x55, 0x55, 0x54, 0xd5, 0x55, 0x55, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0x9e, 0x2a, 0x3a, 0x8a, 0x2a, 0xa9, 0xf0, 0x3f, 0xea, 0xaa, 0xaa, 0xaa, 0xac, 0xaa, 0xaa, 0xaa, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x16, 0x35, 0x11, 0x15, 0x53, 0xe0, 
  0x7f, 0xe5, 0x55, 0x55, 0x55, 0x54, 0xd5, 0x55, 0x54, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xbf, 0x8c, 0x68, 0xa0, 0x8a, 0xa9, 0xe0, 0x7f, 0xe2, 0xaa, 0xaa, 0xaa, 0xac, 0xff, 
  0xea, 0xa8, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcc, 0x51, 0x14, 0x45, 
  0x55, 0xc0, 0x70, 0x3d, 0x55, 0x55, 0x55, 0x5c, 0xc0, 0x3d, 0x51, 0x3f, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xca, 0x2a, 0x2a, 0xa9, 0xc0, 0x80, 0x0e, 0xaa, 0xaa, 0xaa, 
  0xa9, 0x00, 0x0e, 0xa2, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x90, 
  0x55, 0x15, 0x55, 0xc0, 0x00, 0x07, 0x55, 0x55, 0x55, 0x58, 0x00, 0x07, 0x44, 0x7f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xa2, 0xaa, 0x82, 0xa9, 0x80, 0x3c, 0x02, 0xaa, 
  0xaa, 0xaa, 0xa8, 0x7c, 0x03, 0x08, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe1, 0x15, 0x55, 0x51, 0x54, 0x80, 0xfe, 0x03, 0x55, 0x55, 0x55, 0x59, 0xd6, 0x01, 0xd1, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xaa, 0xaa, 0xaa, 0xa8, 0x80, 0xfe, 
  0x01, 0x0a, 0xaa, 0xaa, 0xaf, 0xab, 0x00, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xfb, 0xff, 0xc2, 0x55, 0x55, 0x45, 0x55, 0x80, 0xff, 0x01, 0x45, 0x55, 0x55, 0x55, 0x55, 0x80, 
  0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xc6, 0x2a, 0xaa, 0xa0, 0xa9, 
  0x80, 0xff, 0x01, 0xa0, 0xaa, 0xaa, 0xaa, 0xa8, 0x80, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf7, 0xff, 0x8f, 0x55, 0x55, 0x55, 0x51, 0x80, 0xff, 0x01, 0x54, 0x01, 0x55, 0x5f, 
  0xc1, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0x8f, 0x2a, 0xaa, 
  0xa0, 0xa3, 0x80, 0xff, 0x01, 0x0a, 0xa0, 0x00, 0x30, 0x6a, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0x1f, 0x95, 0x55, 0x51, 0x57, 0x80, 0xff, 0x01, 0x81, 0x4e, 
  0x01, 0x60, 0x20, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0x1f, 
  0xca, 0xaa, 0xa8, 0x8f, 0xc0, 0xff, 0x01, 0xf8, 0x0f, 0xe0, 0x20, 0x27, 0x81, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfe, 0x3f, 0xe5, 0x55, 0x50, 0x1f, 0xc0, 0x7f, 0x03, 
  0xff, 0xff, 0xff, 0xe0, 0x3f, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 
  0xfc, 0x3f, 0xf2, 0xaa, 0xa8, 0xff, 0xe0, 0x7e, 0x03, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0x03, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7c, 0x7f, 0xf9, 0x55, 0x53, 0xff, 0xf0, 
  0x3e, 0x07, 0xff, 0xff, 0xff, 0xf0, 0x7e, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x88, 0x7f, 0x80, 0x2a, 0xa3, 0xff, 0xf8, 0x1c, 0x0f, 0xff, 0xff, 0xff, 0xf8, 0x7c, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xc0, 0x3f, 0x05, 0x0f, 
  0xff, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};