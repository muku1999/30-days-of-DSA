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


//Kadane's Algorithm or Find Largest sum contiguous Subarray

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

//Kadane's Algoritm or Maximum product in a subarray

long long mx = arr[0];
long long mn = arr[0];
long long product = arr[0];
for(int i =0;i<n;i++){
	if(arr[i]<0){
	swap(mx.mn);
	}
	mn = min(1LL * arr[i], mn * arr[i]);
	mx = max(1LL * arr[i], mx * arr[i]);
	
	product = max(mn,mx);
	}
return product;
	


//Finding the factorial of very big number

multiply(int size ,int res[],int n){
	int carry =0;
	for(int x =0;x<size;x++){
		int product = res[x] * n +carry;
		res[x] = product % 10;
		carry = product/10;
		}
	while(carry){
		res[size] = carry%10;
		carry = carry/10;
		size++;
		}
		}

fact(N){
	int res[];
	size =1; res[0]=1;
	for(i = 2 ;i <n; i+++){
		size= multiply(size ,res, i)
	}
	}
	
	
//Longest Consecutive Subsequence

2	6	1	9	4	5	3 

//ans = 5

class Solution{
  public:
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        //using a Set to store elements.
        unordered_set<int> S;
        int ans = 0;
 
        //inserting all the array elements in Set.
        for (int i = 0; i < n; i++)
           S.insert(arr[i]);
 
        //checking each possible sequence from the start.
        for (int i = 0; i < n; i++)
        {
           //if current element is starting element of a sequence then only 
           //we try to find out the length of sequence.
           if (S.find(arr[i] - 1) == S.end())
           {
               
                int j = arr[i];
                //then we keep checking whether the next consecutive elements
                //are present in Set and we keep incrementing the counter.
                while (S.find(j) != S.end())
                j++;
 
            //storing the maximum count.
            ans = max(ans, j - arr[i]);
            }
        }
        //returning the length of longest subsequence
        return ans;
    }
};
	
	

