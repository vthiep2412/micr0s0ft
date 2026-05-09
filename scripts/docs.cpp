// Hằng số hữu ích:
long long ans = (long long)a * b;
double result = (double)a / b;
if (fabs(a - b) < 1e-9) { /* bằng nhau */ }



const int INF = 1e9;
const long long LINF = 1e18;
const double PI = acos(-1.0);



















// Đặc điểm:
const int MAXN = 1e5 + 5;



// Mảng 1 chiều
int a[MAXN];          // Global  an toàn, tự khởi tạo = 0
int b[MAXN] = {0};    // Tường minh khởi tạo 0



// Mảng 2 chiều
int grid[1005][1005];



// Khởi tạo nhanh bằng memset (chỉ dùng với 0 hoặc -1)
memset(a, 0, sizeof(a));   // Gán tất cả = 0
memset(a, -1, sizeof(a));  // Gán tất cả = -1 (vì -1 = 0xFF...FF)



// Khởi tạo với giá trị bất kỳ dùng fill
fill(a, a + n, INF);       // Gán tất cả = INF



// Nhập/xuất mảng (1-indexed thường dùng trong thi)
for (int i = 1; i <= n; i++) cin >> a[i];
for (int i = 1; i <= n; i++) cout << a[i] << " ";



















// Đặc điểm:
v.push_back(x);           // Thêm cuối  O(1) amortized
v.pop_back();             // Xóa cuối  O(1)
v[i];                     // Truy cập  O(1)
v.size();                 // Kích thước hiện tại
v.empty();                // Kiểm tra rỗng
v.clear();                // Xóa hết phần tử
v.resize(n, 0);           // Đổi kích thước, giá trị mặc định = 0
v.assign(n, val);         // Gán n phần tử giá trị val
sort(v.begin(), v.end()); // Sắp xếp tăng



















// Đặc điểm:
stack<int> st;
st.push(x);    // Thêm vào đỉnh  O(1)
st.pop();      // Xóa đỉnh (không trả về giá trị)  O(1)
st.top();      // Xem đỉnh  O(1)
st.size();     // Kích thước
st.empty();    // Kiểm tra rỗng



















// Đặc điểm:
queue<int> q;
q.push(x);    // Thêm vào cuối  O(1)
q.pop();      // Xóa phần tử đầu (không trả về giá trị)  O(1)
q.front();    // Xem phần tử đầu  O(1)
q.back();     // Xem phần tử cuối  O(1)
q.size();
q.empty();



















// Đặc điểm:
deque<int> dq;
dq.push_front(x);  // Thêm đầu  O(1)
dq.push_back(x);   // Thêm cuối  O(1)
dq.pop_front();    // Xóa đầu  O(1)
dq.pop_back();     // Xóa cuối  O(1)
dq.front();        // Xem đầu  O(1)
dq.back();         // Xem cuối  O(1)
dq[i];             // Truy cập ngẫu nhiên  O(1)



















// Đặc điểm:
// Max-heap (mặc định)  phần tử lớn nhất luôn ở top
priority_queue<int> pq;
pq.push(x);    // Thêm  O(log n)
pq.top();      // Phần tử lớn nhất  O(1)
pq.pop();      // Xóa phần tử đỉnh  O(log n)
pq.size();
pq.empty();
// Min-heap  phần tử nhỏ nhất ở top
priority_queue<int, vector<int>, greater<int>> pq_min;
// Heap với pair: ưu tiên theo first, nếu bằng thì so second
priority_queue<pair<int,int>> pq_pair;



















// Đặc điểm:
set<int> s;
s.insert(x);             // Thêm  O(log n), bỏ qua nếu đã có
s.erase(x);              // Xóa tất cả phần tử x  O(log n)
s.count(x);              // 0 hoặc 1 (set), hoặc số lần xuất hiện (multiset)
s.find(x);               // Iterator đến x, s.end() nếu không có  O(log n)
s.lower_bound(x);        // Iterator đến phần tử đầu tiên >= x  O(log n)
s.upper_bound(x);        // Iterator đến phần tử đầu tiên > x  O(log n)
*s.begin(); *s.rbegin(); // Phần tử nhỏ/lớn nhất  O(1)



multiset<int> ms;        // Cho phép phần tử trùng
ms.erase(ms.find(x));    //  Xóa ĐÚNG MỘT phần tử x (không phải ms.erase(x))



















// Đặc điểm:
map<string, int> mp;
mp["key"] = value;          // Gán  O(log n), tạo mới nếu chưa có
mp["key"]++;                // Đếm tần suất
mp.count("key");            // Trả về 1 nếu tồn tại, 0 nếu không
mp.find("key");             // Iterator, mp.end() nếu không có
mp.erase("key");            // Xóa  O(log n)
mp.size();
for (map<string,int>::iterator it = mp.begin(); it != mp.end(); ++it) {
    string k = it->first; int v = it->second; /* Duyệt theo key tăng dần */
}
//  Dùng find() thay vì [] để KIỂM TRA mà không tạo phần tử mới
if (mp.find("key") != mp.end()) { /* tồn tại */ }



















// Đặc điểm:
unordered_map<int, int> ump;
unordered_set<int> us;



ump[key] = val;      // O(1) trung bình -- Gán giá trị, tạo mới nếu chưa có
ump.count(key);      // O(1) trung bình -- Trả về 1 nếu tồn tại, 0 nếu không
us.insert(x);        // O(1) trung bình -- Thêm phần tử, bỏ qua nếu đã có
//  Với key là string hoặc pair, cần định nghĩa hash riêng



















// 2.9 Hàm STL Quan Trọng
sort(v.begin(), v.end());                    // Sắp xếp tăng O(n log n)
sort(v.begin(), v.end(), greater<int>());    // Sắp xếp giảm
reverse(v.begin(), v.end());                 // Đảo ngược O(n)
next_permutation(v.begin(), v.end());        // Hoán vị kế tiếp
*max_element(v.begin(), v.end());            // Phần tử lớn nhất
*min_element(v.begin(), v.end());            // Phần tử nhỏ nhất
accumulate(v.begin(), v.end(), 0LL);         // Tổng mảng
lower_bound(v.begin(), v.end(), x);          // Pointer đến phần tử >= x (mảng đã sort)
upper_bound(v.begin(), v.end(), x);          // Pointer đến phần tử > x (mảng đã sort)



















// Tại sao dùng Segment Tree?
const int MAXN = 1e5 + 5;
long long tree[4 * MAXN]; // Tại sao x4? Để đảm bảo đủ nút cho cây nhị phân đầy đủ
int a[MAXN];



// node: chỉ số nút trên cây, [l, r]: đoạn mà nút đó quản lý
void build(int node, int l, int r) {
    if (l == r) { // Trường hợp cơ sở: Đoạn chỉ có 1 phần tử (Lá)
        tree[node] = a[l];
        return;
    }
    int mid = (l + r) / 2;
    build(2*node, l, mid);      // Xây cây con bên trái (quản lý nửa đầu)
    build(2*node+1, mid+1, r);  // Xây cây con bên phải (quản lý nửa sau)
    tree[node] = tree[2*node] + tree[2*node+1]; // Nút cha = tổng 2 nút con
}



void update(int node, int l, int r, int pos, int val) {
    if (l == r) {
        tree[node] = val; // Cập nhật tại lá
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid) update(2*node, l, mid, pos, val);
    else update(2*node+1, mid+1, r, pos, val);
    tree[node] = tree[2*node] + tree[2*node+1]; // Cập nhật lại các nút cha liên quan
}



long long query(int node, int l, int r, int ql, int qr) {
    if (qr < l or r < ql) return 0; // Ngoài đoạn đang xét -> trả về phần tử trung tính (0 cho tổng)
    if (ql <= l and r <= qr) return tree[node]; // Đoạn [l, r] nằm hoàn toàn trong [ql, qr]
    int mid = (l + r) / 2;
    return query(2*node, l, mid, ql, qr) + query(2*node+1, mid+1, r, ql, qr);
}



















// Đặc điểm:
struct TrieNode {
    int children[26]; // 26 chữ cái tiếng Anh
    bool isEnd;       // Đánh dấu đây có phải là điểm kết thúc của một từ không
    TrieNode() { 
        fill(children, children + 26, -1); 
        isEnd = false; 
    }
};



vector<TrieNode> trie(1); // Bắt đầu với 1 nút gốc (chỉ số 0)



void insert(const string& s) {
    int cur = 0;
    for (char c : s) {
        int idx = c - 'a';
        if (trie[cur].children[idx] == -1) { // Nếu chưa có đường đi cho ký tự c
            trie[cur].children[idx] = trie.size();
            trie.emplace_back(); // Tạo nút mới
        }
        cur = trie[cur].children[idx]; // Đi xuống nút tiếp theo
    }
    trie[cur].isEnd = true; // Kết thúc chuỗi
}



bool search(const string& s) {
    int cur = 0;
    for (char c : s) {
        int idx = c - 'a';
        if (trie[cur].children[idx] == -1) return false; // Gãy nhánh -> Không có từ này
        cur = trie[cur].children[idx];
    }
    return trie[cur].isEnd; // Phải là điểm kết thúc mới coi là tìm thấy từ
}



















// Lõi của BIT  Hàm `lowbit(i)`:
const int MAXN = 1e5 + 5;
long long bit[MAXN];
int n;



// Cộng thêm val vào vị trí pos
void update(int pos, long long val) {
    for (; pos <= n; pos += pos & (-pos)) // Nhảy lên các nút cha quản lý pos
        bit[pos] += val;
}



// Tính tổng từ 1 đến pos
long long query(int pos) {
    long long sum = 0;
    for (; pos > 0; pos -= pos & (-pos)) // Nhảy xuống các nút con tích lũy
        sum += bit[pos];
    return sum;
}



// Tính tổng đoạn [l, r] dựa trên prefix sum
long long queryRange(int l, int r) {
    return query(r) - query(l - 1);
}



void build(int arr[], int sz) {
    n = sz;
    fill(bit, bit + n + 1, 0);
    for (int i = 1; i <= n; i++) update(i, arr[i]);
}



















// Kỹ thuật tối ưu:
const int MAXN = 1e5 + 5;
int parent[MAXN], rnk[MAXN];



void init(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i; // Ban đầu ai cũng là trưởng nhóm của chính mình
        rnk[i] = 0;    // Độ cao của cây nhóm = 0
    }
}



// Tìm đại diện (trưởng nhóm) của x
int find(int x) {
    if (parent[x] != x) 
        parent[x] = find(parent[x]); // Nén đường đi: trỏ thẳng lên trùm cuối
    return parent[x];
}



