#include <iostream>
#include <ctime>
using namespace std;

// Function for selection memory 
void selection(int**& arr, int ROWS, int COLS);

// Function for clean array from memory 
void clean_array(int**& arr, int ROWS, int COLS);

// Function for fiiling dinamic array
void filling(int**& arr, int ROWS, int COLS);

// Function for show dinamic array
void show(int**& arr, int ROWS, int COLS);

int main()
{
    srand(time(0));

    int ROWS = 5;
    int COLS = 5;
    int** arr = new int* [ROWS];

    selection(arr, ROWS, COLS);
    filling(arr, ROWS, COLS);
    show(arr, ROWS, COLS);
    delete[] arr;

}

// Function for selection memory 
void selection(int**& arr, int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        arr[i] = new int[COLS];
    }
}
// Function for clean array from memory 
void clean_array(int**& arr, int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        arr[i] = new int[COLS];
    }

    for (int j = 0; j < ROWS; j++)
    {
        delete[] arr[j];
    }
    delete[] arr;
}
// Function for fiiling dinamic array
void filling(int**& arr, int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[ROWS][COLS] = rand() % 20;
        }
        cout << "\n";
    }
}
// Function for show dinamic array
void show(int**& arr, int ROWS, int COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[ROWS][COLS] << "\t";
        }
        cout << "\n";
    }

}
