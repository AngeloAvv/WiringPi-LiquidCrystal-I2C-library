# WiringPi-LiquidCrystal-I2C-library
**WiringPi-LiquidCrystal-I2C-library** is a WiringPi porting of the original **Arduino-LiquidCrystal-I2C-library**.
This library is fully compatible with every device that guarantees a wiringPi GPIO port mapping. 
It's a C++ alternative of the Python library.

## How to install
First of all, you need to install **WiringPi**, in my case I tested this library on the RaspberryPi and on the OrangePi One.
For the first one, you can find many tutorials, for the second one, you have to install a custom WiringPi with different GPIO port mapping.
You can download a custom WiringPi version compatible with OPi devices (maybe all devices with Allwinner ARM H3 CPUs) here:
https://github.com/zhaolei/WiringOP

## How to use
You just need to copy the class files and include them in your main as you usual do:
<code>#include "LiquidCrystal_I2C.h"</code>
and then you can use all of the methods of this original library:
https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library

## How to compile
Don't forget to compile both **LiquidCrystal_I2C.h** and **LiquidCrystal_I2C.cpp** files, and remember that you will need to link
the WiringPi library using <code>-lWiringPi</code>