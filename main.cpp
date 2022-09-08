#include <iostream>
#include <string>

using namespace std;

char getNext(char next){
  if (next == 'a')
    return 'b';
  if (next == 'b')
    return 'c';
  if (next == 'c')
    return 'a';
}

int getInsertions(char current, char next){
  int count = 0;
  while (next != current){
    count++;
    cout << next;
    next = getNext(next);

  }
  return count;
}

int main() {
    string S;
    cin >> S;
  int count = 0;
  char next = 'a';

  for (int i=0; i<S.length(); i++){
    char current = S.at(i);
    count += getInsertions(current, next);
    next = getNext(current);
  }
    cout << count << endl;
  return count;
}