// Gộp nhóm chứa x và nhóm chứa y
bool unite(int x, int y) {
    int px = find(x), py = find(y);
    if (px == py) return false; // Đã cùng một nhóm rồi
    // Kỹ thuật Union by Rank: Gộp cây thấp vào cây cao hơn
    if (rnk[px] < rnk[py]) swap(px, py);
    parent[py] = px; 
    if (rnk[px] == rnk[py]) rnk[px]++;
    
    return true; // Gộp thành công
}
// Kiểm tra cùng nhóm
bool sameGroup(int x, int y) { return find(x) == find(y); }



















// 4.1 Tìm Ước & Đếm Ước
vector<int> getDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= sqrt(n); ++i) 
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) // Tránh lặp nếu n là số chính phương
                divisors.push_back(n / i); 
        }
    sort(divisors.begin(), divisors.end());
    return divisors;
}



















// 4.1 Tìm Ước & Đếm Ước
long long countDivisors(long long n) {
    long long cnt = 0;
    for (long long i = 1; i * i <= n; ++i)
        if (n % i == 0) {
            cnt++;            // ước i
            if (i * i != n) cnt++;  // ước n/i
        }
    return cnt;
}



















// 4.2 GCD & LCM
int lcm(int a, int b)
    return (a / __gcd(a, b)) * b;



long long lcmLL(long long a, long long b)
    return (a / __gcd(a, b)) * b;



















// Cách 1: O(n / 3)  Tối ưu cho số thông thường
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2 or n == 3) return true;            // SNT đặc biệt
    if (n % 2 == 0 or n % 3 == 0) return false;   // Loại ngay bội 2 và 3
    long long sqrtN = sqrt((double)n);
    for (long long i = 5; i <= sqrtN; i += 6) {   // i = 6k-1, i+2 = 6k+1
        if (n % i == 0 or n % (i + 2) == 0) return false;
    }
    return true;
}



















// fermet
long long mulMod(long long a, long long b, long long m) {
    long long res = 0;
    a %= m;
    while (b > 0) {
        if (b & 1) res = (res + a) % m;
        a = (a + a) % m;
        b >>= 1;
    }
    return res;
}

long long powMod(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = mulMod(result, base, mod);
        base = mulMod(base, base, mod);
        exp >>= 1;
    }
    return result;
}

bool fermatTest(long long n, int k = 10) {
    if (n < 2) return false;
    if (n == 2 or n == 3) return true;
    if (n % 2 == 0) return false;
    mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
    for (int i = 0; i < k; i++) {
        long long a = uniform_int_distribution<long long>(2, n - 2)(rng);
        if (powMod(a, n - 1, n) != 1) return false;
    }
    return true;
}























// Miller rabin
bool millerTest(long long a, long long n, long long k, long long m) {
    long long x = powMod(a, m, n);
    if (x == 1 or x == n - 1) return true;
    for (int i = 0; i < k - 1; i++) {
        x = mulMod(x, x, n);
        if (x == n - 1) return true;
    }
    return false;
}

bool isPrimeMR(long long n) {
    static vector<int> checkSet = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (int a : checkSet)
        if (n == a) return true;
    if (n < 41 or n % 2 == 0) return false;



    long long k = 0, m = n - 1;
    while (m % 2 == 0) { m /= 2; k++; }



    for (int a : checkSet)
        if (!millerTest(a, n, k, m)) return false;
    return true;
}



















// Eratosthenes 
vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= n; p++)
        if (isPrime[p])
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
    return isPrime;
}



















// Sàng Tuyến Tính (Linear Sieve)
vector<int> linearSieve(int n) {
    vector<int> lp(n + 1, 0);
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            primes.push_back(i);
        }
        for (int p : primes) {
            if (p > lp[i] or (long long)i * p > n) break;
            lp[i * p] = p;
        }
    }
    return primes;
}



















struct SPF_Sieve {
    int N;
    vector<int> spf; // smallest prime factor



    SPF_Sieve(int n) : N(n), spf(n + 1, 0) {
        for (int i = 2; i <= N; i++) {
            if (spf[i] == 0) {
                spf[i] = i;
                if (1LL * i * i <= N)
                    for (long long j = 1LL * i * i; j <= N; j += i)
                        if (spf[(int)j] == 0) spf[(int)j] = i;
            }
        }
        spf[1] = 1;
    }



    vector<pair<int,int>> factorize(int x) {
        vector<pair<int,int>> f;
        while (x > 1) {
            int p = spf[x], cnt = 0;
            while (x % p == 0) { x /= p; cnt++; }
            f.push_back({p, cnt});
        }
        return f;
    }
};
// Dùng: SPF_Sieve spf(1e6); vector<pair<int,int>> f = spf.factorize(360);



















// Sàng Mở Rộng (đoạn $[L, R]$, $R \leq 10^{12}$)
void segmentSieve(long long L, long long R) {
    int sqrtR = (int)sqrt((double)R) + 1;
    vector<bool> smallIsPrime(sqrtR + 1, true);
    smallIsPrime[0] = smallIsPrime[1] = false;
    for (int p = 2; p * p <= sqrtR; p++) // normal sieve to sqrtR
        if (smallIsPrime[p])
            for (int j = p * p; j <= sqrtR; j += p)
                smallIsPrime[j] = false;



    vector<bool> isNotPrime(R - L + 1, false);// Segement sieve L, R
    if (L < 2) isNotPrime[0] = true;           // xử lý 0 hoặc 1
    if (L <= 1 and R >= 1) isNotPrime[1 - L] = true;
    for (int p = 2; p <= sqrtR; p++) {
        if (!smallIsPrime[p]) continue;
        long long start = max((long long)p * p, (L + p - 1) / p * p);
        for (long long j = start; j <= R; j += p)
            isNotPrime[j - L] = true;
    }
    // isNotPrime[i] = false  (L+i) là SNT
}



















// 4.5 Phân Tích Thừa Số Nguyên Tố
map<int, int> factorize(int n) {
    map<int, int> res;
    for (int i = 2; (long long)i * i <= n; i++) {
        while (n % i == 0) {
            res[i]++;
            n /= i;
        }
    }
    if (n > 1) res[n]++;
    return res;
}



















// Đếm Số Lượng Ước Từ Phân Tích Thừa Số Nguyên Tố
long long countDivisors_fromFactor(const vector<pair<int,int>>& f) {
    long long ans = 1;
    for (int i = 0; i < (int)f.size(); i++) ans *= (f[i].second + 1LL);
    return ans;
}



















// Tổng ước đếm từ phân tích thừa số nguyên tố
long long sumDivisors_fromFactor(const vector<pair<int,int>>& f) {
    long long ans = 1;
    for (int i = 0; i < (int)f.size(); i++) {
        long long p = f[i].first; int a = f[i].second;
        long long term = 1, cur = 1;
        for (int j = 0; j < a; j++) { cur *= p; term += cur; }
        ans *= term;
    }
    return ans;
}
// Ví dụ: n=12=2×3, countDivisors={{2,2},{3,1}}  (2+1)*(1+1)=6 
// sumDivisors: (1+2+4)*(1+3) = 7*4 = 28 



















// 4.6 Kiểm Tra Số Chính Phương
bool isSquare(long long n) {
    if (n < 0) return false;
    long long r = sqrt((double)n);
    for (long long i = max(0LL, r - 1); i <= r + 1; i++)
        if (i * i == n) return true;
    return false;
}



















// 4.7 Kiểm Tra Số Hoàn Thiện
bool isPerfect(int n) {
    if (n <= 1) return false;
    int sum = 1;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum == n;
}



















// 4.8 Các Hàm Tiện Ích Số Học
bool isPowerOfTwo(int n) {
    return n and !(n & (n - 1));
}



















// 4.8 Các Hàm Tiện Ích Số Học
int getFirstDigit(int num) {
    if (num == 0) return 0;
    num = abs(num);
    int digits = log10(num);
    return num / pow(10, digits);
}



















// Tổng các số từ l đến r  $O(1)$
long long sumRange(long long l, long long r) {
    return (l + r) * (r - l + 1) / 2;
}



















// Tổng các số chia hết cho k trong $[l, r]$  $O(1)$
long long sumDivisible(long long l, long long r, long long k) {
    long long first = (l + k - 1) / k * k;  // Bội nhỏ nhất của k >= l
    if (first > r) return 0;
    long long last = r / k * k;              // Bội lớn nhất của k <= r
    long long cnt = (last - first) / k + 1; // Số lượng bội
    return (first + last) * cnt / 2;
}



















// 4.9 Giai Thừa, Tổ Hợp, Chỉnh Hợp
long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) res *= i;
    return res;
}



















// Tính Tổ Hợp Chập k Của n (nCr) Bằng Tam Giác Pascal (Pascal's Triangle)
long long C[35][35];
void precompute() {
    C[0][0] = 1;
    for (int i = 1; i <= 34; i++) {
        C[i][0] = 1;
        for (int j = 1; j <= i; j++)
            C[i][j] = C[i-1][j-1] + C[i-1][j];
    }
}





















// đếm permutations
long long permCount(int n, int k) {
    long long res = 1;
    for (int i = n; i > n - k; i--) res *= i;
    return res;
}





















// n sang bat ky base nao
string toBase(int n, int base) {
    if (n == 0) return "0";
    string digits = "0123456789ABCDEF";
    string res = "";
    while (n > 0) {
        res += digits[n % base];
        n /= base;
    }
    reverse(res.begin(), res.end());
    return res;
}



















// Chuyển Đổi Số Từ Cơ Số Bất Kỳ (Base X) Sang Hệ Thập Phân (Base 10)
int fromBase(const string& s, int base) {
    int res = 0;
    for (char c : s) {
        int d = isdigit(c) ? c - '0' : c - 'A' + 10;
        res = res * base + d;
    }
    return res;
}





















// Chuyển Đổi Cơ Số Tổng Quát (có kiểm soát tràn số)
int val(char c) {
    if ('0' <= c and c <= '9') return c - '0';
    if ('A' <= c and c <= 'Z') return c - 'A' + 10;
    if ('a' <= c and c <= 'z') return c - 'a' + 10;
    return 1000;
}
char dig(int v) {
    if (v < 10) return char('0' + v);
    return char('A' + (v - 10));
}















