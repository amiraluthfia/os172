/* 
* Name : Amira Luthfia Fitriani
* NPM : 1506721882
* Class : OS
* Comment : os is funny!
*/

#define LOOP "%d to the power of %d equals %d"

#include <stdio.h>

void main() {
	int input = 5;
	int pangkat = 2;
	int i;
	int hasil = 1;

	for (i=1; i <= pangkat; i++){
		hasil = hasil * input;
	}
printf (LOOP, input, pangkat, hasil);
}
