////////////////////////////////////////////////////////////////////////////////
//
// Filename:	../demo-out/board.h
//
// Project:	VideoZip, a ZipCPU SoC supporting video functionality
//
// DO NOT EDIT THIS FILE!
// Computer Generated: This file is computer generated by AUTOFPGA. DO NOT EDIT.
// DO NOT EDIT THIS FILE!
//
// CmdLine:	./autofpga ./autofpga -o ../demo-out ../auto-data/global.txt ../auto-data/clock.txt ../auto-data/bkram.txt ../auto-data/flash.txt ../auto-data/zipmaster.txt ../auto-data/wbubus.txt ../auto-data/dlyarbiter.txt ../auto-data/gps.txt ../auto-data/icape.txt ../auto-data/mdio.txt ../auto-data/spio.txt ../auto-data/wboledbw.txt ../auto-data/rtcdate.txt ../auto-data/hdmi.txt ../auto-data/clkcounter.txt ../auto-data/gpio.txt ../auto-data/pwrcount.txt ../auto-data/wbpmic.txt ../auto-data/version.txt ../auto-data/buserr.txt ../auto-data/pic.txt ../auto-data/rtcgps.txt ../auto-data/wbmouse.txt
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2017, Gisselquist Technology, LLC
//
// This program is free software (firmware): you can redistribute it and/or
// modify it under the terms of  the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program.  (It's in the $(ROOT)/doc directory.  Run make with no
// target there if the PDF file isn't present.)  If not, see
// <http://www.gnu.org/licenses/> for a copy.
//
// License:	GPL, v3, as defined and found on www.gnu.org,
//		http://www.gnu.org/licenses/gpl.html
//
//
////////////////////////////////////////////////////////////////////////////////
//
//
#ifndef	BOARD_H
#define	BOARD_H

// And, so that we can know what is and isn't defined
// from within our main.v file, let's include:
#include "design.h"

typedef	struct	RTCLIGHT_S	{
	unsigned	r_clock, r_stopwatch, r_timer, r_alarm;
} RTCLIGHT;


#define WBMIC_ENABLE	0
#define WBMIC_DISABLE	(1<<20)
#define WBMIC_NONEMPTY	0
#define WBMIC_HALFINT	(1<<22)
#define WBMIC_RESET	(1<<24)

typedef struct  WBMIC_S {
	unsigned	m_data;
	unsigned	m_setup;
} WBMIC;


typedef	struct	GPSTRACKER_S	{
	unsigned	g_alpha, g_beta, g_gamma, g_step;
} GPSTRACKER;


// Definitions to interact with the OLED device
#define	OLED_LOGICEN		0x0010001
#define	OLED_LOGICEN_OFF	0x0010000
#define	OLED_IOPWR		OLED_PMODEN
#define	OLED_DPWREN		0x0020002 // Was VCC
#define	OLED_DPWR_DISABLE	0x0020000
#define	OLED_RESET		0x0040000
#define	OLED_RESET_CLR		0x0040004
#define	OLED_FULLPOWER		(OLED_PMODEN|OLED_VCCEN|OLED_RESET_CLR)
#define	OLED_POWER_DOWN		(OLED_PMODEN_OFF|OLED_VCCEN|OLED_RESET_CLR)
#define	OLED_BUSY(dev)		(dev.o_ctrl & 1)
#define	OLED_DISPLAYON		0x0af	// To be sent over the control channel
typedef	struct OLEDBW_S {
	unsigned	o_ctrl, o_a, o_b, o_data;
} OLEDBW;



#ifndef	WBUART_H
#define	WBUART_H

#define UART_PARITY_NONE        0
#define UART_HWFLOW_OFF         0x40000000
#define UART_PARITY_ODD         0x04000000
#define UART_PARITY_EVEN        0x05000000
#define UART_PARITY_SPACE       0x06000000
#define UART_PARITY_MARK        0x07000000
#define UART_STOP_ONEBIT        0
#define UART_STOP_TWOBITS       0x08000000
#define UART_DATA_8BITS         0
#define UART_DATA_7BITS         0x10000000
#define UART_DATA_6BITS         0x20000000
#define UART_DATA_5BITS         0x30000000
#define UART_RX_BREAK           0x0800
#define UART_RX_FRAMEERR        0x0400
#define UART_RX_PARITYERR       0x0200
#define UART_RX_NOTREADY        0x0100
#define UART_RX_ERR             (-256)
#define UART_TX_BUSY            0x0100
#define UART_TX_BREAK           0x0200

