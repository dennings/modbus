# modbus
a modbus sample for ESP8266 as a modbus RTU Slave 

Serial settings 9600baus, 8, n, 1
modbus Device ID: 0x3
listening at address 0x3 with HOLDING REGISTER 0x0 0x8 0xA 


Setup:
ESP8266(slave)  ----- A+/B- --------- RS485 ------ ATIM sigfox modbus master 
or
ESP8266(slave)  ----- A+/B- --------- RS485 ------ Raspberry with RS485 and node-red

both working ;)


# some pic of my setup and wiring:

![Portada](https://github.com/dennings/modbus/blob/main/20211003_140946208_iOS%20(Medium).jpg)

![Portada](https://github.com/dennings/modbus/blob/main/20211003_140952143_iOS%20(Medium).jpg)

![Portada](https://github.com/dennings/modbus/blob/main/20211003_144737410_iOS%20(Medium).jpg)

![Portada](https://github.com/dennings/modbus/blob/main/20211003_144821737_iOS%20(Medium).jpg)
