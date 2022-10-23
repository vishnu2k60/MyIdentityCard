// Creating a Jaggered Array Dynamically
// A jaggered Array, also called ragged Array, is an Array of Arrays of which the member arrays can be of different lengths, producing rows of ragged edges when visualized as ouput.

// Example:
// 	1 2 3
//  4 5 6 7
//  8 9

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int rows;
	
	cout<<"Enter the number of Rows in your Jaggered Array -> ";
	cin>>rows;
	
	// Making an array of pointers first
	int** arr = new int* [rows];
	
	// Making an Another 1D Array that stores the respective column sizes in each row of the jaggered array which is taken at run-time
	int *arrSizes = new int[rows];
	
	// Creating the Jaggered Array now
	for(int i=0; i<rows; i++){
		int cols;
		
		cout<<"\n\nEnter the number of columns of "<<i<<" row -> ";
		cin>>cols;
		
		// Making a 1D Array dynamically with the col size we took from the user for its ith row at run-time
		// We initialize the respective column at the same time in the array of pointers we made initially.
		arr[i] = new int[cols];
		
		// Store the cols size of that ith row at the same time in the 'arrSizes' Array
		arrSizes[i] = cols;
		
			
		// Taking input for the ith row with respect to its column size!
		cout<<"\nNow, Enter those "<<arrSizes[i]<<" elements: ";
			
		for(int j = 0; j < arrSizes[i]; j++){
			cin>>arr[i][j];
		}
				
	}
	
	// Printing the Jaggered Array
	for(int i = 0; i<rows; i++){
				
		for(int j = 0; j < arrSizes[i]; j++){
			cout<<arr[i][j];
		}
		
		cout<<endl;
		
	}
	
}

