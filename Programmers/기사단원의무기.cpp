/*
숫자나라 기사단의 각 기사에게는 1번부터 number까지 번호가 지정되어 있습니다. 기사들은 무기점에서 무기를 구매하려고 합니다.

각 기사는 자신의 기사 번호의 약수 개수에 해당하는 공격력을 가진 무기를 구매하려 합니다. 

단, 이웃나라와의 협약에 의해 공격력의 제한수치를 정하고, 제한수치보다 큰 공격력을 가진 무기를 구매해야 하는 기사는 협약기관에서 정한 공격력을 가지는 무기를 구매해야 합니다.

예를 들어, 15번으로 지정된 기사단원은 15의 약수가 1, 3, 5, 15로 4개 이므로, 공격력이 4인 무기를 구매합니다. 

만약, 이웃나라와의 협약으로 정해진 공격력의 제한수치가 3이고 제한수치를 초과한 기사가 사용할 무기의 공격력이 2라면, 

15번으로 지정된 기사단원은 무기점에서 공격력이 2인 무기를 구매합니다. 무기를 만들 때, 무기의 공격력 1당 1kg의 철이 필요합니다. 

그래서 무기점에서 무기를 모두 만들기 위해 필요한 철의 무게를 미리 계산하려 합니다.

기사단원의 수를 나타내는 정수 number와 이웃나라와 협약으로 정해진 공격력의 제한수치를 나타내는 정수 limit와 

제한수치를 초과한 기사가 사용할 무기의 공격력을 나타내는 정수 power가 주어졌을 때, 

무기점의 주인이 무기를 모두 만들기 위해 필요한 철의 무게를 return 하는 solution 함수를 완성하시오.

제한사항
1 ≤ number ≤ 100,000
2 ≤ limit ≤ 100
1 ≤ power ≤ limit

*/

/*
1. 1부터 number까지 약수의 개수를 구할 수 있어야 한다. 
  1.1 약수를 구하는 방법
    단순히 나누는 값 +1 을 실행하며 나머지가 0인 경우 약수로 따질 수 있다. -> 시간복잡도를 고려해야 하지만 약수를 구하는 방법이 이거 밖에 없음
  1.2 시간복잡도를 줄이는 방법
    1.2.1 약수는 거울처럼 제곱근을 기준으로 *2가 된다. 따라서 제곱근보다 적은 수에서 나눠주고 약수+2를 실행한다.
    1.2.2 만약 제곱근이 존재한다면 약수 +1을 하면 된다. 
*/

/*
#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

int number; vector<int> storage; int limit; int power; bool is_limited;
int main()
{ 
	cin >> number;
	cin >> limit;
	cin >> power;

	int answer = 0; 
	int count;
	for (int i = 1; i <= number; i++)
	{
		count = 0; is_limited = false;
		for (int j = 1; (j*j) <= i; j++)
		{
			// 제곱근이라면 중복된 값이므로 약수 + 1 
			// 그렇지 않다면 약수 + 2 
			if (j * j == i) count += 1;
			else if (i % j == 0) count += 2;

			if (count > limit)
			{
				answer += power; is_limited = true;
				break;
			}
		}

		if(!is_limited) answer += count;
		// storage.push_back(count);
		
	}

	// int index = 1;
	// for (int e : storage)
	// {
	// 	cout << index++ << "의 약수의 개수 : " << e << '\n';
	// }

	// cout << answer;
}
*/