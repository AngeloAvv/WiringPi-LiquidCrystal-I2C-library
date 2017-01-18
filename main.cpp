#include <iostream>
#include "LiquidCrystal_I2C.h"

int main() {

    LiquidCrystal_I2C *LCD = new LiquidCrystal_I2C(0x3f, 16, 2);
    LCD->write("Hello");
    LCD->setCursor(0, 1);
    LCD->write("World");

    return 0;
}