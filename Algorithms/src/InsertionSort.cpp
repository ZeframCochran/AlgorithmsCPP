/*
 * InsertionSort.cpp
 *
 *  Created on: Sep 13, 2015
 *      Author: anony
 */
#include <iostream>
using namespace std;

int insertionSort() {
	int array[16] = {6, 2, 4, 6, 12, 11, 367, 83, 65, 29, 12, 1, 3, 1024, 512, 256};
	int unsortedPosition = 1;

	for( int sortedPosition = 0; sortedPosition < sizeof(array); sortedPosition++ ) {

		unsortedPosition = sortedPosition + 1;
		int temp = array[unsortedPosition];

		while (unsortedPosition > 1 && array[unsortedPosition] > temp ){
			array[unsortedPosition + 1] = array[unsortedPosition];
			unsortedPosition--;
		}

		array[unsortedPosition] = temp;

	}
}



