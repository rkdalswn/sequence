#include <iostream>
#include <string>
/* while문을 사용해서 등차수열 출력하기*/

using namespace std;

int main()
{
	int num;
	int sum = 0;
	int i=0;
	cout << "1부터 100까지의 숫자 중 원하는 숫자를 입력하세요 : "<<endl;
	cin >> num;

	while (num <1 || num >100)
	{
		cout<< endl <<"다시 입력해주세요 : ";
		cin >> num;
	}

	while (i <= num)
	{
		sum += i;
		i++;
	}
	cout << endl << "(1+ ....+" << num << ") =" << sum << endl;

	return 0;
}
