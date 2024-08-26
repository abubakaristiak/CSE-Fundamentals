#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v, int x) 
{
    v.push_back(x);
    int current_idx = v.size() - 1;
    while (current_idx != 0)
    {
        int parent_idx = (current_idx-1)/2;
        if(v[parent_idx] < v[current_idx]){
            swap(v[parent_idx], v[current_idx]);
        }
        else break;
        current_idx = parent_idx;
    } 
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size()-1];
    v.pop_back();
    int current_idx = 0;
    while (true)
    {
        int left_idx = current_idx * 2 + 1;
        int right_idx = current_idx * 2 + 2;
        int last_idx = v.size() - 1;
        if(left_idx <= last_idx && right_idx <= last_idx){

            // Jodi both side a value takle;
            if(v[left_idx] >= v[right_idx] && v[left_idx] > v[current_idx]){
                swap(v[left_idx], v[current_idx]);
                current_idx = left_idx;
            }
            else if(v[right_idx] >= v[left_idx] && v[right_idx] > v[current_idx]){
                swap(v[right_idx], v[current_idx]);
                current_idx = right_idx;
            }
            else {
                break;
            }
        }
        else if(left_idx <= last_idx){

            // only left side takle
            if(v[left_idx] > v[current_idx]){
                swap(v[left_idx], v[current_idx]);
                current_idx = left_idx;
            }
            else{
                break;
            }
        }
        else if(right_idx <= last_idx){

            // only right side takle
            if(v[right_idx] > v[current_idx]){
                swap(v[right_idx], v[current_idx]);
                current_idx = right_idx;
            }
            else{
                break;
            }
        }
        else{
            break;  
        }
    }
}
void print_heap(vector<int> v)
{
    for(int val: v){
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        insert(v,x);
    }
    delete_heap(v);
    print_heap(v);

    delete_heap(v);
    print_heap(v);
    return 0;
}

/*
input: 
5 
10 60 40 50 30
*/