#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cmath>
#include <cfloat>
using namespace std;

typedef struct point{
	float x;
	float y;
}point;

float dist(point p1, point p2) 							// returns the distance between two points 
{
	float dist = pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2);
	return sqrt(dist);
}

int compareX(const void* a, const void* b) 				// utility function to compare x coordinate of points 
{ 
    point *p1 = (point *)a,  *p2 = (point *)b; 
    return (p1->x - p2->x); 
} 

int compareY(const void* a, const void* b) 				// utility function to compare y coordinate of points
{ 
    point *p1 = (point *)a,   *p2 = (point *)b; 
    return (p1->y - p2->y); 
} 

float brute_force(point *P, int l, int r)				// comparing all numbers to get the points with minimum distace
{
	float min_dist = FLT_MAX;
	int i,j;
	for(i=l;i<=r;i++)
	{
		for(j=i+1;j<=r;j++)
		{
			if(dist(P[i],P[j]) < min_dist)
			{
				min_dist = dist(P[i],P[j]);
			}
		}	
	}
	return min_dist;
}

float center(int n,point p, point *Y, float min_dist)	// find in minimum distance of points present in minimum strip
{
	int i,j,k=0;
	float d_min;
	point P[100000];
	d_min=FLT_MAX;
	for(i=0;i<n;i++)									// considering only elemnets which are less than min_dist away than centre element
	{
		if(min_dist>=abs(p.x-Y[i].x))
		{
			P[k]=Y[i];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<i+7&&j<k;j++)
		{
			if(dist(P[i],P[j])<d_min)
			{
				d_min=dist(P[i],P[j]);
			}
		}
	}
	return d_min;
}

float closest_points_secondary(int n,point *X, point *Y, int l, int r)
{
	float mi_total, mi_right, mi_left, mi_central;
	int mid;
	mid=(l + r)/2;
	if(r-l<=3) 											// if the points are very less than compare each of them
		return brute_force(X, l, r);
	mi_right=closest_points_secondary(n,X,Y,mid+1,r); 	// looking at ponts on left hand of strip
	mi_left=closest_points_secondary(n,X,Y,l,mid); 		// looking at points on right hand of strip
	mi_total=min(mi_left,mi_right);
	mi_central=center(n,X[mid],Y,mi_total);				// finding minimum distance between points in central strip
	return min(mi_central,mi_total);
}

void graphics(point *ans, float closest_dist,int n) 	// function to create an image of circles with radius equal to minimum distance/2
{
	fstream file("closest_points.svg", ios::out);
	file << "<svg xmlns = \"http://www.w3.org/2000/svg\">"<<endl;
	file << " <rect height = \"1000\" width = \"1000\" fill = \"none\"/> stroke = \"none\"/> fill-opacity = \"0.5\"/>" << endl;
	for (int i = 0; i < n; i++)
		file << "<circle cx = \"" << ans[i].x << "\" cy = \"" << ans[i].y << "\" r = \"" << closest_dist/2 << "\" fill = \"green\" opacity = \"0.5\"/>"<<endl;
	file << "</svg>";
	file.close();
}

float closest_points(point *X,point *Y,int n) 			// function to calculate the shortest distance between the points
{
	float min_total;
	qsort(X,n,sizeof(point),compareX); 					//sorting the points by x coordinates
    qsort(Y,n,sizeof(point),compareY); 					//sorting the points by y coordinates
	min_total=closest_points_secondary(n,X,Y,0,n-1); 	// calling the secondary function to get minimum distance between the sorted points
	cout<<min_total<<endl;
	return min_total;
}

int main()
{
	int n=1000000,i,j=0,k,seed,min_total;
	cout<<"Enter seed: "<<endl;
	cin>>seed;
	while(n>=100000||n<0)
	{
		cout<<"Enter number of points: (between 0 and 999999"<<endl;
		cin>>n;
	}
	srand(seed);
	point X[100000],Y[100000];
	for(i=0;i<n;i++)      				
	{
		X[i].x = rand()%5000;
		Y[i].x = X[i].x;
		X[i].y = rand()%5000;
		Y[i].y = X[i].y;
		for(j=0;j<i; )
		{
			if(X[i].y == X[j].y && X[i].x == X[j].x) 
			{
				i--;
				continue;
			}
			j++;
		}
	}
	if(n>1)
		min_total=closest_points(X,Y,n);
	else
	{
		cout<<0<<endl;
		min_total=0;
	}
	graphics(X,min_total,n);
	return 0;
}
