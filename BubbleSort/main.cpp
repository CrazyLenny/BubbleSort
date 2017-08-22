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
		int temp;
		for (unsigned int i=0; i<in.size()-1;i++) {
			for (unsigned int j=0; j<in.size()-1-i;j++) {
				if (in[j] >= in[j+1]) { // first item larger than second, swap
					temp = in[j];
					in[j] = in[j+1];
					in[j+1] = temp;
				}
			}

		}
		return in;
	}
};

int main() {
	cout << "first line for bubble sort!" << endl;
	Solution s1;
	vector<int> input {7,6,5,4,3,2,1};
	vector<int> result;
	result = s1.bubbleSort(input);
	cout << "input array:";
	for (unsigned int i=0; i<input.size();i++){
		cout << input[i] << ' ';
	}
	cout << endl;
	cout << "output array:";
	for (unsigned int i=0;i<result.size();i++){
		cout << result[i] << ' ';
	}
	cout << endl;

}



