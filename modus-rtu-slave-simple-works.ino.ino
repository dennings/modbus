/*
  ModbusRTU ESP8266/ESP32 Simple slave example

  (c)2019 Alexander Emelianov (a.m.emelianov@gmail.com)
  https://github.com/emelianov/modbus-esp8266

  modified 13 May 2020 by brainelectronics
  modified 3 Oct 2021 by dennings 

  This code is licensed under the BSD New License. See LICENSE.txt for more info.
*/
#include <ModbusRTU.h>

// PIN TX = TX and PIN RX = RX  no connection when programming!! serial is used for programming ;((

#define SLAVE_ID 3     // lets give me modbusRTU Device ID 0x3 !!!!  just because it works ;)

ModbusRTU mb;

void setup() {
  Serial.begin(9600, SERIAL_8N1);       // listen to hardware serial port 9600baud 8,n,1
  mb.begin(&Serial);

  mb.slave(SLAVE_ID);

  mb.addHreg(0);     // this will be HOLDING REGISTER 0x0
  mb.Hreg(0, 100);   // setvalue of 100 dec to holding reg 0x0
  mb.addHreg(8);     // this will be HOLDING REGISTER 0x8
  mb.Hreg(8, 50000); // setvalue of 50000dec unit16 to holding reg 0x8
  mb.addHreg(10);
  mb.Hreg(10, 60000);
}

void loop() {
  mb.task();
  yield();
}
