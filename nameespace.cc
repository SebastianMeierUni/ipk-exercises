
namespace power{
	
	int iterative (int q, int n){
		if(n<0){
			return 0;
		}else if(n == 0){	
			return 1;
		}else if(q == 0){
			return 0;
		}else{
			int t=q;
			for(int = 1;i<n;i=i+1){
				t=t*q;
			}
			return t;
		}
	
	}

	int recursive(int q, int n){
		if(n==0){
			return 1;
		}else{
			q*recursive(q,n-1);
		}


	}

}//ende namespace power

namespace 