#include<iostream>
using namespace std;
// calculate max and min in a array
int main(){
	int const m = 3, n = 3;
	int array[m][n],max,min;
	
    cout << "Enter array numbers: ";
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			cin >> array[i][j];
			
	max = array[0][0];		
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(array[i][j]>max)
				max = array[i][j];
	cout << "the largest number in array is " << max <<endl;
    min = array[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (array[i][j]<min)
                min = array[i][j];
    cout << "the smallest number in array is "<< min <<endl;
}