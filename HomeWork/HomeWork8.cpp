#include <iostream>

using namespace std;

//Task 1
//int main() {
//    int n;
//    cout << "Enter number: ";
//    cin >> n;
//
//    const int ROWS = 3;
//    const int COLS = 3;
//    int array[ROWS][COLS];
//
//    int num = n;
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            array[i][j] = num;
//            num *= 2;
//        }
//        num = array[i][0] * 2;
//    }
//
//    cout << "Array created:" << endl;
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

// Task 2	
//int main() {
//    int n;
//    cout << "Enter number: ";
//    cin >> n;
//
//    const int ROWS = 3;
//    const int COLS = 3;
//    int array[ROWS][COLS]; 
//
//    int num = n;
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            array[i][j] = num;
//            num++;
//        }
//        num = array[i][0] + 1;
//    }
//
//    cout << "Array created:" << endl;
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

// Task 3

//const int ROWS = 2;
//const int COLS = 6;
//
//void printArray(int array[ROWS][COLS]) {
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void shiftRight(int array[ROWS][COLS], int shift) {
//    for (int i = 0; i < ROWS; ++i) {
//        for (int s = 0; s < shift; ++s) {
//            int temp = array[i][COLS - 1];
//            for (int j = COLS - 1; j > 0; --j) {
//                array[i][j] = array[i][j - 1];
//            }
//            array[i][0] = temp;
//        }
//    }
//}
//
//void shiftLeft(int array[ROWS][COLS], int shift) {
//    for (int i = 0; i < ROWS; ++i) {
//        for (int s = 0; s < shift; ++s) {
//            int temp = array[i][0];
//            for (int j = 0; j < COLS - 1; ++j) {
//                array[i][j] = array[i][j + 1];
//            }
//            array[i][COLS - 1] = temp;
//        }
//    }
//}
//
//void shiftUp(int array[ROWS][COLS], int shift) {
//    for (int s = 0; s < shift; ++s) {
//        int temp[COLS];
//        for (int j = 0; j < COLS; ++j) {
//            temp[j] = array[ROWS - 1][j];
//        }
//        for (int i = ROWS - 1; i > 0; --i) {
//            for (int j = 0; j < COLS; ++j) {
//                array[i][j] = array[i - 1][j];
//            }
//        }
//        for (int j = 0; j < COLS; ++j) {
//            array[0][j] = temp[j];
//        }
//    }
//}
//
//void shiftDown(int array[ROWS][COLS], int shift) {
//    for (int s = 0; s < shift; ++s) {
//        int temp[COLS];
//        for (int j = 0; j < COLS; ++j) {
//            temp[j] = array[ROWS - 1][j];
//        }
//        for (int i = ROWS - 1; i > 0; --i) {
//            for (int j = 0; j < COLS; ++j) {
//                array[i][j] = array[i - 1][j];
//            }
//        }
//        for (int j = 0; j < COLS; ++j) {
//            array[0][j] = temp[j];
//        }
//    }
//}
//
//int main() {
//    int array[ROWS][COLS];
//
//    srand(time(0));
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            array[i][j] = rand() % 10;
//        }
//    }
//
//    cout << "Initial array:" << endl;
//    printArray(array);
//
//    int shift;
//    cout << "Enter the number of shifts:";
//    cin >> shift;
//
//    char direction;
//    cout << "Select a shift direction (left - 'l', right - 'r', up - 'u', down - 'd'): ";
//    cin >> direction;
//
//    switch (direction) {
//    case 'r':
//        shiftRight(array, shift);
//        break;
//    case 'l':
//        shiftLeft(array, shift);
//        break;
//    case 'u':
//        shiftUp(array, shift);
//        break;
//    case 'd':
//        shiftDown(array, shift);
//        break;
//    default:
//        cout << "Wrong shift direction!" << endl;
//        return 1;
//    }
//
//    cout << "Result: " << endl;
//    printArray(array);
//}