// Hệ base sang hệ 10 (có kiểm tra tràn long long)
long long baseToDec(const string& s, int base) {
    long long x = 0;
    for (char c : s) {
        int d = val(c);
        if (d >= base) throw runtime_error("invalid digit");
        if (x > (LLONG_MAX - d) / base) throw overflow_error("overflow");
        x = x * base + d;
    }
    return x;
}

// Hệ 10 sang hệ base
string decToBase(long long n, int base) {
    if (n == 0) return "0";
    bool neg = false;
    if (n < 0) { neg = true; n = -n; }
    string r;
    while (n > 0) { r.push_back(dig(n % base)); n /= base; }
    if (neg) r.push_back('-');
    reverse(r.begin(), r.end());
    return r;
}

// Hệ A sang hệ B (qua hệ 10 trung gian)
string baseAToBaseB(const string& s, int a, int b) {
    return decToBase(baseToDec(s, a), b);
}



















// Chuyển Đổi Cơ Số Với Số Cực Lớn (hàng trăm chữ số)
pair<string,int> divBigDecByBase(const string& s, int base) {
    string q;
    long long rem = 0;
    for (char c : s) {
        rem = rem * 10 + (c - '0');
        int digit = (int)(rem / base);
        rem %= base;
        if (!q.empty() or digit != 0)
            q.push_back(char('0' + digit));
    }
    if (q.empty()) q = "0";
    return {q, (int)rem};
}



string bigDecToBase(string s, int base) {
    if (s == "0") return "0";
    string res;
    while (s != "0") {
        pair<string,int> qr = divBigDecByBase(s, base);
        string q = qr.first; int r = qr.second;
        res.push_back(r < 10 ? char('0' + r) : char('A' + (r - 10)));
        s = q;
    }
    reverse(res.begin(), res.end());
    return res;
}



















// 5.1 Tìm Kiếm Tuần Tự  $O(n)$
int linearSearch(vector<int>& a, int x) {
    for (int i = 0; i < a.size(); i++)
        if (a[i] == x) return i;
    return -1; // Không tìm thấy
}



















// 5.2 Tìm Kiếm Nhị Phân  $O(\log n)$
// Dạng Tự Viết
int binarySearch(vector<int>& a, int x) {
    int lo = 0, hi = a.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == x) return mid;
        if (a[mid] < x) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}



// Dạng STL
int binsearch(vector<int>& a, int x) {
    int k = lower_bound(a.begin(), a.end(), x) - a.begin();
    if (k == a.size()) return -1;
    return k;
}



















// Tìm đúng phần tử x (trả về index hoặc -1):
int binsearch(const vector<long long>& a, long long x) {
    int l = 0, r = (int)a.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == x) return mid;
        if (a[mid] < x) l = mid + 1;
        else            r = mid - 1;
    }
    return -1; // Không tìm thấy
}



















// Tìm vị trí phần tử nhỏ nhất >= x (Tương đương std::lower_bound):
int binsearchLarger(const vector<int>& a, int x) {
    int l = 0, r = (int)a.size() - 1, res = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] >= x) res = mid, r = mid - 1;
        else             l = mid + 1;
    }
    return res; // -1 nếu không có phần tử >= x
}

int binsearchSTLLarger(vector<int>& a, int x) {
    int k = lower_bound(a.begin(), a.end(), x) - a.begin();
    if (k < a.size()) return k;
    return -1;
}




















// Tìm vị trí phần tử lớn nhất <= x (dùng std::upper_bound - 1):
int binsearchSmallerOrEqual(const vector<int>& a, int x) {
    int l = 0, r = (int)a.size() - 1, res = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] <= x) res = mid, l = mid + 1;
        else             r = mid - 1;
    }
    return res; // -1 nếu không có phần tử <= x
}

int binsearchSTLSmallerOrEqual(vector<int>& a, int x) {
    int k = upper_bound(a.begin(), a.end(), x) - a.begin();
    return k - 1; // Trả về -1 nếu tất cả các phần tử đều > x
}



















// 6.1 Quick Sort(Hoare)  $O(n \log n)$ trung bình
void quickSort(vector<int>& a, int lo, int hi) {
    if (lo >= hi) return;
    int pivot = a[(lo + hi) / 2];
    int i = lo, j = hi;
    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        if (i <= j) { swap(a[i], a[j]); i++; j--; }
    }
    quickSort(a, lo, j);
    quickSort(a, i, hi);
}



















// 6.2 Merge Sort  luôn luôn $O(n \log n)$ - Stable (Sắp xếp ổn định)
void merge(vector<int>& a, int lo, int mid, int hi) {
    vector<int> temp;
    int i = lo, j = mid + 1;
    while (i <= mid and j <= hi)
        if (a[i] <= a[j]) temp.push_back(a[i++]); // <= giữ tính stable
        else              temp.push_back(a[j++]);
    while (i <= mid) temp.push_back(a[i++]);
    while (j <= hi)  temp.push_back(a[j++]);
    for (int k = lo; k <= hi; k++) a[k] = temp[k - lo];
}



void mergeSort(vector<int>& a, int lo, int hi) {
    if (lo >= hi) return;
    int mid = lo + (hi - lo) / 2;  // Tránh tràn số
    mergeSort(a, lo, mid);
    mergeSort(a, mid + 1, hi);
    merge(a, lo, mid, hi);
}
// Gọi: mergeSort(a, 0, n - 1);



















// 6.4 Bucket Sort (Counting Sort)  O(n + max_val)
// Sắp xếp vector<int> với giá trị trong [0, max_val]
vector<int> bucketSort(const vector<int>& a, int max_val) {
    vector<int> cnt(max_val + 1, 0);
    for (int x : a) cnt[x]++;
    vector<int> sorted;
    sorted.reserve(a.size());
    for (int i = 0; i <= max_val; i++)
        for (int j = 0; j < cnt[i]; j++)
            sorted.push_back(i);
    return sorted;
}
// Cách tối ưu hơn dùng insert:
// sorted.insert(sorted.end(), cnt[i], i);



















// 7.1 Mảng Cộng Dồn 1D (Prefix Sum)
int a[MAXN], prefix[MAXN];



// Xây dựng O(n)
for (int i = 1; i <= n; i++)
    prefix[i] = prefix[i-1] + a[i];



// Truy vấn tổng [l, r]  O(1)
int sumLR = prefix[r] - prefix[l-1];



















// 7.2 Mảng Cộng Dồn 2D
int a[MAXN][MAXN], prefix[MAXN][MAXN];
// Xây dựng
for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
        prefix[i][j] = a[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
// Tổng hình chữ nhật [r1,c1]  [r2,c2]
int sum = prefix[r2][c2] - prefix[r1-1][c2] - prefix[r2][c1-1] + prefix[r1-1][c1-1];



















// 7.3 Mảng Hiệu (Difference Array)
int d[MAXN] = {0}; // Mảng hiệu, ban đầu toàn 0
// Cộng val vào tất cả phần tử trong [l, r]  O(1)
void rangeUpdate(int l, int r, int val) {
    d[l] += val;
    d[r+1] -= val;
}
// Phục hồi mảng kết quả  O(n)
void build(int a[], int n) {
    for (int i = 1; i <= n; i++)
        a[i] = a[i-1] + d[i];
}



















// 8.1 Đệ Quy Cơ Bản
long long fact(int n) {       // Giai thừa đệ quy: n! = n * (n-1)!
    if (n == 0) return 1;     // Điểm dừng: 0! = 1
    return n * fact(n - 1);   // Gọi lại với bài toán nhỏ hơn
}



















// 8.1 Đệ Quy Cơ Bản
long long memo[1001];
long long fib(int n) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n]; // Kiểm tra sổ tay
    return memo[n] = fib(n-1) + fib(n-2); // Tính và ghi vào sổ
}



















// Template chuẩn (Hãy học thuộc lòng):
void backtrack(int step) {
    if (step == n) {        // Đã tìm thấy một lời giải hoàn chỉnh
        // Xử lý hoặc in kết quả
        return;
    }
    for (int choice : list_choices) { // Duyệt qua mọi khả năng tại bước này
        if (isValid(choice)) {      // Nếu lựa chọn này khả thi
            makeMove(choice);        // 1. Thử chọn (Đặt phấn)
            backtrack(step + 1);     // 2. Đi sâu vào bước tiếp theo
            undoMove(choice);        // 3. Quay lui (Xóa phấn - QUAN TRỌNG NHẤT)
        }
    }
}



















// Ví dụ: Liệt kê hoán vị
bool used[MAXN] = {false};
int perm[MAXN];



void genPerm(int step, int n) {
    if (step == n) {
        for (int i = 0; i < n; i++) cout << perm[i] << " ";
        cout << "\n";
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            used[i] = true;
            perm[step] = i;
            genPerm(step + 1, n);
            used[i] = false; // Quay lui
        }
    }
}



















// Ví dụ: Merge Sort
void mergeSort(vector<int>& a, int lo, int hi) {
    if (lo >= hi) return;
    int mid = (lo + hi) / 2;
    mergeSort(a, lo, mid);
    mergeSort(a, mid+1, hi);
    // Merge hai nửa đã sắp xếp
    vector<int> temp;
    int i = lo, j = mid + 1;
    while (i <= mid and j <= hi) {
        if (a[i] <= a[j]) temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
    }
    while (i <= mid) temp.push_back(a[i++]);
    while (j <= hi) temp.push_back(a[j++]);
    for (int k = lo; k <= hi; k++) a[k] = temp[k - lo];
}



















// Lũy thừa nhanh  $O(\log n)$:
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}



















// 10.1 Biểu Diễn Đồ Thị
const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];   // adj (Adjacency List - Danh sách kề)
// Thêm cạnh (u, v) vô hướng:
adj[u].push_back(v);
adj[v].push_back(u);
// Đồ thị có trọng số: vector<pair<int,int>> adj[MAXN]; // {đỉnh, trọng số}



















// Ẩn dụ trực quan (Sóng loang mặt hồ):
int dist[MAXN];
bool visited[MAXN];



void bfs(int start, int n) {
    fill(dist + 1, dist + n + 1, -1);
    queue<int> q; // Hàng đợi giúp duy trì thứ tự "ai đến trước được phục vụ trước"
    q.push(start);
    dist[start] = 0;
    visited[start] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                dist[v] = dist[u] + 1; // Khoảng cách tăng thêm 1 lớp
                q.push(v);
            }
        }
    }
}



















// Ẩn dụ trực quan (Thợ lặn thám hiểm hang ngầm):
bool visited[MAXN];



