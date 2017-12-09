

#include <cstdlib>
#include <iostream>
#include <pthread.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "graphics.h"

using namespace std;

void *verm(void *);

int main(int argc, char *argv[])
{	
	srand(time(NULL));
	pthread_t threadID;
	printf("TESTE");
	
	void *exitstatus;
	double *result = (double*)malloc(sizeof(double) * 99);

	initwindow(400, 300, "First Sample");
	pthread_t threadWin;

	pthread_create(&threadID, NULL, verm, NULL);

	while (!kbhit())
	{
		// Use color B
		setcolor(COLOR(0,255,255));
		moveto(rand() % 400, rand() % 300);
		outtext("1");
	}


	system("PAUSE");
	return 0;
}


void *usecolorA(void *){
	double *result = (double*)malloc(sizeof(double) * 99);

	while (!kbhit())
	{
		// Use color A
		setcolor(COLOR(255, 255, 0));
		moveto(rand() % 400, rand() % 300);
		outtext("0");
	}
	
	return result;
}