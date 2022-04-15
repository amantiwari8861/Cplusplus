#include <iostream>

using namespace std;

int main() {
//   char filename[] = "C:/Users/Aman_Tiwari/Desktop/1.txt";
	
  // deletes the file if it exists
  int result = remove("C:/Users/Aman_Tiwari/Desktop/1.txt");

  // check if file has been deleted successfully
  if (result != 0) {
    // print error message
    cerr << "File deletion failed";
  }
  else {
    cout << "File deleted successfully";
  }
	
  return 0;
}