void dfs(int u) {
    visited[u] = true;
    // Xử lý u
    for (int v : adj[u])
        if (!visited[v])
            dfs(v);
}
// Đếm số thành phần liên thông:
int components = 0;
for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
        dfs(i);
        components++;
    }
}



















// Ẩn dụ trực quan (Dòng nước lan tỏa trong hệ thống ống):
vector<pair<int,int>> adj[MAXN]; // {đỉnh kề, trọng số}
long long dist[MAXN];



void dijkstra(int start, int n) {
    fill(dist + 1, dist + n + 1, LLONG_MAX);
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<>> pq;
    dist[start] = 0;
    pq.push({0, start});
    while (!pq.empty()) {
        pair<long long,int> topElem = pq.top(); pq.pop();
        long long d = topElem.first;
        int u       = topElem.second;
        if (d > dist[u]) continue; // Đã xử lý rồi
        for (int i = 0; i < (int)adj[u].size(); i++) {
            int v       = adj[u][i].first;
            long long w = adj[u][i].second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}



















// Ẩn dụ trực quan (Đoàn thám hiểm và những lá phiếu giảm giá):
struct Edge { int u, v, w; };
vector<Edge> edges;
long long dist[MAXN];



bool bellmanFord(int start, int n) {
    fill(dist + 1, dist + n + 1, LLONG_MAX);
    dist[start] = 0;
    // Thư giãn n-1 lần
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < (int)edges.size(); j++) {
            int eu = edges[j].u, ev = edges[j].v;
            long long ew = edges[j].w;
            if (dist[eu] != LLONG_MAX and dist[eu] + ew < dist[ev])
                dist[ev] = dist[eu] + ew;
        }
    }
    // Kiểm tra chu trình âm: nếu còn thư giãn được  có chu trình âm
    for (int j = 0; j < (int)edges.size(); j++) {
        int eu = edges[j].u, ev = edges[j].v;
        long long ew = edges[j].w;
        if (dist[eu] != LLONG_MAX and dist[eu] + ew < dist[ev])
            return true; // Có chu trình âm
    }
    return false; // Không có chu trình âm
}



















// Ẩn dụ trực quan (Mạng lưới trạm trung chuyển):
const long long INF = 1e18;
long long dist[505][505];



void floydWarshall(int n) {
    // Khởi tạo: dist[i][j] = trọng số cạnh i-j, INF nếu không có, 0 nếu i==j
    for (int k = 1; k <= n; k++)       // Đỉnh trung gian
        for (int i = 1; i <= n; i++)   // Từ i
            for (int j = 1; j <= n; j++) // Đến j
                if (dist[i][k] < INF and dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}
// Kiểm tra chu trình âm: dist[i][i] < 0



















// Ẩn dụ trực quan (Thứ tự mặc quần áo):
vector<int> adj[MAXN];
int indegree[MAXN]; // Bậc vào của mỗi đỉnh



vector<int> topoSort(int n) {
    vector<int> result;
    queue<int> q;
    for (int i = 1; i <= n; i++)
        if (indegree[i] == 0) q.push(i); // Đỉnh không có cạnh vào



    while (!q.empty()) {
        int u = q.front(); q.pop();
        result.push_back(u);
        for (int v : adj[u]) {
            if (--indegree[v] == 0) q.push(v);
        }
    }
    // Nếu result.size() < n  đồ thị có chu trình (không phải DAG)
    return result;
}



















// Cơ chế hoạt động:
struct Edge { int u, v, w; };
// Dùng DSU từ phần 3.4



long long kruskal(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b){
        return a.w < b.w; // Sắp xếp tăng theo trọng số
    });
    init(n); // Khởi tạo DSU
    long long totalCost = 0;
    int edgeCount = 0;
    for (int i = 0; i < (int)edges.size(); i++) {
        int eu = edges[i].u, ev = edges[i].v;
        long long ew = edges[i].w;
        if (unite(eu, ev)) {      // Nếu chưa cùng nhóm (không tạo chu trình)
            totalCost += ew;
            edgeCount++;
            if (edgeCount == n - 1) break; // MST có đúng n-1 cạnh
        }
    }
    return totalCost;
}



















// Cơ chế hoạt động:
// dp[i][j] = LCS của s1[1..i] và s2[1..j]
int dp[MAXN][MAXN];
int lcs(string& s1, string& s2) {
    int n = s1.size(), m = s2.size();
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    return dp[n][m];
}



















// Cơ chế hoạt động:
int maxSubarray(vector<int>& a) {
    int maxSum = a[0], cur = a[0];
    for (int i = 1; i < a.size(); i++) {
        cur = max(a[i], cur + a[i]);
        maxSum = max(maxSum, cur);
    }
    return maxSum;
}



















// Cơ chế hoạt động:
// n đồ vật, trọng lượng w[], giá trị v[], túi sức chứa W
int dp[MAXN]; // dp[j] = giá trị lớn nhất với túi sức j
for (int i = 0; i < n; i++)
    for (int j = W; j >= w[i]; j--)   // Duyệt ngược!
        dp[j] = max(dp[j], dp[j - w[i]] + v[i]);



















// Cơ chế hoạt động ($O(n \log n)$):
// O(n log n)
int lis(vector<int>& a) {
    vector<int> dp; // dp[i] = phần tử nhỏ nhất kết thúc dãy tăng độ dài i+1
    for (int x : a) {
        vector<int>::iterator pos = lower_bound(dp.begin(), dp.end(), x);
        if (pos == dp.end()) dp.push_back(x);
        else *pos = x;
    }
    return dp.size();
}



















// Cơ chế hoạt động:
// Số xu ít nhất để tạo thành tổng W từ các mệnh giá coins[]
// dp[j] = số xu ít nhất để tạo tổng j (1 nếu không thể)
int coinChange(vector<int>& coins, int W) {
    vector<int> dp(W + 1, INT_MAX);
    dp[0] = 0;
    for (int j = 1; j <= W; j++)
        for (int c : coins)
            if (c <= j and dp[j - c] != INT_MAX)
                dp[j] = min(dp[j], dp[j - c] + 1);
    return dp[W] == INT_MAX ? -1 : dp[W];
}



















// Cơ chế hoạt động:
// Tìm đường đi từ (1,1) đến (n,m) chọn max tổng, chỉ đi phải/xuống
int dp[MAXN][MAXN], a[MAXN][MAXN];
void gridDP(int n, int m) {
    dp[1][1] = a[1][1];
    for (int i = 2; i <= n; i++) dp[i][1] = dp[i-1][1] + a[i][1];
    for (int j = 2; j <= m; j++) dp[1][j] = dp[1][j-1] + a[1][j];
    for (int i = 2; i <= n; i++)
        for (int j = 2; j <= m; j++)
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + a[i][j];
    // dp[n][m] là kết quả
}



















// Cơ chế hoạt động:
// Mỗi bước leo 1 hoặc 2 bậc, đếm số cách leo n bậc
long long climbStairs(int n) {
    if (n <= 1) return 1;
    long long a = 1, b = 1;
    for (int i = 2; i <= n; i++) {
        long long c = a + b;
        a = b; b = c;
    }
    return b;
}
// Đây chính là số Fibonacci! climbStairs(n) = fib(n+1)



















// 12.1 Thao Tác Cơ Bản
string s = "hello";
s.length() hoặc s.size()    // Độ dài
s.substr(pos, len)           // Cắt chuỗi con
s.find("ll")                 // Tìm vị trí (string::npos nếu không có)
s += "world"                 // Ghép chuỗi
reverse(s.begin(), s.end())  // Đảo chuỗi
sort(s.begin(), s.end())     // Sắp xếp ký tự
// Chuyển bất kỳ kiểu gì  chuỗi (dùng stringstream)
string toString(long long val) {
    stringstream ss; ss << val;
    return ss.str();
}
// Chuyển chuỗi  số (dùng stringstream)
long long stoLLong(string s) {
    stringstream ss(s);
    long long res;
    ss >> res;
    return res;
}



















// 12.2 Palindrome (Chuỗi Đối Xứng)
bool isPalindrome(const string& s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}



















// 12.2 Palindrome (Chuỗi Đối Xứng)
bool isPalindromeFast(const string& s) {
    int lo = 0, hi = s.size() - 1;
    while (lo < hi) {
        if (s[lo] != s[hi]) return false;
        lo++; hi--;
    }
    return true;
}



















// 12.3 Thuật Toán KMP  Tìm Chuỗi Con ($O(n+m)$)
// Xây dựng bảng failure function
vector<int> buildKMP(const string& pattern) {
    int m = pattern.size();
    vector<int> fail(m, 0);
    for (int i = 1; i < m; i++) {
        int j = fail[i - 1];
        while (j > 0 and pattern[i] != pattern[j]) j = fail[j - 1];
        if (pattern[i] == pattern[j]) j++;
        fail[i] = j;
    }
    return fail;
}
// Tìm pattern trong text
vector<int> kmpSearch(const string& text, const string& pattern) {
    vector<int> fail = buildKMP(pattern);
    vector<int> positions;
    int j = 0;
    for (int i = 0; i < (int)text.size(); i++) {
        while (j > 0 and text[i] != pattern[j]) j = fail[j - 1];
        if (text[i] == pattern[j]) j++;
        if (j == (int)pattern.size()) {
            positions.push_back(i - j + 1);
            j = fail[j - 1];
        }
    }
    return positions;
}



















// 13.1 Các Thao Tác Bit Cơ Bản
bool getBit(int n, int k) { return (n >> k) & 1; }



















// 13.1 Các Thao Tác Bit Cơ Bản
int setBit(int n, int k) { return n | (1 << k); }



















// 13.1 Các Thao Tác Bit Cơ Bản
int clearBit(int n, int k) { return n & ~(1 << k); }



















// 13.1 Các Thao Tác Bit Cơ Bản
int toggleBit(int n, int k) { return n ^ (1 << k); }



















// Đếm số bit 1 (popcount - Population Count)
int countOnes(int n)       { return __builtin_popcount(n); }
int countOnes(long long n) { return __builtin_popcountll(n); }



















// Số bit 0 ở đuôi (trailing zeros)
int trailingZeros(int n) { return __builtin_ctz(n); }



















// Xóa bit 1 thấp nhất
n & (n - 1)



















// Lấy bit 1 thấp nhất (lowbit - bit nhỏ nhất đang bật)
n & (-n)



















// 13.2 Bitmask DP  DP Trạng Thái
// dp[mask] = kết quả tốt nhất khi đã chọn tập mask
int dp[1 << MAXN];
// Duyệt tất cả tập con:
for (int mask = 0; mask < (1 << n); mask++)
    for (int i = 0; i < n; i++)
        if (mask & (1 << i)) { /* i có trong tập */ }



















