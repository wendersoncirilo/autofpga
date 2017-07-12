////////////////////////////////////////////////////////////////////////////////
//
// Filename:	../demo-out/regdefs.h
//
// Project:	VideoZip, a ZipCPU SoC supporting video functionality
//
// DO NOT EDIT THIS FILE!
// Computer Generated: This file is computer generated by AUTOFPGA. DO NOT EDIT.
// DO NOT EDIT THIS FILE!
//
// CmdLine:	./autofpga ./autofpga -o ../demo-out -I ../auto-data global.txt clock.txt bkram.txt flash.txt zipmaster.txt wbubus.txt dlyarbiter.txt gps.txt icape.txt mdio.txt spio.txt wboledbw.txt rtcdate.txt hdmi.txt clkcounter.txt gpio.txt pwrcount.txt wbpmic.txt version.txt buserr.txt pic.txt rtcgps.txt wbmouse.txt sdspi.txt
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
#ifndef	REGDEFS_H
#define	REGDEFS_H


//
// The @REGDEFS.H.INCLUDE tag
//
// @REGDEFS.H.INCLUDE for masters
// @REGDEFS.H.INCLUDE for peripherals
// And finally any master REGDEFS.H.INCLUDE tags
// End of definitions from REGDEFS.H.INCLUDE


