#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[100005], st[4 * 100005];
void build(int si, int ss, int se)
{
    if (ss == se)
    {
        st[si] = a[ss];
        return;
    }
    int mid = (ss + se) / 2;
    build(2 * si, ss, mid);
    build(2 * si + 1, mid + 1, se);
    st[si] = min(st[2 * si], st[2 * si + 1]);
}
int query(int si, int ss, int se, int qs, int qe)
{
    if (qs > se || qe < ss)
    {
        return INT32_MAX;
    }
    if (qs <= ss && qe >= se)
    {
        return st[si];
    }
    int mid = (ss + se) / 2;
    int left = query(2 * si, ss, mid, qs, qe);
    int right = query(2 * si + 1, mid + 1, se, qs, qe);
    return min(left, right);
}
void update(int si, int ss, int se, int qi)
{
    if (ss == se)
    {
        st[si] = a[ss];
        return;
    }
    int mid = (ss + se) / 2;
    if (qi < mid)
        update(2 * si, ss, mid, qi);
    else
        update(2 * si + 1, mid + 1, se, qi);
    st[si] = min(st[2 * si], st[2 * si + 1]);
}
int32_t main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    build(1, 1, n);
    int q;
    cin >> q;
    while (q--)
    {
        int s, e;
        cin >> s >> e;
        cout << query(1, 1, n, s, e) << endl;
    }
    return 0;
}