// Duyệt Tập Con (Submask Enumeration):
// Duyệt các submask khác rỗng của mask
for (int sub = mask; sub > 0; sub = (sub - 1) & mask)
    // sub là một tập con của mask (không rỗng)
    // Nhớ thêm xử lý sub=0 (tập rỗng) ở ngoài nếu cần



// Ví dụ: mask = 0b1010 (phần tử 1 và 3)
// Submask: 0b1010, 0b1000, 0b0010  dừng (=0)



















// include <cmath>
#include <cmath>
typedef pair<double,double> Point;



// Khoảng cách hai điểm: $d(A,B) = \sqrt{(x_B-x_A)^2 + (y_B-y_A)^2}$
double dist(Point A, Point B) {
    return sqrt(pow(A.first-B.first,2) + pow(A.second-B.second,2));
}



// Tích có hướng (Cross product): $\overrightarrow{OA} \times \overrightarrow{OB} = (x_A-x_O)(y_B-y_O) - (y_A-y_O)(x_B-x_O)$
double cross(Point O, Point A, Point B) {
    return (A.first-O.first)*(B.second-O.second)
          -(A.second-O.second)*(B.first-O.first);
}
// cross > 0: B bên trái OA | cross < 0: bên phải | cross == 0: thẳng hàng



// Diện tích tam giác: $S = \frac{|\overrightarrow{OA} \times \overrightarrow{OB}|}{2}$
double triangleArea(Point A, Point B, Point C) {
    return fabs(cross(A, B, C)) / 2.0;
}



















// 14.2 Diện Tích Đa Giác (Shoelace Formula)
double polygonArea(vector<Point>& pts) {
    double area = 0;
    int n = pts.size();
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        area += pts[i].first * pts[j].second;
        area -= pts[j].first * pts[i].second;
    }
    return fabs(area) / 2.0;
}



















// 14.3 Convex Hull  Bao Lồi
typedef pair<long long, long long> Point;



// Tích có hướng (dạng số nguyên, tránh sai số)
long long cross(Point O, Point A, Point B) {
    return (long long)(A.first - O.first) * (B.second - O.second)
         - (long long)(A.second - O.second) * (B.first - O.first);
}



// Andrew's Monotone Chain  O(n log n)
// Trả về các đỉnh của Convex Hull theo chiều ngược kim đồng hồ
vector<Point> convexHull(vector<Point> pts) {
    int n = pts.size();
    if (n < 3) return pts;
    sort(pts.begin(), pts.end()); // Sắp theo x, cùng x thì theo y
    vector<Point> hull;



    // Nửa dưới
    for (int i = 0; i < n; i++) {
        while (hull.size() >= 2 and
               cross(hull[hull.size()-2], hull.back(), pts[i]) <= 0)
            hull.pop_back();
        hull.push_back(pts[i]);
    }
    // Nửa trên
    int lower_size = hull.size() + 1;
    for (int i = n - 2; i >= 0; i--) {
        while ((int)hull.size() >= lower_size and
               cross(hull[hull.size()-2], hull.back(), pts[i]) <= 0)
            hull.pop_back();
        hull.push_back(pts[i]);
    }
    hull.pop_back(); // Điểm cuối trùng điểm đầu
    return hull;
}



















// 14.4 Kiểm Tra Điểm Trong Đa Giác
// Ray casting algorithm  O(n)
bool pointInPolygon(vector<Point>& poly, Point p) {
    int n = poly.size();
    bool inside = false;
    for (int i = 0, j = n - 1; i < n; j = i++) {
        double xi = poly[i].first, yi = poly[i].second;
        double xj = poly[j].first, yj = poly[j].second;
        if (((yi > p.second) != (yj > p.second)) and
            (p.first < (xj - xi) * (p.second - yi) / (yj - yi) + xi))
            inside = !inside;
    }
    return inside;
}



















// Mô hình "Binary Search on Answer":
// Tìm giá trị nhỏ nhất x thỏa mãn điều kiện check(x) = true
// Điều kiện: check phải đơn điệu (false...false...true...true)
bool check(int x) {
    // Kiểm tra xem x có thỏa mãn điều kiện không
    // ...
}



int lo = 0, hi = 1e9, ans = hi;
while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (check(mid)) {
        ans = mid;
        hi = mid - 1; // Tìm nhỏ hơn
    } else {
        lo = mid + 1;
    }
}



















// 16.1 Hàm In Tiện Ích
// In một vector  debug nhanh khi thi
void printVec(const vector<long long>& v) {
    for (int i = 0; i < (int)v.size(); i++)
        cout << v[i] << (i == (int)v.size() - 1 ? "" : " ");
    cout << "\n";
}



// In pair
ostream& operator<<(ostream& os, const pair<long long, long long>& p) {
    os << "{" << p.first << ", " << p.second << "}";
    return os;
}



// Dùng: printVec(v); // In tất cả phần tử cách nhau bởi dấu cách



















// 16.2 Chuyển Đổi Kiểu Dữ Liệu
// Bất kỳ kiểu  chuỗi (dùng stringstream)
string toString(long long value) {
    stringstream ss; ss << value;
    return ss.str();
}



// Chuỗi  long long (dùng stringstream  an toàn hơn stoll cho mọi trình biên dịch)
long long stoLLong(const string& s) {
    stringstream ss(s); long long val; ss >> val;
    return val;
}



// Tương đương ngắn gọn với C++11 trở lên:
// int n = stoi(s); long long n = stoll(s); double d = stod(s);
// string s = to_string(n);



















// 16.3 Chuyển Đổi Hệ Cơ Số
// Decimal  hệ cơ số bất kỳ (hỗ trợ cơ số 2 đến 36)
string toBase(long long n, int base) {
    if (n == 0) return "0";
    string res = "";
    while (n > 0) {
        int rem = n % base;
        res += (rem < 10) ? (char)(rem + '0') : (char)(rem - 10 + 'A');
        n /= base;
    }
    reverse(res.begin(), res.end());
    return res;
}
// Hệ cơ số bất kỳ  decimal
long long fromBase(const string& s, int base) {
    long long res = 0;
    for (char c : s) {
        int d = isdigit(c) ? c - '0' : toupper(c) - 'A' + 10;
        res = res * base + d;
    }
    return res;
}



















// include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;



typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;



const int INF = 1e9;
const ll LINF = 1e18;
const int MAXN = 1e5 + 5;
const double PI = acos(-1.0);



void solve() { /*Code ở đây*/ }



int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);



    int t = 1;
    // cin >> t; // Bỏ comment nếu có nhiều test case
    while (t--) solve();
    return 0;
}



















// define per(i, a, b) for (int i = (a); i >= (b); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)



// Dùng:
sort(all(v));         // thay vì sort(v.begin(), v.end())
cout << sz(v);        // thay vì cout << v.size()
v.pb(x);              // thay vì v.push_back(x)
rep(i, 1, n) { ... } // thay vì for (int i = 1; i <= n; i++)



















// Cơ chế hoạt động:
pair<int,int> twoSum(vector<int>& a, int target) {
    int left = 0, right = (int)a.size() - 1;
    while (left < right) {
        int total = a[left] + a[right];
        if (total == target) return {left, right};
        if (total < target) left++;
        else                right--;
    }
    return {-1, -1};
}



















// Cơ chế hoạt động:
pair<int,int> subarraySum(vector<int>& a, long long k) {
    long long sum = 0;
    int left = 0;
    for (int right = 0; right < (int)a.size(); right++) {
        sum += a[right];
        while (sum > k and left <= right) sum -= a[left++];
        if (sum == k) return {left, right};
    }
    return {-1, -1};
}



















// Cơ chế hoạt động:
long long maxSumWindow(vector<int>& a, int k) {
    long long windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += a[i];
    long long maxSum = windowSum;
    for (int right = k; right < (int)a.size(); right++) {
        windowSum += a[right] - a[right - k];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}



















// Cơ chế hoạt động:
int minSubarrayLen(vector<int>& a, int s) {
    int left = 0, minLen = INT_MAX;
    long long sum = 0;
    for (int right = 0; right < (int)a.size(); right++) {
        sum += a[right];
        while (sum >= s) {
            minLen = min(minLen, right - left + 1);
            sum -= a[left++];
        }
    }
    return minLen == INT_MAX ? 0 : minLen;
}



















// Cơ chế hoạt động:
vector<int> maxSlidingWindow(vector<int>& a, int k) {
    deque<int> dq;
    vector<int> result;
    for (int i = 0; i < (int)a.size(); i++) {
        while (!dq.empty() and dq.front() < i - k + 1) dq.pop_front();
        while (!dq.empty() and a[dq.back()] <= a[i]) dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1) result.push_back(a[dq.front()]);
    }
    return result;
}



















// Cơ chế hoạt động:
int maxActivities(vector<pair<int,int>>& intervals) {
    sort(intervals.begin(), intervals.end(),
         [](const pair<int,int>& a, const pair<int,int>& b) {
             return a.second < b.second;
         });
    int count = 1, lastEnd = intervals[0].second;
    for (int i = 1; i < (int)intervals.size(); i++) {
        if (intervals[i].first >= lastEnd) {
            count++;
            lastEnd = intervals[i].second;
        }
    }
    return count;
}



















// 17.3.2 Đổi Tiền Tham Lam (Hệ Tiền Chuẩn)
int coinChangeGreedy(vector<int>& coins, int amount) {
    sort(coins.rbegin(), coins.rend());
    int count = 0;
    for (int c : coins) { count += amount / c; amount %= c; }
    return amount == 0 ? count : -1;
}
//  Chỉ đúng với hệ tiền chuẩn (VD: 1,5,10,25). Trường hợp chung dùng DP!



















// Cơ chế hoạt động:
const int LOG = 20;
int st[100005][LOG];



void buildSparseTable(vector<int>& a, int n) {
    for (int i = 0; i < n; i++) st[i][0] = a[i];
    for (int j = 1; (1 << j) <= n; j++)
        for (int i = 0; i + (1 << j) - 1 < n; i++)
            st[i][j] = min(st[i][j-1], st[i + (1 << (j-1))][j-1]);
}



















// Cơ chế hoạt động:
int queryRMQ(int l, int r) {
    int k = __lg(r - l + 1);  // floor(log2(r-l+1))  built-in GCC
    return min(st[l][k], st[r - (1 << k) + 1][k]);
}



















