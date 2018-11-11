
#include"minh.h"
#include <vector>
#include <fstream>

// ham vao menu


//ham dich chuyen con tro tren console()

void moveMenu(int pos);
void movePlay(int pos);
void moveSetting(int pos);
void moveLoad(int pos, int countFile, const vector<string>& loadFiles);
void iconChange(int pos);
void boardChange(int pos);
void ruleChange(int pos);
void soundChange(int pos);
void EXIT();
void TheLine();
void TheLine()
{
string a[100], b[100], c[100], d[100];
a[1] = "<>>";
a[2] = "<>>";
a[3] = "<>>";
a[4] = "<>>";
a[5] = "<>>";
a[6] = "<>>";
a[7] = "<>>";
a[8] = "<>>";
a[9] = "<>>";
a[10] = "<>>";
a[11] = "<>>";
a[12] = "<>>";
a[13] = "<>>";
a[14] = "<>>";//nut
a[15] = "<>>";
a[16] = "<>>";
a[17] = "<>>";
a[18] = "<>>";
a[19] = "<>>";
a[20] = "<>>";
a[21] = "<>>";
a[22] = "<>>";
a[23] = "<>>";
a[24] = "<>>";
a[25] = "<>>";
a[26] = "<>>";
a[27] = "<>>";
a[28] = "<>>";
a[29] = " >";
a[30] = "";
a[31] = "<>";

//cheo2
b[01] = "<>>";
b[02] = "<>>";
b[03] = "<>>";
b[04] = "<>>";
b[05] = "<>>";
b[06] = "<>>";
b[07] = "<>>";
b[8] = "<>>";
b[9] = "<>>";
b[10] = "<>>";
b[11] = "<>>";
b[12] = "<>>";
b[13] = "<>>";
b[14] = "<>>";
b[15] = "<>>";
b[16] = "";
b[17] = "<>>";
b[18] = "<>>";
b[19] = "<>>";
b[20] = "<>>";
b[21] = "<>>";
b[22] = "<>>";
b[23] = "<>>";
b[24] = "<>>";
b[25] = "<>>";
b[26] = "<>>";
b[27] = "<>>";
b[28] = "<>>";
b[29] = "";
b[30] = " ";
b[31] = "";
//cheo xanh
c[01] = "<<>";
c[02] = "<<>";
c[03] = "<<>";
c[04] = "<<>";
c[05] = "<<>";
c[06] = "<<>";
c[07] = "<<>";
c[8] = "<<>";
c[9] = "<<>";
c[10] = "<<>";
c[11] = "<<>";
c[12] = "<<>";
c[13] = "<<>";
c[14] = "<<>";
c[15] = "<<>";
c[16] = "";
c[17] = "<<>";
c[18] = "<<>";
c[19] = "<<>";
c[20] = "<<>";
c[21] = "<<>";
c[22] = "<<>";
c[23] = "<<>";
c[24] = "<<>";
c[25] = "<<>";
c[26] = "<<>";
c[27] = "<<>";
c[28] = "X<> ";
c[29] = " <*";
c[30] = "";
c[31] = "";
// cheo do
d[01] = "<>";
d[02] = "<<>";
d[03] = "<<>";
d[04] = "<<>";
d[05] = "<<>";
d[06] = "<<>";
d[07] = "<<>";
d[8] = "<<>";
d[9] = "<<>";
d[10] = "<<>";
d[11] = "<<>";
d[12] = "<<>";
d[13] = "<<>";
d[14] = "<<>";
d[15] = "<<>";
d[16] = "<<>";
d[17] = "<<>";
d[18] = "<<>";
d[19] = "<<>";
d[20] = "<<>";
d[21] = "<<>";
d[22] = "<<>";
d[23] = "<<>";
d[24] = "<<>";
d[25] = "<<>";
d[26] = "<<>";
d[27] = "<<>";
d[28] = "O<>";
d[29] = " <*>";
d[30] = "";
d[31] = "";
#pragma endregion
//in ra khung
#pragma region in khung
hide();
	clrscr();
	for (int i = 0; i < 30; i++) {
		TextColor(11);
		gotoXY(-2 + 2 * i, -1 + i);
		cout << a[i];
		gotoXY(112 - 2 * i, -1 + i);
		cout << c[i];
		TextColor(12);
		gotoXY(-2 + 2 * i, 31 - i);
		cout << b[i];
		gotoXY(112 - 2 * i, 31 - i);
		cout << d[i];
		Sleep(50);
	}
	gotoXY(45, 0);
	TextColor(8);
	cout << " . K . A . R . o . U .";

	gotoXY(51, 7);
	TextColor(7);
	cout << "{ M E N U }";
}
void TheLine2()
{
	string a[100], b[100], c[100], d[100];
	a[1] = "<>>";
	a[2] = "<>>";
	a[3] = "<>>";
	a[4] = "<>>";
	a[5] = "<>>";
	a[6] = "<>>";
	a[7] = "<>>";
	a[8] = "<>>";
	a[9] = "<>>";
	a[10] = "<>>";
	a[11] = "<>>";
	a[12] = "<>>";
	a[13] = "<>>";
	a[14] = "<>>";//nut
	a[15] = "<>>";
	a[16] = "<>>";
	a[17] = "<>>";
	a[18] = "<>>";
	a[19] = "<>>";
	a[20] = "<>>";
	a[21] = "<>>";
	a[22] = "<>>";
	a[23] = "<>>";
	a[24] = "<>>";
	a[25] = "<>>";
	a[26] = "<>>";
	a[27] = "<>>";
	a[28] = "<>>";
	a[29] = " >";
	a[30] = "";
	a[31] = "<>";

	//cheo2
	b[01] = "<>>";
	b[02] = "<>>";
	b[03] = "<>>";
	b[04] = "<>>";
	b[05] = "<>>";
	b[06] = "<>>";
	b[07] = "<>>";
	b[8] = "<>>";
	b[9] = "<>>";
	b[10] = "<>>";
	b[11] = "<>>";
	b[12] = "<>>";
	b[13] = "<>>";
	b[14] = "<>>";
	b[15] = "<>>";
	b[16] = "";
	b[17] = "<>>";
	b[18] = "<>>";
	b[19] = "<>>";
	b[20] = "<>>";
	b[21] = "<>>";
	b[22] = "<>>";
	b[23] = "<>>";
	b[24] = "<>>";
	b[25] = "<>>";
	b[26] = "<>>";
	b[27] = "<>>";
	b[28] = "<>>";
	b[29] = "";
	b[30] = " ";
	b[31] = "";
	//cheo xanh
	c[01] = "<<>";
	c[02] = "<<>";
	c[03] = "<<>";
	c[04] = "<<>";
	c[05] = "<<>";
	c[06] = "<<>";
	c[07] = "<<>";
	c[8] = "<<>";
	c[9] = "<<>";
	c[10] = "<<>";
	c[11] = "<<>";
	c[12] = "<<>";
	c[13] = "<<>";
	c[14] = "<<>";
	c[15] = "<<>";
	c[16] = "";
	c[17] = "<<>";
	c[18] = "<<>";
	c[19] = "<<>";
	c[20] = "<<>";
	c[21] = "<<>";
	c[22] = "<<>";
	c[23] = "<<>";
	c[24] = "<<>";
	c[25] = "<<>";
	c[26] = "<<>";
	c[27] = "<<>";
	c[28] = "X<> ";
	c[29] = " <*";
	c[30] = "";
	c[31] = "";
	// cheo do
	d[01] = "<>";
	d[02] = "<<>";
	d[03] = "<<>";
	d[04] = "<<>";
	d[05] = "<<>";
	d[06] = "<<>";
	d[07] = "<<>";
	d[8] = "<<>";
	d[9] = "<<>";
	d[10] = "<<>";
	d[11] = "<<>";
	d[12] = "<<>";
	d[13] = "<<>";
	d[14] = "<<>";
	d[15] = "<<>";
	d[16] = "<<>";
	d[17] = "<<>";
	d[18] = "<<>";
	d[19] = "<<>";
	d[20] = "<<>";
	d[21] = "<<>";
	d[22] = "<<>";
	d[23] = "<<>";
	d[24] = "<<>";
	d[25] = "<<>";
	d[26] = "<<>";
	d[27] = "<<>";
	d[28] = "O<>";
	d[29] = " <*>";
	d[30] = "";
	d[31] = "";
#pragma endregion
	//in ra khung
#pragma region in khung
	hide();
	clrscr();
	for (int i = 0; i < 30; i++) {
		TextColor(11);
		gotoXY(-2 + 2 * i, -1 + i);
		cout << a[i];
		gotoXY(112 - 2 * i, -1 + i);
		cout << c[i];
		TextColor(12);
		gotoXY(-2 + 2 * i, 31 - i);
		cout << b[i];
		gotoXY(112 - 2 * i, 31 - i);
		cout << d[i];
	
	}
	gotoXY(45, 0);
	TextColor(8);
	cout << " . K . A . R . o . U .";

	gotoXY(51, 7);
	TextColor(7);
	cout << "{ M E N U }";
}
#pragma endregion
void menu()
{
	vector<string> loadFiles;
	ifstream fi;
	fi.open("save\\savedgame.txt");
	string line;
	while (getline(fi, line))
	{
		loadFiles.push_back(line);
	}
	int countFile = loadFiles.size();
	fi.close();

	hide();
#pragma region MyRegion



	//khung hinh menu
	

//ham di chuyen tren menu
#pragma region func
	clrscr();
	TheLine2();
	moveMenu(10);// cho pos tai vi tri tren cung = 10
	int pos = 10;// vitri cua cursor theo phuong doc 
	int command = 1;
	while (1)
	{
		//khai bao bien
		int n = _getch();
		if (n == 13) break;// enter de thoat vong lap hien thi

		else if (n == 27)//esc de thoat ra khoi chuong trinh 
		{
			EXIT();
		}
		else if (n == 72)//len
		{
			pos -= 2;
			command--;
			if (pos < 10)
			{
				pos = 20;
				command = 6;
			}
		}
		else if (n == 80)//xuong
		{
			pos += 2;
			command++;
			if (pos > 20)
			{
				pos = 10;
				command = 1;
			}
		}
		moveMenu(pos);
	}
	// cac lenh trong menu
	switch (command)
	{
	case 1://play
	{
		movePlay(12);
		int pos = 12;
		while (1)
		{
			int n = _getch();
			if (n == 13) break;
			else if (n == 27)
			{
				menu();
				return;
			}
			else if (n == 72)
			{
				pos -= 2;
				if (pos < 12)
				{
					pos = 14;
				}
			}
			else if (n == 80)
			{
				pos += 2;
				if (pos > 14)
				{
					pos = 12;
				}
			}

			movePlay(pos);
		}
		if (pos == 14) TwoPlay(0, "");
		if (pos == 12) AI(0, "");
		break;
	}
	case 2://setting
	{moveSetting(12);
	int pos = 12;
	while (1)
	{
		int n = _getch();
		if (n == 13) break;
		else if (n == 27)
		{
			menu();
			return;
		}
		else if (n == 72)//len
		{
			pos -= 2;
			if (pos < 12)
			{
				pos = 18;
			}
		}
		else if (n == 80)//xuong
		{
			pos += 2;
			if (pos > 18)
			{
				pos = 12;
			}
		}

		moveSetting(pos);
	}
	if (pos == 12) iconChange(10);//icon
/*	if (pos == 14) boardChange();//board
	if (pos == 16) ruleChange();//rule
	if (pos == 18) soundChange();//sound
	*/
	break;

	}
	case 3://load game
	{
		moveLoad(10, countFile, loadFiles);
		int pos = 14;
		while (1)
		{
			int n = _getch();
			if (n == 13) break;
			else if (n == 27)
			{
				menu();
				return;
			}
			else if (n == 72)
			{
				pos -= 2;
				if (pos < 14)
				{
					pos = 12 + countFile * 2;

				}
			}
			else if (n == 80)
			{
				pos += 2;
				if (pos > 12 + countFile * 2)
				{
					pos = 14;
				}
			}

			moveLoad(pos, countFile, loadFiles);
		}
		for (int i = 1; i <= countFile; ++i)
		{
			if (pos == i * 2 + 12)
			{
				ifstream fi;
				fi.open("save\\" + loadFiles[i - 1] + ".txt");
				int mode;
				fi >> mode;
				fi.close();
				if (mode == 1)
				{
					TwoPlay(i, loadFiles[i - 1]);
				}
				else
				{
					AI(i, loadFiles[i - 1]);
				}
			}
		}
		break;
	}	
	case 4://collection
	{break; }
	case 5:// credit
	{break; }
	case 6:// exit
	{
		while (1)
		{
			EXIT();
		}
	}

	default:
		break;
	}
#pragma endregion

}

