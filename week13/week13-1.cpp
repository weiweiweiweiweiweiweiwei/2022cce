class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans; ///step01
        int M = matrix.size(); ///step03
        int N = matrix[0].size();///step03
        int i=0, j=0;///step04
        int dir=0;///0:�k, 1:�U, 2:��, 3:�k
        ///int di=0, dj=1;///�n��V ///step05
        int di[4] = {0, 1, 0, -1};
        int dj[4] = {1, 0, -1, 0};
        int left=0, right = N-1, up=1, down=M-1;///�W�U���k���
        for(int k=0; k<M*N; k++){
            ans.push_back( matrix[i][j] );///step04
            if(dir==0 && j==right){ ///���k,�J��k���,���V(�ç��ܷs���)
                dir++; ///step06
                right--;
            }else if(dir==1 && i==down){ ///���U,�J��U���(�ç��ܷs���)
                dir++;
                down--;
            }else if(dir==2 && j==left){ ///����,�J�쥪���(�ç��ܷs���)
                dir++;
                left++;
            }else if(dir==3 && i==up){ ///���W,�J��W���(�ç��ܷs���)
                dir = 0; ///step06�A�^��k��V
                up++;
            }
            i += di[dir]; ///step05 �J����ɭn��V
            j += dj[dir];
        }
        return ans; ///step01
    }
};