typedef struct  WBUART_S {
		unsigned	u_setup;
		unsigned	u_fifo;
		unsigned	u_rx, u_tx;
} WBUART;
#endif


typedef	struct	GPSTB_S	{
	unsigned	tb_maxcount; tb_jump;
	unsigned long	tb_err, tb_count, tb_step;
} GPSTB;


// Offsets for the ICAPE2 interface
#define	CFG_CRC		0
#define	CFG_FAR		1
#define	CFG_FDRI	2
#define	CFG_FDRO	3
#define	CFG_CMD		4
#define	CFG_CTL0	5
#define	CFG_MASK	6
#define	CFG_STAT	7
#define	CFG_LOUT	8
#define	CFG_COR0	9
#define	CFG_MFWR	10
#define	CFG_CBC		11
#define	CFG_IDCODE	12
#define	CFG_AXSS	13
#define	CFG_COR1	14
#define	CFG_WBSTAR	16
#define	CFG_TIMER	17
#define	CFG_BOOTSTS	22
#define	CFG_CTL1	24
#define	CFG_BSPI	31


//
// The Ethernet MDIO interface
//
#define MDIO_BMCR	0x00
#define MDIO_BMSR	0x01
#define MDIO_PHYIDR1	0x02
#define MDIO_PHYIDR2	0x03
#define MDIO_ANAR	0x04
#define MDIO_ANLPAR	0x05
#define MDIO_ANLPARNP	0x05	// Duplicate register address
#define MDIO_ANER	0x06
#define MDIO_ANNPTR	0x07
#define MDIO_PHYSTS	0x10
#define MDIO_FCSCR	0x14
#define MDIO_RECR	0x15
#define MDIO_PCSR	0x16
#define MDIO_RBR	0x17
#define MDIO_LEDCR	0x18
#define MDIO_PHYCR	0x19
#define MDIO_BTSCR	0x1a
#define MDIO_CDCTRL	0x1b
#define MDIO_EDCR	0x1d

typedef struct ENETMDIO_S {
	unsigned	e_v[32];
} ENETMDIO;



#define	SPIO_BTNC	0x01000
#define	SPIO_BTND	0x00800
#define	SPIO_BTNL	0x00400
#define	SPIO_BTNR	0x00200
#define	SPIO_BTNU	0x00100


// Mouse definitions
typedef struct  WBMOUSE_S {
	unsigned	m_bus, m_raw, m_screen, m_size;
} WBMOUSE;



#define	ISPIF_EN	0x80010001
#define	ISPIF_DIS	0x00010001
#define	ISPIF_CLR	0x00000001


#define	SZPAGEB		256
#define	PGLENB		256
#define	SZPAGEW		64
#define	PGLENW		64
#define	NPAGES		256
#define	SECTORSZB	(NPAGES * SZPAGEB)	// In bytes, not words!!
#define	SECTORSZW	(NPAGES * SZPAGEW)	// In words
#define	NSECTORS	64
#define	SECTOROF(A)	((A) & (-1<<16))
#define	SUBSECTOROF(A)	((A) & (-1<<12))
#define	PAGEOF(A)	((A) & (-1<<8))



#define	CLKFREQHZ	@$THIS.CLKFREQHZ


