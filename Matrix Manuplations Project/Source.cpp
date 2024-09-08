#include<iostream>
#include<fstream>
using namespace std;

/* function to find the sum of all the values of matrix */
void sumofall(int** matrix, int r, int c)
{
	int sum = 0;
	for (int i = 0;i < r;i++)
	{
		for (int k = 0;k < c;k++)
		{
			sum += matrix[i][k];
		}

	}
	cout << sum << endl;;

}



/* function to find the product of all the values of a matrix */
void productofall(int** matrix, int r, int c)
{
	int product = 1;
	for (int i = 0;i < r;i++)
	{
		for (int k = 0;k < c;k++)
		{
			product *= matrix[i][k];
		}

	}
	cout << product << endl;;


}



/* function to perform addition on two matrices */
void additionof2(int** m1, int** m2, int r, int c, int** summ)
{


	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			summ[i][j] = 0;
		}
	}

	cout << "THE sum of 2 matrixes are: \n";

	for (int i = 0;i < r;i++)
	{
		for (int k = 0;k < c;k++)
		{
			summ[i][k] = m1[i][k] + m2[i][k];
		}
	}

	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			cout << summ[i][j] << " ";
		}
		cout << endl;
	}


	for (int i = 0;i < r;i++)
	{
		delete[] summ[i];
	}

	delete[] summ;
	summ = NULL;
}



/* function to perform subtraction on two matrices */
void subtractionof2(int** m1, int** m2, int r, int c, int** sub)
{
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			sub[i][j] = 0;
		}
	}


	cout << "THE subtraction of 2 matrixes are: \n";

	for (int i = 0;i < r;i++)
	{
		for (int k = 0;k < c;k++)
		{
			sub[i][k] = m1[i][k] - m2[i][k];
		}
	}

	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			cout << sub[i][j] << " ";
		}
		cout << endl;
	}



	for (int i = 0;i < r;i++)
	{
		delete[] sub[i];
	}

	delete[] sub;
	sub = NULL;

}


/* function to perform multiplication on two matrices */
void multiplicationof2(int** m1, int** m2, int r, int c, int** mul)
{
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			mul[i][j] = 0;
		}
	}


	cout << "THE multiplicatin of 2 matrixes are: \n ";

	for (int i = 0;i < r;i++)
	{
		for (int k = 0;k < c;k++)
		{
			mul[i][k] = m1[i][k] * m2[i][k];
		}
	}

	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			cout << mul[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0;i < r;i++)
	{

		delete[] mul[i];
	}

	delete[] mul;
	mul = NULL;


}



/* Function to calculate the row-wise average of matrix */
void rowavg(int** matrix, int r, int c)
{
	float avg = 0;
	for (int i = 0;i < r;i++)
	{
		float sum = 0;
		for (int j = 0;j < c;j++)
		{
			sum += matrix[i][j];
		}
		avg = sum / r;
		cout << "THE averge of row " << i + 1 << "  is " << avg << endl;;
	}
}

/* Function to calculate the column-wise average of matrix */
void colavg(int** matrix, int r, int c)
{
	float avg = 0;
	for (int i = 0;i < c;i++)
	{
		float sum = 0;
		for (int j = 0;j < r;j++)
		{
			sum += matrix[j][i];
		}
		avg = sum / c;
		cout << "THE averge of column " << i + 1 << "  is " << avg << endl;;
	}
}


/* Function to calculate the average of whole matrix */
void avgofmatrix(int** matrix, int r, int c)
{
	float avg = 0;
	float sum = 0;
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			sum += matrix[i][j];
		}

	}

	avg = sum / (r * c);
	cout << avg << endl;;
}

/* Function for row wise sorting of the matrix */
void rowsort(int** matrix, int r, int c)
{

	for (int i = 0;i < r;i++)
	{
		for (int steps = 0;steps < c - 1;steps++)
		{
			for (int j = 0;j < c - 1 - steps;j++)
			{
				if (matrix[i][j] > matrix[i][j + 1])
				{
					int temp = matrix[i][j];
					matrix[i][j] = matrix[i][j + 1];
					matrix[i][j + 1] = temp;
				}
			}
		}
	}

	for (int a = 0;a < r;a++)
	{
		for (int k = 0;k < c;k++)
		{
			cout << matrix[a][k] << " ";
		}
		cout << endl;
	}

}