void moveMenu(int pos) {

	gotoXY(46, 10);
	TextColor(7);
	cout << "  <>   P L A Y   <>";
	TextColor(7);
	gotoXY(44, 12);
	TextColor(7);
	cout << "<>   S E T T I N G S   <>";
	gotoXY(38, 14);
	TextColor(7);
	cout << "  <>      L O A D | G A M E      <>";
	TextColor(7);
	gotoXY(36, 15);
	TextColor(7);
	cout << "  <>  <>                         <>  <>";
	gotoXY(38, 16);
	TextColor(7);
	cout << "  <>     C O L L E C T I O N     <>";
	gotoXY(42, 18);
	TextColor(7);
	cout << "  <>     C R E D I T     <>";
	gotoXY(42, 20);
	TextColor(7);
	cout << "      <>   E X I T   <>";

	switch (pos)
	{
	case 10:
		gotoXY(46, 10);
		TextColor(6);
		cout << "  <>   P L A Y   <>";
		break;
	case 12:
		gotoXY(44, 12);
		TextColor(6);
		cout << "<>   S E T T I N G S   <>";
		break;
	case 14:
		gotoXY(38, 14);
		TextColor(6);
		cout << "  <>      L O A D | G A M E      <>";
		break;
	case 16:
		gotoXY(38, 16);
		TextColor(6);
		cout << "  <>     C O L L E C T I O N     <>";
		break;
	case 18:
		gotoXY(42, 18);
		TextColor(6);
		cout << "  <>     C R E D I T     <>";
		break;
	case 20:
		gotoXY(42, 20);
		TextColor(6);
		cout << "      <>   E X I T   <>";
		break;
	default:
		break;
	}
}
	
