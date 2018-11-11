#include"minh.h"
#include <vector>
#include <string>
char a[90][25];
int n, x, y,i,minh;
char key,act;
bool isQuit;
char p1 = 'X', p2 = 'O', Icon;
void Exit(int mode);
void Winning();
// ham ke board 
void hide2() {
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ci;
	ci.bVisible = TRUE;
	ci.dwSize = 100;
	SetConsoleCursorInfo(output, &ci);
}
void hihii(){
	string c[100], a[100];
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
for (int i = 1; i < 31; ++i)
{
	gotoXY(3, i);
	TextColor(12);
	cout << a[i];
	gotoXY(92, i);
	TextColor(11);
	cout << c[i];
	Sleep(20);
}

}
////);
void MakeBoard()
{
	short i, n = 5;
	char k;
	TextColor(7);
	gotoXY(32, 4);//goc1
	k = 218;
	cout << k;
	gotoXY(80,4);//goc2
	k = 191;
	cout << k;
	gotoXY(80, 26);//goc3
	k = 217;
	cout << k;
	gotoXY(32, 26);//goc4
	k = 192;
	cout << k;
	for (int t = 0; t <= 46; t++)
	{
		if (t % 3 == 0) {
			for (i = 0; i <= 18; i += 2)//ngang 
			{

				k = 195;
				gotoXY(32 +  t, i + 6);
				cout << k;
			}
		}
	else {
		for (i = 0; i <= 22; i += 2)//nggang  canh 2
		{

			k = 196;
			gotoXY(32 + t, i +4);
			cout << k;

		}
	}
	}
	//canh doc
	n = 2;
	for (int t = 5; t <= 26; t+=2)

		for (i = 32; i <= 81; i+=3)
		{
			gotoXY(i, t);
			k = 179;
			cout << k;
		}
	/*Sleep(n);
	gotoXY(i, 26);
	cout << k;
	gotoXY(13, 13);
	Sleep(n);*/
	for (i = 6 ; i <=25 ; i+=2)
	{
		k = 180;
		gotoXY(80, i);
		cout << k;
	}
	for (i = 35; i <80; i += 3)
	{
		k = 194;
		gotoXY(i, 4);
		cout << k;
		k = 193;
		gotoXY(i, 26);
		cout << k;
	}
}

//ham chon icon nguoi choi
void icon(int IconX, int IconO)
{
	

//icon player 1:
p1 = IconX;

//icon player 2;
p2 = IconO;
}

//ham doi luot choi
bool Turn(int i)
{
	if (i % 2 == 0)
	{
		
		Icon = p1; //key : in ra man hinh icon cua player
		

		return true;
	}
	else {
		Icon = p2;
		return false;	
		
	}
}


//ham xuat hinh anh len console

void DrawOX()
{
	if (a[x][y] != p1 && a[x][y] != p2 )
	{
		if (Turn(i)) TextColor(11); //doi mau xanh 11
		else TextColor(12);//doi mau do 12
		a[x][y] = Icon;
		cout << a[x][y];
		Winning();
		i++;
	}

}


//ham dich chuyen con tro tren console(chua hoan thien)
void up()
{
	y-=2;
	if (y < 5) y = 5;
}

void down()
{
	y+=2;
	if (y > 25) y = 25;
}

void right()
{
	x += 3;
	if (x > 79) x = 79;
}

void left()
{
	x -= 3;
	if (x < 34) x = 34;
}



