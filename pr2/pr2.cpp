#include <iostream>
using namespace std;
    
struct Computer {
    char brand[50];
    char model[50];
    double price;
};
class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int d, int m, int y) :
        day(d),
        month(m),
        year(y){}
    void PrintDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
    bool CheckDate() {
        if (day > 31||day<=0)
        {
            cout << "InCorrect day" << endl;
            return false;
        }
        else 
        {
            if (month > 12 || month <= 0)
            {
                cout << "InCorrect month" << endl;
                return false;
            }
            else 
            {
                if (year <= 0)
                {
                    cout << "InCorrect year" << endl;
                    return false;
                }
                else
                {
                    cout << "Correct date";
                    return true;
                }
            }
        }
    }
};

int main()
{
    //ЗАДАНИЕ 1


     /*const int SIZE = 7; 
     int arr[SIZE] = { 3, 5, 1, 9, 2, 8, 7 }; 
     cout << "Array" << endl;
     for (int i = 0; i < SIZE; ++i) {
         cout << arr[i] << " ";
     }
     cout << endl;
     int minIndex = 0, maxIndex = 0; 

   
     for (int i = 1; i < SIZE; ++i) {
         if (arr[i] < arr[minIndex]) {
             minIndex = i; 
         }
         if (arr[i] > arr[maxIndex]) {
             maxIndex = i; 
         }
     }

    
     int temp = arr[minIndex];
     arr[minIndex] = arr[maxIndex];
     arr[maxIndex] = temp;


     cout << "Edit array" << endl;
     for (int i = 0; i < SIZE; ++i) {
         cout << arr[i] << " ";
     }
     cout << endl;

     return 0;
*/

     //ЗАДАНИЕ 2


     /*const int SIZE = 3; 
     int matrix[SIZE][SIZE] = {
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}
     }; 


     cout << "Matrix" << endl;
     for (int i = 0; i < SIZE; ++i) {
         for (int j = 0; j < SIZE; ++j) {
             cout << matrix[i][j] << " ";
         }
         cout << endl;
     }


     for (int i = 0; i < SIZE; ++i) {
         int temp = matrix[i][i]; 
         matrix[i][i] = matrix[i][SIZE - 1 - i]; 
         matrix[i][SIZE - 1 - i] = temp; 
     }


     cout << "EditMatrix" <<endl;
     for (int i = 0; i < SIZE; ++i) {
         for (int j = 0; j < SIZE; ++j) {
             cout << matrix[i][j] << " ";
         }
         cout << endl;
     }

     return 0;*/

     //ЗАДАНИЕ 3
     const int SIZE = 3; 
     Computer computers[SIZE] = {
         {"Dell", "Obelisk 15", 500.0},
         {"Apple", "MacBook Air", 1000.0},
         {"HP", "512HD", 700.0}
     };
     for (int i = 0; i < SIZE - 1; ++i) {
         for (int j = 0; j < SIZE - 1 - i; ++j) {
             if (computers[j].price > computers[j + 1].price) {
                 
                 Computer temp = computers[j];
                 computers[j] = computers[j + 1];
                 computers[j + 1] = temp;
             }
         }
     }
 
    
     cout << "Computers sort of price:" << endl;
     for (int i = 0; i < SIZE; ++i) {
        cout << "Brand: " << computers[i].brand
             << ", Model: " << computers[i].model
             << ", Price: " << computers[i].price << endl;
     }
 
     return 0;
 


     //ЗАДАНИЕ  4
Date date1(29, 13, 2013);
date1.PrintDate();
date1.CheckDate();
Date date2(29, 12, 2013);
date2.PrintDate();
date2.CheckDate();

}

