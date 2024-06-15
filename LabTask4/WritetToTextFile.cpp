// writing on a text file
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ofstream myfile("example.text");

    if(myfile.is_open()){

        myfile << "This is a line. \n";
        myfile << "This is another line. \n";
        myfile.close();
    }
    else {
        cout << "Unable to opnen file";
    }

    return 0;
}
