#ifndef _NTDDBLUE_H_INCLUDED_
#define _NTDDBLUE_H_INCLUDED_

#include <ntos/console.h>

#define IOCTL_CONSOLE_GET_SCREEN_BUFFER_INFO    CTL_CODE(FILE_DEVICE_SCREEN, 0x801, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_CONSOLE_SET_SCREEN_BUFFER_INFO    CTL_CODE(FILE_DEVICE_SCREEN, 0x802, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_CONSOLE_GET_CURSOR_INFO           CTL_CODE(FILE_DEVICE_SCREEN, 0x803, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_CONSOLE_SET_CURSOR_INFO           CTL_CODE(FILE_DEVICE_SCREEN, 0x804, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_CONSOLE_GET_MODE                  CTL_CODE(FILE_DEVICE_SCREEN, 0x805, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_CONSOLE_SET_MODE                  CTL_CODE(FILE_DEVICE_SCREEN, 0x806, METHOD_BUFFERED, FILE_WRITE_ACCESS)


#define IOCTL_CONSOLE_FILL_OUTPUT_ATTRIBUTE     CTL_CODE(FILE_DEVICE_SCREEN, 0x810, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_CONSOLE_READ_OUTPUT_ATTRIBUTE     CTL_CODE(FILE_DEVICE_SCREEN, 0x811, METHOD_IN_DIRECT, FILE_ANY_ACCESS)
#define IOCTL_CONSOLE_WRITE_OUTPUT_ATTRIBUTE    CTL_CODE(FILE_DEVICE_SCREEN, 0x812, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)
#define IOCTL_CONSOLE_SET_TEXT_ATTRIBUTE        CTL_CODE(FILE_DEVICE_SCREEN, 0x813, METHOD_BUFFERED, FILE_WRITE_ACCESS)


#define IOCTL_CONSOLE_FILL_OUTPUT_CHARACTER     CTL_CODE(FILE_DEVICE_SCREEN, 0x820, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_CONSOLE_READ_OUTPUT_CHARACTER     CTL_CODE(FILE_DEVICE_SCREEN, 0x821, METHOD_IN_DIRECT, FILE_ANY_ACCESS)
#define IOCTL_CONSOLE_WRITE_OUTPUT_CHARACTER    CTL_CODE(FILE_DEVICE_SCREEN, 0x822, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)


#define IOCTL_CONSOLE_DRAW                      CTL_CODE(FILE_DEVICE_SCREEN, 0x830, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)


/* TYPEDEFS **************************************************************/


typedef struct _CONSOLE_MODE
{
    DWORD dwMode;
} CONSOLE_MODE, *PCONSOLE_MODE;


typedef struct _OUTPUT_ATTRIBUTE
{
    WORD  wAttribute;
    DWORD nLength;
    COORD dwCoord;
    DWORD dwTransfered;
} OUTPUT_ATTRIBUTE, *POUTPUT_ATTRIBUTE;


typedef struct _OUTPUT_CHARACTER
{
    CHAR  cCharacter;
    DWORD nLength;
    COORD dwCoord;
    DWORD dwTransfered;
} OUTPUT_CHARACTER, *POUTPUT_CHARACTER;


typedef struct _CONSOLE_DRAW
{
	SHORT	X;		// Origin
	SHORT	Y;
	SHORT	SizeX;		// Size of the screen buffer
	SHORT	SizeY;
} CONSOLE_DRAW, *PCONSOLE_DRAW;


#endif /* _NTDDBLUE_H_INCLUDED_ */
