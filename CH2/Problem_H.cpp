#include<iostream>
using namespace std;

string str; char m[5] = {'a', 'e', 'o', 'i', 'u'};
bool check_aei = false; char prev_char=' ';

bool check_m(char str) {

	for (int j = 0; j < 5; j++)
	{
		// 같은 조건이 있으면 check_aei = true로 변경
		if (str == m[j])
		{
			check_aei = true;
			return true;
		}
	}

	return false;
}


int main()
{
	cin >> str;
	int count = 1;
	string answer = "";
	while (str != "end")
	{
		// 입력받은 string을 순회한다. 
		for (int i = 0; i < str.size(); i++)
		{
			if(i>0) prev_char = str[i-1];
			// 1번 조건이 맞는지 확인한다.
			if (!check_aei)
			{
				// a,e,o,i,u 와 비교를 한다.
				check_m(str[i]);
			}


			// 3번 조건이 맞는지 확인한다. 
			if (prev_char!=' ' && str[i] == prev_char && str[i] != 'e' && str[i] != 'o')
			{
				//cout << "겹치는 알파벳 발견" << str[i] << '\n';
				check_aei = false;
				break;
			}else if (prev_char!=' ')
			{// 2번 조건이 맞는지 확인한다.
				if (check_m(str[i]) == check_m(prev_char))
				{
					count++;
					//cout << str[i] << "이므로" << count << '\n';
					if(count>=3) break;
				}
				else {
					count = 1;
				}
			}

		}

		if (check_aei && count < 3)
		{
			answer = "<";
			answer += str;
			answer += "> is acceptable.";
		}
		else
		{
			answer = "<";
			answer += str;
			answer += "> is not acceptable.";
		}

		cout << answer<<'\n';
		// 초기화
		count = 1;
		check_aei = false;
		prev_char=' ';
		cin >> str;
	}
}

