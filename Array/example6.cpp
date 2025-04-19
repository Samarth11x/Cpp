#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cout << "Enter the number of rows: ";
    std::cin >> m;

    std::cout << "Enter the number of columns: ";
    std::cin >> n;

    std::vector<std::vector<int>> matrix_1(m,std::vector<int>(n));
    std::vector<std::vector<int>> matrix_2(m, std::vector<int>(n));
    std::vector<std::vector<int>> result(m, std::vector<int>(n));

    // Input elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "Enter the element of matrix 1 row " << i << ", column " << j << ": ";
            std::cin >> matrix_1[i][j];
        }
        std::cout<<'\n';
    }

    // Input elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "Enter the element of matrix 2 row " << i << ", column " << j << ": ";
            std::cin >> matrix_2[i][j] ;
        }
        std::cout << '\n';
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            result[i][j] = matrix_1[i][j] + matrix_2[i][j];

        }
    }
    
    // Output elements
    std::cout << "Array elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << result[i][j];
        }
        std::cout << '\n';
    }

    return 0;
}