/*
JOI시는 남북방향이 H 킬로미터, 동서방향이 W 킬로미터인 직사각형 모양이다. 

JOI시는 가로와 세로의 길이가 1킬로미터인 H × W 개의 작은 구역들로 나뉘어 있다. 

북쪽으로부터 i 번째, 서쪽으로부터 j 번째에 있는 구역을 (i, j) 로 표시한다.

각 구역의 하늘에는 구름이 있을 수도, 없을 수도 있다. 모든 구름은 1분이 지날 때마다 1킬로미터씩 동쪽으로 이동한다. 

오늘은 날씨가 정말 좋기 때문에 JOI시의 외부에서 구름이 이동해 오는 경우는 없다.

지금 각 구역의 하늘에 구름이 있는지 없는지를 알고 있다. 

기상청에서 일하고 있는 여러분은 각 구역에 대해서 지금부터 몇 분뒤 처음으로 하늘에 구름이 오는지를 예측하는 일을 맡았다.

각 구역에 대해서 지금부터 몇 분뒤 처음으로 하늘에 구름이 오는지를 구하여라.

*/

#include <iostream>
using namespace std;


int H; int W; string cloud;
int timeWhenCloudCome[104];
int main()
{
	cin >> H >> W;
	int count = 0;
	for (int i = 0; i < H; i++)
	{
		// 구름에 대한 정보를 입력한다. 
		cin >> cloud; 

		for (int j = 0; j < cloud.size(); j++)
		// 구름에 대한 정보를 하나씩 읽는다. 
		{
			if (cloud[j] == 'c')
			{
				timeWhenCloudCome[j] = 0;
			}
			else {

				// 전에 있던 값이 -1이 아니라면 count++을 해서 넣어준다. 
				if(j!=0 && (timeWhenCloudCome[j-1]) != -1)
				{
					timeWhenCloudCome[j] = (timeWhenCloudCome[j-1]+1);
				}
				else {
					//그게 아니라면 -1을 넣어준다.
					timeWhenCloudCome[j] = -1;
				}
				
			}
		}

		// 구름이 올 시간을 출력 해준다.
		for (int j = 0; j < cloud.size(); j++)
		{
			cout << timeWhenCloudCome[j] << ' ';
		}

		cout << '\n';
	}

}