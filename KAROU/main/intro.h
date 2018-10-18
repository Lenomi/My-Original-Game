#pragma once
#include<iostream>
#include"console.h"
#include<string>
#include<Windows.h>
#include<conio.h>
using namespace std;
string a[100], b[100], c[100], d[100];
void control();
void intro();
void esc();
void hidemouse();
void resizeConsole();
void intro() {

	// the ADN blue called a(hiro)
	a[1] = "          <>>      ";
	a[2] = "        <>>  o     ";
	a[3] = "      <>>=-=-=-o   ";
	a[4] = "    <>>         <>>";
	a[5] = "  <>>-=-=-=-=-<>>  ";
	a[6] = "<>>         <>>    ";
	a[7] = "   o-=-=-=<>>      ";
	a[8] = "     o  <>>        ";
	a[9] = "      <>>          ";
	a[10] = "    <>>  o         ";
	a[11] = "  <>>-=-=-=o       ";
	a[12] = "<>>          o     ";
	a[13] = "   o-=-=-=-=-=-o   ";
	a[14] = "     o          <>>";
	a[15] = "       o=-=-=-<>>  ";
	a[16] = "         o  <>>    ";
	a[17] = "          <>>      ";
	a[18] = "        <>>  o     ";
	a[19] = "      <>>-=-=-=o   ";
	a[20] = "    <>>         <>>";
	a[21] = "  <>>-=-=-=-=-<>>  ";
	a[22] = "<>>         <>>     ";
	a[23] = "   o-=-=-=<>>       ";
	a[24] = "     o  <>>         ";
	a[25] = "      <>>           ";
	a[26] = "    <>>  o          ";
	a[27] = "  <>>-=-=-=o      ";
	a[28] = "<>>          o ";
	a[29] = "   o-=-=-=-=-=-o ";
	a[30] = "     o           o";

	//the logo, name of game
	b[1] = " xox    xxx      xox     xoxoxoxo              xxx      xxx";
	b[2] = " xox   xox      xoxox    xoxoxoxoxo   oxoxo    xox      xox";
	b[3] = " xox  xox      xox xox   xox   xox  oxox xoxo  xox      xox";
	b[4] = " xox xox      xox   xox  xox  xox  xox     xox xox      xox";
	b[5] = " xoxoxox     xox     xox xox xox   xox     xox xox      xox";
	b[6] = " xox  xox    xoxoxoxoxox xox  xox   oxox xoxo  xox      xox";
	b[7] = " xox   xox   xox     xox xox   xox    oxoxo    xox      xox";
	b[8] = " xox    xox  xox     xox xox    xox            xoxo    oxox";
	b[9] = " xox     xxx xxx     xxx xxx     xxx            oxoxoxoxox ";

	// the red ADN of oni AKA zero two (>w<)
	c[1] = "      <>>          ";
	c[2] = "     o  <>>        ";
	c[3] = "   o=-=-=-<>>    ";
	c[4] = "<>>         <>>";
	c[5] = "  <>>-=-=-=-=-<>>  ";
	c[6] = "    <>>         <>>    ";
	c[7] = "      <>>-=-=-=o      ";
	c[8] = "        <>>  o          ";
	c[9] = "          <>>          ";
	c[10] = "         o  <>>           ";
	c[11] = "       o-=-=-=<>>       ";
	c[12] = "     o          <>>  ";
	c[13] = "   o=-=-=-=-=-=o   ";
	c[14] = "<>>          o    ";
	c[15] = "  <>>=-=-=-o  ";
	c[16] = "    <>>  o  ";
	c[17] = "      <>>      ";
	c[18] = "     o  <>>       ";
	c[19] = "   o-=-=-=<>>   ";
	c[20] = "<>>         <>>        ";
	c[21] = "  <>>-=-=-=-=-<>>  ";
	c[22] = "    <>>         <>>    ";
	c[23] = "      <>>-=-=-=o       ";
	c[24] = "        <>>  o      ";
	c[25] = "          <>>           ";
	c[26] = "        o   <>>          ";
	c[27] = "      o=-=-=-=<>>      ";
	c[28] = "    o           <>> ";
	c[29] = "  o-=-=-=-=-=-=o ";
	c[30] = "o            o    ";
	//Prensent
	d[1] = " << D A Y D R E A M E R >> ";
	d[2] = "   *****  PRESENT  *****   ";

	//chinh 2 ADN	
	for (int i = -2; i < 31; ++i)
	{
		gotoXY(3, i);
		TextColor(12);
		cout << a[i];
		gotoXY(92, i);
		TextColor(11);
		cout << c[i];
		Sleep(110);
	}

	// chinh present
	for (int k = 0; k < 14; k++)
	{
		{
			TextColor(15);

			gotoXY(58 + k, 1);
			cout << d[2][14 + k];
			gotoXY(58 - k, 1);
			cout << d[2][14 - k];
			gotoXY(58 + k, 0);
			cout << d[1][14 + k];
			gotoXY(58 - k, 0);
			cout << d[1][14 - k];
		}
		Sleep(120);
	}
	Sleep(200);

	// Chinh cho logo chinh
	for (int i = -2; i < 10; ++i)
	{
		gotoXY(28, i + 4);
		if (i % 2 == 0)
		{
			TextColor(11);
			cout << b[i];
		}
		else
		{
			TextColor(12);
			cout << b[i];
		}
		Sleep(150);
	}

	//COPY RIGHT:
	gotoXY(36, 29);
	TextColor(7);
	cout << "(C) 2018 DayDreamer. All rights reserved" << endl;
	gotoXY(45, 30);
	cout << "{-M.B Original Product-}";
	//Vao menu
	gotoXY(33, 25);
	Sleep(400);
	TextColor(15);
	cout << "P R E S S  { E N T E R }  T O  C O N T I N U E...";
	Sleep(400);
	//nhan lenh tu keyboard
	int n;
	n = _getch();

	if (n == 13)//enter de vao menu
		control();

	if (n == 27)//nhan esc hien thi ra menu thoat
		esc();

	else// khong nhap dung key 
	{
		int mau = 6;
		if (mau == 6)
			TextColor(6);
		gotoXY(33, 25);
		cout << "P R E S S  { E N T E R }  T O  C O N T I N U E...";
		mau = 15;
		if (mau == 15)
			TextColor(15);
		gotoXY(33, 25);
		cout << "P R E S S  { E N T E R }  T O  C O N T I N U E...";
		mau = 6;
	}
	system("pause");
}




