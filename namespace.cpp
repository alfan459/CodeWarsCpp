//Contoh dalam penggunaan using namespace std;
#include <iostream>
using namespace std;

for(int i = 0; i<=10; i++){
  cout<< i <<endl;
}
return 0;
}

/*
Arti using namespace std
menggunakan using namespace std berarti gunakan yang ada dalam namespace std seperti cin, cout, endl, vector, string, pair, map, queue, dequeue, dan lain lain yang merupakan fitur fitur di C++ standard library
*/

/*
Sebenarnya dalam best practice, menulis using namespace std tidak direkomendasikan. Karena tujuan utama dari using namespae sendiri adalah untuk menghindari penabrakan nama yang sama. Ketika ada nama yang sama, tambahkan std::
*/
//contoh bad practice
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> vektorBilangan = {1, 20, 3, 7, 6};
  int max = vektorBilagan[0];
  for (int b : vektorBilangan){
    max = max(max, b);
  }
  cout<< max <<endl;
  return 0;
}
//Program di atas akan error karena nama max sama, maka dari itu tambahkan std:: didepan max
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int hitungan()
{
    return 9+6;
}

int main(){
  vector<int> vektorBilangan = {1, 20, 3, 7, 6};
  int max = vektorBilangan[1];
  
  for (int b : vektorBilangan){
      max = std::max(max, b);
  }
  cout<< max <<endl;
  return 0;
}

//Best practicenya adalah
//Bentuk 1: selalu menulis std:: untuk menggunakan hal yang berada di standar template
#include <iostream>
int main(){
  for(int i = 0; i<=10; i++){
    std::cout<< i <<std::endl;
  }
  return 0;
}

//Bentuk penulisan 2 : menulis using std:: untuk sesuatu yang kita sering pakai
#include <iostream>

using std::cout;
using std::endl;

int main(){
  for(int i = 0; i<=10; i++){
    cout<< i <<endl;
  }
  return 0;
}

