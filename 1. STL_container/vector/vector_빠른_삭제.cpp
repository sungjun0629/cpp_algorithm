// /*
// std::vector 한 가운데에서 요소 제거는 O(n) 시간이 소요된다.
// 요소를 제거하고 난 결과로 생긴 공백 뒷부분의 모든 요소를 하나씩 왼쪽으로 옮겨서 채워 넣어야 하기 때문이다.
// -> 원래의 순서를 지키는 것이 중요하지 않은 경우 작업 과정을 최적화할 수 있다. 
// */

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// template <typename T>
// void quick_remove_at(std::vector<T> &v, std::size_t idx)
// {
//     // 가장 먼저 벡터의 가장 마지막 값을 받아 삭제하려는 요소에 덮어쓰게 한다. 
//     if(idx< v.size()){
//         v[idx] = std::move(v.back());
//         v.pop_back();
//     }
// }

// template <typename T>
// void quick_remove_at(std::vector<T> &v, typename std::vector<T>::iterator it)
// {
//     // 가장 먼저 벡터의 가장 마지막 값을 받아 삭제하려는 요소에 덮어쓰게 한다. 
//     if(it!= std::end(v)){
//         *it = std::move(v.back());
//         v.pop_back();
//     }
// }

// int main()
// {
//     std::vector<int> v{123, 456, 789, 100, 200};

//     quick_remove_at(v,2);
//     for(int i : v)
//     {
//         std::cout<<i<<",";
//     }
//     std::cout<<std::endl;

//     quick_remove_at(v, std::find(std::begin(v), std::end(v), 123));
//     for(int i : v)
//     {
//         std::cout<<i<<",";
//     }
//     std::cout<<std::endl;
    
// }

