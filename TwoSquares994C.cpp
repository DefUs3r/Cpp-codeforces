#include <bits/stdc++.h>
using namespace std;
int sq1[8];
int sq2[8];
float ar(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return abs((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2;
}
bool fl(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float x, float y)
{
	float a=ar(x1,y1,x2,y2,x3,y3)+ar(x1,y1,x4,y4,x3,y3);
	float chk1= ar(x,y,x1,y1,x2,y2);
	float chk2= ar(x,y,x2,y2,x3,y3);
	float chk3= ar(x,y,x3,y3,x4,y4);
	float chk4= ar(x,y,x1,y1,x4,y4);
	return (a==chk1+chk2+chk3+chk4);
}
int main()
{
	for (int i=0; i<8; i++){cin >> sq1[i];}
	for (int i=0; i<8; i++){cin >> sq2[i];}
	bool flag=false;
	for (int i=0; i<8;i+=2)
	{
		flag=fl(sq1[0],sq1[1],sq1[2],sq1[3],sq1[4],sq1[5],sq1[6],sq1[7],sq2[i],sq2[i+1]);
		if (flag){cout << "YES" << endl; return 0;}
	}
	for (int i=0; i<8;i+=2)
	{
		flag=fl(sq2[0],sq2[1],sq2[2],sq2[3],sq2[4],sq2[5],sq2[6],sq2[7],sq1[i],sq1[i+1]);
		if (flag){cout << "YES" << endl; return 0;}
	}
	float X=(sq2[0]+sq2[2]+sq2[4]+sq2[6])/4,Y=(sq2[1]+sq2[3]+sq2[5]+sq2[7])/4;
	flag=fl(sq1[0],sq1[1],sq1[2],sq1[3],sq1[4],sq1[5],sq1[6],sq1[7],X,Y);
	if (flag){cout << "YES" << endl; return 0;}
	cout << "NO" << endl;
	return 0;
}