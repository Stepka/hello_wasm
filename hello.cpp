#include <iostream>

using namespace std;

int main(void)
{
	#if __cplusplus==201402L
	std::cout << "C++14" << std::endl;
	#elif __cplusplus==201103L
	std::cout << "C++11" << std::endl;
	#else
	std::cout << "C++" << std::endl;
	#endif
		
	/*	
	int ourArray[5];

	for(int& i: ourArray)
	{
		cout<<”Next element is->”;
		cin>>i;
	}

	cout<<”Elements  in array are!”<<endl;
	for(int i: ourArray)  cout<<n<<endl;
	*/
	return 0;
}