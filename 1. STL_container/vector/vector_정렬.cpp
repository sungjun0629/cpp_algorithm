// // 배열과 벡터는 적재된 객체를 스스로 정렬하지 않는다.
// // 자동으로 정렬시킬 수 있다.
// // 원하는 정렬 조건으로 요소를 추가하는 것 또한 매우 간단하고 유용하다.

// /*
// 무작위 단어를 넣고 정리한 다음, 또 다른 단어를 추가했을 때에도 설정해놓은 벡터의 단어 정렬을 유지하게 만든다.
// */

// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// #include<iterator>
// #include<cassert>

// using namespace std;

// // 깊은 복사를 위해 &가 붙음
// void insert_sorted(vector<string> &v, const string &word)
// {
//     // 삽입 위치를 정하는 과정은 STL 함수인 lower_bound() 로 처리한다. 
//     // 그러면 함수가 범위 내의 세 번째 파라미터보다 크거나 같은 첫 번째 요소를 찾아내 이를 가리키는 반복자를 반환한다. 
//     const auto insert_pos = lower_bound(v.begin(), v.end(), word);
//     v.insert(insert_pos, word);
// }

// int main()
// {
//     vector<string> v {"some", "random", "words", "without", "order", "aaa", "yyy"};

//     // assert 함수에 걸리면 버그 발생 위치, call stack 등 여러 정보를 알 수 있게된다.
//     // 작은 규모의 프로젝트가 아니라 큰 규모의 프로젝트에서는 이런 call stack, dump 가 남는게 정말 소중하기 때문에
//     // assert 함수도 잘 사용하게 되면, 상대적으로 적은 시간 안에 버그를 찾을 수 있습니다.
//     assert(false == is_sorted(v.begin(), v.end()));
//     // 정렬 시켜주는 함수 sort() 
//     sort(v.begin(), v.end());
//     assert(true==is_sorted(v.begin(), v.end()));
    
//     insert_sorted(v, "foobars");
    
//     for(auto i : v)
//     {
//         cout << i << "," ;
//     }
//     cout << endl;

//     return 0;
// }

// // 새로운 문자열을 추가할 때마다 정렬된 벡터에 배치해 벡터 내의 문자열 정렬을 보존한다. -> 전제 조건 : 해당 벡터가 이미 정렬되어 있다는 점이다.
// /*
// template <typename C, typename T>
// void insert_sorted(C &v, const T &item)
// {
//     const auto insert_pos = lower_bound(v.begin(), v.end(), item);
//     v.insert(insert_pos, item);
// }
// 일반화된 insert_sorted()
// 해당 알고리즘은 랜덤 액세스 컨테이너가 필요하다. -> std::list와 같은 것은 구현하지 못한다.
// */