// ham vao menu
void control()
{
	clrscr();
	cout << " MENU";
	Sleep(4500);
}

//ham vao menu-quit
 void esc() {
	/* gotoXY(33, 20);
	TextColor(12);
	cout << "QUIT - A R E  Y O U  S U R E ?";
	gotoXY(40, 22);
	cout << "No";
	gotoXY(40, 25);
	cout << "Yes";
	if (kbhit()) // nhan lenh len xuong qua lai
	{
		n = _getch();
		switch (n)
		{
		case(72)://nhan len la no (thay doi mau)
		{
			gotoXY(40, 22);
			TextColor(13);
			cout << "No";
			//nhan lenh enter hoac esc
			if (kbhit())
			{
				n = _getch();
				if (n == 13 || n == 27)
					break;
			}
		}; break;
		case(80)://nhan len xuong la yes(doi mau)
		{
			gotoXY(40, 22);
			TextColor(13);
			cout << "Yes";
			if (kbhit())
			{
				n = _getch();
				if (n == 27)
					break;
				if (n == 13)
					cout << "haga";

			}
		}
		break;
		case():

		}


		break; break; */
	 cout << "ok";
}
 
 //an con chuot 
 void hidemouse() {
	 HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	 CONSOLE_CURSOR_INFO ci;
	 ci.bVisible = FALSE;
	 ci.dwSize = 25;
	 SetConsoleCursorInfo(output, &ci);
 }

 //chinh man hinh console
 void resizeConsole(int width, int height)
 {
	 HWND console = GetConsoleWindow();
	 RECT r;
	 GetWindowRect(console, &r);
	 MoveWindow(console, r.left, r.top, width, height, TRUE);
 }