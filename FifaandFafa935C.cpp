#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define for_fwd(i,a,b) for(long long i=a;i<b;i++)
#define for_back(i,a,b) for(long long i=a;i>=b;i--)

#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())

ll R,x1,y1,x2,y2;
double xap,yap,r;

void findCentre()
{
	if (x2==x1)
		double m=9999999999999999999999;
	else
	{
		double m=(y2-y1)/(x2-x1)*(1.0);//m is the slope
	}
	double a=pow(m,2)+1;
	double b=2*(y2-m*x2-y1)*m-2*x1;
	double c=pow((y2-m*x2-y1),2)+pow(x1,2);
	double xroot1=(-1.0*b+sqrt(pow(b,2)-4*a*c*1.0))/(2*a)*1.0;//quadratic roots of a,b
	double xroot2=(-1.0*b-sqrt(pow(b,2)-4*a*c*1.0))/(2*a)*1.0;
	double yroot1=y2-m*(x2-xroot1);
	double yroot2=y2-m*(x2-xroot2);
	if (distance(x2,y2,xroot1,yroot1)>distance(x2,y2,xroot2,yroot2)){
		xap=(xroot1+x2)/2.0
		yap=(yroot1+y2)/2.0
		r=distance(x2,y2,xroot1,yroot1)/2.0;
	}
	else
	{
		xap=(xroot2+x2)/2.0
		yap=(yroot2+y2)/2.0
		r=distance(x2,y2,xroot2,yroot2)/2.0;
	}

}

double distance(ll a, ll b,double x,double y)
{
	return sqrt(pow((a-x),2)+pow((b-y),2));
}
int locateFafa()
{
	if ((pow((x2-x1),2)+pow((y2-y1),2)-pow(R,2))<0)
		return -1;
	else if ((pow((x2-x1),2)+pow((y2-y1),2)-pow(R,2))==0)
		return 0;
	else
		return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>R>>x1>>y1>>x2>>y2;
    if (locateFafa()){
    	xap=double(x1*1.0);
    	yap=double(y1*1.0);
    	r=R;
    	printf("%0.12lf %0.12lf %0.12lf\n",xap,yap,r);
    	return 0;
    }
    if (x1==x2 && y2==y1)
    {
    	xap=x1;
    	yap=y1+(double(R/2));
    	r=(double(R/2));
    	printf("%0.12lf %0.12lf %0.12lf\n",xap,yap,r);
    	return 0;
    }
    if (locateFafa()<0)
    {
    	findCentre();
    	printf("%0.12lf %0.12lf %0.12lf\n",xap,yap,r);
    	return 0;	
    }
}