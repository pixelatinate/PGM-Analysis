// Lab 2: neg.cpp
// This part of the lab inverts the colors of the given pgm
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
	vector<string> data ;
	vector<int> intData ;
	float temp ;
	unsigned int neg ;
	// variables

	getline( cin, line ) ;
	
	if ( line != "P2" ){
		cerr << "Bad PGM file -- first word is not P2\n" ;
		return 1 ; 
	}
	// Grabs the first line and checks if it's P2

	cin >> cols ;
	cin >> rows ;
	if ( rows <= 0 || cols <= 0 ) {
		cerr << "Bad PGM file -- No row specification\n" ;
		return 1 ;
	}
	// Grabs the second line and checks if there are  valid columns and rows

	unsigned int pixels = ( rows * cols ) ;
	// Announced this one later because it's contingent on two others

	cin >> bufferCheck ;
	if ( bufferCheck != 255 ) {
		cerr << "Bad PGM file -- No 255 following the rows and columns\n" ;
		return 1 ;
	}	
	// Grabs the next word to check if it's the 255 buffer

	while ( cin >> line  ) {
		data.push_back ( line ) ;
	}
	// Grabs the rest of the data
	
	for ( unsigned int i = 0 ; i < data.size() ; i++ ) {
		if ( i > pixels ) {
			cerr << "Bad PGM file -- Extra stuff after the pixels\n" ;
			return 1 ;
		}
	}
	// // If there is too much data, throws out an error message

	for ( unsigned int i = 0 ; i < data.size() ; i++ ) {
		line = data.at(i) ;
		buff.clear() ;
		buff << line  ;
		buff >> temp ;
		if ( ( temp > 255 ) || ( temp < 0 ) ) {
			cerr << "Bad PGM file -- pixel " << i << " is not a number between 0 and 255\n" ;
			return 1 ;
		}
		intData.push_back( temp ) ;
	}
	// Converts the getline data into quantifiable integers

	printf( "P2\n" ) ;
	printf( "%d %d\n", cols, rows ) ;
	printf( "255\n" ) ;
	// Prints the "constants" of a pgm file
	
	for ( unsigned int i = 0 ; i < intData.size() ; i++ ) {
		neg = ( 255 - intData.at(i) ) ;
		printf( "%d\n", neg ) ;
	}
	// Inverts the colors and prints

	return 0 ;
}
