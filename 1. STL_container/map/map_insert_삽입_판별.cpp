// /*
// std::map에서 특정 요소를 찾는 것은 O(log(n)) 시간이 소요된다. -> 검색 트리
// 좀 더 효율적으로 하려면 std::map 삽입 함수가 선택적으로 *삽입 판별 파라미터를 받게 한다. 
// 기본적으로 반복자인 삽입 판별은 삽입될 요소의 가까운 예측 위치를 가리킨다. -> O(1) 삽입 시간을 갖는다. 
// */

// #include<iostream>
// #include<map>
// #include<string>
// using namespace std;

// int main(){

//     std::map <string, size_t> m {{"b",1}, {"c",2}, {"d",3}};

//     //처음에는 판별이 없으므로 맵의 end 반복자를 가리키는 가장 첫 번째 삽입을 처리한다.
//     auto insert_it (std::end(m));

//     for(const auto &s : {"z", "y", "x", "w"})
//     {
//         insert_it = m.insert(insert_it, {s, 1});
//     }

//     m.insert(insert_it, {"a", 1});

//     for(const auto &[key, value] : m){
//         cout << key << " : " << value << endl;
//     }

//     return 0;
// }