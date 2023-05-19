#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;

int main(){
  vector<int> *v = new vector<int>();
  v->size();
  int a = 15;
  if( a==15 ){
    v->push_back(5);
  }

  printf("中文\n\n");

  // https://stackoverflow.com/questions/29776849/why-cant-i-print-a-unicode-character-in-c-with-wchar-t
  wchar_t a = 0x0041;   /* A */
  printf("%lc\n\n", a);

  // https://www.ithome.com.tw/voice/135711
  char text[] = u8"林𪚥𨰻";
  printf("%s\n\n", text);

  return 0;
}