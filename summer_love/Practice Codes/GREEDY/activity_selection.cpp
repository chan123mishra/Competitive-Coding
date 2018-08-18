#include<bits/stdc++.h>
using namespace std;
struct activity {
	int start;
	int finish;
};
int comparefinish(const void *x1, const void *x2) {

	activity *u1 = (activity*)x1;
	activity *u2 = (activity*)x2;
	/*if(u1->finish > u2->finish)
	    return u1->finish;
	else*/
	if(u1->finish != u2->finish)
		return (u1->finish - u2->finish);
	else {
		return (u1->start - u2->start);
	}
}
int main() {

	int n;
	cin>>n;
	activity user[n];
	int finish_min;
	int i;
	printf("Start finish :\n");
	for(i = 0; i < n ; i++) {
		scanf("%d %d",&user[i].start,&user[i].finish);
	}
	qsort(user,n,sizeof(activity),comparefinish);
	/*for(i = 0; i < n ; i++)
	{
	  printf("%d %d\n",user[i].start,user[i].finish);
	}*/
	int ctr = 0;
	finish_min = user[0].finish;
	cout<<"Selected users are :\n";
	cout<<"u1"<<endl;
	for(i = 1; i < n; i++) {
		if(user[i].start > finish_min) {
			finish_min = user[i].finish;
			cout<<"u"<<i+1<<endl;
			ctr++;
		}
	}
	/*int a[n];

	for(i = 0; i < n && i != 1; i++) {
		if(user[i].start > finish_min) {
			finish_min = user[i].finish;
			cout<<"u"<<i+1<<endl;
			ctr++;
		}
		*/
		return 0;
	}
