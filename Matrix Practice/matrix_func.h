#pragma once
#include <iostream>
#include <ctime>
#include <algorithm>
#include <stdlib.h>
#include <Windows.h>
using namespace std;
int i, j;
int**create(int height, int width){
	int **matrix = new int*[height];
	for (i = 0; i < height; i++){
		matrix[i] = new int[width];
	}
	return matrix;
}
void input(int**matrix, int &height, int &width){
	srand(time(NULL));
	for (i=0; i < height; i++){
		for (j=0; j < width; j++){
			matrix[i][j] = rand() % 20 - 10;
		}
	}
}
void output(int**matrix, int &height, int &width){
	cout << "Your matrix: " << endl;
	for (i=0; i < height; i++){
		for (j=0; j < width; j++){
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
}
void maximum_element(int**matrix, int &height, int &width){
	int m = matrix[0][0];
	for (i=0; i < height; i++){
		for (j=0; j < width; j++){
			m = max(matrix[i][j], m);
		}
	}
	cout << "Maximum element of this matrix is: " << m << endl;
	system("pause");
}
void minimum_element(int**matrix, int &height, int &width){
	int m = matrix[0][0];
	for (i=0; i < height; i++){
		for (j=0; j < width; j++){
			m = min(matrix[i][j], m);
		}
	}
	cout << "Minimum element of this matrix is: " << m << endl;
	system("pause");
}
void maximum_element_main(int**matrix, int &height, int &width){
	int m = matrix[0][0];
	for (i = 0; i < height; i++){
		for (j = 0; j < width; j++){
			if (i == j){
				m = max(matrix[i][j], m);
			}
		}
	}
	cout << "Maximum element of the main diagonal is: " << m << endl;
	system("pause");
}
void minimum_element_main(int**matrix, int &height, int &width){
	int m = matrix[0][0];
	for (i = 0; i < height; i++){
		for (j = 0; j < width; j++){
			if (i == j){
				m = min(matrix[i][j], m);
			}
		}
	}
	cout << "Minimum element of the main diagonal is: " << m << endl;
	system("pause");
}
void sum_all(int**matrix, int &height, int &width){
	int s=0;
	for (i=0; i < height; i++){
		for (j=0; j < width; j++){
			s = s + matrix[i][j];
		}
	}
	cout << "Sum of all elements is: " << s << endl;
	system("pause");
}
void sum_above_main(int**matrix, int &height, int &width){
	int s=0;
	for (i=0; i < height; i++){
		for (j=0; j < width; j++){
			if (j>i){
				s = s + matrix[i][j];
			}
		}
	}
	cout << "Sum of all elements above the main diagonal is: " << s << endl;
	system("pause");
}
void sum_below_main(int**matrix, int &height, int &width){
	int s=0;
	for (i=0; i < height; i++){
		for (j=0; j < width; j++){
			if (j < i){
				s = s + matrix[i][j];
			}
		}
	}
	cout << "Sum of all elements below the main diagonal is: " << s << endl;
	system("pause");
}
void sum_in_main(int**matrix, int &height, int &width){
	int s=0;
	for (i=0; i < height; i++){
		for(j=0; j < width; j++){
		if (i == j){
			s = s + matrix[i][j];
		}
	  }
	}
	cout << "Sum of all elements of the main diagonal is: " << s << endl;
	system("pause");
}
void sum_above_sec(int**matrix, int &height, int &width){
	int s = 0;
	for (i = 0; i < height; i++){
		for (j = i+1; j < width; j++){
			s += matrix[j][width-1-i];
		}
	}
	cout << "Sum of all elements above the secondary diagonal is: " << s << endl;
	system("pause");
}
void delete_row(int **matrix, int &height, int &width){
	int row;
	cout << "Insert row number: "; cin >> row;
	if (row <= height){
		for (i = row -1; i < height - 1; i++){
			for (j = 0; j < width; j++){
				matrix[i][j] = matrix[i + 1][j];
			}
		}
		delete[]matrix[height - 1];
		height--;
	}
	else {
		cout << "Wrong row number." << endl;
	}
}
void delete_column(int**matrix, int &height, int &width){
	int column;
	cout << "Insert column number: "; cin >> column;
	if (column <= width){
		for (i = 0; i < height; i++){
			int *c = new int[width - 1];
			int counter = 0;
			for (j = 0; j < width;j++){
				if (j != column - 1){
					c[counter] = matrix[i][j];
					counter++;
				}
			}
			delete[]matrix[i];
			matrix[i] = c;
		}
		width--;
	}
	else {
		cout << "Wrong column number." << endl;
	}
}
/*void add_row(int **matrix, int &height, int &width){ 
	int row = 0;
	cout << "Insert quanity of rows: "; cin >> row;
	int new_height = row + height;
	for (i = height; i < new_height; i++){
		matrix[i] = new int[width];
	}
	for (i = height; i < new_height; i++){
		for (j = 0; j < width; j++){
			matrix[i][j] = rand() % 20 - 10;
		}
	}
}
*/


