//https://laptrinh24h.vn/problem/fhc14b04/
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    int Max = -1, Min = 1e9;

    for(int i = 0; i < n; ++i){

    	for(int j = 0; j < m; ++j){
            
    		scanf("%d", &a[i][j]);

            Max = max(Max, a[i][j]);
            Min = min(Min, a[i][j]); 
		}

	}

	//day vi tri nho nhat va lon nhat vao vector v1 va v2
    vector < pair <int, int> > v1, v2;

    for(int i = 0;i < n; ++i){

    	for(int j = 0;j < m; ++j){

    		if(a[i][j] == Min){
                pair <int, int> p = make_pair(i + 1, j + 1);
    			v1.push_back(p);
			}

			if(a[i][j] == Max){
                pair <int, int> p = make_pair(i + 1, j + 1);
				v2.push_back(p);
			}

		}

	}

	//in ra vi tri cac so nho nhat
    cout << Min << endl;
	for(auto it : v1){
		cout << it.first << " " << it.second << endl;
	}

	// in ra vi tri cac so lon nhat
    cout << Max << endl;
	for(auto it : v2){
		cout << it.first << " " << it.second << endl;
	}
}