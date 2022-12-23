// C++ implementation of the approach
#include <iostream>
using namespace std;

// Function to print the desired
// Alphabet Z Pattern
void alphabetPattern(int N)
{

	int index, side_index, size;

	// Declaring the values of Right,
	// Left and Diagonal values
	int Top = 1, Bottom = 1, Diagonal = N - 1;

	// Loop for printing the first row
	for (index = 0; index < N; index++)
		cout <<"*" << " ";

	cout << endl;

	// Main Loop for the rows from (2 to n-1)
	for (index = 1; index < N - 1; index++) {

		// Spaces for the diagonals
		for (side_index = 0; side_index <  2 * (N - index -1);
			side_index++)
		{
            for (side_index = 1; side_index <  2 * (N - index -2);
			side_index--)
            cout<<" ";
        }

		// Printing the diagonal values
		cout <<"*";
        	cout << " ";
		cout << endl;
	}

	// Loop for printing the last row
	for (index = 0; index < N; index++)
		cout <<"*" << " ";
}

// Driver Code
int main()
{
	// Number of rows
	int N = 5;

	alphabetPattern(N);

	return 0;
}
