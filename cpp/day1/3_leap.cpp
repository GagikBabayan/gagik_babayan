#include <iostream>

using namespace std;

int main () {

int num;
int b=0;

cout << "Input Year ";
cin  >>  num ;




while (!((num % 4 == 0) &&(num % 100 != 0)) ||  ((num % 100 == 0) && (num % 400 != 0))) {

   num++;
}

while (b < 20) {
      cout << num << endl;
      num+=4;
      b++;
}
 




return(0);
}
