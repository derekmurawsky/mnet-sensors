# Garage Controller

The barn is massive and has four large garage doors on it, three of which have door openers. It would be really convenient to know if the doors were open and, if so, to be able to close them remotely.

## Parts

* [Adafruit Feather Huzzah32](https://www.adafruit.com/product/3619) [Info](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather/overview)
* [Waveshare IO Expansion Board](https://www.amazon.com/gp/product/B07P2H1NZG/) [Info](https://www.waveshare.com/wiki/MCP23017_IO_Expansion_Board)

## Pinout

### Huzzah32

| GPIO Pin | Description |
| -------- | ----------- |
| scl      |             |
| scd      |             |
| 21       | Temp Sensor |

### IO Expander

In order to facilitate future expansion, a Waveshare IO expander is used. This gives 16 GPIOs for easy use by the ESP32 via the SPI interface.

| GPIO Pin | Description |
| -------- | ----------- |
| PA0      | GD 1 Relay  |
| PA1      | GD 2 Relay  |
| PA2      | GD 3 Relay  |
| PB0      | GD 1 Open   |
| PB1      | GD 1 Closed |
| PB2      | GD 2 Open   |
| PB3      | GD 2 Closed |
| PB4      | GD 3 Open   |
| PB5      | GD 3 Closed |
