/*
상근이는 수학시간에 딴 짓을 하다가 선생님께 걸렸다. 선생님은 상근이에게 이번 주말동안 반성하라며 엄청난 숙제를 내주었다.

선생님이 상근이에게 준 종이에는 숫자와 알파벳 소문자로 되어있는 글자가 N줄있다. 상근이는 여기서 숫자를 모두 찾은 뒤, 

이 숫자를 비내림차순으로 정리해야한다. 숫자의 앞에 0이 있는 경우에는 정리하면서 생략할 수 있다.

글자를 살펴보다가 숫자가 나오는 경우에는, 가능한 가장 큰 숫자를 찾아야 한다. 즉, 모든 숫자의 앞과 뒤에 문자가 있거나, 줄의 시작 또는 끝이어야 한다.

예를 들어, 01a2b3456cde478에서 숫자를 찾으면 1, 2, 3456, 478이다.

선생님이 준 종이의 내용이 주어졌을 때, 상근이의 숙제를 대신하는 프로그램을 작성하시오.

첫째 줄에 종이의 줄의 개수 N이 주어진다. (1 ≤ N ≤ 100)

다음 N개의 줄에는 각 줄의 내용이 주어진다. 각 줄은 최대 100글자이고, 항상 알파벳 소문자와 숫자로만 이루어져 있다.

*/

/*
1. 각 줄을 string으로 받는다.
2. 알파벳이 나오기 전까지의 숫자를 뽑아내 vector<string>에 넣어준다. 
    -> 100글자에 모두 숫자가 될수도 있으므로 크기에 대한 제한으로 int에 넣어줄 수 없다.
  2.1 string을 돌면서 알파벳이 나오기전까지 str += 을 해준다. 
    for(int i = 0 ; i<string.size(); i++)
    {  
        if(string[i]>= 'a' && string[i]<= 'z' && str.size())
        // str = "" 이면 size()는? 
        {
            // 001과 같은 숫자를 정리해서 넣어주고 vector에 넣어주는 함수
            go();
            continue; 
        }
        str += string[i];
    }
    2.2 알파벳이 나오면 str을 예쁘게 정리해주고 vector에 넣어준다. 
    2.3 마지막까지 알파벳이 안 나올 수도 있으므로 for문이 끝나고도 go()와 같은 함수를 받을 수 있도록 해준다. 
    2.4 go()는 다음과 같다.     
        void go(){
            while(true){
                if(ret.size() && ret.front() == '0') ret.erase(ret.begin());
                else break;
            }

            if(ret.size() == 0 ) ret = "0";
            v.push_back(ret);
            ret = "";
        }
3. vector<string>에 있는 오름차순으로 정렬을 해준다.  
  3.1 sort(vector.begin(), vector.end(), 조건);에 의해 정렬을 한다. 
  3.2 조건에 대한 함수는 다음과 같다. 
    bool cmp(string a, string b){
        if(a.size()==b.size()) return a<b;
        return a.size() < b.size();
    }
  3.3 cmp에서 string 간의 길이가 같으면 int형과 같이 대소 비교를 할 수 있게 된다. 
  3.4 그렇지 않다면 size가 큰 것이 큰 값이다. 
*/