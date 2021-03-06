#ifndef _SPI_H_
#define _SPI_H_

#include "config.h"

#if defined(PLATFORM_ARDUINO)
#include "arduino/spi_arduino.h"
#elif defined(PLATFORM_CC2640) || defined(PLATFORM_CC2642)
#include "cc264x/spi_cc264x.h"
#endif

#define SPI_DUMMY_INT 0x00
#define SPI_TRANSFER_LEN 1

#if defined(__cplusplus)
extern "C"
{
#endif

    void spi_init();
    void spi_start();
    void spi_end();
    uint8_t spi_transfer(const uint8_t data);

#if defined(__cplusplus)
}
#endif

#endif
