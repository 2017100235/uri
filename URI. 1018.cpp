#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int N;

	cin >> N;
	cout << N <<endl;	
	cout << N/100 <<" nota(s) de R$ 100,00"<<endl;
	cout << (N-(100*(N/100)))/50 <<" nota(s) de R$ 50,00"<<endl;
	cout << (N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20 <<" nota(s) de R$ 20,00"<<endl;
	cout << (N-((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))/10<<" nota(s) de R$ 10,00"<<endl;
	cout << (N-((10*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))/10))+((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20)))))/5<<" nota(s) de R$ 5,00"<<endl;
	cout << (N-(((10*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))/10))+((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))+(5*((N-((10*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))/10))+((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20)))))/5))))/2	<< " nota(s) de R$ 2,00"<<endl;
	cout << (N-((((10*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))/10))+((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))+(5*((N-((10*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))/10))+((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20)))))/5)))+(2*((N-(((10*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))/10))+((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))+(5*((N-((10*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20))))/10))+((100*(N/100))+(50*((N-(100*(N/100)))/50))+(20*((N-((100*(N/100))+(50*((N-(100*(N/100)))/50))))/20)))))/5))))/2))))/1 <<" nota(s) de R$ 1,00"<<endl;
	return 0;
}