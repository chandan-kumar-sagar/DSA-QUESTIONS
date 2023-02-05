#include <iostream>
using namespace std;
int main() {
  cout << "hlo dosto..!!" << endl;

  //< ------half pyramid----->
  int n;
  cout << "enetr the value" << endl;
  cin >> n;

  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row + 1; col++) {
  //     cout<< "* ";
  //   }
  //   cout << endl;
  // }

  // <---------INVERTED-HALF-PYRAMID--------->
  // for(int row=0; row<n; row++){
  //   for(int col=0; col<n-row; col++){
  //     cout<<"*  ";
  //   }
  //   cout<<endl;
  // }

  // <---------NUMERIC-HALF-PYRAMID----->
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row + 1; col++) {

  //     cout << col+1;
  //   }
  //   cout << endl;
  // }

  // <--------INVERTED-NUMERIC-PYRAMID------->
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n - row; col++) {
  //     cout << n - col;
  //   }
  //   cout << endl;
  // }

  // <---------FULL-PYRAMID-------->

  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "*  ";
  //   }
  //   cout << endl;
  // }

  // // <----------------INVERTED-FULL-PYRAMID----------->
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < n - row; col++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // <----------------SOLID-DIAMAND----------->

  //<--- full-pyramid + inverted-full-pyramid = solid=diamand---->
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < n - row; col++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // <------hollow-solid-diamand------->
  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n - row - 1; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < 2 * row + 1; col++) {
  //     if (col == 0 || col == 2 * row) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row; col++) {
  //     cout << " ";
  //   }
  //   for (int col = 0; col < 2 * n - 2 * row - 1; col++) {
  //     if (col == 0 || col == 2 * n - 2 * row - 2) {
  //       cout << "*";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  // <------FLIPPED-SOLID-DIAMEND------->
  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n - row; col++) {
      cout << "* ";
    }

    for (int col = 0; col < 2 * row + 1; col++) {
      cout << " ";
    }

    for (int col = 0; col < n - row; col++) {
      cout << "* ";
    }
    cout << endl;
  }
}