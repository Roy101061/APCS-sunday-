#include <iostream>

using namespace std;

int main(){
	int num,a,b,c,d;
	string ans;
	cin>>num;
	for (int x=0;x<num;x++){
		cin>>a>>b>>c>>d;
		if (a==0&&b==1&&c==0&&d==1)
			ans=ans+"A";
		if (a==0&&b==1&&c==1&&d==1)
			ans=ans+"B";
		if (a==0&&b==0&&c==1&&d==0)
			ans=ans+"C";
		if (a==1&&b==1&&c==0&&d==1)
			ans=ans+"D";
		if (a==1&&b==0&&c==0&&d==0)
			ans=ans+"E";
		if (a==1&&b==1&&c==0&&d==0)
			ans=ans+"F";
		}
	cout<<ans;
	
	return 0;
}