// 17.5 Segment Tree Lazy Propagation
const int MAXN = 1e5 + 5;
long long treeLazy[4 * MAXN], lazy[4 * MAXN];



void pushDown(int node) {
    if (lazy[node] != 0) {
        for (int c : {2*node, 2*node+1}) {
            treeLazy[c] += lazy[node];
            lazy[c]     += lazy[node];
        }
        lazy[node] = 0;
    }
}



















// 17.5 Segment Tree Lazy Propagation
void updateRange(int node, int l, int r, int ql, int qr, long long val) {
    if (qr < l or r < ql) return;
    if (ql <= l and r <= qr) { treeLazy[node] += val; lazy[node] += val; return; }
    pushDown(node);
    int mid = (l + r) / 2;
    updateRange(2*node, l, mid, ql, qr, val);
    updateRange(2*node+1, mid+1, r, ql, qr, val);
    treeLazy[node] = treeLazy[2*node] + treeLazy[2*node+1];
}



















// 17.5 Segment Tree Lazy Propagation
long long queryLazy(int node, int l, int r, int ql, int qr) {
    if (qr < l or r < ql) return 0;
    if (ql <= l and r <= qr) return treeLazy[node];
    pushDown(node);
    int mid = (l + r) / 2;
    return queryLazy(2*node, l, mid, ql, qr) + queryLazy(2*node+1, mid+1, r, ql, qr);
}



















// Cơ chế hoạt động:
const long long MOD1 = 1e9 + 7, MOD2 = 1e9 + 9;
const long long BASE1 = 131, BASE2 = 137;
long long h1[100005], h2[100005], pw1[100005], pw2[100005];



void buildHash(const string& s) {
    int n = s.size();
    pw1[0] = pw2[0] = 1;
    h1[0] = h2[0] = 0;
    for (int i = 0; i < n; i++) {
        h1[i+1] = (h1[i] * BASE1 + s[i]) % MOD1;
        h2[i+1] = (h2[i] * BASE2 + s[i]) % MOD2;
        pw1[i+1] = pw1[i] * BASE1 % MOD1;
        pw2[i+1] = pw2[i] * BASE2 % MOD2;
    }
}



















// Cơ chế hoạt động:
pair<long long,long long> getHash(int l, int r) {
    long long g1 = (h1[r+1] - h1[l] * pw1[r-l+1] % MOD1 + MOD1 * 2) % MOD1;
    long long g2 = (h2[r+1] - h2[l] * pw2[r-l+1] % MOD2 + MOD2 * 2) % MOD2;
    return {g1, g2};
}



















// Cơ chế hoạt động:
vector<int> buildZ(const string& s) {
    int n = s.size();
    vector<int> z(n, 0);
    z[0] = n;
    int l = 0, r = 0;
    for (int i = 1; i < n; i++) {
        if (i < r) z[i] = min(r - i, z[i - l]);
        while (i + z[i] < n and s[z[i]] == s[i + z[i]]) z[i]++;
        if (i + z[i] > r) { l = i; r = i + z[i]; }
    }
    return z;
}



















// Tìm pattern trong text bằng Z-Algorithm:
vector<int> zSearch(const string& text, const string& pattern) {
    string concat = pattern + "#" + text; // Chuỗi nối
    vector<int> z = buildZ(concat);
    vector<int> positions;
    int m = (int)pattern.size();
    for (int i = m + 1; i < (int)concat.size(); i++)
        if (z[i] == m) positions.push_back(i - m - 1);
    return positions;
}



















// 17.8.1 Nghịch Đảo Modular (Modular Inverse)
const long long MOD = 1e9 + 7;



long long modInverse(long long a, long long mod) {
    return powMod(a, mod - 2, mod);  // Dùng powMod từ phần 4.3
}



















// 17.8.2 Tổ Hợp Modular  C(n, k) mod p
const int MAXFACT = 1e6 + 5;
long long fact[MAXFACT], invFact[MAXFACT];



void precomputeFact(int n) {
    fact[0] = 1;
    for (int i = 1; i <= n; i++) fact[i] = fact[i-1] * i % MOD;
    invFact[n] = modInverse(fact[n], MOD);
    for (int i = n - 1; i >= 0; i--) invFact[i] = invFact[i+1] * (i+1) % MOD;
}
long long combMod(int n, int k) {
    if (k < 0 or k > n) return 0;
    return fact[n] % MOD * invFact[k] % MOD * invFact[n-k] % MOD;
}



















// 17.8.3 Phép Tính Modular Cơ Bản
long long addMod(long long a, long long b) { return (a + b) % MOD; }
long long subMod(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mulMod2(long long a, long long b) { return a % MOD * (b % MOD) % MOD; }
long long divMod(long long a, long long b)  { return mulMod2(a, modInverse(b, MOD)); }



















// 17.9 0-1 BFS
vector<int> bfs01(int start, int n, vector<pair<int,int>> adj[]) {
    vector<int> dist(n + 1, INT_MAX);
    deque<int> dq;
    dist[start] = 0;
    dq.push_back(start);
    while (!dq.empty()) {
        int u = dq.front(); dq.pop_front();
        for (int i = 0; i < (int)adj[u].size(); i++) {
            int v = adj[u][i].first, w = adj[u][i].second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                if (w == 0) dq.push_front(v);
                else        dq.push_back(v);
            }
        }
    }
    return dist;
}



















// 17.10 Nén Số (Coordinate Compression)
vector<int> compress(vector<int>& a) {
    vector<int> sorted = a;
    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
    vector<int> compressed(a.size());
    for (int i = 0; i < (int)a.size(); i++)
        compressed[i] = lower_bound(sorted.begin(), sorted.end(), a[i]) - sorted.begin() + 1;
    return compressed;
    // Lấy giá trị gốc: sorted[compressed[i] - 1]
}



















// Nén cả query cùng lúc:
vector<int> sortedVals;  // Bảng tra cứu ngược



void compressInPlace(vector<int>& vals) {
    sortedVals = vals;
    sort(sortedVals.begin(), sortedVals.end());
    sortedVals.erase(unique(sortedVals.begin(), sortedVals.end()), sortedVals.end());
    for (int& v : vals)
        v = lower_bound(sortedVals.begin(), sortedVals.end(), v) - sortedVals.begin() + 1;
}



















// Cơ chế hoạt động:
const int MAXN = 1e5 + 5;
const int LOG  = 17;  // 2^17 > 10^5
int  par[MAXN][LOG], dep[MAXN];
vector<int> adjLCA[MAXN];



void dfsLCA(int u, int p, int d) {
    par[u][0] = p;
    dep[u]    = d;
    for (int i = 0; i < (int)adjLCA[u].size(); i++) {
        int v = adjLCA[u][i];
        if (v != p) dfsLCA(v, u, d + 1);
    }
}



void buildLCA(int root, int n) {
    dfsLCA(root, root, 0);
    for (int j = 1; j < LOG; j++)
        for (int u = 1; u <= n; u++)
            par[u][j] = par[par[u][j-1]][j-1];
}



int lca(int u, int v) {
    if (dep[u] < dep[v]) { int t = u; u = v; v = t; }
    int diff = dep[u] - dep[v];
    for (int j = 0; j < LOG; j++)
        if ((diff >> j) & 1) u = par[u][j];
    if (u == v) return u;
    for (int j = LOG - 1; j >= 0; j--)
        if (par[u][j] != par[v][j]) { u = par[u][j]; v = par[v][j]; }
    return par[u][0];
}



















// Cơ chế hoạt động:
int distLCA(int u, int v) { return dep[u] + dep[v] - 2 * dep[lca(u, v)]; }



















// 19.1 Đường Kính Cây
int diameter = 0;
int dpDiam[MAXN];
vector<int> adjTree[MAXN];



void dfsDiam(int u, int p) {
    dpDiam[u] = 0;
    for (int i = 0; i < (int)adjTree[u].size(); i++) {
        int v = adjTree[u][i];
        if (v == p) continue;
        dfsDiam(v, u);
        diameter      = max(diameter, dpDiam[u] + dpDiam[v] + 1);
        dpDiam[u]     = max(dpDiam[u], dpDiam[v] + 1);
    }
}
// Gọi: dfsDiam(1, -1);  diameter là đáp án



















// 19.2 Re-rooting DP  Tổng Khoảng Cách
long long dpD[MAXN], dpU[MAXN]; // tổng khoảng cách xuống | đóng góp từ cha.
long long ansRR[MAXN];
int szRR[MAXN], nRR; // nRR là tổng số đỉnh



void dfsDown(int u, int p) {
    szRR[u] = 1; dpD[u] = 0;
    for (int i = 0; i < (int)adjTree[u].size(); i++) {
        int v = adjTree[u][i];
        if (v == p) continue;
        dfsDown(v, u);
        szRR[u]+= szRR[v], dpD[u]+= dpD[v]+szRR[v];
    }
}
void dfsUp(int u, int p) {
    ansRR[u] = dpD[u] + dpU[u];
    for (int i = 0; i < (int)adjTree[u].size(); i++) {
        int v = adjTree[u][i];
        if (v == p) continue; // Khi v làm gốc: bỏ cây con v, thêm phần còn lại n-szRR[v]
        dpU[v] = dpU[u] + (dpD[u] - dpD[v] - szRR[v]) + (nRR - szRR[v]);
        dfsUp(v, u);
    }
} // Gọi: dfsDown(1,-1); dpU[1]=0; dfsUp(1,-1);  ansRR[] là đáp án



















// 20. Cầu & Khớp  Tarjan (Bridges & Articulation Points)
int  disc[MAXN], low[MAXN], timerTA = 0;
bool isAP[MAXN];
vector<pair<int,int>> bridges; // (u, v) là cầu
vector<int> adjTA[MAXN];



void tarjan(int u, int parent) {
    disc[u] = low[u] = ++timerTA;
    int childCnt = 0;
    for (int i = 0; i < (int)adjTA[u].size(); i++) {
        int v = adjTA[u][i];
        if (disc[v] == 0) {           // Chưa thăm
            childCnt++;
            tarjan(v, u);
            low[u] = min(low[u], low[v]);
            // Bridge
            if (low[v] > disc[u]) bridges.push_back({u, v});
            // Articulation point
            if (parent == -1 and childCnt > 1) isAP[u] = true;
            if (parent != -1 and low[v] >= disc[u]) isAP[u] = true;
        } else if (v != parent)     // Back edge
            low[u] = min(low[u], disc[v]);  
    }
}
// Gọi: for u=1..n: if(!disc[u]) tarjan(u,-1);



















