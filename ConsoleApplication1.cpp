// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "head.h"

using namespace std;

#define CHECK_NUM 42

void clearArr();
void clearArrVec(vector<int>& vec);
int compareArr(vector<int> vec1, vector<int> vec2);
int checkNum();
void test();
void doubleOdd(vector<int>& vec);

int main()
{
#if 0
    constexpr int len = 10;
    int a[len];

    for (size_t i = 0; i < len; ++i)
    {
        a[i] = i;
    }
    for (auto i : a)
    {
        cout << i << " ";
    }

#endif
    vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
    vector<int> v2 = { 1,2,3,4,5,6,7,8,9 };
    vector<int> v3 = { 1,2,3,4,5,6,7,8,9,11 };
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
#if 0   
    clearArr();
    
    clearArrVec(v1);
    for (auto i : v1)
    {
        cout << i << "";
    }

    //compareArr(v1, v2);
    //compareArr(v1, v3);
    //compareArr(v1, v1);

    int i;
    double d;

    d = i = 3.5;
    cout << i << " " << d << endl;
    i = d = 3.5;
    cout << i << " " << d << endl;

    //checkNum();
#endif
    //doubleOdd(v1);

    return 0;
}

void clearArr()
{
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int* star = begin(a), * fin = end(a);

    while (star != fin)
    {
        *star++ = 0;
    }
}

void clearArrVec(vector<int>& vec)
{
    for (auto& i : vec)
    {
        i = 0;
    }
}

int compareArr(vector<int> vec1, vector<int> vec2)
{
    if (vec1.size() < vec2.size())
    {
        cout << "vec2 is bigger" << endl;
        return -1;
    }

    if (vec1.size() > vec2.size())
    {
        cout << "vec1 is bigger" << endl;
        return -1;
    }

    if (vec1.size() == vec2.size())
    {
        auto len = vec1.size();
        for (int i = 0; i != len; ++i)
        {
            if (vec1[i] < vec2[i])
            {
                cout << "vec2 is bigger" << endl;
                return -1;
            }

            if (vec1[i] > vec2[i])
            {
                cout << "vec1 is bigger" << endl;
                return -1;
            }
        }
    }
    cout << "equal" << endl;

    return 0;
}

int checkNum()
{
    int num;

    cout << "Please input number:" << endl;
    while (cin >> num)
    {
        if (num == CHECK_NUM)
        {
            return 0;
        }
    }
}

void test()
{
#if 0
    vector<int> vec = { 0,1,2,3,4,5 };

    auto ptr = vec.begin();
    while (ptr != vec.end())
    {
        cout << *ptr++;
    }
    cout << endl;
#endif

    /*  error
    ptr = vec.begin();
    while (ptr != vec.end())
    {
        cout << *++ptr;
    }
    */
}

void doubleOdd(vector<int>& vec)
{
    for (auto& it : vec)
    {
        it = ((it % 2) == 0) ? it : it * 2;
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
