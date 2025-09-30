class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        bool directions[4] = {true, false, false, false}; // right -> down -> left -> up
        int counter = 0;

        auto next = [&]() {
            directions[counter % 4] = false;
            counter++;
            directions[counter % 4] = true;
        };

        int row = 0;
        int col = 0;
        int corner = 0;


        for (int step = 1; step <= n * n; ++step) {
            if (directions[0]) { 
                matrix[row][col++] = step;
                if (col > n - 1 - corner) {
                    col--; row++;
                    next();
                }
            } 
            else if (directions[1]) { 
                matrix[row++][col] = step;
                if (row > n - 1 - corner) {
                    row--; col--;
                    next();
                }
            } 
            else if (directions[2]) { 
                matrix[row][col--] = step;
                if (col < corner) {
                    col++; row--;
                    next();
                }
            } 
            else if (directions[3]) { 
                matrix[row--][col] = step;
                if (row < corner + 1) {
                    row++; col++;
                    corner++;
                    next();
                }
            }
        }

        return matrix;
    }
};
