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
cout << endl << "Even indices:  	     " << values[1] <<" "<< values[3] << " " << values[5] << " " << values[7] << " " << values[9]<<endl;

cout << "Even values:         ";
if (values[0]%2==0)
cout<< values[0]<<" ";
if (values[1] % 2 == 0)
cout << values[1] << " ";
if (values[2] % 2 == 0)
cout << values[2] << " ";
if (values[3] % 2 == 0)
cout << values[3] << " ";
if (values[4] % 2 == 0)
cout << values[4] << " ";
if (values[5] % 2 == 0)
cout << values[5] << " ";
if (values[6] % 2 == 0)
cout << values[6] << " ";
if (values[7] % 2 == 0)
cout << values[7] << " ";
if (values[8] % 2 == 0)
cout << values[8] << " ";
if (values[9] % 2 == 0)
cout << values[9] << " ";
}
