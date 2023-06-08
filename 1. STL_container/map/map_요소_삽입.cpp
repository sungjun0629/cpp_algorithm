// /*
// 맵 : 키 - 값 
//   1. 해당 키가 아직 존재하지 않는 경우 새로운 키-값 한 쌍을 생성한다. 
//   2. 해당 키가 이미 존재하는 경우 *기존 요소를 수정해 사용한다. 

// C++ 17 에는 try-emplace 함수가 있어 *삽입에 따른 조건부 요소를 생성할 수 있다. 
// 전 세계 억만장자들의 목록을 받아 국가별로 부호가 몇 명이 있는지 알려주는 프로그램을 만들어보자.
// */

// #include <iostream>
// #include <map>
// #include <list>
// #include <functional>

// using namespace std;

// struct billionaire{
//     string name;
//     double dollars;
//     string country;
// };

// int main(){

//     list<billionaire> billionaires
//     {
//         {"Bill Gates", 86.0 , "USA"},
//         {"Warren Buffet", 75.6, "USA"},
//         {"Jeff Bezos", 72.8, "USA"},
//         {"Amancio Ortega", 71.3, "Spain"},
//         {"Mark Zuckerberg", 56.0, "USA"},
//         {"Wang Jianlin", 31.3, "China"},
//         {"Li Ka-shing", 31.2, "Hong Kong"}
        
//     };

//     /*
//     국가 문자열을 한 쌍으로 매핑한다. 
//     여기에는 목록의 각 국가에서 첫 번째 부자의 사본이 포함돼 있다. 이는 자동으로 해당 국가의 가장 부자인 사람을 나타낸다.
//     이 문자열 한 쌍에 들어있는 또 다른 변수는 카운터로, 그 국가 내에 다음으로 부자인 사람마다 값을 하나씩 증가시킨다.
//     */
//     map<string, pair<const billionaire, size_t>> m;

//     for(const auto &b : billionaires){
//         auto [iterator, success] = m.try_emplace(b.country, b, 1);
//         // 앞서 제공한 생성자 인수 b,1의 한 쌍이 생성됐고, 이를 맵에 삽입했다. 
//         // 그러나 국가 키가 이미 존재하는 경우
//         // 삽입에 실패하고, 해당 데이터가 생성되지 않는다.

//         if(!success){
//             iterator->second.second += 1;
//             //iterator->second : pair<const billionaire, size_t>
//             //iterator->second.second : size_t
//         }
//     }

//     for(const auto & [key,value] : m){
//         const auto &[b, count] = value;
//         cout<< b.country << " : " << count
//             << "billionaires.Richest is " 
//             << b.name << " with " << b.dollars << "$" << endl;
//     }
//     return 0;
// }

// /*
// std::pair<iterator, bool> try_emplace(const key_type& key, Args&&... args);
// 삽입되는 키는 파라미터 k이고, 이와 연관된 값은 파라미터 묶음인 arg로부터 생성된다. 
// *요소를 삽입하는데 성공했다면 해당 함수가 반복자를 반환한다. 이 반복자는 true로 설정된 불리언 값과 짝지어진 새로운 노드를
// 가리킨다. 
// *요소를 삽입하는데 실패했다면 반환되는 쌍에서 불리언 값이 false로 되며, *반복자는 충돌된 새로운 요소를 가리키게 될 것이다.
// */

// /*
// std::map 의 insert, emplace 함수와의 차이점은 키가 이미 존재하는 경우 try_emplace가 해당 키와 관련된 
// 객체를 생성하지 않는다는 점이다. 
// */