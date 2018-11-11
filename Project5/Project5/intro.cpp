
#include"minh.h"


string a[100], b[100], c[100], d[100];
//intro vao game
void intro() {
	hide();

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
	cout << "{-M.D Original Product-}";
	//Vao menu
	gotoXY(31, 25);
	Sleep(400);
	TextColor(15);
	cout << "...P R E S S  { E N T E R }  T O  C O N T I N U E...";
	Sleep(400);
	//nhan lenh tu keyboard
	int n, mau = 1;
	while (1)
	{
		n = _getch();
		if (n == 13 || n == 27) break;
		else //
		{
			if (mau == 1)
			{
				TextColor(6);//vang
				gotoXY(31, 25);
				cout << "...P R E S S  { E N T E R }  T O  C O N T I N U E...";
				mau = 0;
				Sleep(500);
			}
			else
			{
				TextColor(15);//white
				gotoXY(31, 25);
				cout << "...P R E S S  { E N T E R }  T O  C O N T I N U E...";
				mau = 1;
				Sleep(500);
			}
		}
	}
	
}



