# mcp2515-c

## Supported Platform

- Arduino
- TI CC2640
- Linux (work in process)
- Supporting on other platforms by implementing appropriate SPI and Util interface are welcomed!

## Getting Started

Adjust ```config.h``` to your platform by ```#define PLATFORM_ARDUINO``` or ```#define PLATFORM_CC2640```.

## Development

- Install PlatformIO

- Build by ```pipenv run build```

### SPI and Util Interface

This library supports any MCU only if SPI and Util is implemented according to following interface.

```
void spi_init();
void spi_start();
void spi_end();
unsigned char spi_transfer(unsigned char data);
```

### Issues

- The project's parent directory should be emtpy for using PlatformIO, otherwise PlatformIO will build all other directories as libraries which makes compilation process very slow.
