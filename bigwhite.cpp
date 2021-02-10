// Lab 2: bigwhite.cpp
// This part of the large generates a white pgm based on
//		the specifications
// COSC 140
// Swasti Mishra
// 02/07/21
// Professor Emrich
// Students: Trish Nguyen, Katie Nuchols

# include <iostream>
# include <string>
# include <stdlib.h>
# include <stdio.h>
# include <sstream>
// libraries

using namespace std ;

int main(int argc, char *argv[]) {
	
	if ( !( ( argc < 4 ) || ( argc > 4 ) ) ) {
		cerr << "usage: bigwhite rows cols\n" ;
		return 1 ;
	}
	// Checks if too many or too few arguments were inserted

	int pixel = 255 ;
	int rows = atoi( argv[1] ) ;
	int cols = atoi( argv[2] ) ;
	// variables

	if ( ( rows <= 0 ) || ( cols <= 0 ) ) {
		cerr << "usage: bigwhite rows cols\n" ;
		return 2 ;
	}
	// Checks if a zero or negative number was inserted as an argument

	printf( "P2\n" ) ;
	printf( "%d %d\n", cols, rows ) ;
	printf( "%d\n" , pixel ) ;
	for ( int i = 0 ;  i < rows ; i ++ ) {
		for ( int j = 0 ; j < cols ; j ++ ) {
			printf( " %d" , pixel ) ;
			printf( "\n" ) ;
		}
	}
	// Prints the pgm

  return 0;

}

