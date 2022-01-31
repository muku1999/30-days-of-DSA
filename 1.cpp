
//First Repeating Element

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        map<int,int>m;
      for(int i=0; i<n; i++) m[arr[i]]++;
      for(int i=0; i<n; i++){
         if(m[arr[i]]>1)
         return i+1;
       }
      return -1;
    }
    };



//First Non-repeating elements

class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        map<int,int>m;
        for(int i =0;i<n;i++){
            m[arr[i]]++;
        }
        for(int i = 0; i<n;i++){
            if(m[arr[i]] == 1){
                return arr[i];      
            }
        
        }
        return 0;
    } 
  
};



//Subarrays with equal 1s and 0s

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr[i]=-1;
            }
        }
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                count++;
            }
            if(mp.find(sum)!=mp.end()){
                count += mp[sum];
            }
            mp[sum]++;
        }
        return count;
        
    }
};


//Alternate postive and negative numbers


class Solution{
public:

	void rearrange(int arr[], int n) 
	{
	    
	 vector<int> pos;
	 vector<int> neg;
	 for(int i=0;i<n;i++)
	 {
	     if(arr[i]>=0){
	         pos.push_back(arr[i]);
	     }
	     else{
	          neg.push_back(arr[i]);
	     }
	 }
	  int i=0,j=0,k=0;
	  while(k<n)
	  {
	      if(i<pos.size()){
	          arr[k]=pos[i];
	          k++;
	          i++;
	      }
	      if(j<neg.size()){
	          arr[k]=neg[j];
	          k++;
	          j++;
	      }
	  }
	 
	}
	
	};
	
	
//