//
// Register address definitions, from @REGS.#d
//
// GPS clock tracker, control loop settings registers
#define	R_GPS_ALPHA       	0x00000000	// 00000000, wbregs names: ALPHA
#define	R_GPS_BETA        	0x00000004	// 00000000, wbregs names: BETA
#define	R_GPS_GAMMA       	0x00000008	// 00000000, wbregs names: GAMMA
#define	R_GPS_STEP        	0x0000000c	// 00000000, wbregs names: STEP
#define	R_BUSERR          	0x00000000	// 00000000, wbregs names: BUSERR
#define	R_PIC             	0x00000004	// 00000004, wbregs names: PIC
// HDMI-IN Clock Counter (measures clock speed)
#define	R_HDMI_INCLK      	0x00000008	// 00000008, wbregs names: HCLKIN
// HDMI-OUT Clock Counter (measures clock speed)
#define	R_HDMI_OUTCLK     	0x0000000c	// 0000000c, wbregs names: HCLKOUT
#define	R_DATE            	0x00000010	// 00000010, wbregs names: RTCDATE, DATE
#define	R_GPIO            	0x00000014	// 00000014, wbregs names: GPIO, GPI, GPO
#define	R_PWRCOUNT        	0x00000018	// 00000018, wbregs names: PWRCOUNT
#define	R_SPIO            	0x0000001c	// 0000001c, wbregs names: SPIO
// SYSCLK Clock Counter (measures clock speed)
#define	R_SYSCLK          	0x00000020	// 00000020, wbregs names: SYSCLK
#define	R_MOUSE_STAT      	0x00000020	// 00000020, wbregs names: MSTAT
#define	R_MOUSE_RAW       	0x00000024	// 00000020, wbregs names: MRAW
#define	R_SCRN_MOUSE      	0x00000028	// 00000020, wbregs names: MOUSE
#define	R_SCRN_SIZE       	0x0000002c	// 00000020, wbregs names: MSIZ
#define	R_VERSION         	0x00000024	// 00000024, wbregs names: VERSION
#define	R_OLED_CMD        	0x00000040	// 00000040, wbregs names: OLED
#define	R_OLED_CDATA      	0x00000044	// 00000040, wbregs names: OLEDCA
#define	R_OLED_CDATB      	0x00000048	// 00000040, wbregs names: OLEDCB
#define	R_OLED_DATA       	0x0000004c	// 00000040, wbregs names: ODATA
// RTC clock registers
#define	R_CLOCK           	0x00000060	// 00000060, wbregs names: CLOCK, TIMER
#define	R_TIMER           	0x00000064	// 00000060, wbregs names: TIMER
#define	R_STOPWATCH       	0x00000068	// 00000060, wbregs names: STOPWATCH
#define	R_CKALARM         	0x0000006c	// 00000060, wbregs names: ALARM, CKALARM
// GPS clock test bench registers, for measuring the clock trackers performance
#define	R_GPSTB_FREQ      	0x00000080	// 00000080, wbregs names: GPSFREQ
#define	R_GPSTB_JUMP      	0x00000084	// 00000080, wbregs names: GPSJUMP
#define	R_GPSTB_ERRHI     	0x00000088	// 00000080, wbregs names: ERRHI
#define	R_GPSTB_ERRLO     	0x0000008c	// 00000080, wbregs names: ERRLO
#define	R_GPSTB_COUNTHI   	0x00000090	// 00000080, wbregs names: CNTHI
#define	R_GPSTB_COUNTLO   	0x00000094	// 00000080, wbregs names: CNTLO
#define	R_GPSTB_STEPHI    	0x00000098	// 00000080, wbregs names: STEPHI
#define	R_GPSTB_STEPLO    	0x0000009c	// 00000080, wbregs names: STEPLO
// HDMI in (sink) bit slip control
#define	R_HIN_FRAMEADDR   	0x000000c0	// 000000c0, wbregs names: HINFRAME
#define	R_HIN_ORIGIN      	0x000000c4	// 000000c0, wbregs names: HINORIGIN
#define	R_HIN_MAXSZ       	0x000000c8	// 000000c0, wbregs names: HINMAXSZ
#define	R_HIN_RESERVED    	0x000000cc	// 000000c0, wbregs names: HINRESERVED
#define	R_HIN_SYNC_CTRL   	0x000000d0	// 000000c0, wbregs names: HINSYNCC, HINDLY
#define	R_HIN_SLIP        	0x000000d4	// 000000c0, wbregs names: HINSYNCM, HINMANUALSYNC, HINMSYNC, HINSLIP
#define	R_HIN_SYNC_DATA   	0x000000d8	// 000000c0, wbregs names: HINSYNCD, HINSYNCDATA, HINSYNC
#define	R_HIN_SYNCQ       	0x000000dc	// 000000c0, wbregs names: HINSYNCQ
#define	R_HIN_CKWORD      	0x000000e0	// 000000c0, wbregs names: HINCW, HINCKWORD, HINPIXCLK//, 9-111
#define	R_HIN_COLUMNS     	0x000000f0	// 000000c0, wbregs names: HINCOLS
#define	R_HIN_ROWS        	0x000000f4	// 000000c0, wbregs names: HINROWS
#define	R_HIN_HMODE       	0x000000f8	// 000000c0, wbregs names: HINHMODE
#define	R_HIN_VMODE       	0x000000fc	// 000000c0, wbregs names: HINVMODE
// HDMI EDID for the input HDMI port
#define	R_EDID_IN         	0x00000100	// 00000100, wbregs names: EDIN
// HDMI EDID for the output (source) HDMI port
#define	R_EDID_CMD        	0x00000200	// 00000200, wbregs names: EDCMD
#define	R_EDID_SPD        	0x00000204	// 00000200, wbregs names: EDSPD
#define	R_EDID_OUT        	0x00000300	// 00000200, wbregs names: EDOUT
// WB-Microphone registers
#define	R_MIC_DATA        	0x00100000	// 00100000, wbregs names: MICD
#define	R_MIC_CTRL        	0x00100004	// 00100000, wbregs names: MICC
// EDID/I2C Debug Scope
#define	R_EDID_SCOPC      	0x00200000	// 00200000, wbregs names: ESCOPC, ESCOPE
#define	R_EDID_SCOPD      	0x00200004	// 00200000, wbregs names: ESCOPD
// Scope outputs, for the hdmi input values
#define	R_SCOP_HDMIIN_CTRL	0x00300000	// 00300000, wbregs names: HINSCOPC, HINSCOPE
#define	R_SCOP_HDMIIN_DATA	0x00300004	// 00300000, wbregs names: HINSCOPD
// SDSPI Debugging scope
#define	R_SDSPI_SCOPC     	0x00400000	// 00400000, wbregs names: SDSCOPC, SDSCOPE
#define	R_SDSPI_SCOPD     	0x00400004	// 00400000, wbregs names: SDSCOPD
// FLASH erase/program configuration registers
#define	R_QSPI_EREG       	0x00500000	// 00500000, wbregs names: QSPIE
#define	R_QSPI_CREG       	0x00500004	// 00500000, wbregs names: QSPIC
#define	R_QSPI_SREG       	0x00500008	// 00500000, wbregs names: QSPIS
#define	R_QSPI_IDREG      	0x0050000c	// 00500000, wbregs names: QSPII
// GPS UART registers, similar to WBUART
#define	R_GPSU_SETUP      	0x00600000	// 00600000, wbregs names: GPSSETUP
#define	R_GPSU_FIFO       	0x00600004	// 00600000, wbregs names: GPSFIFO
#define	R_GPSU_UARTRX     	0x00600008	// 00600000, wbregs names: GPSRX
#define	R_GPSU_UARTTX     	0x0060000c	// 00600000, wbregs names: GPSTX
// SD-SPI addresses
#define	R_SDSPI_CTRL      	0x00700000	// 00700000, wbregs names: SDCARD
#define	R_SDSPI_DATA      	0x00700004	// 00700000, wbregs names: SDDATA
#define	R_SDSPI_FIFOA     	0x00700008	// 00700000, wbregs names: SDFIFOA, SDFIF0, SDFIFA
#define	R_SDSPI_FIFOB     	0x0070000c	// 00700000, wbregs names: SDFIFOB, SDFIF1, SDFIFB
// FPGA CONFIG REGISTERS: 0x4e0-0x4ff
#define	R_CFG_CRC         	0x00900000	// 00900000, wbregs names: FPGACRC
#define	R_CFG_FAR         	0x00900004	// 00900000, wbregs names: FPGAFAR
#define	R_CFG_FDRI        	0x00900008	// 00900000, wbregs names: FPGAFDRI
#define	R_CFG_FDRO        	0x0090000c	// 00900000, wbregs names: FPGAFDRO
#define	R_CFG_CMD         	0x00900010	// 00900000, wbregs names: FPGACMD
#define	R_CFG_CTL0        	0x00900014	// 00900000, wbregs names: FPGACTL0
#define	R_CFG_MASK        	0x00900018	// 00900000, wbregs names: FPGAMASK
#define	R_CFG_STAT        	0x0090001c	// 00900000, wbregs names: FPGASTAT
#define	R_CFG_LOUT        	0x00900020	// 00900000, wbregs names: FPGALOUT
#define	R_CFG_COR0        	0x00900024	// 00900000, wbregs names: FPGACOR0
#define	R_CFG_MFWR        	0x00900028	// 00900000, wbregs names: FPGAMFWR
#define	R_CFG_CBC         	0x0090002c	// 00900000, wbregs names: FPGACBC
#define	R_CFG_IDCODE      	0x00900030	// 00900000, wbregs names: FPGAIDCODE
#define	R_CFG_AXSS        	0x00900034	// 00900000, wbregs names: FPGAAXSS
#define	R_CFG_COR1        	0x00900038	// 00900000, wbregs names: FPGACOR1
#define	R_CFG_WBSTAR      	0x00900040	// 00900000, wbregs names: WBSTAR
#define	R_CFG_TIMER       	0x00900044	// 00900000, wbregs names: CFGTIMER
#define	R_CFG_BOOTSTS     	0x00900058	// 00900000, wbregs names: BOOTSTS
#define	R_CFG_CTL1        	0x00900060	// 00900000, wbregs names: FPGACTL1
#define	R_CFG_BSPI        	0x0090007c	// 00900000, wbregs names: FPGABSPI
// Ethernet configuration (MDIO) port
#define	R_MDIO_BMCR       	0x00a00000	// 00a00000, wbregs names: BMCR
#define	R_MDIO_BMSR       	0x00a00004	// 00a00000, wbregs names: BMSR
#define	R_MDIO_PHYIDR1    	0x00a00008	// 00a00000, wbregs names: PHYIDR1
#define	R_MDIO_PHYIDR2    	0x00a0000c	// 00a00000, wbregs names: PHYIDR2
#define	R_MDIO_ANAR       	0x00a00010	// 00a00000, wbregs names: ANAR
#define	R_MDIO_ANLPAR     	0x00a00014	// 00a00000, wbregs names: ANLPAR
#define	R_MDIO_ANER       	0x00a00018	// 00a00000, wbregs names: ANER
#define	R_MDIO_ANNPTR     	0x00a0001c	// 00a00000, wbregs names: ANNPTR
#define	R_MDIO_PHYSTS     	0x00a00040	// 00a00000, wbregs names: PHYSYTS
#define	R_MDIO_FCSCR      	0x00a00050	// 00a00000, wbregs names: FCSCR
#define	R_MDIO_RECR       	0x00a00054	// 00a00000, wbregs names: RECR
#define	R_MDIO_PCSR       	0x00a00058	// 00a00000, wbregs names: PCSR
#define	R_MDIO_RBR        	0x00a0005c	// 00a00000, wbregs names: RBR
#define	R_MDIO_LEDCR      	0x00a00060	// 00a00000, wbregs names: LEDCR
#define	R_MDIO_PHYCR      	0x00a00064	// 00a00000, wbregs names: PHYCR
#define	R_MDIO_BTSCR      	0x00a00068	// 00a00000, wbregs names: BTSCR
#define	R_MDIO_CDCTRL     	0x00a0006c	// 00a00000, wbregs names: CDCTRL
#define	R_MDIO_EDCR       	0x00a00074	// 00a00000, wbregs names: EDCR
#define	BKRAM             	0x00c00000	// 00c00000, wbregs names: RAM
#define	FLASHMEM          	0x01000000	// 01000000, wbregs names: FLASH


