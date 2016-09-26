#include <iostream>
#include <unistd.h>
using namespace std;

int main(){

int count = 0;

cout << "How many times shall we say Cameron?: " << endl;

cin >> count;

for (int i = 1; i <= count; i++){
	cout << "Cameron "<< endl;
	usleep(1000000);
}

return 0;

}
