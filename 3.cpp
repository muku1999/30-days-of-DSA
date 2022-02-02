/*Maximum sum in the configuration 

8	3	1	2 	= 11	
3	1	2	8	= 29
1	2	8	3	= 27
2	8	3	1	= 17
*/

int ans = INT_MIN;
int sum = 0;
int s=0;
for(int i=0;i<n;i++){
	sum += a[i] * i; //for calculating the rotation sum
	s += a[i];	//for calc the sum of the array
	}
ans = max(ans,sum);	//to store the value of sum of prev rotation in ans 
for(int i = 0;i<n;i++){
	//to find the sum of next rotaion from prev rotation use this formula
	sum = sum - (s-a[i]) + (n-1) ;
	ans = max(ans,sum);
	}
return r;


//Minimum platform required

int i=1;j=0;
int result =1,plat_need = 1;
//sorting two arrays so that we can find the platform needed
sort(arr,arr+n);
sor(dept,dept+n);
while (i<n && j<n)
{	
	//When a train is coming the platform is increased since 
	//arrival time is less than departure
	if(arr[i]<=dept[i]{}){
		plat_need++;
		i++;
	}
	//When a train is departing the platform is decreased since 
	//the departure time is less than arrival 
	else if(dept[i]> arr[i]){
		plat_need--;
		j++;
	}
	//result gives you the min platform required
	if(plat_need > result){
		result = plat_need;
	}
}
return result;



	
