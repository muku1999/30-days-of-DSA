// Subarray of 0 sums

map<int,bool>msum;
int sum =0;
for(int i=0;i<n;i++){
	sum += a[i];
	//agar sum = 0 toh thik true return kardo nahi toh check karo ki kahi sum phirse repeat toh nahi ho rha hai agar repeat ho rha then beech mei value kahi zero hai toh true return kardo.
	if(sum == o || msum(sum) == true){
		return true;
	}
	msum(sum)=true; // jo v sum zero nahi hai unko true kardo kyunki agar yeh sum wapas dikhegi toh repeat hogi;
}
return false;


//Kadaen's Algorithm or Find Largest sum contiguous Subarray

		1 	2 	3 	-2 	5 
maxsum=		1	3	6	4	9


int maxsum =INT_MIN;
int currsum =0;
for(int i=0;i<n;i++){
	currsum= max(currsum+a[i] , a[i]);
	maxsum = max(maxsum ,currsum);
	}
return maxsum;

//using if statements

int maxsum =INT_MIN;
int currsum =0;
for(int i=0;i<n;i++){
	if(currsum + a[i] >a[i]){
		currsum += a[i]
	}
	else{
		currsum = a[i];
	}
	if(currsum>maxsum){
		maxsum=currsum;
		}
return maxsum;