#ifdef	RTC_ACCESS
#define	_BOARD_HAS_RTCLIGHT
static volatile RTCLIGHT *const _rtc = &((RTCLIGHT *)1616);#endif	// RTC_ACCESS
#define	_BOARD_HAS_VERSION_ID
#ifdef	CONSOLE_ACCESS
#define	_BOARD_HAS_WBMIC
static volatile WBMIC *const _wbmic = &((WBUART *)2048);#endif	// CONSOLE_ACCESS
#ifdef	GPIO_ACCESS
#define	_BOARD_HAS_GPIO
static volatile unsigned *const _gpio = &((unsigned *)1044);#endif	// GPIO_ACCESS
#ifdef	FLASH_ACCESS
#define	_BOARD_HASH_FLASH
extern int _flash[1];#endif	// FLASH_ACCESS
#ifdef	OLEDRGB_ACCESS
#define	_BOARD_HAS_OLEDBW
static volatile OLEDRGB *const _oledbw = &((OLEDRGB *)1600);#endif	// OLEDRGB_ACCESS
#ifdef	BLKRAM_ACCESS
#define	_BOARD_HAS_BLKRAM
extern int	_blkram[1];#endif	// BLKRAM_ACCESS
#define	_BOARD_HAS_BUSERR
static volatile unsigned *const _buserr = &((unsigned *)1024);#ifdef	BUSPIC_ACCESS
#define	_BOARD_HAS_BUSPIC
static volatile unsigned *const _buspic = &((unsigned *)1028);#endif	// BUSPIC_ACCESS
#ifdef	GPSUART_ACCESS
#define	_BOARD_HAS_GPS_UART
static volatile @$THIS.IOTYPE *const _gpsu = &((@$THIS.IOTYPE *)2080);#endif	// GPSUART_ACCESS
#ifdef	RTCDATE_ACCESS
#define	_BOARD_HAS_RTCDATE
static volatile *const _date = &((BOARD *)PERIPHERAL_ADDR)->io_single.i_rtcdate;#endif	// RTCDATE_ACCESS
#ifdef	CFG_ACCESS
#define	_BOARD_HAS_ICAPTETWO
static volatile unsigned *const _icape = &((unsigned *)2176);#endif	// CFG_ACCESS
#ifdef	NETCTRL_ACCESS
#define	_BOARD_HAS_NETMDIO
static volatile ENETMDIO *const _mdio = &((ENETMDIO *)2304);#endif	// NETCTRL_ACCESS
#ifdef	SPIO_ACCESS
#define	_BOARD_HAS_SPIO
static volatile unsigned *const _spio = &((unsigned *)1052);#endif	// SPIO_ACCESS
#ifdef	MOUSE_ACCESS
#define	_BOARD_HAS_WBMOUSE
static volatile WBMOUSE *const _mouse = &((WBMOUSE *)1584);#endif	// MOUSE_ACCESS
//
// Interrupt assignments (3 PICs)
//
// PIC: syspic
#define	SYSPIC_DMAC	SYSPIC(0)
#define	SYSPIC_JIFFIES	SYSPIC(1)
#define	SYSPIC_TMC	SYSPIC(2)
#define	SYSPIC_TMB	SYSPIC(3)
#define	SYSPIC_TMA	SYSPIC(4)
#define	SYSPIC_ALT	SYSPIC(5)
#define	SYSPIC_BUS	SYSPIC(6)
#define	SYSPIC_OLED	SYSPIC(7)
#define	SYSPIC_GPSRXF	SYSPIC(8)
#define	SYSPIC_EDID	SYSPIC(9)
#define	SYSPIC_MOUSE	SYSPIC(10)
// PIC: altpic
#define	ALTPIC_UIC	ALTPIC(0)
#define	ALTPIC_UOC	ALTPIC(1)
#define	ALTPIC_UPC	ALTPIC(2)
#define	ALTPIC_UTC	ALTPIC(3)
#define	ALTPIC_MIC	ALTPIC(4)
#define	ALTPIC_MOC	ALTPIC(5)
#define	ALTPIC_MPC	ALTPIC(6)
#define	ALTPIC_MTC	ALTPIC(7)
#define	ALTPIC_RTC	ALTPIC(8)
#define	ALTPIC_MIC	ALTPIC(9)
#define	ALTPIC_GPIO	ALTPIC(10)
#define	ALTPIC_GPSTXF	ALTPIC(11)
#define	ALTPIC_GPSTX	ALTPIC(12)
#define	ALTPIC_GPSRX	ALTPIC(13)
// PIC: buspic
#define	BUSPIC_FLASH	BUSPIC(0)
#define	BUSPIC_SPIO	BUSPIC(1)
#define	BUSPIC_SCOPE	BUSPIC(2)
#define	BUSPIC_MOUSE	BUSPIC(3)
#define	BUSPIC_HINSCOPE	BUSPIC(4)
