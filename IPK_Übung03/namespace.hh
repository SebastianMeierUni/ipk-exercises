
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
			for(int i = 1;i<n;i=i+1){
				t=t*q;
			}
			return t;
		}
		return 0;
	}

	int recursive(int q, int n){
		if(n<0){
			return 0;
		}else if(n==0){
			return 1;
		}else{
			return recursive(q,n-1) * q;
		}
		return 0;
	}
	
	int naive(int q, int n){
		if(n<0){
			return 0;
		}else if(n==0){
			return 1;
		
		}else{
			if(n%2 == 0){
				int ergebnis = naive(q,n/2);
				return ergebnis * ergebnis;
			}
			return naive(q,n-1) * q;
		}
		return 0;
		
	}

	double root_recursive(double q, int n){
		if(n<0){
			return 0;
		}else if(n==0){
			return 1;
		}else{
			return root_recursive(q,n-1) * q;
		}
		return 0;
	}

	double root_iterative(double q, int n, int steps){
		double a=q;
		if(q<0 && n%2==0){
			return 0;
		}else if(n<1.0){
			return 0;
		}else if(steps<1){
			return 0;
		}else{
			for(int i = 1; i < steps ; i = i + 1){	
				a = a + ((1.0/n) * ((q/(root_recursive(a,n-1)))-a));
			}
			return a;
		}
		return 0;
	}

}//ende namespace power