// Cơ chế hoạt động:
vector<int> adjK[MAXN], radjK[MAXN];
bool visitedK[MAXN];
vector<int> orderK;
int sccId[MAXN];



void dfs1K(int u) {
    visitedK[u] = true;
    for (int i = 0; i < (int)adjK[u].size(); i++) {
        int v = adjK[u][i];
        if (!visitedK[v]) dfs1K(v);
    }
    orderK.push_back(u);
}
void dfs2K(int u, int id) {
    sccId[u] = id;
    for (int i = 0; i < (int)radjK[u].size(); i++) {
        int v = radjK[u][i];
        if (sccId[v] == -1) dfs2K(v, id);
    }
}



int kosaraju(int n) {
    for (int i = 1; i <= n; i++)
        if (!visitedK[i]) dfs1K(i);
    fill(sccId + 1, sccId + n + 1, -1);
    int cnt = 0;
    for (int i = (int)orderK.size() - 1; i >= 0; i--)
        if (sccId[orderK[i]] == -1)
            dfs2K(orderK[i], cnt++);
    return cnt; // Số SCC
}



















// Ma trận chuyển trạng thái của Fibonacci:
typedef vector<vector<long long>> Matrix;
const long long MATMOD = 1e9 + 7;



Matrix multiplyMat(const Matrix& A, const Matrix& B) {
    int n = (int)A.size();
    Matrix C(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++)
        for (int k = 0; k < n; k++) {
            if (A[i][k] == 0) continue;
            for (int j = 0; j < n; j++)
                C[i][j]= (C[i][j]+ A[i][k]% MATMOD*(B[k][j]% MATMOD))% MATMOD;
        }
    return C;
}



Matrix matPow(Matrix A, long long p) {
    int n = (int)A.size();
    Matrix result(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++) result[i][i] = 1; // Ma trận đơn vị
    while (p > 0) {
        if (p & 1) result = multiplyMat(result, A);
        A  = multiplyMat(A, A);
        p >>= 1;
    }
    return result;
}



















// Ví dụ: Fibonacci số thứ n
long long fibonacci(long long n) {
    if (n <= 1) return n;
    // [[1,1],[1,0]]^n  [0][0] = fib(n+1), [0][1] = fib(n)
    Matrix base = {{1,1},{1,0}};
    Matrix res  = matPow(base, n);
    return res[0][1]; // fib(n)
}



















// Cơ chế hoạt động:
const long long LINF = 1e18;



long long primMST(int n, vector<pair<int,int>> adjP[]) {
    // adjP[u] = {v, weight}
    vector<long long> key(n + 1, LINF);
    vector<bool> inMST(n + 1, false);
    // min-heap: {key, vertex}
    priority_queue<pair<long long,int>, vector<pair<long long,int>>,
                   greater<pair<long long,int>>> pq;
    key[1] = 0;
    pq.push({0LL, 1});
    long long total = 0;
    while (!pq.empty()) {
        pair<long long,int> top = pq.top(); pq.pop();
        long long d = top.first;
        int u       = top.second;
        if (inMST[u]) continue;
        inMST[u] = true;
        total += d;
        for (int i = 0; i < (int)adjP[u].size(); i++) {
            int v       = adjP[u][i].first;
            long long w = adjP[u][i].second;
            if (!inMST[v] and w < key[v]) {
                key[v] = w;
                pq.push({w, v});
            }
        }
    }
    return total;
}



















// 24. SPFA  SHORTEST PATH FASTER ALGORITHM
vector<long long> spfa(int start, int n, vector<pair<int,int>> adjS[]) {
    // adjS[u] = {v, weight}
    const long long INF_S = 1e18;
    vector<long long> dist(n + 1, INF_S);
    vector<bool> inQueue(n + 1, false);
    queue<int> q;
    dist[start] = 0;
    q.push(start);
    inQueue[start] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        inQueue[u] = false;
        for (int i = 0; i < (int)adjS[u].size(); i++) {
            int v       = adjS[u][i].first;
            long long w = adjS[u][i].second;
            if (dist[u] != INF_S and dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                if (!inQueue[v]) {
                    q.push(v);
                    inQueue[v] = true;
                }
            }
        }
    }
    return dist;
}



















// 25.1 Extended GCD (Giải Phương Trình Bất Định / Diophantine)
long long extGCD(long long a, long long b, long long& x, long long& y) {
    if (b == 0) { x = 1; y = 0; return a; }
    long long x1, y1;
    long long g = extGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}



















// Cơ chế hoạt động:
long long eulerPhi(long long n) {
    long long result = n;
    for (long long p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0) n /= p;
            result -= result / p;
        }
    }
    if (n > 1) result -= result / n;
    return result;
}



















// Sàng  cho mọi số từ 1 đến n:
void phiSieve(int n, vector<long long>& phi) {
    phi.resize(n + 1);
    for (int i = 0; i <= n; i++) phi[i] = i;
    for (int p = 2; p <= n; p++)
        if (phi[p] == p) // p là số nguyên tố
            for (int j = p; j <= n; j += p)
                phi[j] -= phi[j] / p;
}



















// 25.3 Phương Trình Đồng Dư Trung Quốc (CRT)
// Trả về {x, lcm(m1,m2)} hoặc {-1,-1} nếu vô nghiệm
pair<long long,long long> crt(long long r1, long long m1,
                               long long r2, long long m2) {
    long long g = __gcd(m1, m2), x, y;
    if ((r2 - r1) % g != 0) return {-1LL, -1LL};
    long long lcm = m1 / g * m2;
    extGCD(m1, m2, x, y);
    // x là nghịch đảo của (m1/g) mod (m2/g) nhân với (r2-r1)/g
    long long mod = m2 / g;
    long long diff = (r2 - r1) / g % mod;
    x = (x % mod + mod) % mod;
    long long sol = (r1 + m1 % lcm * (diff * x % mod) % lcm) % lcm;
    if (sol < 0) sol += lcm;
    return {sol, lcm};
}



















// 26. MANACHER  PALINDROME DÀI NHẤT O(n)
// Trả về độ dài palindrome dài nhất trong s
int manacher(const string& s) {
    // Chuỗi biến đổi: "|a|b|b|a|"
    string t = "|";
    for (int i = 0; i < (int)s.size(); i++) {
        t += s[i];
        t += '|';
    }
    int n = (int)t.size();
    vector<int> p(n, 0);
    int c = 0, r = 0; // trung tâm, biên phải hiện tại
    for (int i = 0; i < n; i++) {
        if (i < r)
            p[i] = min(r - i, p[2 * c - i]);
        while (i - p[i] - 1 >= 0 and i + p[i] + 1 < n
               and t[i - p[i] - 1] == t[i + p[i] + 1])
            p[i]++;
        if (i + p[i] > r) { c = i; r = i + p[i]; }
    }
    int maxLen = 0;
    for (int i = 0; i < n; i++) maxLen = max(maxLen, p[i]);
    return maxLen;
}



// Tìm vị trí và độ dài tất cả palindrome cực đại
// p[i] trên chuỗi t tương ứng với palindrome độ dài p[i] trong s gốc



















// 27.1 Ternary Search trên số thực
// f(x) là hàm lồi (convex): tìm x* tối thiểu hóa f(x)
// Cần định nghĩa f trước khi dùng
double ternarySearchReal(double lo, double hi) {
    for (int iter = 0; iter < 200; iter++) {
        double m1 = lo + (hi - lo) / 3.0;
        double m2 = hi - (hi - lo) / 3.0;
        if (f(m1) < f(m2)) hi = m2;
        else                lo = m1;
    }
    return (lo + hi) / 2.0;
}



















// 27.2 Ternary Search trên số nguyên
// Tìm x nguyên trong [lo, hi] tối thiểu hóa f(x)
long long ternarySearchInt(long long lo, long long hi) {
    while (hi - lo > 2) {
        long long m1 = lo + (hi - lo) / 3;
        long long m2 = hi - (hi - lo) / 3;
        if (f(m1) <= f(m2)) hi = m2;
        else                 lo = m1;
    }
    long long ans = lo;
    for (long long i = lo + 1; i <= hi; i++)
        if (f(i) < f(ans)) ans = i;
    return ans;
}



















// Cơ chế hoạt động:
int parHLD[MAXN], depHLD[MAXN], szHLD[MAXN], heavyHLD[MAXN];
int headHLD[MAXN], posHLD[MAXN];
int curPosHLD = 1;
vector<int> adjHLD[MAXN];



int dfs1HLD(int u, int p, int d) {
    parHLD[u] = p; depHLD[u] = d; szHLD[u] = 1; heavyHLD[u] = -1;
    int maxSz = 0;
    for (int i = 0; i < (int)adjHLD[u].size(); i++) {
        int v = adjHLD[u][i];
        if (v == p) continue;
        szHLD[u] += dfs1HLD(v, u, d + 1);
        if (szHLD[v] > maxSz) { maxSz = szHLD[v]; heavyHLD[u] = v; }
    }
    return szHLD[u];
}



void dfs2HLD(int u, int h) {
    headHLD[u] = h;
    posHLD[u]  = curPosHLD++;
    if (heavyHLD[u] != -1) dfs2HLD(heavyHLD[u], h);
    for (int i = 0; i < (int)adjHLD[u].size(); i++) {
        int v = adjHLD[u][i];
        if (v != parHLD[u] and v != heavyHLD[u]) dfs2HLD(v, v);
    }
}



// Đường đi uv: tích lũy query trên Segment Tree
// (Gọi segQuery(l, r)  từ Segment Tree hoặc BIT đã xây trên posHLD[])
long long hldQuery(int u, int v) {
    long long res = 0;
    while (headHLD[u] != headHLD[v]) {
        if (depHLD[headHLD[u]] < depHLD[headHLD[v]]) {
            int t = u; u = v; v = t;
        }
        // res += segQuery(posHLD[headHLD[u]], posHLD[u]);
        u = parHLD[headHLD[u]];
    }
    if (depHLD[u] > depHLD[v]) { int t = u; u = v; v = t; }
    // res += segQuery(posHLD[u], posHLD[v]);
    return res;
}
// Khởi tạo: dfs1HLD(1,-1,0); dfs2HLD(1,1);



















// Cơ chế hoạt động:
struct MoQuery {
    int l, r, idx;
};



int moBlockSz; // moBlockSz (Kích thước khối)



bool moCmp(const MoQuery& a, const MoQuery& b) {
    int ba = a.l / moBlockSz;
    int bb = b.l / moBlockSz;
    if (ba != bb) return ba < bb;
    return (ba & 1) ? (a.r > b.r) : (a.r < b.r);
}



