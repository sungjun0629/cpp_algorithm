// //std::vector 에서 범위 검사를 사용한다.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     const size_t container_size {1000};
//     //벡터를 123 값으로 1000번 채운다.
//     vector<int> v (container_size, 123);

//     cout<<"Out of range element value: "
//         << v.at(container_size + 10) << endl; 

//     /*
//     try{
//         std::cout<<"Out of range element value: "
//                 << v[container_size + 10] << std::endl;
//     }catch(const std::out_of_range &e){
//         std::cout<<"Ooops, out of range access detected!: "
//                 << e.what() << std::endl;
//     }
//     */

// }

// // 이러한 예제는 at 함수를 기본 설정으로 해놓고 연습하면 좋다. 결과로 얻은 코드는 매우 
// // 느리긴 해도 버그가 없다는 것이 입증됐으므로, 반드시 높은 성능을 내야 하는 영역에 [] 
// // 연산자를 사용하면 된다.

// // at 호출을 try 코드로 둘러싼 다음 catch 코드에서 오류 처리를 정의해주면 된다.
