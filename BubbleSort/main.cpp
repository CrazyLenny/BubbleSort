/*
 * main.cpp
 *
 *  Created on: Aug 22, 2017
 *      Author: Kexin
 */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> bubbleSort(vector<int> &input) {
		vector<int> in = input;

		for (unsigned int i=0; i<in.size()-1;i++) {
			for (unsigned int j=0; j<in.size()-1-i;j++) {
				if (in[j] >= in[j+1]) { // first item larger than second, swap
					swap(&in[j],&in[j+1]);
				}
			}

		}
		return in;
	}
	void swap(int *a1, int *a2) {
		int temp;
		temp = *a1;
		*a1 = *a2;
		*a2 = temp;
	}
};

void printVector (vector<int> input) {
	for (unsigned int i=0; i<input.size();i++){
		cout << input[i] << ' ';
	}
	cout << endl;
}

int main() {
	cout << "first line for bubble sort!" << endl;
	Solution s1;
	vector<int> input {6,5,4,3,2,1};
	vector<int> result;
	for (unsigned int i=0; i<input.size();i++){
		cout << input[i] << ' ';
	}
	cout << endl;
	result = s1.bubbleSort(input);

	cout << "input array:";
	printVector(input);
	cout << "output array:";
	printVector(result);

}



