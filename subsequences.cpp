#include<bits/stdc++.h>
using namespace std;
//Without backtracking 
/*
void seq(string ip,string op){
	if(ip.size()==0)
	{
		cout<<op<<endl;
		return ;
	}
	string op1=op;
	string op2=op;

	op1.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	seq(ip,op1);
	seq(ip,op2);
	return ;

}
int main()
{
	string str;
	cin>>str;
	string ip=str;
	string op="";
	 seq(ip,op);
	cout<<op;

}*/
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
std::vector<int> ans;
	seq(0,arr,ans,n);

}