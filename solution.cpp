#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
double Round(double n)
{
	n*=100;
	n=round(n)/100;
	return n;
}
class EllysTicketPrices{
	public:
	double getPrice(int N, vector <int> C, int target)
	{
		vector<double> c;
		for(auto i=0;i<C.size();++i)
		{
			c.push_back(double(double(C[i]+100)/100));
		}
		c.insert(c.begin(),1);
		double sum=0;
		for(auto i=1;i<c.size();++i)
		{
			c[i]*=c[i-1];
		}
		for(auto i=0;i<c.size();++i)
			sum+=c[i];
		double ret;
		ret=double((double(target*N))/sum);
		return Round(ret);
	}
};