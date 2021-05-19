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
# include <iomanip>
# include <fstream>
# include <limits>
// libraries

using namespace std ;

int main(int argc, char *argv[]) {
	
	string line ;				// the line
	vector<string> sv ;			// This holds the words on the current line
	int ln ;					// Line number
	size_t w ;					// Word number 
	string s ;					// Helper
	istringstream ss ;			// Helper

	ln = 0 ;
	// Reads the current lines and update the line number.
	
	while ( getline( cin, line ) ) {
		ln ++ ;
		// Using a stringstream, create the vector of words on the line.

		sv.clear() ;
		ss.clear() ;
		ss.str(line) ;
		while ( ss >> s ) sv.push_back(s) ;
		// Print the line number, number of words, and the words.

		printf( "Line %d. # Words: %lu: ", ln, sv.size() ) ;
		for ( w = 0 ; w < sv.size() ; w++ ) printf( " %s", sv[w].c_str() ) ;
		printf( "\n") ;
	}
	return 0 ;
}
	
//		printf ( "Bad PGM file -- first word is not P2" ) ;						

