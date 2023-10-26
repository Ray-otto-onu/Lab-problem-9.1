#include<iostream>
#include<ctime>
#include <cstdlib>

using namespace std;

int main() {
srand((unsigned)time(0));
int i=0;
int values[10];
values[0]= (rand() % 8999) + 999;
values[1] = (rand() % 8999) + 999;
values[2] = (rand() % 8999) + 999;
values[3] = (rand() % 8999) + 999;
values[4] = (rand() % 8999) + 999;
values[5] = (rand() % 8999) + 999;
values[6] = (rand() % 8999) + 999;
values[7] = (rand() % 8999) + 999;
values[8] = (rand() % 8999) + 999;
values[9] = (rand() % 8999) + 999;

cout << "The random integers: ";
while (i < 10) {
	cout << values[i] << " ";
	i++;
}
}
