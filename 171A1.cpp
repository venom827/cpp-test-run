#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int counter = n-1;
    int matrix[100][100];
    int primary_diagnol_sum = 0;
    int secondary_diagnol_sum = 0;
    int middle_row = (n-1)/2;
    int middle_column = (n-1)/2;
    int middle_column_sum = 0;
    int middle_row_sum = 0;
    int good_element_sum;
    //matrix constructor
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int input;
            cin >> input;
            matrix[i][j] = input;
        }
    }
//Below are loops for each of the4 good matrix elements
//Notice I removed middle element from each and added it seperately bcz that keeps it consistent with the theme of q plus it's the common element
    for (int i = 0; i < n; i++){
        primary_diagnol_sum += matrix[i][i];
    }
    primary_diagnol_sum -= matrix[middle_row][middle_column];
    for (int i = 0; i < n; i++){
        secondary_diagnol_sum += matrix[i][counter];
        counter--;
    }
    secondary_diagnol_sum -= matrix[middle_row][middle_column];
    for (int i = 0; i < n; i++){
        middle_row_sum += matrix[middle_row][i];
    }
    middle_row_sum -= matrix[middle_row][middle_column];
    for (int i = 0; i < n; i++){
        middle_column_sum += matrix[i][middle_column];
    }
    middle_column_sum -= matrix[middle_row][middle_column];
    good_element_sum = primary_diagnol_sum + secondary_diagnol_sum + middle_row_sum + middle_column_sum + matrix[middle_row][middle_column];
    cout << good_element_sum;
    return 0;
}