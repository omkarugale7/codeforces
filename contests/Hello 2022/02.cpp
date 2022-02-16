#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
struct Node
{
    int l;
    int r;
    int cost;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        auto comp = [](const Node &p1, const Node &p2)
        { return p1.l < p2.r; };
        multiset<Node, decltype(comp)> segments(comp);
        for (int i = 0; i < n; i++)
        {
            Node *node = new Node;
            cin >> node->l >> node->r >> node->cost;

            // get the max_number i can find and add it here;
            int mx_get = node->r - node->l + 1;
            int mx_cost = node->cost;
            int mx_val = mx_get;
            set<int> costs;
            for (auto x : segments)
            {
                if (x.l <= node->l)
                {
                    // mx_merged;
                    int left_side = min(node->l, x.l);
                    int right_side = max(node->r, x.r);
                    int diff = right_side - left_side + 1;

                    int diff2 = x.r - x.l + 1;
                    if (diff2 >= diff && diff2 > mx_val)
                    {
                        mx_cost = x.cost;
                        mx_val = diff2;
                    }
                    else if (diff > mx_val)
                    {
                        mx_cost = x.cost + mx_cost;
                        mx_val = diff;
                    }
                }
                else
                {
                    break;
                }
            }
            cout << mx_cost << endl;
            segments.insert(*node);
        }
    }
    return 0;
}