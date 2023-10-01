#include "header.h"

int main() {

	int chordXgen = Gen();

	string chordX = ChordChoice(chordXgen);

	cout << chordX << endl;

}

int Gen() { //14 chords

	srand(time(NULL));
	int generatedNumber = rand() % 14 + 0;

	

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

	}

	return Chord;
}

int ascii() {

	return 0;
}