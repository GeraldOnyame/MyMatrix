#include "mymatrix.h"
#include <iostream>

using namespace std;

/**
 * @brief myMatrix::myMatrix
 * @param nRows Number of rows in the matrix
 * @param nCols Number of columns in the matrix
 *
 * Constructor
 * This function should allocate the memory required to store the data.
 */
myMatrix::myMatrix(int nRows, int nCols) : numRows(nRows), numCols(nCols){
    data = new int*[numRows];
    for(int i = 0; i < numRows; i++)
        data[i] = new int[numCols];
}

/**
 * @brief myMatrix::~myMatrix
 * Destructor
 * This function should free the memory allocated by the constructor.
 */
myMatrix::~myMatrix(){
    for(int i = 0; i < numRows; i++)
        delete [] data[i];
    delete[] data;
}

/**
 * @brief myMatrix::swap
 * @param other The matrix with which to swap data values
 *
 * Swaps the values of two matrices.
 *
 * Hint: Do this by manipulating pointers, NOT by copying the actual data!
 */
void myMatrix::swap(myMatrix &other){
int**temp = data;
int Rows = numRows;
int Cols = numCols;

data = other.data;
numRows = other.numRows;
numCols = other.numCols;

other.data = temp;
other.numRows = numRows;
other.numCols = numCols;

}

/**
 * @brief myMatrix::copyMatrix
 * @return Allocates and returns a pointer to a new matrix that has copies of the data in this one.
 *
 * Remember to copy the individual items, not just pointers!
*/
myMatrix* myMatrix::copyMatrix() const{

}

/**
 * @brief myMatrix::addMatrix
 * @param other Matrix with which to add this one
 * @return A new matrix that is the sum of this and other
 *
 * This function shouldn't change either of the original matrices!
 */
myMatrix* myMatrix::addMatrix(const myMatrix &other) const{

}

/**
 * @brief myMatrix::multMatrix
 * @param other
 * @return this*other
 *
 * Calculates the value of this matrix multiplied by other.
 * The data should be saved to a new matrix.
 *
 */
myMatrix* myMatrix::multMatrix(const myMatrix &other) const{

}

/**
 * @brief myMatrix::square
 * @return Returns the current matrix to the power of 2.
 *
 * Remember that you need to do matrix multiplication, not just square the elements.
 */
myMatrix* myMatrix::square() const{

}

/**
 * @brief myMatrix::print
 * Print the current matrix to out.
 * Use out, the same way that you'd use cout...eg: out << "Hello World!" << endl;
 *
 * Items should be separated by \t and there should be a \n at the end of each row.
 * Make sure that you don't output \t\n at the end of each row though!
 */
void myMatrix::print(std::ostream &out) const{

}

/**
 * @brief slowPower
 * @param n
 * @return Returns a new matrix of this one to the power of n.
 *
 * Implement this function by repeatedly multiplying a temp matrix by this one.
 */
myMatrix* myMatrix::slowPower(int n) const{

}

/**
 * @brief myMatrix::fastPower
 * @param n
 * @return Returns a new matrix of this one to the power of n.
 *
 * Implement this function using the algorithm from the lab 1 handout!
 */
myMatrix* myMatrix::fastPower(int n) const{

}
/**
 * @brief myMatrix::fillEye
 * Turn the matrix into an identity matrix.
 */
void myMatrix::fillEye(){
    for(int i = 0; i < numRows; i++)
        for(int j = 0; j < numCols; j++)
            data[i][j] = (i==j);
}

/**
 * @brief myMatrix::operator *=
 * @param other
 * @return Updates the current matrix so that this = this*other
 */
myMatrix& myMatrix::operator *=(const myMatrix &other){
    myMatrix* temp = this->multMatrix(other);

    this->swap(*temp);
    delete temp;

    return *this;
}
