//evenOdd check
string evenOddCheck(int num){
    if(num%2) return "Odd";
    return "Even";
}

//sum of first n natural numbers
int sumUptoN(int n){
   // return n*(n+1)/2;
    if(n==1) return 1;
    return n + sumUptoN(n-1);
}

//sum within a range
int sumRange(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=i;
    }
    return sum;
}

//greatest among 3numbers
int maxOf3(int a,int b,int c){
    int tmp=a>b?a:b;
    int res=tmp>c?tmp:c;
    return res;
}


//leap year check
string leapYear(int yr){
    if((yr%400)==0 || (yr%4==0 && yr%100!=0)) return "leap year";
    return "not a leap year";
}

//prime number check
string checkPrime(int n){
    bool isprime=true;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime) return "prime";
    return "not prime";
}

//prime number within an range(a,b)
bool checkPrime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
   int a=10,b=20;
   for(int i=a;i<=b;i++){
       if(checkPrime(i)) cout<<i<<endl;
   }
}

//sum of digits 
int sumDigits(int n){
    int sm=0;
    while(n){
        sm+=(n%10);
        n/=10;
    }
    return sm;
}

//reverse of number
int reverse(int n){
    int rv=0;
    while(n){
        rv=(10*rv)+(n%10);
        n/=10;
    }
    return rv;
}

//palindrome of a string
bool palindrome(string s){
    string tmp=s;
    int l=0,h=s.length()-1;
    while(l<=h){
    	swap(s[l],s[h]);
    	l++;
    	h--;
    }
    if(tmp==s) return true;
    else return false;
}

//check armstrong
bool armstrong(int n){
	string s=to_string(n);
	int len=s.length();
	int tmp=n,sm=0;
	while(n){
		sm+=pow(n%10,len);
		n/=10;
	}
	if(tmp==sm) return 1;
	return 0;
}

//fibonacci iterative 
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n=10;
   int a=0,b=1;
   cout<<a<<" "<<b;
   for(int i=2;i<n;i++){
   	int nxt=a+b;
   	a=b;
   	b=nxt;
   	cout<<" "<<nxt<<" ";
   }
}

//recursive
int fib(int n){
	if(n<=1) return n;
	return fib(n-1) + fib(n-2);
}

//dp appraoch
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=10;
    int dp[n+1];
    dp[0]=0,dp[1]=1;
    for(int i=2;i<n;i++){
    	dp[i]=dp[i-1]+dp[i-2];
    }
    for(int i=0;i<n;i++) cout<<dp[i]<<endl;

    /*
    dp[n]=dp[n-1]+dp[n-2];
    cout<<dp[n]<<endl;	 */
}

//factorial
int fac(int n){
	if(n==1) return n;
	return n*fac(n-1);
}

//power of a number(modular expo)
int exponent(int x,int n){
	int rs=1;
	while(n>0){
		if(n%2==1) rs=rs*x;
		n=n>>1;
		x=x*x;
	}
	return rs;
}

//modular exponentiation
int modularExponentiation(int x, int n, int m) {
	int rs=1;
	while(n>0){
		if(n%2==1) rs=(1LL*rs*(x%m))%m;
		n=n>>1;
		x=(1LL*(x%m)*(x%m))%m;
	}	
	return rs;
}

//factors of a given number and factorial of a number
#include <bits/stdc++.h>
using namespace std;

vector<int> factor(int num){

	vector<int>v;
	for(int i=1;i<=sqrt(num);i++){
		if(num%i==0){
			if(i*i==num) v.push_back(i);
			else{
				v.push_back(i);
				v.push_back(num/i);
			}
		}
	}
	sort(v.begin(),v.end());
	return v;
}

bool checkPerfect(int num){
	vector<int>tmp=factor(num);
	tmp.pop_back();
	int rs=0;
	for(auto it:tmp) rs+=it;
	if(rs==num) return true;
	else return false;
}

int main() {
    vector<int>tmp=factor(28);
    for(auto it:tmp) cout<<it<<" ";
    cout<<endl;
	cout<<checkPerfect(28);
}

//gcd and lcm
int gcd(int a,int b){
	if(a==0) return b;
	return gcd(b%a,a);
}

int lcm(int a,int b){return a*b/gcd(a,b);}

//largest and smallest in an array
int largest(int *ar,int n){
  int tmp=INT_MIN;
  for(int i=0;i<n;i++){
    if(ar[i]>tmp) tmp=ar[i];
  }
  return tmp;
}

int smallest(int *ar,int n){
  int tmp=INT_MAX;
  for(int i=0;i<n;i++){
    if(ar[i]<tmp) tmp=ar[i];
  }
  return tmp;
}

//second smallest and largest
void secondLargestSmallest(vector<int>&arr){
    int n=arr.size();
    int small=INT_MAX,second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    
   for(int i=0;i<n;i++)
    {
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<second_small && arr[i]!=small)
            second_small=arr[i];
        if(arr[i]>second_large && arr[i]!=large)
            second_large=arr[i];
    }

    cout<<second_small<<" "<<second_large<<endl;
    
}

//reverse vector(using swap function)
void reverseVector(vector<int>&ar){
	int l=0,h=ar.size()-1;
	while(l<h){
		swap(ar[l++],ar[h--]);
	}
}

//count frequency of elements(using unorderedMap) 
void countFrequency(vector<int>&ar){
	unordered_map<int,int>mp;
	for(int i=0;i<ar.size();i++){
		mp[ar[i]]++;
	}
	for(auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
	}
}

//count frequency (using visited array)
void countFrequency(vector<int>&ar){
	int n=ar.size();
	vector<bool>visited(n,false);

	for(int i=0;i<n;i++){
		if(visited[i]==true) continue;

		int ct=1;
		for(int j=i+1;j<n;j++){
			if(ar[i]==ar[j]){
				ct++;
				visited[j]=true;
			}
		}
		cout<<ar[i]<<" "<<ct<<endl;
	}
}

//search (binary) -- time O(logn)
int search(vector<int>&ar,int k){
	int n=ar.size();
	int l=0,h=ar.size()-1,ans=-1,mid;
	while(l<=h){
		mid=(l+h)/2;
		if(ar[mid]>k) h=mid-1;
		else if(ar[mid]<k) l=mid+1;
		else{
			ans=mid; break;
		}
	}
	return ans;
}

//search(linear) -- time O(n)
int search(vector<int>&arr,int k){
for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			ans = i;
			break;
		}
	}
	return ans;
}





