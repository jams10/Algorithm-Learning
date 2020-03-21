// #include <iostream>
// #include <stdio.h>
// #include <vector>

// using namespace std;

// vector<int> v;

// typedef struct Item
// {
//     int value;
//     bool selected = false;
// }Item;

// void dfs(Item* pArr, int cnt, const int size)
// {
//     if(cnt == 0)
//     {
//         for(const auto& element : v)
//         {
//             printf("%d ",element);
//         }
//         printf("\n");
//         return;
//     }

//     for(int i=0; i<size; ++i)
//     {
//         if(pArr[i].selected)
//         {
//             continue;
//         }
//         pArr[i].selected = true;
//         v.push_back(pArr[i].value);
        
//         dfs(pArr, cnt-1, size); // recur returning point
        
//         pArr[i].selected = false;
//         v.pop_back();
//     }
// }

// int main()
// {
//     int n=0, m=0;
//     cin>>n>>m;

//     Item *pArr = new Item[n];
//     for(int i=0; i<n; ++i)
//     {
//         pArr[i].value = i+1;
//     }
   
//     dfs(pArr, m, n);

//     delete[] pArr;
// }