/* Function for column wise sorting of the matrix */
void colsort(int** matrix, int r, int c)
{

	for (int i = 0;i < c;i++)
	{
		for (int steps = 0;steps < r - 1;steps++)
		{
			for (int j = 0;j < r - 1 - steps;j++)
			{
				if (matrix[j][i] > matrix[j + 1][i])
				{
					int temp = matrix[j][i];
					matrix[j][i] = matrix[j + 1][i];
					matrix[j + 1][i] = temp;
				}
			}
		}
	}


	for (int a = 0;a < r;a++)
	{
		for (int k = 0;k < c;k++)
		{
			cout << matrix[a][k] << " ";
		}
		cout << endl;
	}
}

/* Function for scalar addition of the matrix */
void scalaraddition(int** matrix, int r, int c)
{
	int num;
	cout << "Enter the number you want to add into matrix:";
	cin >> num;
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			matrix[i][j] = matrix[i][j] + num;
		}
	}
	cout << "THE scalar addition of matix are :\n";
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}



/* Function for scalar subtraction of the matrix */
void scalarsubtraction(int** matrix, int r, int c)
{
	int num;
	cout << "Enter the number you want to subtract from matrix:";
	cin >> num;
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			matrix[i][j] = matrix[i][j] - num;
		}
	}
	cout << "THE scalar subtraction of matix are :\n";
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}

/* Function for scalar multiplicaton of the matrix */
void scalarmulti(int** matrix, int r, int c)
{
	int num;
	cout << "Enter the number you want to multiply with matrix:";
	cin >> num;
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			matrix[i][j] = matrix[i][j] * num;
		}
	}
	cout << "THE scalar multiplication of matrix are :\n";
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}

/* Function for scalar division of the matrix */
void scalardivision(int** matrix, int r, int c)
{
	int num;
	cout << "Enter the number you want  matrix to be divide: ";
	cin >> num;
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			matrix[i][j] = matrix[i][j] / num;
		}
	}
	cout << "THE scalar division of matix are :\n";
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}

/* Function for transpose of the matrix */
void transpose(int** matrix, int r, int c)
{

	for (int i = 0;i < c;i++)
	{
		for (int j = 0;j < r;j++)
		{
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}

}

/* Function for determiinant of the matrix */
int detmatrix(int** matrix, int r, int c)
{
	float det = 0;
	int a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
	if (r == c)
	{
		if (r == 1)
		{
			det = matrix[0][0];
			return det;
		}
		else
			if (r == 2)
			{
				det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
				return det;
			}
			else
				if (r == 3)
				{
					a1 = matrix[1][1] * matrix[2][2];
					a2 = matrix[1][2] * matrix[2][1];

					b1 = matrix[1][0] * matrix[2][2];
					b2 = matrix[2][0] * matrix[1][2];

					c1 = matrix[1][0] * matrix[2][1];
					c2 = matrix[2][0] * matrix[1][1];

					det = (matrix[0][0] * (a1 - a2)) - (matrix[0][1] * (b1 - b2)) + (matrix[0][2] * (c1 - c2));
					return det;
				}

	}



}



void inversematrix(int** arr, int rows, int cols)
{
	double value;
	int** Inverse = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		Inverse[i] = new int[cols];
	}
	int** Adjoint = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		Adjoint[i] = new int[cols];
	}

	if (rows == cols && rows == 2)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{

				if (i == 0 && j == 0)
				{
					Adjoint[rows - 1][cols - 1] = arr[i][j];
				}

				if (i == rows - 1 && j == cols - 1)
				{

					Adjoint[0][0] = arr[i][j];
				}

				if (i == 0 && j == 1)
				{
					Adjoint[i][j] = (-1) * arr[i][j];
				}

				if (i == 1 && j == 0)
				{
					Adjoint[i][j] = (-1) * arr[i][j];
				}
			}
		}

		cout << endl;
		value = detmatrix(arr, rows, cols);
		if (value != 0)
		{

			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					Inverse[i][j] = Adjoint[i][j] / value;
					cout << Inverse[i][j] << " ";
				}

				cout << endl;
			}
			cout << endl;
		}
		else
		{
			cout << "Inverse dont exists due to Det = 0" << endl;
		}
	}

	else
	{
		cout << "Complex inverse! Inverse works only for 2X2" << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = NULL;
	for (int i = 0; i < rows; i++)
	{
		delete[]Inverse[i];
	}
	delete[]Inverse;
	for (int i = 0; i < rows; i++)
	{
		delete[]Adjoint[i];
	}
	delete[]Adjoint;
}