void movePlay(int pos)
{
	gotoXY(89, 12);
	TextColor(7);
	cout << "<> S I N G L E | P L A Y";
	TextColor(7);
	gotoXY(85, 14);
	TextColor(7);
	cout << "<> M U L T I P L E | P L A Y";
	
	if (pos == 12)
	{
		gotoXY(89, 12);
		TextColor(6);
		cout << "<> S I N G L E | P L A Y";
	}
	else
	{
		gotoXY(85, 14);
		TextColor(6);
		cout << "<> M U L T I P L E | P L A Y";
	}
}
void moveSetting(int pos)
{
#pragma region background
	TextColor(7);
	gotoXY(89, 12);

	cout << "            I C O N S <>";

	gotoXY(85, 14);

	cout << "      B O A R D | S I Z E <>";
	gotoXY(85, 16);

	cout << "      G A M E S | R U L E <>";
	gotoXY(90, 18);

	cout << "           S O U N D <>";
#pragma endregion

	
	if (pos == 12)
	{
		gotoXY(89, 12);
		TextColor(6);
		cout << "         <> I C O N S <>";
	}
	else  if(pos==14)
	{
		gotoXY(85, 14);
		TextColor(6);
		cout << "   <> B O A R D | S I Z E <>";
	}
	else  if (pos == 16)
	{
		gotoXY(85, 16);
		TextColor(6);
		cout << "   <> G A M E S | R U L E <>";
	}
	else  if (pos == 18)
	{
		gotoXY(90, 18);
		TextColor(6);
		cout << "<> S O U N D : o f f <>";
	}
}
void moveLoad(int pos, int countFile, const vector<string>& loadFiles)
{
#pragma region background
	TextColor(6);
	gotoXY(89, 12);

	cout << "            L O A D S <>";


	TextColor(7);
	for (int i = 0; i < countFile; ++i)
	{
		gotoXY(85, 14 + i * 2);
		cout << loadFiles[i];
	}
#pragma endregion


	for (int i = 0; i < countFile; ++i)
	{
		if (pos == 14 + i * 2)
		{
			gotoXY(85, 14 + i * 2);
			TextColor(6);
			cout << loadFiles[i];
		}
	}
}

