/**
 * \file
 *
 * \brief GCC startup file for ATSAME70Q20
 *
 * Copyright (c) 2016 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */


#include "same70q20.h"

/* Initialize segments */
extern uint32_t _sfixed;
extern uint32_t _efixed;
extern uint32_t _etext;
extern uint32_t _srelocate;
extern uint32_t _erelocate;
extern uint32_t _szero;
extern uint32_t _ezero;
extern uint32_t _sstack;
extern uint32_t _estack;

/** \cond DOXYGEN_SHOULD_SKIP_THIS */
int main(void);
/** \endcond */

void __libc_init_array(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M7 core handlers */
void NMI_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MemManage_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMon_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void SUPC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RSTC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTT_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PMC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EFC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USART2_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOE_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HSMCI_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIHS0_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIHS1_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPI0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SSC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AFEC0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DACC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ACC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void USBHS_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN0_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MCAN1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void GMAC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AFEC1_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TWIHS2_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SPI1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QSPI_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART2_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART3_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UART4_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC6_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC7_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC8_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC9_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC10_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC11_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void XDMAC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ISI_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SDRAMC_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RSWDT_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Exception Table */
__attribute__ ((section(".vectors")))
const DeviceVectors exception_table = {

        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_estack),

        .pfnReset_Handler              = (void*) Reset_Handler,
        .pfnNMI_Handler                = (void*) NMI_Handler,
        .pfnHardFault_Handler          = (void*) HardFault_Handler,
        .pfnMemManage_Handler          = (void*) MemManage_Handler,
        .pfnBusFault_Handler           = (void*) BusFault_Handler,
        .pfnUsageFault_Handler         = (void*) UsageFault_Handler,
        .pfnReserved1_Handler          = (void*) (0UL), /* Reserved */
        .pfnReserved2_Handler          = (void*) (0UL), /* Reserved */
        .pfnReserved3_Handler          = (void*) (0UL), /* Reserved */
        .pfnReserved4_Handler          = (void*) (0UL), /* Reserved */
        .pfnSVC_Handler                = (void*) SVC_Handler,
        .pfnDebugMon_Handler           = (void*) DebugMon_Handler,
        .pfnReserved5_Handler          = (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

        /* Configurable interrupts */
        .pfnSUPC_Handler               = (void*) SUPC_Handler,   /* 0  Supply Controller */
        .pfnRSTC_Handler               = (void*) RSTC_Handler,   /* 1  Reset Controller */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 2  Real-time Clock */
        .pfnRTT_Handler                = (void*) RTT_Handler,    /* 3  Real-time Timer */
        .pfnWDT_Handler                = (void*) WDT_Handler,    /* 4  Watchdog Timer */
        .pfnPMC_Handler                = (void*) PMC_Handler,    /* 5  Power Management Controller */
        .pfnEFC_Handler                = (void*) EFC_Handler,    /* 6  Embedded Flash Controller */
        .pfnUART0_Handler              = (void*) UART0_Handler,  /* 7  Universal Asynchronous Receiver Transmitter */
        .pfnUART1_Handler              = (void*) UART1_Handler,  /* 8  Universal Asynchronous Receiver Transmitter */
        .pvReserved9                   = (void*) (0UL),          /* 9  Reserved */
        .pfnPIOA_Handler               = (void*) PIOA_Handler,   /* 10 Parallel Input/Output Controller */
        .pfnPIOB_Handler               = (void*) PIOB_Handler,   /* 11 Parallel Input/Output Controller */
        .pfnPIOC_Handler               = (void*) PIOC_Handler,   /* 12 Parallel Input/Output Controller */
        .pfnUSART0_Handler             = (void*) USART0_Handler, /* 13 Universal Synchronous Asynchronous Receiver Transmitter */
        .pfnUSART1_Handler             = (void*) USART1_Handler, /* 14 Universal Synchronous Asynchronous Receiver Transmitter */
        .pfnUSART2_Handler             = (void*) USART2_Handler, /* 15 Universal Synchronous Asynchronous Receiver Transmitter */
        .pfnPIOD_Handler               = (void*) PIOD_Handler,   /* 16 Parallel Input/Output Controller */
        .pfnPIOE_Handler               = (void*) PIOE_Handler,   /* 17 Parallel Input/Output Controller */
        .pfnHSMCI_Handler              = (void*) HSMCI_Handler,  /* 18 High Speed MultiMedia Card Interface */
        .pfnTWIHS0_Handler             = (void*) TWIHS0_Handler, /* 19 Two-wire Interface High Speed */
        .pfnTWIHS1_Handler             = (void*) TWIHS1_Handler, /* 20 Two-wire Interface High Speed */
        .pfnSPI0_Handler               = (void*) SPI0_Handler,   /* 21 Serial Peripheral Interface */
        .pfnSSC_Handler                = (void*) SSC_Handler,    /* 22 Synchronous Serial Controller */
        .pfnTC0_Handler                = (void*) TC0_Handler,    /* 23 Timer Counter */
        .pfnTC1_Handler                = (void*) TC1_Handler,    /* 24 Timer Counter */
        .pfnTC2_Handler                = (void*) TC2_Handler,    /* 25 Timer Counter */
        .pfnTC3_Handler                = (void*) TC3_Handler,    /* 26 Timer Counter */
        .pfnTC4_Handler                = (void*) TC4_Handler,    /* 27 Timer Counter */
        .pfnTC5_Handler                = (void*) TC5_Handler,    /* 28 Timer Counter */
        .pfnAFEC0_Handler              = (void*) AFEC0_Handler,  /* 29 Analog Front-End Controller */
        .pfnDACC_Handler               = (void*) DACC_Handler,   /* 30 Digital-to-Analog Converter Controller */
        .pfnPWM0_Handler               = (void*) PWM0_Handler,   /* 31 Pulse Width Modulation Controller */
        .pfnICM_Handler                = (void*) ICM_Handler,    /* 32 Integrity Check Monitor */
        .pfnACC_Handler                = (void*) ACC_Handler,    /* 33 Analog Comparator Controller */
        .pfnUSBHS_Handler              = (void*) USBHS_Handler,  /* 34 USB High-Speed Interface */
        .pfnMCAN0_Handler              = (void*) MCAN0_Handler,  /* 35 Controller Area Network */
        .pvReserved36                  = (void*) (0UL),          /* 36 Reserved */
        .pfnMCAN1_Handler              = (void*) MCAN1_Handler,  /* 37 Controller Area Network */
        .pvReserved38                  = (void*) (0UL),          /* 38 Reserved */
        .pfnGMAC_Handler               = (void*) GMAC_Handler,   /* 39 Gigabit Ethernet MAC */
        .pfnAFEC1_Handler              = (void*) AFEC1_Handler,  /* 40 Analog Front-End Controller */
        .pfnTWIHS2_Handler             = (void*) TWIHS2_Handler, /* 41 Two-wire Interface High Speed */
        .pfnSPI1_Handler               = (void*) SPI1_Handler,   /* 42 Serial Peripheral Interface */
        .pfnQSPI_Handler               = (void*) QSPI_Handler,   /* 43 Quad Serial Peripheral Interface */
        .pfnUART2_Handler              = (void*) UART2_Handler,  /* 44 Universal Asynchronous Receiver Transmitter */
        .pfnUART3_Handler              = (void*) UART3_Handler,  /* 45 Universal Asynchronous Receiver Transmitter */
        .pfnUART4_Handler              = (void*) UART4_Handler,  /* 46 Universal Asynchronous Receiver Transmitter */
        .pfnTC6_Handler                = (void*) TC6_Handler,    /* 47 Timer Counter */
        .pfnTC7_Handler                = (void*) TC7_Handler,    /* 48 Timer Counter */
        .pfnTC8_Handler                = (void*) TC8_Handler,    /* 49 Timer Counter */
        .pfnTC9_Handler                = (void*) TC9_Handler,    /* 50 Timer Counter */
        .pfnTC10_Handler               = (void*) TC10_Handler,   /* 51 Timer Counter */
        .pfnTC11_Handler               = (void*) TC11_Handler,   /* 52 Timer Counter */
        .pvReserved53                  = (void*) (0UL),          /* 53 Reserved */
        .pvReserved54                  = (void*) (0UL),          /* 54 Reserved */
        .pvReserved55                  = (void*) (0UL),          /* 55 Reserved */
        .pfnAES_Handler                = (void*) AES_Handler,    /* 56 Advanced Encryption Standard */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 57 True Random Number Generator */
        .pfnXDMAC_Handler              = (void*) XDMAC_Handler,  /* 58 Extensible DMA Controller */
        .pfnISI_Handler                = (void*) ISI_Handler,    /* 59 Image Sensor Interface */
        .pfnPWM1_Handler               = (void*) PWM1_Handler,   /* 60 Pulse Width Modulation Controller */
        .pvReserved61                  = (void*) (0UL),          /* 61 Reserved */
        .pfnSDRAMC_Handler             = (void*) SDRAMC_Handler, /* 62 SDRAM Controller */
        .pfnRSWDT_Handler              = (void*) RSWDT_Handler   /* 63 Reinforced Safety Watchdog Timer */
};

/**
 * \brief This is the code that gets called on processor reset.
 * To initialize the device, and call the main() routine.
 */
void Reset_Handler(void)
{
        uint32_t *pSrc, *pDest;

        /* Initialize the relocate segment */
        pSrc = &_etext;
        pDest = &_srelocate;

        if (pSrc != pDest) {
                for (; pDest < &_erelocate;) {
                        *pDest++ = *pSrc++;
                }
        }

        /* Clear the zero segment */
        for (pDest = &_szero; pDest < &_ezero;) {
                *pDest++ = 0;
        }

        /* Set the vector table base address */
        pSrc = (uint32_t *) & _sfixed;
        SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);

        /* Initialize the C library */
        __libc_init_array();

        /* Branch to main function */
        main();

        /* Infinite loop */
        while (1);
}

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
        while (1) {
        }
}
