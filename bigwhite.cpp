// Lab 2:  bigwhite

# include <iostream>
# include <string>
# include <stdlib.h>
# include <stdio.h>
# include <sstream>

using namespace std ;

int main(int argc, char *argv[]) {
	
	if ( !( ( argc < 4 ) || ( argc > 4 ) ) ) {
		cerr << "usage: bigwhite rows cols\n" ;
		return 1 ;
	}

	int pixel = 255 ;

	int rows = atoi( argv[1] ) ;
	int cols = atoi( argv[2] ) ;

	if ( ( rows <= 0 ) || ( cols <= 0 ) ) {
		cerr << "usage: bigwhite rows cols\n" ;
		return 2 ;
	}

	printf( "P2\n" ) ;
	printf( "%d %d\n", cols, rows ) ;
	printf( "%d\n" , pixel ) ;
	for ( int i = 0 ;  i < rows ; i ++ ) {
		for ( int j = 0 ; j < cols ; j ++ ) {
			printf( " %d" , pixel ) ;
			printf( "\n" ) ;
		}
	}

  return 0;

}

