#pragma once
#include <iostream>
#include "matrix_func.h"
#include <string>
#include <stdlib.h>
using namespace std;
int height, width;
string answer;
void interface_f(){
	cout << "Welcome.Please, insert a size of your matrix." << endl;
	cout << "Height: "; cin >> height;
	cout << "Width: "; cin >> width;
	int **matrix = create(height, width);
	input(matrix, height, width);
	do{
		system("cls");
		cout << "Type a number to select one of this functions below. Type 'stop' to exit the program." << endl;
		cout << "1) Matrix output." << endl;
		cout << "2) Maximum element." << endl;
		cout << "3) Maximum element of the main diagonal." << endl;
		cout << "4) Maximum element of the secondary diagonal. (incomplete)" << endl; //in developing
		cout << "5) Minimum element." << endl;
		cout << "6) Minimum element of the main diagonal." << endl;
		cout << "7) Minimum element of the secondary diagonal. (incomplete)" << endl; //in developing
		cout << "8) Sum of all elements." << endl;
		cout << "9) Sum of all elements above the main diagonal." << endl;
		cout << "10) Sum of all elements below the main diagonal." << endl;
		cout << "11) Sum of all elements of the main diagonal." << endl;
		cout << "12) Sum of all elements above the secondary diagonal. (incomplete)" << endl; //in developing
		cout << "13) Sum of alll elements below the secondary diagonal. (incomplete)" << endl; //in developing
		cout << "14) Sum of all elements of the secondary diagonal. (incomplete)" << endl; //in developing
		cout << "15) Delete a row." << endl;
		cout << "16) Delete a column." << endl;
		cout << "17) Add a row. (incomplete)" << endl; //in developing
		cout << "18) Add a column. (incomplete)" << endl; //in developing
		cout << "19) Switch one row with another. (incomplete)" << endl; //in developing
		cout << "20) Switch one column with another. (incomplete)" << endl; //in developing
		cout << "21) Switch one element with another. (incomplete)" << endl; //in developing
		cout << "22) Transposition. (incomplete)" << endl; //in developing
		//To be continued
		cout << "Your answer is: "; cin >> answer;
		if (answer == "stop"){
			cout << "Program is shutting down." << endl;
			break;
		}
		system("cls");
		int choice = atoi(answer.c_str());
		switch (choice){
		case 1:
			output(matrix, height, width);
			break;
		case 2:
			maximum_element(matrix, height, width);
			break;
		case 3:
			maximum_element_main(matrix, height, width);
			break;
		//case 4:
		case 5:
			minimum_element(matrix, height, width);
			break;
		case 6:
			minimum_element_main(matrix, height, width);
			break;
		//case 7:
		case 8:
			sum_all(matrix, height, width);
			break;
		case 9:
			sum_above_main(matrix, height, width);
			break;
		case 10:
			sum_below_main(matrix, height, width);
			break;
		case 11:
			sum_in_main(matrix, height, width);
			break;
		/*case 12:
			sum_above_sec(matrix, height, width);
			break;
		*/
		//case 13:
		//case 14:
		case 15:
			delete_row(matrix, height, width);
			output(matrix, height, width);
			break;
		case 16:
			delete_column(matrix, height, width);
			output(matrix, height, width);
			break;
	/*	case 17: 
			add_row(matrix, height, width);
			output(matrix, height, width);
			break;
	*/
		//case 18:
		//case 19:
		//case 20:
		//case 21:
		//case 22:
		}

	} 
	while (answer != "stop");

}

