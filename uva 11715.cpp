#include<bits/stdc++.h>

using namespace std;

int main() {
  int T;
  int c = 0;
  double u, v, t, a, s;

  while (cin >> T) {
    if (T == 0)
      break;

    c++;

    cout << "Case " << c << ": ";

    switch (T) {
      case 1:
        cin >> u >> v >> t;
        a = (v - u) / t;
        s = u * t + 0.5 * a * t * t;
        cout << setprecision(3) << fixed << s << " " << a << endl;
        break;
      case 2:
        cin >> u >> v >> a;
        t = (v - u) / a;
        s = u * t + 0.5 * a * t * t;
        cout << setprecision(3) << fixed  << s << " " << t << endl;
        break;
      case 3:
        cin >> u >> a >> s;
        t = (-u + sqrt(u * u + 2 * a * s)) / a;
        v = a * t + u;
        cout << setprecision(3) << fixed  << v << " " << t << endl;
        break;
      case 4:
        cin >> v >> a >> s;
        t = (-v + sqrt(v * v - 2 * a * s)) / -a;
        u = v - a * t;
        cout << setprecision(3) << fixed  << u << " " << t << endl;
        break;
    }
  }

  return 0;
}