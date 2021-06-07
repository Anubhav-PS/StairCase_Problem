#include<iostream>
using namespace std;

//structure -'points' to store the x and y coordinate details
struct point {
	int x; // x coordinate
	int y; // y coordinate
	// operator overload to compare two points
	bool operator==(const point& rhs) { return ((this->x == rhs.x) && (this->y == rhs.y)); }
};
// CODE WRITTEN BY Anubhav.P.S 
//structure - 'line' to store the start and end points of a line
struct line {
	point start; //starting point of line
	point end;   // ending point of line
};

int main() {
	line lines[30]; // lines
	line vertiLines[10]; //vertical lines
	line horzLines[10];  //horizontal lines
	int h = 0, v = 0;
	int n;
	cin >> n; //total number of lines
	for (int i = 0; i < n; i++) {

		cin >> lines[i].start.x; //start point - x coordinate
		cin >> lines[i].start.y; //start point - y coordinate
		cin >> lines[i].end.x;   //end point - x coordinate
		cin >> lines[i].end.y;   //end point - y coordinate
		// CODE WRITTEN BY Anubhav.P.S 
		if (lines[i].start.x == lines[i].end.x) {
			vertiLines[v++] = lines[i]; //storing the vertical lines in a vertical line array
		}
		else if (lines[i].start.y == lines[i].end.y) {
			horzLines[h++] = lines[i]; //storing the horizontal lines in a horizontal line array
		}
	}

	for (int i = 0; i < h; i++) {
		point HPe = horzLines[i].end; //getting the starting point of horizontal line
		point HPs = horzLines[i].start; //getting the ending point of horizontal line
		for (int j = 0; j < v; j++) {
			// CODE WRITTEN BY Anubhav.P.S 
			point VPs = vertiLines[j].start; //getting the starting point of vertical line
			point VPe = vertiLines[j].end;   //getting the starting point of vertical line
			if (HPe == VPs || HPs == VPs || HPe == VPe) {
				// printing the coordinates of the horizontal line
				cout << "\n" << horzLines[i].start.x << "  " << horzLines[i].start.y;
				cout << "\n" << HPe.x << "  " << HPe.y;
			}
		}
	}
	// CODE WRITTEN BY Anubhav.P.S 
	return 0;
}