bool Owin()
{
	
	int m1 = y, n1 = x;
	while (a[n1][y] == p2)
		n1++;
	n1--;

		 if ((a[n1][y] == p2) && (a[n1 + 3][y] == p2) && (a[n1 + 6][y] == p2) && (a[n1 + 9][y] == p2) && (a[n1 +12][y] == p2)) return true;
	else if ((a[n1][y] == p2) && (a[n1 - 3][y] == p2) && (a[n1 - 6][y] == p2) && (a[n1 - 9][y] == p2) && (a[n1 - 12][y] == p2)) return true;
	m1 = y; n1 = x;
	while (a[x][m1] == p2)
		m1++;
	m1--;

		 if ((a[x][m1] == p2) && (a[x][m1 + 2] == p2) && (a[x][m1 + 4] == p2) && (a[x][m1 + 6] == p2) && (a[x][m1 + 8] == p2)) return true;
	else if ((a[x][m1] == p2) && (a[x][m1 - 2] == p2) && (a[x][m1 - 4] == p2) && (a[x][m1 - 6] == p2) && (a[x][m1 - 8] == p2)) return true;

	m1 = y; n1 = x;
	while (a[n1][m1] == p2)
	{
		m1++; n1++;
	}
	m1--; n1--;
		 if ((a[n1][m1] == p2) && (a[n1 + 3][m1 + 2] == p2) && (a[n1 + 6][m1 + 4] == p2) && (a[n1 + 9][m1 + 6] == p2) && (a[n1 + 12][m1 + 8] == p2)) return true;
	else if ((a[n1][m1] == p2) && (a[n1 - 3][m1 - 2] == p2) && (a[n1 - 6][m1 - 4] == p2) && (a[n1 - 9][m1 - 6] == p2) && (a[n1 - 12][m1 - 8] == p2)) return true;
	m1 = y; n1 = x;
	while (a[n1][m1] == p2)
	{
		n1++; m1--;
	}
	n1--; m1++;
		 if ((a[n1][m1]) == p2 && (a[n1 + 3][m1 - 2]) == p2 && (a[n1 + 6][m1 - 4]) == p2 && (a[n1 + 9][m1 - 6]) == p2 && (a[n1 + 12][m1 - 8] == p2)) return true;
	else if ((a[n1][m1]) == p2 && (a[n1 - 3][m1 + 2]) == p2 && (a[n1 - 6][m1 + 4 ]) == p2 && (a[n1 - 9][m1 + 6]) == p2 && (a[n1 - 12][m1 + 8] == p2)) return true;

	return false;
}

