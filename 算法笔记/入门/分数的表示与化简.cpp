 #include<cmath>
 #include<cstdio>
 using namespace std;
 struct Fraction{
 	long long up,down;
 }a,b; 
 
 int gcd(int a,int b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
Fraction reduction(Fraction result){
	if(result.down<0){
		result.up=-result.up;
		result.down=-result.down;
	}
	if(result.up==0){
		result.down=1;
	}else{
		int d=gcd(abs(result.up),abs(result.down));
		result.up/=d;
		result.down/=d;
	}
	return result;
} 
Fraction add(Fraction f1,Fraction f2){
	Fraction result;
	result.up=f1.up*f2.down+f2.up*f1.down;
	result.down=f1.down*f2.down;
	return reduction(result);
}
Fraction minu(Fraction f1,Fraction f2){
	Fraction result;
	result.up=f1.up*f2.down-f2.up*f1.down;
	result.down=f1.down*f2.down;
	return reduction(result);
}
Fraction multi(Fraction f1,Fraction f2){
	Fraction result;
	result.up=f1.up*f2.up;
	result.down=f2.down*f2.down;
	return reduction(result);
} 
Fraction divide(Fraction f1,Fraction f2){
	Fraction result;
	result.up=f1.up*f2.down;
	result.down=f1.down*f2.up;
	return reduction(result);
}
void output(Fraction f1){
	if(f1.down==1){
		printf("%lld",f1.up);
		return;
	}
	if(f1.up>f1.down){
		printf("%lld(%lld/%lld)",f1.up/f1.down,(int)abs(f1.up)%f1.down,f1.down);
	}else{
		printf("%lld/%lld",f1.up,f1.down);
	}
} 
int main(){
	Fraction result;
	a.up=1;a.down=6;
	b.up=1;b.down=13;
	if(reduction(b).up!=0){
		result = divide(a,b);
		output(reduction(result));

	}else{
		printf("ERROR:除数不可为零");
	}
	
}