//chinh icon
void iconChange(int pos) {
	while (1)
	{
		int pos = 10;
		while (1)
		{
			int n = _getch();
			if (n == 13) {
				if (pos == 10) icon(155, 157);
				if (pos == 12) icon('X', 'O'); 
				if (pos == 14) icon(291, 298); 
				if (pos == 16) icon(174, 175);
				if (pos == 18) icon(159, 225);
				if (pos == 20) icon(168, 173);
				if (pos == 22) icon(148, 230); 
				menu();
				return;
			}
			else if (n == 27)
			{
				menu();
				return;
			}
			else if (n == 72)
			{
				pos -= 2;
				if (pos < 10)
				{
					pos = 22;
				}
			}
			else if (n == 80)
			{
				pos += 2;
				if (pos > 22)
				{
					pos = 10;
				}
			}
			char i1, i2;
			gotoXY(97, 8);
			TextColor(6);
			cout << "<> I C O N S <>";

			//icon1
			i1 = 155;
			i2 = 157;
			gotoXY(95, 10);
			TextColor(7);
			cout << "   H y O k A | ";  TextColor(1); cout << i1 << " "; TextColor(2); cout << i2;
			//icon2
			i1 = 'X';
			i2 = 'O';
			gotoXY(88, 12);
			TextColor(7);
			cout << "      C L A S X 0 S | ";  TextColor(11); cout << i1 << " "; TextColor(12); cout << i2;
			
			//icon3
			i1 = 291;
			i2 = 298;
			gotoXY(87, 14);
			TextColor(7);
			cout << "   S u P R E M X I S | ";  TextColor(9); cout << i1 << " "; TextColor(10); cout << i2;
			//icon4
			i1 = 174;
			i2 = 175;
			gotoXY(88, 16);
			TextColor(7);
			cout << "    G E M I N i A c | ";  TextColor(13); cout << i1 << " "; TextColor(14); cout << i2;
			//icon5
			i1 = 159;
			i2 = 225;
			gotoXY(90, 18);
			TextColor(7);
			cout << "    B I O S E R k | ";  TextColor(5); cout << i1 << " "; TextColor(6); cout << i2;
			//icon6
			i1 = 148;
			i2 = 230;
			gotoXY(97, 22);
			TextColor(7);
			cout << "   D U X X | ";  TextColor(7); cout << i1 << " "; TextColor(8); cout << i2;
			//icon7
			i1 = 168;
			i2 = 173;
			gotoXY(94, 20);
			TextColor(7);
			cout << "  M ! S a K X | ";  TextColor(3); cout << i1 << " "; TextColor(4); cout << i2;
			
			
			
			if (pos == 10)
			{
				gotoXY(95, 10);
				TextColor(6);
				cout << "<> H y O k A | ";
			}
			else  if (pos == 12)
			{
				gotoXY(88, 12);
				TextColor(6);
				cout << "   <> C L A S X 0 S | ";
			}
			else  if (pos == 14)
			{
				gotoXY(87, 14);
				TextColor(6);
				cout << "<> S u P R E M X I S | ";
			}
			else  if (pos == 16)
			{
				gotoXY(88, 16);
				TextColor(6);
				cout << " <> G E M I N i A c | ";
			}
			else  if (pos == 18)
			{
				gotoXY(90, 18);
				TextColor(6);
				cout << " <> B I O S E R k | ";
			}
			else  if (pos == 20)
			{
				gotoXY(95, 20);
				TextColor(6);
				cout << "<> M ! S a K X | ";
			}
			else  if (pos == 22)
			{
				gotoXY(96, 22);
				TextColor(6);
				cout << " <> D U X X | ";
			}

		}
	}
}
//chinh am thanh
void soundChange(){}
//chinh board
void boardChange(){}
//chinh luat choi
void ruleChange(){}



