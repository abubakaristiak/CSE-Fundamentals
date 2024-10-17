#include <bits/stdc++.h>
using namespace std;

const int N = 5005, LOG = 13;
vector<int> tree[N], node_values[N];
int ancestor[N][LOG], depth[N];

void dfs(int u, int p) {
    ancestor[u][0] = p;
    for (int i = 1; i < LOG; i++)
        ancestor[u][i] = ancestor[u][i - 1] == -1 ? -1 : ancestor[ancestor[u][i - 1]][i - 1];
    
    for (int v : tree[u]) {
        if (v != p) {
            depth[v] = depth[u] + 1;
            dfs(v, u);
        }
    }
}

int lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    for (int i = LOG - 1; i >= 0; i--)
        if (ancestor[u][i] != -1 && depth[ancestor[u][i]] >= depth[v])
            u = ancestor[u][i];
    if (u == v) return u;
    for (int i = LOG - 1; i >= 0; i--)
        if (ancestor[u][i] != ancestor[v][i])
            u = ancestor[u][i], v = ancestor[v][i];
    return ancestor[u][0];
}

void insert_value(int u, int val) {
    node_values[u].push_back(val);
    sort(node_values[u].begin(), node_values[u].end());
}

void delete_value(int u, int val) {
    auto it = lower_bound(node_values[u].begin(), node_values[u].end(), val);
    if (it != node_values[u].end() && *it == val)
        node_values[u].erase(it);
}

int find_kth_smallest(int u, int v, int k) {
    int anc = lca(u, v);
    vector<int> values;

    while (u != anc) values.insert(values.end(), node_values[u].begin(), node_values[u].end()), u = ancestor[u][0];
    values.insert(values.end(), node_values[anc].begin(), node_values[anc].end());
    while (v != anc) values.insert(values.end(), node_values[v].begin(), node_values[v].end()), v = ancestor[v][0];

    sort(values.begin(), values.end());
    return values.size() < k ? -1 : values[k - 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    dfs(1, -1);

    cin >> q;
    while (q--) {
        string type;
        int u, v, k;
        cin >> type;
        
        if (type == "insert") {
            int val;
            cin >> u >> val;
            insert_value(u, val);
        } else if (type == "delete") {
            int val;
            cin >> u >> val;
            delete_value(u, val);
        } else if (type == "find") {
            cin >> u >> v >> k;
            cout << find_kth_smallest(u, v, k) << "\n";
        }
    }

    return 0;
}