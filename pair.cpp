#include <iostream>
#include <utility>

using namespace std;

int main(){

    pair<int,int> t1 = make_pair(10,13);
    pair<int,int> t2 = {10,12};//C++11 이상에서는 중괄호로 쉽게 생성 가능
    cout << t2.first << ' ' << t2.second << endl;//pair.first, pair.second 로 첫번째, 두번째 원소 호출
    if(t2 < t1){//두 원소의 합으로 대소 비교
        cout << "t2 < t1";
    }

    return 0;
}