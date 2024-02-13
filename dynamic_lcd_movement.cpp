#include "dynamic_lcd_movement.h"
#include <Arduino.h>
#include <LiquidCrystal.h>

// Constructor
lcdshift::lcdshift(int rs, int en, int d4, int d5, int d6, int d7, int up_pin, int down_pin, int enter_pin)
    : rs(rs), en(en), d4(d4), d5(d5), d6(d6), d7(d7), up(up_pin), down(down_pin), enter(enter_pin), lcd(rs, en, d4, d5, d6, d7), cline(0), nline(0), ledlight(0)
{
}

void lcdshift::begin()
{
    lcd.begin(16, 2);
}

void lcdshift::print(const String &line1, const String &line2)
{
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(line1);
    lcd.setCursor(0, 1);
    lcd.print(line2);
    delay(50);
}

void lcdshift::initialize(const String &l1, const String &l2, const String &l3, const String &l4, const String &l5, const String &l6)
{
    lines[0] = l1;
    lines[1] = l2;
    lines[2] = l3;
    lines[3] = l4;
    lines[4] = l5;
    lines[5] = l6;
}

void lcdshift::update(const String &l1, const String &l2, const String &l3, const String &l4, const String &l5, const String &l6)
{
    lines[0] = l1;
    lines[1] = l2;
    lines[2] = l3;
    lines[3] = l4;
    lines[4] = l5;
    lines[5] = l6;
}

void lcdshift::go(const String &p1, const String &p2, const String &p3, const String &p4, const String &p5)
{
    pages[0] = p1;
    pages[1] = p2;
    pages[2] = p3;
    pages[3] = p4;
    pages[4] = p5;
}
void lcdshift::end()
{
}
