/*

  Project:       1Sheeld Library 
  File:          OneSheeldPrintln.cpp
                 
  Version:       1.2

  Compiler:      Arduino avr-gcc 4.3.2

  Author:        Integreight
                 
  Date:          2014.9

*/
#define FROM_ONESHEELD_LIBRARY
#include "OneSheeld.h"
#include "OneSheeldPrintln.h"

//Constructor
PrintlnClass::PrintlnClass(byte shid,byte writefnid, byte printfnid):PrintClass(shid,writefnid,printfnid)
{
}
//Print newline 
void PrintlnClass::println()
{
	char buffer[3];
	buffer[0]='\r';
	buffer[1]='\n';
	buffer[2]='\0';

	print(buffer);
}
//Print character with newline
void PrintlnClass::println(char data)
{
	char buffer[4];
	buffer[0]=data;
	buffer[1]='\r';
	buffer[2]='\n';
	buffer[3]='\0';
	
	print(buffer);
}
//Print integers with newline 
void PrintlnClass::println(int data ,byte base)
{
	char stringPointer[10];
	snprintf(stringPointer,9,"%d",data);
	strcat(stringPointer,"\r\n");
	
	print(stringPointer);
}
//Print unsigned integers with newline
void PrintlnClass::println(unsigned int data , byte base)
{
	char stringPointer[9];
	snprintf(stringPointer,8,"%d",data);
	strcat(stringPointer,"\r\n");
	
	print(stringPointer);
}
//Print long with newline
void PrintlnClass::println(long data ,byte base)
{
	char stringPointer[15];
	snprintf(stringPointer,14,"%ld",data);
	strcat(stringPointer,"\r\n");
	
	print(stringPointer);
}
//Print unsigned long with newline
void PrintlnClass::println(unsigned long data , byte base)
{
	char stringPointer[14];
	snprintf(stringPointer,13,"%lu",data);
	strcat(stringPointer,"\r\n");
	
	print(stringPointer);
}
//Print string with newline
void PrintlnClass::println(const char * stringData)
{
	char stringNewLine[strlen(stringData)+3];
	stringNewLine[0]='\0';
	strcat(stringNewLine,stringData);
	strcat(stringNewLine,"\r\n");

	print(stringNewLine);
}

//Support strings
void PrintlnClass::println(String stringData)
{
	int stringDataLength = stringData.length();

	char cTypeStringData[stringDataLength+3];

	for(int i=0 ;i<stringDataLength ;i++)
	{
		cTypeStringData[i]=stringData[i];
	}
	cTypeStringData[stringDataLength]='\r';
	cTypeStringData[stringDataLength+1]='\n';
	cTypeStringData[stringDataLength+2]='\0';

	print(cTypeStringData);
}

//Unsupported by Intel Galileo board and Arduino Due
#if  !defined(ARDUINO_LINUX) && !defined(SAM3X8)
void PrintlnClass::println(double data, int precesion)
{
	int i=0;
	char buffer[32]={'\0'};
	dtostrf(data,1,precesion,buffer);

	while(buffer[i]!='\0' && i<32)i++;

	if(i+2>32)return;
	buffer[i]='\r';
	buffer[i+1]='\n';
	buffer[i+2]='\0';

	print(buffer);

}
#endif
