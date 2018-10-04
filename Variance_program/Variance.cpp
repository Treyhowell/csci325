/* Name: Trey Howell
 * Date: 9/6/18
 * File: Variance.cpp
 * Description: this program takes in data from a file declares a dynamic array then gives the variance for the set of numbers
 */
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
double Variance(double *arr, int length);
int main(){
  double *arr; // this is the array pointer which will hold the values of data
               //from the file
  ifstream  Myin; // this is the ifstream that will allow for the file stream
  //to input data 
  int length; // the desired length of the numbers in the array 
  string filename; // the file name to open 
  cout << "enter the dimension of the array ";
  cin >> length;
  for(int i=0; i < length; i++){
    arr = new double[length];
  }
  cout << "enter file name to open" << endl;
  cin >> filename;
  Myin.open(filename.c_str());
  if(!Myin)
    cout << "error" << endl;
  else{
    int i = 0;					\
    Myin >> arr[i];
    while(Myin){
      i++;
      Myin >> arr[i];
    }
    for(int i=0; i < length; i++){
      cout << arr[i] << endl;
    }
    cout << Variance(arr, 8) << endl;
  }
  Myin.close();
  delete [] arr; 
}
  
double Variance(double *arr, int length){
  double total; // an int that will store the total of all the values in the array
  double avg; // this 
  double var = 0;;
  for(int i = 0; i < length; i++){
    total += arr[i];
    avg = total/ length;
  }
  for(int i = 0; i < length; i++){
    arr[i] = arr[i] - avg;
    var += arr[i] * arr[i];
  }
  return var/length;
}
