#include <iostream>
#include <windows.h>
#include <Wingdi.h>
#include <fstream>
#include <conio.h>
#include "fCpuData.h"
using namespace std;

void gotoxy(int x, int y) 
{
   COORD coord;
   coord.X = x;
   coord.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord) ;
}
char fReadAddress(uint64_t  fByteAddr)
{
	char *Address = (char*)((void*)fByteAddr);
	return *Address;
}
int main(int argc, char *argv[]) 
{
	
    int64_t fDataVRAMPointX0 = 100;
	int64_t fDataVRAMPointY0 = 2;
	int64_t fDataColor0 = 0;
	int64_t fDataColor1 = 255;
	int64_t fDataColor2 = 0;
	int64_t x;
	int64_t y;
	bool fLoad = true;
	tagPOINT Pos;
	int64_t g;
	int64_t *fDataAddr = &fDataColor1; 
	float fDataKeyPointMs = 0.0;
	int64_t fDataKey = 0;
	int64_t fDataVRAMPointColor0 = RGB(fDataColor0,fDataColor1,fDataColor2);
	HDC HdcConsoleWindow = GetDC(GetConsoleWindow());
	HANDLE hConsole = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE hConsoleO = GetStdHandle(STD_OUTPUT_HANDLE);
    for(int64_t f1 = 1; f1 <= 100; f1++)
    {	
    Sleep(10);
    cls(hConsoleO);
    		SetColorAMD64(47);
	cout<<"               Processor info              "<<endl;
	SetColorAMD64(15);
	     	if(fLoad)
	     	{
	     			SetColorAMD64(30);
	cout<<"              Registers               "<<endl;
	SetColorAMD64(15);
	cout<<"Handle    :"<<hConsole<<endl;
	cout<<"Handle    :"<<hConsoleO<<endl;
	cout<<"Descriptor:"<<HdcConsoleWindow<<endl;
	cout<<"RGB ["<<fDataColor0<<"."<<fDataColor1<<"."<<fDataColor2<<"]"<<endl;
	     		cout<<"\t\tLoading Data "<<f1<<"%"<<endl;
			 }
	}
	fLoad =  false;
	system("cls");
    if(!fLoad)
    {
    	   		SetColorAMD64(47);
	cout<<"               Processor info              "<<endl;
	SetColorAMD64(15);
    	cout<<"\tNUMA Numbers:"<<dDataCPU(1)<<endl;
	cout<<"\tNumber of physical processor packages:"<<dDataCPU(2)<<endl;
	cout<<"\tCPU cores:"<<dDataCPU(3)<<endl;
	cout<<"\tlogical processors:"<<dDataCPU(4)<<endl;
	cout<<"\tSize caches [L1:"<<dDataCPU(5)<<"MB"<<"|L2:"<<dDataCPU(6)<<"MB"<<"|L3:"<<dDataCPU(6)<<"MB]"<<endl;
	cout<<"\tRAM Uses:"<<(fDataMemUsage() / 1024)<<"KB"<<endl;
	//cout<<"\tCheck addr:"<<fReadAddress(&fDataAddr)<<endl;
	}
	Sleep(1000);
	cout<<" Press Any Key to Exit.."<<endl;
_getch();
}
