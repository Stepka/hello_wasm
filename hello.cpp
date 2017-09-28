#include <iostream>

using namespace std;

int main(void)
{
	bool cpp11 = false;
	#if __cplusplus==201402L
	std::cout << "C++14" << std::endl;
	#elif __cplusplus==201103L
	std::cout << "C++11" << std::endl;
	cpp11 = true;
	#else
	std::cout << "C++" << std::endl;
	#endif
		
	#if __cplusplus==201103L
	int ourArray[5];

	for(int& i: ourArray)
	{
		cout<< "Next element is->";
		cin>>i;
	}

	cout<<"Elements  in array are!"<<endl;
	for(int i: ourArray)  cout<<i<<endl;
	#endif
	return 0;
}

#ifdef __cplusplus
extern "C" {
#endif

void callStepa(int argc, char ** argv) {
  printf("Stepa Called\n");
}

#ifdef __cplusplus
}
#endif