//ham exit cuoi cung

void EXIT() {
	while (1) {
		gotoXY(1, 14);
		cout << " Q U I T | ARE YOU SURE?";
		int aa = _getch();
		if (aa == 27)
		{
			
			gotoXY(1, 14);
			cout << "                        ";
			menu();
		}
		else if (aa == 13)
		{
			{gotoXY(50, 7);
			TextColor(15);
			cout << "-day"; TextColor(7); cout << "DREAM"; TextColor(15);cout<<"ers - ";
			
				gotoXY(1, 14);
			cout << "                           ";
				gotoXY(46, 10);
			TextColor(7);
			cout << "                        ";
			Sleep(100);
			
			gotoXY(44, 12);
			
			cout << "                           ";
			Sleep(100);
			gotoXY(34, 14);
		 
			cout << "                                          ";
			Sleep(100);
		
			gotoXY(36, 15);
			
			cout << "                                        ";
			Sleep(100);
			gotoXY(38, 16);
			
			cout << "                                      ";
			Sleep(100);
			gotoXY(42, 18);
			
			cout << "                           ";
			Sleep(100);
			gotoXY(42, 20);
			
			cout << "                          ";
			Sleep(100);
			gotoXY(40, 14);
			TextColor(12);
			cout << " * * *  T H A N K   Y O U  * * *";
			gotoXY(35, 15);
			TextColor(11);
			cout << "    <><><> FOR ENJOYING OUR GAME <><><>";
			Sleep(100);
			gotoXY(52, 24);
			TextColor(7);
			cout << ". M . D .";
			Sleep(600);
			}
			exit(0);
		}
	}
}


//an con chuot 
void hide() {
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
