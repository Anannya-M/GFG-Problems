#include <iostream>

using namespace std;

int dfs(int n){
	if(n%3 == 0){
		return n/3;
	}
	
	return n-1;
}

int minimumStep(int n){
        
        int steps = 0;
        while(n > 1){
            n = dfs(n);
            steps += 1;
        }
        
        return steps;
    }
    
int main(){
	int nodes = 9;
	
	int minimum_edges = minimumStep(nodes);
	
	cout<<"Minimum number of edges: "<<minimum_edges<<endl;
	
	return 0;
}
