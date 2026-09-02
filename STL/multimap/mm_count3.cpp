#include <iostream>
#include <map>
using namespace std;

int main(void){
    multimap <string, string> m = {{"Action","Avengers"},
     {"Action","Spider-Man"},
      {"Drama","Titanic"},
       {"Drama","Inception"}};
    string genre = "Action";
    cout << "there are total -> " << m.count(genre) << " movies of this " << genre << " genre." << endl;
    return 0;
}