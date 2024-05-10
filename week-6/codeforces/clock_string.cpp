#include <iostream>

bool segmentsIntersect(int a, int b, int c, int d) {
    if (a > b) std::swap(a, b);
    if (c > d) std::swap(c, d);
    
    if ((a < c && c < b && b < d) || (c < a && a < d && d < b)) {
        return true; // Segments intersect in a clockwise manner
    } else {
        return false; // Segments do not intersect in a clockwise manner
    }
}

int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        
        if (segmentsIntersect(a, b, c, d)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    
    return 0;
}
