#pragma once
#pragma once
#ifndef _MINH_H_
#define _MINH_H_

#include<iostream>
#include <stdio.h>
#include"console.h"
#include<Windows.h>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;

void menu();
void TheLine();
void hide();
void resizeConsole(int width, int height);
void intro();
void TwoPlay(int index, string fileName);
void AI(int index, string fileName);
void icon(int IconX, int IconO);
void Savegame(int mode);
#endif // !_MINH_H_