/* Function for displaying the values of the matrix */
void displaymatrix(int** matrix, int rows, int col)
{
	for (int i = 0;i < rows;i++)
	{
		for (int j = 0;j < col;j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}
/* function for Reading Matrxi Data From the file */
int** readfromfile(int** matrix, int& rows, int& col)
{
	char filename[100];
	cout << "Enter the file name with extension: (.txt) :";
	cin >> filename;
	fstream file;
	file.open(filename);
	if (!filename)
	{
		cout << "not found\n";
	}
	else
	{
		file >> rows >> col;
		matrix = new int* [rows];
		for (int i = 0;i < rows;i++)
		{
			matrix[i] = new int[col];
		}


		for (int i = 0;i < rows;i++)
		{
			for (int k = 0;k < col;k++)
			{
				file >> matrix[i][k];
			}
		}


	}

	return matrix;

}


/* function to take the values of the matrix */
void matrixvalue(int** matrix, int rows, int col)
{
	for (int i = 0;i < rows;i++)
	{
		for (int j = 0;j < col;j++)
		{
			cout << "Enter the value for ROW : " << i + 1 << " and  colum: " << j + 1 << " : ";
			cin >> matrix[i][j];
		}
	}

}

int main()
{
	/* Matrxi declararion */
	int** matrixone = 0;
	int** matrixtwo = 0;
	int** sumofmatrix = 0;
	int** subofmatrix = 0;
	int** multip = 0;

	int r1 = 0, r2 = 0, c1 = 0, c2 = 0;
	int op = -1;

	do
	{
		cout << "Press 0 to exit:\n";
		cout << "Press 1 to Enter data :\n";
		cout << "Press 2 to enter data from file:\n";

		cin >> op;
		if (op == 0)
		{
			exit(0);
		}
		else
			if (op == 1)
			{
				/* Taking the rows and colums of matrices */
				cout << "Enter the numbers of rows for matrix one:\n";
				cin >> r1;
				cout << "Enter the numbers of colum for matrix one:\n";
				cin >> c1;
				cout << "Enter the numbers of rows for matrix TWO:\n";
				cin >> r2;
				cout << "Enter the numbers of colums for matrix TWO:\n";
				cin >> c2;
				if (r1 > 0 && r2 > 0 && c1 > 0 && c2 > 0)
				{
					// Declaring matrixes dynamically
				// matrix One
					matrixone = new int* [r1];
					for (int i = 0;i < r1;i++)
					{
						matrixone[i] = new int[c1];
					}
					cout << "Enter the values for matrix one:\n ";

					// Taking values of matrix One
					matrixvalue(matrixone, r1, c1);
					cout << endl;

					// Matrix Two

					matrixtwo = new int* [r2];
					for (int i = 0;i < r2;i++)
					{
						matrixtwo[i] = new int[c2];
					}

					//  Taking values of matrix Two
					cout << endl;
					cout << "Enter the values for matrix two:\n ";
					matrixvalue(matrixtwo, r2, c2);
					cout << endl;

					system("cls");
				}
				else {
					cout << "\nNumber of rows and colums can not be negaive \n";
					system("cls");
				}
			}
			else
				if (op == 2)
				{//   reading data from file //
					cout << endl;
					cout << "\nRead matrix one data from file:\n";
					matrixone = readfromfile(matrixone, r1, c1);
					cout << endl;
					cout << "\nRead matrix two data from file:\n";
					matrixtwo = readfromfile(matrixtwo, r2, c2);
					cout << endl;
				}
				else
				{
					cout << "invalid input:\n";
					system("cls");
				}

		sumofmatrix = new int* [r1];
		for (int i = 0;i < r1;i++)
		{
			sumofmatrix[i] = new int[c1];
		}

		subofmatrix = new int* [r1];
		for (int i = 0;i < r1;i++)
		{
			subofmatrix[i] = new int[c1];
		}

		multip = new int* [r1];
		for (int i = 0;i < r1;i++)
		{
			multip[i] = new int[c1];
		}



		int ch = 0;

		cout << "Press the number against the operation to perform that operation on matrix" << endl;
		do
		{
			cout << "0. Exit" << endl;
			cout << "1. Display the values of matrices" << endl;
			cout << "2. Sum of all values of matrix: " << endl;
			cout << "3. Product of all values of matrix:" << endl;
			cout << "4. Row wise average of matrix:" << endl;
			cout << "5. Column wise average of matrix:" << endl;
			cout << "6. Average of Whole matrix:" << endl;
			cout << "7. Row wise sorting of matrix:" << endl;
			cout << "8. Column wise sorting of matrix:" << endl;
			cout << "9. Scalar Additin of  matrix:" << endl;
			cout << "10. Additin of two matrices:" << endl;
			cout << "11. Scalar subtarction of  matrix: " << endl;
			cout << "12. Subtraction of two matrices:" << endl;
			cout << "13. scalar multiplication of  matrices:" << endl;
			cout << "14.  multiplication of two matrices:: " << endl;
			cout << "15.  Scalar matrix division:  " << endl;
			cout << "16. Transpose of matrix" << endl;
			cout << "17. determinant  of matrix" << endl;
			cout << "18. inverse of matrix" << endl;
			cout << "19. Clear screen" << endl;

			cin >> ch;
			if (ch == 2)
			{
				/* Calculating the sum of all the values */
				cout << "\nTHe sum of all values of matrix one is :  ";
				sumofall(matrixone, r1, c1);
				cout << endl;
				cout << "\nTHe sum of all values of matrix TWO is: ";
				sumofall(matrixtwo, r2, c2);
				cout << endl;
			}
			else
				if (ch == 3)
				{
					/* Calculating the product of all the values */
					cout << "\nTHe product of all values of matrix one is: ";
					productofall(matrixone, r1, c1);
					cout << endl;
					cout << "\nTHe product of all values of matrix TWO is : ";
					productofall(matrixtwo, r2, c2);
					cout << endl;
				}
				else
					if (ch == 4)
					{
						/* Calculating the row wise averge */
						cout << "\nRow wise average of matrix one are :\n";
						rowavg(matrixone, r1, c1);
						cout << "\nRow wise average of matrix two are :\n";
						rowavg(matrixtwo, r2, c2);
						cout << endl;
					}
					else
						if (ch == 5)
						{
							/* Calculating the column wise averge */
							cout << "\nColumn wise average of matrix one are :\n";
							colavg(matrixone, r1, c1);
							cout << "\nColumn wise average of matrix two are :\n";
							colavg(matrixtwo, r2, c2);
							cout << endl;
						}
						else
							if (ch == 6)
							{
								/* Calculating the  averge of matrix */
								cout << "\nAverage of whole matrix one is : ";
								avgofmatrix(matrixone, r1, c1);
								cout << endl;
								cout << "\nAverage of whole matrix two  is: ";
								avgofmatrix(matrixtwo, r2, c2);
								cout << endl;
							}
							else
								if (ch == 7)
								{
									/*row wise sorting of the matrix */
									cout << "\nBefore row wise sorting of matrix one : \n";
									displaymatrix(matrixone, r1, c1);
									cout << endl;
									cout << "\nBefore row wise sorting of matrix two : \n";
									displaymatrix(matrixtwo, r2, c2);
									cout << endl;
									cout << endl;
									cout << "\nAfter row wise sorting of matrix one : \n";
									rowsort(matrixone, r1, c1);
									cout << endl;
									cout << "\nAfter row wise sorting of matrix two : \n";
									rowsort(matrixtwo, r2, c2);
									cout << endl;
								}
								else
									if (ch == 8)
									{
										/*column wise sorting of the matrix */
										cout << "\nBefore column wise sorting of matrix one : \n";
										displaymatrix(matrixone, r1, c1);
										cout << endl;
										cout << "\nBefore column wise sorting of matrix two :\n ";
										displaymatrix(matrixtwo, r2, c2);
										cout << endl;
										cout << endl;
										cout << "\nAfter column wise sorting of matrix one : \n";
										colsort(matrixone, r1, c1);
										cout << endl;
										cout << "\nAfter column wise sorting of matrix two :\n ";
										colsort(matrixtwo, r2, c2);
										cout << endl;
									}
									else
										if (ch == 9)
										{
											/* Calculating the scalar additon of matrix  */
											cout << "\nBefore scalar additin of matrix one is :" << endl;
											displaymatrix(matrixone, r1, c1);
											cout << endl;
											cout << "\nAfter scalar additin of matrix one is :" << endl;
											scalaraddition(matrixone, r1, c1);
											cout << endl;

											cout << "\nBefore scalar additin of matrix two is :" << endl;
											displaymatrix(matrixtwo, r2, c2);
											cout << endl;
											cout << "\nAfter scalar additin of matrix two is :" << endl;
											scalaraddition(matrixtwo, r2, c2);
											cout << endl;
										}
										else
											if (ch == 10)
											{
												/* Calculating the  additon 2 of matrix  */
												if ((r1 == r2) || (c1 == c2))
												{
													cout << endl;
													additionof2(matrixone, matrixtwo, r1, c1, sumofmatrix);
													cout << endl;
												}
											}
											else
												if (ch == 11)
												{
													/* Calculating the scalar subtraction of matrix  */
													cout << "\nBefore scalar subtraction of matrix one is :" << endl;
													displaymatrix(matrixone, r1, c1);
													cout << endl;
													cout << "\nAfter scalar subtraction of matrix one is :" << endl;
													scalarsubtraction(matrixone, r1, c1);
													cout << endl;

													cout << "\nBefore scalar subtraction of matrix two is :" << endl;
													displaymatrix(matrixtwo, r2, c2);
													cout << endl;
													cout << "\nAfter scalar subtraction of matrix two is :" << endl;
													scalarsubtraction(matrixtwo, r2, c2);
													cout << endl;
												}
												else
													if (ch == 12)
													{
														/* Calculating the sutraction 2 matrix  */
														if ((r1 == r2) || (c1 == c2))
														{
															cout << endl;
															subtractionof2(matrixone, matrixtwo, r1, c1, subofmatrix);
															cout << endl;
														}
													}
													else
														if (ch == 13)
														{
															/* Calculating the scalar multiplicaton of matrix  */
															cout << "\nBefore scalar multiplication of matrix one is :" << endl;
															displaymatrix(matrixone, r1, c1);
															cout << endl;
															cout << "\nAfter scalar multiplication of matrix one is :" << endl;
															scalarmulti(matrixone, r1, c1);
															cout << endl;

															cout << "\nBefore scalar multiplication of matrix two is :" << endl;
															displaymatrix(matrixtwo, r2, c2);
															cout << endl;
															cout << "\nAfter scalar multiplication of matrix two is :" << endl;
															scalarmulti(matrixtwo, r2, c2);
															cout << endl;

														}
														else
															if (ch == 14)
															{
																/* Calculating the multiplication of 2  matrix  */
																if ((r1 == r2) || (c1 == c2))
																{
																	cout << endl;
																	multiplicationof2(matrixone, matrixtwo, r1, c1, multip);
																	cout << endl;
																}
															}
															else
																if (ch == 15)
																{
																	/* Calculating the scalar division of matrix  */
																	cout << "\nBefore scalar division of matrix one is :" << endl;
																	displaymatrix(matrixone, r1, c1);
																	cout << endl;
																	cout << "\nAfter scalar division of matrix one is :" << endl;
																	scalardivision(matrixone, r1, c1);
																	cout << endl;

																	cout << "\nBefore scalar division of matrix two is :" << endl;
																	displaymatrix(matrixtwo, r2, c2);
																	cout << endl;
																	cout << "\nAfter scalar division of matrix two is :" << endl;
																	scalardivision(matrixtwo, r2, c2);
																	cout << endl;
																}
																else
																	if (ch == 16)
																	{
																		/* Calculating the transpose of matrix  */
																		cout << "\nBefore transpose of matrix one is :" << endl;
																		displaymatrix(matrixone, r1, c1);
																		cout << "\nAfter transpose of matrix one:\n";
																		transpose(matrixone, r1, c1);
																		cout << endl;
																		cout << "\nBefore transpose of matrix two is :" << endl;
																		displaymatrix(matrixtwo, r2, c2);
																		cout << "\nAfter transpose of matrix two:\n";
																		transpose(matrixtwo, r2, c2);
																		cout << endl;
																	}
																	else
																		if (ch == 17)
																		{
																			/* Calculating the determinant of matrix  */
																			cout << "\ndeterminant of matrix one:";
																			cout << detmatrix(matrixone, r1, c1);
																			cout << endl;
																			cout << "\ndeterminant of matrix two:";
																			cout << detmatrix(matrixtwo, r2, c2);
																			cout << endl << endl;;
																		}
																		else
																			if (ch == 18)
																			{
																				cout << "\nInverse of matrix one is: \n";
																				inversematrix(matrixone, r1, c1);
																				cout << endl;
																				cout << "\nInverse of matrix two is: \n";
																				inversematrix(matrixtwo, r2, c2);
																				cout << endl;
																			}
																			else
																				if (ch == 1)
																				{
																					/* displaying of matrix  */
																					cout << "\nThe values of matrix one are: \n";
																					displaymatrix(matrixone, r1, c1);
																					cout << endl;
																					cout << "\nThe values of matrix two are: \n";
																					displaymatrix(matrixtwo, r2, c2);
																					cout << endl;
																				}
																				else
																					if (ch == 19)
																					{
																						/* for screne clearing */
																						system("cls");
																					}

		} while (ch != 0);// for inner while condition
	} while (op != 0);// for outer while condition

	system("pause");
	return 0;
}