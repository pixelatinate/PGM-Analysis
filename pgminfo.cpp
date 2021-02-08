// Lab 2:  pgminfo
// This lab reads in a pgm file and identifies the number of rows and columns
//		If the pgm file is bad, it will also identify that, and how.
// COSC 140
// Swasti Mishra
// 02/07/21
// Professor Emrich
// Students: Trish Nguyen, Katie Nuchols

# include <iostream>
# include <cstdio>
# include <sstream>
# include <vector>
#include <bits/stdc++.h> 
# include <fstream>
# include <cstring>
// libraries

using namespace std ;

int main(int argc, char *argv[]) {
	
	string line ;			
	stringstream buff( line ) ;
	int rows = 0 , cols = 0 ;
	int bufferCheck ;

	getline( cin, line ) ;
	
	if ( line != "P2" ){
		cerr << "Bad PGM file -- first word is not P2\n" ;
		return 1 ; 
	}
	// P2 Test

	cin >> rows ;
	cin >> cols ;
	if ( rows <= 0 || cols <= 0 ) {
		cerr << "Bad PGM file -- no column specification\n" ;
		return 2 ;
	}
	// Negative or No Columns Test

	int pixels = ( rows * cols ) ;

	cin >> bufferCheck ;
	if ( bufferCheck != 255 ) {
		cerr << "Bad PGM file -- No column specification\n" ;
		return 3 ;
	}

	

	int sum = accumulate( intData.begin(), intData.end(), 0 ) ;
	int average = ( sum / pixels ) ;

	printf( "# Rows:         %d\n", rows ) ;
	printf( "# Columns:      %d\n", cols ) ;
	printf( "# Pixels:       %d\n", pixels ) ;
	printf( "# Avg Pixel:    %d\n", average ) ;

	return 0 ;
}
