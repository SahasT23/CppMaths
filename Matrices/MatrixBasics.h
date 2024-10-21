#ifndef MATRIX2_H
#define MATRIX2_H

template <class T>
class Matrix2
{
  public:

  // Defining the appropriate constructors
  
  Matrix2();
  Matrix2(int nRows, int nCols);
  Matrix2(int nRows, int nCols, const T *inputData);
  Matrix2(const Matrix2<T>& inputMatrix);

  // Destructor

  ~Matrix2();

  // Configuration Methods

  bool resize(int numRows, int numCols);

  // Element Access methods

  T GetElement(int row, int col);
  bool SetElement(int row, int col, T elementvalue)
  int GetNumRows();
  int GetColRows();

  // Overloading
  bool operator== (const Matrix2<T> rhs);

  // Overloading the other operators (+, -, * operations)

  template <class U> friend Matrix2<U> operator+ (const Matrix2<U>& lhs, const Matrix2<U>& rhs);
  template <class U> friend Matrix2<U> operator+ (const U& lhs, const Matrix2<U>& rhs);
  template <class U> friend Matrix2<U> operator+ (const Matrix2<U>& lhs, const U& rhs);

  template <class U> friend Matrix2<U> operator+ (const Matrix2<U>& lhs, const Matrix2<U>& rhs);
  template <class U> friend Matrix2<U> operator+ (const U& lhs, const Matrix2<U>& rhs);
  template <class U> friend Matrix2<U> operator+ (const Matrix2<U>& lhs, const U& rhs);

  template <class U> friend Matrix2<U> operator+ (const Matrix2<U>& lhs, const Matrix2<U>& rhs);
  template <class U> friend Matrix2<U> operator+ (const U& lhs, const Matrix2<U>& rhs);
  template <class U> friend Matrix2<U> operator+ (const Matrix2<U>& lhs, const U& rhs);

  private:
    int SubTwoInd(int row, int col);

  private:
    T *m_matrixData;
    int m_nRows, m_nCols, m_nElements;

// Default Constructor

template <class T>
Matrix2<T>::Matrix2()
{
  m_nRows = 1;
  m_nCols = 1;
  m_nElements = 1;
  m_matrixData = new T[m_newElements];
  m_matrixData[0] = 0.0;
}

// construct empty matrix (all empty elements)
template <class T>
Matrix2<T>::Matrix(int nRows, int nCols)
{
  m_nRows = nRows;
  m_nCols = nCols;
  m_nElements = m_nRows * m_nCols;
  n_matrixData = new T[m_nElements];
  for (int i=0; i<m_nElements; i++)
    m_matrixData[i] = 0.0;
}


};



// need to add more code, still doing research