bool Xwin()
{
	int m1 = y, n1 = x;
	while (a[n1][y] == p1)
	{
		n1++;
	}
	n1--;

		 if ((a[n1][y] == p1) && (a[n1 + 3][y] == p1) && (a[n1 + 6][y] == p1) && (a[n1 + 9][y] == p1) && (a[n1 + 12][y] == p1)) return true;
	else if ((a[n1][y] == p1) && (a[n1 - 3][y] == p1) && (a[n1 - 6][y] == p1) && (a[n1 - 9][y] == p1) && (a[n1 - 12][y] == p1)) return true;

	m1 = y; n1 = x;
	while (a[x][m1] == p1)
	{
		m1++;
	}
	m1--;
		 if ((a[x][m1] == p1) && (a[x][m1 + 2] == p1) && (a[x][m1 + 4] == p1) && (a[x][m1 + 6] == p1) && (a[x][m1 + 8] == p1)) return true;
	else if ((a[x][m1] == p1) && (a[x][m1 - 2] == p1) && (a[x][m1 - 4] ==p1) && (a[x][m1 - 6] == p1) && (a[x][m1 - 8] == p1)) return true;

	m1 = y; n1 = x;
	while (a[n1][m1] ==p1)
	{
		m1++; n1++;
	}
	m1--; n1--;
		 if ((a[n1][m1] == p1) && (a[n1 + 3][m1 + 2] == p1) && (a[n1 + 6][m1 + 4] == p1) && (a[n1 + 9][m1 + 6] == p1) && (a[n1 + 12][m1 + 8] == p1)) return true;
	else if ((a[n1][m1] == p1) && (a[n1 - 3][m1 - 2] == p1) && (a[n1 - 6][m1 - 4] == p1) && (a[n1 - 9][m1 - 6] == p1) && (a[n1 - 12][m1 - 8] == p1)) return true;

	m1 = y; n1 = x;
	while (a[n1][m1] == p1)
	{
		n1++; m1--;
	}
	n1--; m1++;
	     if ((a[n1][m1]) == p1 && (a[n1 + 3][m1 - 2]) == p1 && (a[n1 + 6][m1 - 4]) == p1 && (a[n1 + 9][m1 - 6]) == p1 && (a[n1 + 12][m1 - 8] == p1)) return true;
	else if ((a[n1][m1]) == p1 && (a[n1 - 3][m1 + 2]) == p1 && (a[n1 - 6][m1 + 4]) == p1 && (a[n1 - 9][m1 + 6]) == p1 && (a[n1 - 12][m1 + 8] == p1)) return true;
	return false;
}
void control2()//ham dichchuyen bang keyboard
{
	key = _getch();
	if (key == 'a' || key == 'A' || int(key == 75)) left(); else
		if (key == 'd' || key == 'D' || int(key == 77)) right(); else
			if (key == 'w' || key == 'W' || int(key == 72)) up(); else
				if (key == 's' || key == 'S' || int(key == 80)) down(); else
					if (key == 'p' || key == 'P' || int(key == 27)) Exit(1); else
						if (key == 13 || key == 32 || key == 'x' || key == 'X' || key == 'O' || key == 'o') DrawOX();
	if (Owin() || Xwin()) {
		while (key != 'N' && key != 'n' && key != 'Y' && key != 'y')
		{
			key = _getch();
		}
		if (key == 'N' || key == 'n') Exit(0); else

			if (key == 'y' || key == 'Y') {
				for (int i = 34; i < 80; i++)
				{
					for (int j = 5; j < 26; j++)
					{
						a[i][j] = ' ';
					}
				}
				system("cls");
				x = 58; y = 15;
				TwoPlay(0, "");
			}
	}

}
void Winning()
{
	if (Owin())
	{

		TextColor(12);
		gotoXY(36, 11);
		cout << "<>> <>>           <><><>          <<> <<>";
		gotoXY(36, 12);
		cout << "<>> <>>           "<<p2<<" Win           <<> <<>";
		gotoXY(36, 13);
		cout << "       DO YOU WANT TO PLAY AGAIN??       ";
		gotoXY(36, 14);
		cout << "Press (Y) to continue  Press (N) to EXIT ";
		gotoXY(36, 15);
		cout << "<>> <>>           <><><>          <<> <<>";
		
	}
	else
		if (Xwin())
		{
			act = _getch();
			
			TextColor(11);
			gotoXY(36, 11);
			cout << "<>> <>>           <><><>          <<> <<>";
			gotoXY(36, 12);
			cout << "<>> <>>           " << p1 << " Win           <<> <<>";
			gotoXY(36, 13);
			cout << "       DO YOU WANT TO PLAY AGAIN??       ";
			gotoXY(36, 14);
			cout << "Press (Y) to continue  Press (N) to EXIT ";
		
			
		}
	TextColor(7);
}

void TwoPlay(int index, string fileName)
{
	system("cls");
	hihii();
	 hide2();
	 TextColor(7);
	int mode, height, width, iconX, iconO;
	MakeBoard();
	i = 0;
	if (index)
	{
		ifstream fi;
		fi.open("save\\" + fileName + ".txt");

		fi >> mode;
		fi >> height;
		fi >> width;
		fi >> iconX;
		fi >> iconO;
		icon(iconX, iconO);
		while (1)
		{
			int c;
			fi >> x >>  y >> c;
			if (x == -1 && y == -1 && c == -1) break;
			gotoXY(x, y);
			if (c == iconX) TextColor(11);
			else TextColor(12);
			a[x][y] = (char)c;
			i++;
			cout << a[x][y];
		}
		fi.close();
	}
	x = 58; y  = 15;
	
	isQuit = false;
	do {
		gotoXY(x, y);
		control2();
		if (isQuit) {
			break;
		}
	} while (1);
}

//ai
struct OX
{
	int x;
	int y;
};
long long MangDiemTanCong[7] = { 0,10,100,1000,10000,100000,1000000 };
long long MangDiemPhogNgu[7] = { 0,9,81,729,6561,59049,531441 };

