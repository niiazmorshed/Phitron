#include <bits/stdc++.h>
using namespace std;

void insert_Heap(vector<int> &v, int val)
{
    v.push_back(val);
    int currentIDX = v.size() - 1;
    while (currentIDX != 0)
    {
        int parent_idx = (currentIDX - 1) / 2;
        if (v[parent_idx] > v[currentIDX])
        {
            swap(v[parent_idx], v[currentIDX]);
        }
        else
        {
            break;
        }
        currentIDX = parent_idx;
    }
}

void delete_Heap(vector<int> &v)
{
    if (v.empty())
        return;

    v[0] = v.back();
    v.pop_back();

    int currentIDX = 0;
    while (true)
    {
        int left_IDX = currentIDX * 2 + 1;
        int right_IDX = currentIDX * 2 + 2;

        int left_val = INT_MAX, right_val = INT_MAX;
        if (left_IDX < v.size())
            left_val = v[left_IDX];
        if (right_IDX < v.size())
            right_val = v[right_IDX];

        if (left_val <= right_val && left_val < v[currentIDX])
        {
            swap(v[currentIDX], v[left_IDX]);
            currentIDX = left_IDX;
        }
        else if (right_val < left_val && right_val < v[currentIDX])
        {
            swap(v[currentIDX], v[right_IDX]);
            currentIDX = right_IDX;
        }
        else
        {
            break;
        }
    }
}

void print_Heap(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_Heap(v, val);
    }
    print_Heap(v);
    delete_Heap(v);
    print_Heap(v);
    return 0;
}