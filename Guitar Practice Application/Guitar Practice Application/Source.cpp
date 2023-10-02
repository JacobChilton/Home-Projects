#include "Declarations.h"

int main() {
	int y;

	do {
		cout << "Would you like to begin?\n";
		cin >> y;

		system("CLS");
		int chordXgen = Gen();

		string chordX = ChordChoice(chordXgen);

		cout << chordX << endl;

		strums();
		
	} while (y == 1);
		system("Pause");
	
}

int Gen() { //14 chords

	srand(time(NULL));
	int generatedNumber = rand() % 14 + 1;

	return generatedNumber;
}

string ChordChoice(int X) {
	string Chord;
	if(X == 1){
		Chord = "G";
	}
	else if (X == 2) {
		Chord = "C";
	}
	else if (X == 3) {
		Chord = "Cadd9";
	}
	else if (X == 4) {
		Chord = "Em";
	}
	else if (X == 5) {
		Chord = "A";
	}
	else if (X == 6) {
		Chord = "Am";
	}
	else if (X == 7) {
		Chord = "Asus74";
	}
	else if (X == 8) {
		Chord = "Asus2";
	}
	else if (X == 9) {
		Chord = "D";
	}
	else if (X == 10) {
		Chord = "Dm7";
	}
	else if (X == 11) {
		Chord = "Dsus4";
	}
	else if (X == 12) {
		Chord = "Dsus4(no5)";
	}
	else if (X == 13) {
		Chord = "Bm";
	}
	else if (X == 14) {
		Chord = "F#";
	}
	else {
		cout << "no chord\n";
	}

	return Chord;
}

int strums() {

	int strum = 0;
	srand(time(NULL));
	strum = rand() % 2 + 1;

	if(strum == 1) {
		downstrums();
		
	}
	else if(strum == 2) {
		upstrums();
		
	}

	int strum2 = 0;
	strum2 = rand() % 2 + 0;

	if (strum2 == 0) {
		downstrums();
		
	}
	else if (strum2 == 1) {
		upstrums();
		
	}

	int strum3 = 0;
	strum3 = rand() % 2 + 0;

	if (strum3 == 0) {
		downstrums();
		
	}
	else if (strum3 == 1) {
		upstrums();
		
	}
	cout << "\n";
	return 0;
}

void downstrums() {
	cout << "\\/   ";
}

void upstrums() {
	cout << "/\\   ";
}

int ascii() {

	return 0;
}