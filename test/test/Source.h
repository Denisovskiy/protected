#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <string.h>
using namespace std;
int input_key();
int minelem(int* a, int n);
void swaper(int* a, int n);
int* TakeData_and_FindnOfElem(FILE* file, int* a, int* n);
void Printarray(int* a, int n);
void Printmodernarray(int* a, int n);
void My_Program(int* a, int n);
void Test(int* a, int n);