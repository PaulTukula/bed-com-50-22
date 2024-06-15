#include <iostream>
using namespace std;

int main(){
    int numRow;
    int numCol;
    
    do{
       cout << "Enter the number of rows between 0 and 4 \n";
       cin >> numRow;
       cout << "Enter the number of columns between 0 and 4\n";
       cin >> numCol;

       if((numRow < 0 || numCol < 0 )|| (numRow > 3 || numCol > 3))
         cout << "Please the dimensions should be greater than 0 and less than 4\n\n";

    }while((numRow < 0 || numCol < 0 )|| (numRow > 3 || numCol > 3));
    
     double** arrayOfDoubles = new double*[numRow];

        for (int i = 0; i<numRow; i++)
            arrayOfDoubles[i] = new double[numCol];
        
        cout << "Enter the values of the array\n";

        for(int j = 0; j < numRow; j++ )
           for(int i = 0; i < numCol; i++ )
              cin >> arrayOfDoubles[i][j];

        cout  << "\n";

        for(int j = 0; j < numRow; j++ ){
           for(int i = 0; i < numCol; i++ )
              cout << arrayOfDoubles[i][j] << " "; 
              cout << "\n";
        }

     return 0;


}