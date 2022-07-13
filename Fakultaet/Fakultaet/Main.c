//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Fakultaet	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 11.01.2022 18:09:49
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************

double Fakultaet(int i_Zahl)
{
	double d_Fakultaet = 0;
	for (int i = 1; i <= i_Zahl; i++);
	{
		d_Fakultaet *= i_Zahl;
	}
	return d_Fakultaet;
}


int main(void)
{
	//Variables
	double d_Wahrscheinlichkeit = 0;



	//Code
	d_Wahrscheinlichkeit = Fakultaet(49) / (Fakultaet(6) * Fakultaet(49 - 6));

	printf("Die Wahrscheinlichkeit ist %.0lf", d_Wahrscheinlichkeit);



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}