//Tan cong
#pragma region Tancong
long long TCDoc(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem = 2; dem <= 12 && currY + dem < 26; dem += 2)
	{
		if (a[currX][currY + dem] == p1)
			SoQuanTa++;
		else if (a[currX][currY + dem] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	for (int dem = 2; dem <= 12 && currY - dem > 5; dem += 2)
	{
		if (a[currX][currY - dem] == p1)
			SoQuanTa++;
		else if (a[currX][currY - dem] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	if (SoQuanDich == 2)
		return 0;
	DiemTong -= MangDiemPhogNgu[SoQuanDich];
	DiemTong += MangDiemTanCong[SoQuanTa];

	return DiemTong;
}
long long TCNgang(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem = 3; dem <= 18 && currX + dem < 80; dem += 3)
	{
		if (a[currX + dem][currY] == p1)
			SoQuanTa++;
		else if (a[currX + dem][currY] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	for (int dem = 3; dem <= 18 && currX - dem > 33; dem += 3)
	{
		if (a[currX - dem][currY] == p1)
			SoQuanTa++;
		else if (a[currX - dem][currY] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	if (SoQuanDich == 2)
		return 0;
	DiemTong -= MangDiemPhogNgu[SoQuanDich];
	DiemTong += MangDiemTanCong[SoQuanTa];

	return DiemTong;
}
long long TCCheoNguoc(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX + dem1 < 80 && currY - dem2> 4; dem1 += 3, dem2 += 2)
	{
		if (a[currX + dem1][currY - dem2] == p1)
			SoQuanTa++;
		else if (a[currX + dem1][currY - dem2] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX - dem1 > 33 && currY + dem2 < 26; dem1 += 3, dem2 += 2)
	{
		if (a[currX - dem1][currY + dem2] == p1)
			SoQuanTa++;
		else if (a[currX - dem1][currY + dem2] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	if (SoQuanDich == 2)
		return 0;
	DiemTong -= MangDiemPhogNgu[SoQuanDich];
	DiemTong += MangDiemTanCong[SoQuanTa];
	return DiemTong;
}
long long TCCheoXuoi(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX + dem1 < 80 && currY + dem2 < 26; dem1 += 3, dem2 += 2)
	{
		if (a[currX + dem1][currY + dem2] == p1)
			SoQuanTa++;
		else if (a[currX + dem1][currY + dem2] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX - dem1 > 33 && currY - dem2 > 3; dem1 += 3, dem2 += 2)
	{
		if (a[currX - dem1][currY - dem2] == p1)
			SoQuanTa++;
		else if (a[currX - dem1][currY - dem2] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	if (SoQuanDich == 2)
		return 0;
	DiemTong -= MangDiemPhogNgu[SoQuanDich ];
	DiemTong += MangDiemTanCong[SoQuanTa];
	return DiemTong;
}

#pragma endregion


//Phong ngu
#pragma region Phongngu
long long PNDoc(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem = 2; dem <= 12 && currY + dem < 26; dem += 2)
	{
		if (a[currX][currY + dem] == p1)
			break;
		else if (a[currX][currY + dem] == p2)
		{
			SoQuanDich++;
		}
		else
			break;
	}
	for (int dem = 2; dem <= 12 && currY - dem > 4; dem += 2)
	{
		if (a[currX][currY - dem] == p1)
			break;
		else if (a[currX][currY - dem] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	if (SoQuanDich == 2)
		return 0;
	DiemTong -= MangDiemPhogNgu[SoQuanDich];
	DiemTong += MangDiemTanCong[SoQuanTa];

	return DiemTong;
}
long long PNNgang(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem = 3; dem <= 18 && currX + dem < 80; dem += 3)
	{
		if (a[currX + dem][currY] == p1)
			break;
		else if (a[currX + dem][currY] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	for (int dem = 3; dem <= 18 && currX - dem > 33; dem += 3)
	{
		if (a[currX - dem][currY] == p1)
			break;
		else if (a[currX - dem][currY] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	if (SoQuanTa == 2)
		return 0;

	DiemTong += MangDiemPhogNgu[SoQuanDich];

	return DiemTong;
}
long long PNCheoNguoc(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX + dem1 < 80 && currY - dem2>3; dem1 += 3, dem2 += 2)
	{
		if (a[currX + dem1][currY - dem2] == p1)
			break;
		else if (a[currX + dem1][currY - dem2] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX - dem1 > 33 && currY + dem2 < 26; dem1 += 3, dem2 += 2)
	{
		if (a[currX - dem1][currY + dem2] == p1)
			break;
		else if (a[currX - dem1][currY + dem2] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	if (SoQuanTa == 2)
		return 0;

	DiemTong += MangDiemPhogNgu[SoQuanDich];
	return DiemTong;
}
long long PNCheoXuoi(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX + dem1 < 80 && currY + dem2 < 26; dem1 += 3, dem2 += 2)
	{
		if (a[currX + dem1][currY + dem2] == p1)
			break;
		else if (a[currX + dem1][currY + dem2] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX - dem1 > 33 && currY - dem2 > 3; dem1 += 3, dem2 += 2)
	{
		if (a[currX - dem1][currY - dem2] == p1)
			break;
		else if (a[currX - dem1][currY - dem2] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	if (SoQuanTa == 2)
		return 0;
	DiemTong += MangDiemPhogNgu[SoQuanDich];
	return DiemTong;
}

#pragma endregion

void AITurn() {
	long long DiemMax = 0;
	int tmpx = 0;
	int tmpy = 0;
	char tmpicon = ' ';
	for (int i = 34; i < 80; i += 3)//ngang
	{
		for (int j = 5; j < 26; j += 2)//doc
		{
			if (a[i][j] != p1 && a[i][j] != p2)
			{
				long long DiemTanCong = TCDoc(i, j) + TCNgang(i, j) + TCCheoNguoc(i, j) + TCCheoXuoi(i, j);
				long long DiemPhongNgu = PNDoc(i, j) + PNNgang(i, j) + PNCheoNguoc(i, j) + PNCheoXuoi(i, j);
				long long DiemTam = DiemTanCong > DiemPhongNgu ? DiemTanCong : DiemPhongNgu;
				if (DiemMax <= DiemTam)
				{
					DiemMax = DiemTam;
					tmpx = i;
					tmpy = j;
					tmpicon = p2;
				}
				

			}
			
		}
	}
	TextColor(12);
	gotoXY(tmpx, tmpy);
	a[tmpx][tmpy] = tmpicon;
	x = tmpx; y = tmpy;
	cout << tmpicon;
	
	
}
void DrawOXAI()
{

	if (a[x][y] != p1 && a[x][y] != p2)
	{
		
		TextColor(11);//doi mau xanh 11
		Icon = p1;
		a[x][y] = Icon;
		cout << a[x][y];
		Winning();
		if (Xwin() != true)
		{
			AITurn();
			Winning();
		}
	}
}
void controlAI()//ham dichchuyen bang keyboard
{
	key = _getch();
	if (key == 'a' || key == 'A' || int(key == 75)) left(); else
		if (key == 'd' || key == 'D' || int(key == 77)) right(); else
			if (key == 'w' || key == 'W' || int(key == 72)) up(); else
				if (key == 's' || key == 'S' || int(key == 80)) down(); else
					if (key == 'p' || key == 'P' || int(key == 27)) Exit(2); else
						if (key == 13 || key == 32 || key == 'x' || key == 'X' || key == 'O' || key == 'o') DrawOXAI(); else
							if (Owin() || Xwin())
							{
								while (key != 'N' && key != 'n' && key != 'Y' && key != 'y')
								{
									key = _getch();
								}
								if (key == 'N' || key == 'n')
								{
									for (int i = 34; i < 80; i++)
									{
										for (int j = 5; j < 26; j++)
										{
											a[i][j] = ' ';
										}
									}

									Exit(0);
								}

								else if (key == 'y' || key == 'Y')
								{
									for (int i = 34; i < 80; i++)
									{
										for (int j = 5; j < 26; j++)
										{
											a[i][j] = ' ';
										}
									}
									system("cls");
									x = 58; y = 15;
									AI(0, "");
								}

							}
}
void AI(int index, string fileName) {
	clrscr();
	hihii();
	hide2();
	MakeBoard();
	i = 0;
	int mode, height, width, iconX, iconO;
	if (index)
	{
		ifstream fi;
		fi.open("save\\" + fileName + ".txt");

		fi >> mode;
		fi >> height;
		fi >> width;
		fi >> iconX;
		fi >> iconO;
		icon(iconX, iconO);
		while (1)
		{
			int c;
			fi >> x >> y >> c;
			if (x == -1 && y == -1 && c == -1) break;
			gotoXY(x, y);
			if (c == iconX) TextColor(11);
			else TextColor(12);
			a[x][y] = (char)c;
			i++;
			cout << a[x][y];
		}
		fi.close();
	}
	x = 58; y = 15;
	isQuit = false;
	while(1) {
		gotoXY(x, y);
		controlAI();
		if (isQuit) break;
	}

}


void Exit(int mode)
{
	if (mode != 0) Savegame(mode);
	for (int i = 34; i < 80; i++)
	{
		for (int j = 5; j < 26; j++)
		{
			
			a[i][j] = ' ';
		}
	}
	clrscr();
	isQuit = true;
	menu();
}

void Savegame(int mode)
{
	while (1) 
	{
		TextColor(6);
		gotoXY(30, 2);
		cout << "        <><>  DO  YOU  WANNA  SAVE  GAME? <><>  " << endl;
		TextColor(7);
		gotoXY(30, 3);
		cout << "     << Press (Y) to save <> Press (N) to quit >>" << endl;
		char abc = _getch();
		if (abc == 'y' || abc == 'Y')
		{
			TextColor(6);
			gotoXY(30, 2);
			cout << "      <<>>        :ADD THE NAME FILE:       <<>>" << endl;
			TextColor(7);
			gotoXY(30, 3);
			cout << "      :><:                                  :><:            " << endl;
			gotoXY(40, 3);
			string name;
			cin >> name;
			
			vector<string> loadFiles;

			ifstream filein("save\\savedgame.txt");
			string line;
			while (getline(filein, line))
			{
				loadFiles.push_back(line);
			}
			if (loadFiles.size() >= 5) {
				for (int i = 0; i < loadFiles.size() - 1; ++i)
				{
					loadFiles[i] = loadFiles[i + 1];
				}
				loadFiles.pop_back();
			}
			loadFiles.push_back(name);
			filein.close();
			ofstream fi("save\\savedgame.txt");
			for (int i = 0; i < loadFiles.size(); ++i)
			{
				fi << loadFiles[i] << "\n";
			}
			fi.close();
			ofstream file("save\\" + name + ".txt");
			file << mode << "\n";
			file << 25 << "\n";
			file << 80 << "\n";	
			file << (int) p1 << "\n";
			file << (int) p2 << "\n";
			for (int j = 4; j <= 25; j++)
			{
				for (int i = 33; i <= 80; i++)
				{
					if (a[i][j] == p1 || a[i][j] == p2)
						file << i << " " << j << " " << (int) a[i][j] << " ";
				}
			}
			file << -1 << " " << -1 << " " << -1;
			file.close();
			break;
		}
		else if (abc == 'n' || abc == 'N')
			break;
	}
}

#pragma warning(disable:4996)

int is_exist(char *file_name)
{
	FILE *f = fopen(file_name, "r");

	if (f == NULL)
	{
		return 0;
	}
	else
	{
		fclose(f);
		return 1;
	}
}

void Load(char a[78][24], char name[100])
{
	hihii();
	int i, j;
	char s[100];
	cout << "Enter file name: ";
	cin.get(name, 100);
	ifstream file(name);

	if (!is_exist(name))
	{
		cout << "File has not existed";
		Sleep(1000);
		// quay lai menu newgame loadgame
	}
	else
		for (i = 0; i <= 24; i++)
		{
			file.getline(s, 100);
			for (j = 0; j <= 78; j++)
			{
				if (s[j] == p1 || s[j] == p2)
					a[j][i - 1] = s[j];
			}
		}
	file.close();
}