int curMoL, curMoR;
long long curMoAns;
int moFreq[MAXN]; // Thay đổi tùy bài toán



void moAdd(int pos, int val[]) {
    moFreq[val[pos]]++;
    // curMoAns += ...; (tùy bài)
}



void moRemove(int pos, int val[]) {
    moFreq[val[pos]]--;
    // curMoAns -= ...; (tùy bài)
}



vector<long long> solveQueries(int val[], int n,
                                vector<MoQuery>& queries) {
    moBlockSz = max(1, (int)sqrt((double)n));
    sort(queries.begin(), queries.end(), moCmp);
    curMoL = 0; curMoR = -1; curMoAns = 0;
    vector<long long> ans(queries.size());
    for (int i = 0; i < (int)queries.size(); i++) {
        int l = queries[i].l, r = queries[i].r;
        while (curMoR < r) moAdd(++curMoR, val);
        while (curMoL > l) moAdd(--curMoL, val);
        while (curMoR > r) moRemove(curMoR--, val);
        while (curMoL < l) moRemove(curMoL++, val);
        ans[queries[i].idx] = curMoAns;
    }
    return ans;
}



















// Cơ chế hoạt động:
struct LiChaoLine {
    long long m, b;
    LiChaoLine() : m(0), b((long long)4e18) {}
    LiChaoLine(long long m, long long b) : m(m), b(b) {}
    long long eval(long long x) const { return m * x + b; }
};



struct LiChaoTree {
    vector<LiChaoLine> seg;
    vector<long long>  xs;
    int n;



    void init(vector<long long>& xCoords) {
        xs = xCoords;
        sort(xs.begin(), xs.end());
        xs.erase(unique(xs.begin(), xs.end()), xs.end());
        n = (int)xs.size();
        seg.assign(4 * n + 5, LiChaoLine());
    }



    void addLine(int node, int lo, int hi, LiChaoLine line) {
        int mid = (lo + hi) / 2;
        bool leftBetter = line.eval(xs[lo])  < seg[node].eval(xs[lo]);
        bool midBetter  = line.eval(xs[mid]) < seg[node].eval(xs[mid]);
        if (midBetter) swap(seg[node], line);
        if (lo == hi) return;
        if (leftBetter != midBetter) addLine(2*node,   lo,      mid, line);
        else                         addLine(2*node+1, mid+1,   hi,  line);
    }



    void addLine(long long m, long long b) {
        addLine(1, 0, n - 1, LiChaoLine(m, b));
    }



    long long query(int node, int lo, int hi, int idx) {
        long long res = seg[node].eval(xs[idx]);
        if (lo == hi) return res;
        int mid = (lo + hi) / 2;
        if (idx <= mid) return min(res, query(2*node,   lo,    mid, idx));
        else             return min(res, query(2*node+1, mid+1, hi,  idx));
    }



    long long query(long long x) {
        int idx = (int)(lower_bound(xs.begin(), xs.end(), x) - xs.begin());
        return query(1, 0, n - 1, idx);
    }
};



















// Dijkstra's Algorithm
void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    fill(dist, dist + n + 1, INF);
    dist[start] = 0;
    pq.push({0, start});
    while(!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if(d > dist[u]) continue;
        for(auto& edge : adj[u]) {
            int v = edge.to, weight = edge.weight;
            if(dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}



// Knuth-Morris-Pratt (KMP) Algorithm
vector<int> computeLPS(string pat) {
    int m = pat.length();
    vector<int> lps(m);
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < m) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}



// 0/1 Knapsack Problem (DP)
int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<int> dp(W + 1, 0);
    for (int i = 0; i < n; i++) {
        for (int w = W; w >= wt[i]; w--) {
            dp[w] = max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}



















// Sweepline Algorithm - Max Overlapping Intervals
struct Event {
    int pos;
    int type; // 1 for start, -1 for end
    bool operator<(const Event& other) const {
        if (pos == other.pos) return type < other.type;
        return pos < other.pos;
    }
};



int maxOverlappingIntervals(vector<pair<int, int>>& intervals) {
    vector<Event> events;
    for (auto& p : intervals) {
        events.push_back({p.first, 1});
        events.push_back({p.second, -1});
    }
    sort(events.begin(), events.end());
    int current_overlap = 0, max_overlap = 0;
    for (auto& e : events) {
        current_overlap += e.type;
        max_overlap = max(max_overlap, current_overlap);
    }
    return max_overlap;
}




















// Traveling Salesperson Problem (TSP) - Normal (Returning to start)
int tsp_normal(int mask, int pos) {
    if (mask == (1 << n) - 1) return dist[pos][0]; // Return to start (0)
    if (dp[mask][pos] != -1) return dp[mask][pos];
    int ans = INF;
    for (int city = 0; city < n; city++) {
        if ((mask & (1 << city)) == 0) {
            int newAns = dist[pos][city] + tsp_normal(mask | (1 << city), city);
            ans = min(ans, newAns);
        }
    }
    return dp[mask][pos] = ans;
}




















// Traveling Salesperson Problem (TSP) - Not Going Back (Path instead of Tour)
int tsp_no_return(int mask, int pos) {
    if (mask == (1 << n) - 1) return 0; // Don't add cost to return
    if (dp[mask][pos] != -1) return dp[mask][pos];
    int ans = INF;
    for (int city = 0; city < n; city++) {
        if ((mask & (1 << city)) == 0) {
            int newAns = dist[pos][city] + tsp_no_return(mask | (1 << city), city);
            ans = min(ans, newAns);
        }
    }
    return dp[mask][pos] = ans;
}




















// Max Sum Subsequence Divisible by K (Non-contiguous)
int maxSumSubsequenceDivK(vector<int>& arr, int k) {
    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(k, -1e9));
    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int rem = 0; rem < k; rem++) {
            if (dp[i][rem] != -1e9) {
                // Option 1: Don't pick current element
                dp[i+1][rem] = max(dp[i+1][rem], dp[i][rem]);
                // Option 2: Pick current element
                int new_rem = ((rem + arr[i]) % k + k) % k;
                dp[i+1][new_rem] = max(dp[i+1][new_rem], dp[i][rem] + arr[i]);
            }
        }
    }
    return dp[n][0];
}




















// Max Sum Path in 2D Array Divisible by K (Moving Right and Down from 0,0 to n-1,m-1)
int maxPathSumDivK(vector<vector<int>>& grid, int k) {
    int n = grid.size(), m = grid[0].size();
    // dp[i][j][rem] = max sum to reach (i, j) with remainder rem
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k, -1e9)));
    
    dp[0][0][grid[0][0] % k] = grid[0][0];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int rem = 0; rem < k; rem++) {
                if (dp[i][j][rem] != -1e9) {
                    // Move Right
                    if (j + 1 < m) {
                        int val = grid[i][j+1];
                        int new_rem = (rem + val) % k;
                        dp[i][j+1][new_rem] = max(dp[i][j+1][new_rem], dp[i][j][rem] + val);
                    }
                    // Move Down
                    if (i + 1 < n) {
                        int val = grid[i+1][j];
                        int new_rem = (rem + val) % k;
                        dp[i+1][j][new_rem] = max(dp[i+1][j][new_rem], dp[i][j][rem] + val);
                    }
                }
            }
        }
    }
    return dp[n-1][m-1][0];
}




















// Get All Possible Subset Sums from an array using std::bitset (Ultra Fast)
// Note: MAX_SUM must be a compile-time constant. Adjust based on problem constraints.
const int MAX_SUM = 100005; 
vector<int> getAllSubsetSumsBitset(vector<int>& arr) {
    bitset<MAX_SUM> dp;
    dp[0] = 1;
    
    int total_sum = 0;
    for (int x : arr) {
        // Bitwise shift processes 64 states simultaneously!
        dp |= (dp << x);
        total_sum += x;
    }
    
    vector<int> possible_sums;
    for (int j = 0; j <= total_sum; j++) {
        if (dp[j]) possible_sums.push_back(j);
    }
    return possible_sums;
}




// Subset Sum Problem (DP) - Check if a specific target sum is possible
bool isSubsetSum(vector<int>& arr, int target) {
    int n = arr.size();
    vector<bool> dp(target + 1, false);
    dp[0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = target; j >= arr[i]; j--) {
            if (dp[j - arr[i]]) {
                dp[j] = true;
            }
        }
    }
    return dp[target];
}




/*
31. Loi Khuyen Tong Quat Khi Thi



Truoc Khi Thi
- On lai tat ca template code: GCD, sang, BFS, DFS, Dijkstra, DP co ban.
- Ghi nho do phuc tap: n <= 10^6 -> O(n log n) on; n <= 10^3 -> O(n^2) on; n <= 20 -> O(2^n) on.



Trong Khi Thi
- Doc ky de, ghi ra n lon nhat va thoi gian gioi han.
- Uoc luong do phuc tap: Moc tham khao 10^8 phep tinh/giay.
- Giai bai de nhat truoc. Test tay vi du truoc khi nop.
- Can than tran so: Dung long long khi nhan.



Bang Uoc Luong Thuat Toan Theo n
n <= 10       | O(n!) - Quay lui, brute force
n <= 20       | O(2^n), O(n^2 * 2^n) - Bitmask DP
n <= 300      | O(n^3) - Floyd-Warshall, DP 3 chieu
n <= 5,000    | O(n^2) - DP binh thuong, Bellman-Ford
n <= 10^5     | O(n log n) - Sort, BFS/DFS, Dijkstra, DP + BIT
n <= 10^6     | O(n) hoac O(n log n) - Prefix sum, sang
n <= 10^7     | O(n) - Sang, mang don gian



Bang Chon Thuat Toan Duong Di Ngan Nhat
1 nguon, khong am           | Dijkstra          | O((V+E) log V)
1 nguon, co am              | Bellman-Ford/SPFA | O(VE)
Moi cap dinh, V <= 300      | Floyd-Warshall    | O(V^3)
Khong trong so (dem canh)   | BFS               | O(V+E)
Cay khung nho nhat          | Kruskal / Prim    | O(E log E)



Cac Loi Hay Gap
- Quen long long khi nhan hai so int.
- Loi truy cap ngoai mang (Array out of bounds).
- Quen khoi tao dist[], dp[], visited[] -> gia tri rac.
- Sai chi so (i < n vs i <= n).
- Dijkstra voi canh am -> WRONG ANSWER.
- Dung == so sanh so double -> dung fabs(a-b) < 1e-9.
*/
