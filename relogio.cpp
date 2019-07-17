#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main(void){
	int cent = 0, seg = 0, min = 0, hora = 0;
	while(cent < 100){
		cent = cent + 1; //num++;
		printf("%d:%d:%d:%d\n",hora , min , seg, cent);
		Sleep(1000);
		system("cls");
	    if (cent == 99){
		    cent = 0;
		    seg++;
	    }
	    if (seg == 60){
	    	seg = 0;
	    	min++;
	    }
	    if (min == 60){
	    	min = 0;
	    	hora++;
	    }
	    if (hora == 24){
	    	hora = 0;
	    }
	}
}
