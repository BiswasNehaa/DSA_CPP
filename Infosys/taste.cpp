#include <iostream>

using namespace std;

typedef long long ll;

ll v[100005];
ll d[100005];

int main() {
    int n;
    ll m;

    
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    
    ll low = 1, high = 2000000000LL; 
    ll threshold = 2000000000LL;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        
        // Count how many meals we would eat if we only eat food >= mid
        ll count = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] >= mid) {
                count += (v[i] - mid) / d[i] + 1;
            }
        }

        if (count <= m) {
            threshold = mid; // This might be our answer
            high = mid - 1;  // Try a smaller threshold to eat more food
        } else {
            low = mid + 1;   // We ate too much food! Increase the threshold
        }
    }

    // 3. Calculate the total score based on our threshold
    ll total_score = 0;
    ll meals_eaten = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] >= threshold) {
            ll num_times = (v[i] - threshold) / d[i] + 1;
            ll last_value = v[i] - (num_times - 1) * d[i];
            
            // This is the formula for the sum of a sequence:
            // (Number of items * (First + Last)) / 2
            total_score += (num_times * (v[i] + last_value)) / 2;
            meals_eaten += num_times;
        }
    }

    // 4. If we still have room to eat more meals (because some foods hit 
    // exactly the threshold - 1), fill the remaining M slots.
    if (meals_eaten < m && threshold > 1) {
        ll remaining_slots = m - meals_eaten;
        total_score += remaining_slots * (threshold - 1);
    }

    cout << total_score << endl;

    return 0;
}