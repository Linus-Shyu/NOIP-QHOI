#include <iostream>
#include <gmpxx.h> // 使用 GMP 库处理大数

using namespace std;

int main() {
    mpz_class X, a, b, c, d, e, totalWeight, lastBagWeight;

    // 输入数据
    cin >> X >> a >> b >> c >> d >> e;

    // 计算总重量
    totalWeight = a + b + c + d + e;

    // 计算最后一个袋子装的重量
    lastBagWeight = totalWeight % X;

    // 输出结果
    cout << "最后一个袋子装的重量为：" << lastBagWeight << endl;

    return 0;
}