//
// The @REGDEFS.H.DEFNS tag
//
// @REGDEFS.H.DEFNS for masters
#define	R_ZIPCTRL	0x02000000
#define	R_ZIPDATA	0x02000004
#define	CLKFREQHZ	100000000
// @REGDEFS.H.DEFNS for peripherals
#define	BKRAMBASE	12582912
#define	BKRAMLEN	0x00100000
#define	FLASHBASE	16777216
#define	FLASHLEN	0x01000000
#define	FLASHLGLEN	24
// @REGDEFS.H.DEFNS at the top level
// End of definitions from REGDEFS.H.DEFNS
//
// The @REGDEFS.H.INSERT tag
//
// @REGDEFS.H.INSERT for masters

#define	CPU_GO		0x0000
#define	CPU_RESET	0x0040
#define	CPU_INT		0x0080
#define	CPU_STEP	0x0100
#define	CPU_STALL	0x0200
#define	CPU_HALT	0x0400
#define	CPU_CLRCACHE	0x0800
#define	CPU_sR0		0x0000
#define	CPU_sSP		0x000d
#define	CPU_sCC		0x000e
#define	CPU_sPC		0x000f
#define	CPU_uR0		0x0010
#define	CPU_uSP		0x001d
#define	CPU_uCC		0x001e
#define	CPU_uPC		0x001f


// @REGDEFS.H.INSERT for peripherals
// Flash control constants
#define	ERASEFLAG	0x80000000
#define	DISABLEWP	0x10000000
#define	ENABLEWP	0x00000000

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


#define	R_ICONTROL	R_PIC
#define	ISPIF_EN	0x80040004
#define	ISPIF_DIS	0x00040004
#define	ISPIF_CLR	0x00000004
// @REGDEFS.H.INSERT from the top level
typedef	struct {
	unsigned	m_addr;
	const char	*m_name;
} REGNAME;

extern	const	REGNAME	*bregs;
extern	const	int	NREGS;
// #define	NREGS	(sizeof(bregs)/sizeof(bregs[0]))

extern	unsigned	addrdecode(const char *v);
extern	const	char *addrname(const unsigned v);
// End of definitions from REGDEFS.H.INSERT


#endif	// REGDEFS_H
