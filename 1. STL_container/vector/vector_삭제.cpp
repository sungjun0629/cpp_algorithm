// // 벡터 인스턴스 사이에 있는 요소를 어떻게 제거하는지 살펴보자.
// // 벡터에서 특정 요소가 사라져 다른 요소 사이에 빈값이 위치하게 될 경우 원래 자리의 
// // 오른쪽에 위치했던 모든 요소는 왼쪽으로 하나씩 이동한다. 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     vector<int> v {1,2,3,2,5,2,6,2,4,8} ;

//     // 다음 단계는 해당 요소를 제거하는 과정이다. 
//     // 두 개 이상의 요소를 제거한다.
//     const auto new_end(remove(begin(v), end(v), 2));
//     // new_end 반복자가 가리키는 요소는 범위를 벗어난 첫 번째 요소이다.
    
//     // 2를 지웠지만, 벡터의 크기는 여전히 같다.
//     // 다음 줄은 2를 지우고 벡터를 더 작게 만든다. 
//     v.erase(new_end, v.end());
//     // v.erase(remove(v.begin(), v.end(), 2), v.end());

//      for(auto i : v)
//     {
//         cout<< i << ",";
//     }

//     cout<<endl;

//     // 특정 값 대신에 분류된 모든 요소를 제거한다. 
//     // 이 작업을 위해선 프레디케이트 함수를 먼저 정의한다.
//     // 홀수면 true를 반환하고, 짝수면 false를 반환한다.
//     const auto odd([](int i){return i % 2 != 0;}); 
//     // true 인 것들을 지운다.
//     v.erase(remove_if(v.begin(), v.end(), odd), v.end());

//     // 벡터의 크기를 실제 현재 크기로 줄인다. 
//     v.shrink_to_fit();

//     for(auto i : v)
//     {
//         cout<< i << ",";
//     }

//     cout<<endl;
// }

// /*
// 프레디케이트 함수를 정의하고 std::remove_if 함수를 사용했다. 이 방법이 유용한 이유는
// 제거 함수가 어떤 반복자를 반환하든 벡터의 삭제 함수 내에서 사용할 때 매우 안전하기 때문이다. 
// 설령 홀수 요소가 발견되지 않았더라도 std::remove_if 함수는 아무것도 하지 않고 end 반복자를 반환할 것이다.
// v.erase(end,end); 와 같은 호출도 아무것도 하지 않으므로 전혀 해가 없다.
// */