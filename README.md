# TSD305 Arduino Library
Arduino library for the TSD305 sensor


##Sensor Description

The TSD is a contactless temperature measurement system located in a TO5 package. The TSD includes an infrared sensor (thermopile) and a sensor signal conditioner.
The TSD can be interfaced to any microcontroller by an I2C interface. This microcontroller has to calculate the temperature results based on the ADC values and the calibration parameters.
The basic working principle is:
* Detection of infrared radiation by a thermopile sensor, which turns incoming radiation to an analogue voltage
* Determination of the sensor temperature
* Conversion of sensor temperature and thermopile voltage into a corresponding
ADC values
* Providing ADC values and calibration coefficients via. I2C interface.

###Features
* 0°C ... +100°C measurement range Small size
* Up to ±1°C accuracy
* I2C Interface
* Low current consumption
* Operating Temperature Range: -10°C ... +85°C


##Library features
* Connection test
* Temperature and object temperature measurement
