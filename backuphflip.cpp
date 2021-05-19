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
# include <bits/stdc++.h> 
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

	cin >> cols ;
	cin >> rows ;
	if ( rows <= 0 || cols <= 0 ) {
		cerr << "Bad PGM file -- No row specification\n" ;
		return 2 ;
	}
	// Negative or No Columns Test

	unsigned int pixels = ( rows * cols ) ;

	cin >> bufferCheck ;
	if ( bufferCheck != 255 ) {
		cerr << "Bad PGM file -- No column specification\n" ;
		return 3 ;
	}	

	vector<string> data ;

	while ( cin >> line  ) {
		data.push_back ( line ) ;
	}
	
	float temp ;

	for ( unsigned int i = 0 ; i < data.size() ; i++ ) {
		if ( i > pixels ) {
			cerr << "Bad PGM file -- Extra stuff after the pixels\n" ;
			return 4 ;
		}
	}

	vector<int> intData ;

	for ( unsigned int i = 0 ; i < data.size() ; i++ ) {
		line = data.at(i) ;
		buff.clear() ;
		buff << line  ;
		buff >> temp ;
		if ( ( temp > 255 ) || ( temp < 0 ) ) {
			cerr << "Bad PGM file -- pixel " << i << " is not a number between 0 and 255\n" ;
			return 5 ;
		}
		intData.push_back( temp ) ;
	}

//	int hflipData[ pixels ] ;
//	int jprime ;

//	for ( int i = 0 ; i < rows ; i++ ) {
//		for ( int j = 0 ; j < cols ; j++ ) {
//			jprime = ( ( rows * j ) + ( cols - 1 ) ) ;
			hflipData[ jprime [ intData.at( j ) ] ] ;
			cout <<  hflipData[ j ] << "\n" ;
		} 
	}

	printf( "P2\n" ) ;
	printf( "%d %d\n", cols, rows ) ;
	printf( "255\n") ;

	return 0 ;
}
