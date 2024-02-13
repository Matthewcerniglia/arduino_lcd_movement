#ifndef DYNAMIC_LCD_MOVEMENT_H
#define DYNAMIC_LCD_MOVEMENT_H

#include <Arduino.h>
#include <LiquidCrystal.h>

class lcdshift
{
public:
  // Constructor
  lcdshift(int rs, int en, int d4, int d5, int d6, int d7, int up_pin, int down_pin, int enter_pin);

  // Function declarations
  void begin();
  void print(const String &line1, const String &line2);
  void initialize(const String &l1, const String &l2, const String &l3, const String &l4, const String &l5, const String &l6);
  void update(const String &l1, const String &l2, const String &l3, const String &l4, const String &l5, const String &l6);
  void go(const String &p1, const String &p2, const String &p3, const String &p4, const String &p5);
  void end();
  String lines[6];
  String pages[5];
  int cline = 0;
  int nline = cline + 1;

private:
  // Class members
  const int rs, en, d4, d5, d6, d7, up, down, enter, ledlight;
  LiquidCrystal lcd;
};

#endif
