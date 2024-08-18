// complexity analysis
/*
type-> 01;
int k=1;
while(k<=n){        O(logN)
	cout<<k<<endl;
	k=k*2;
}


type-> 02;
for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)  totol complexity-> O(N^2)
            cout << i << j;

type-> 03;
for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            for(int k=j; k > 0; k--)    totol complexity-> O(N^3)
                cout << i << j << k;

type-> 04;
for(int i=n/2;i<=n;i++){
	for(int j=1;j<=n;j=j*2){        totol complexity-> O(NlogN)
   		cout<<i<<j<<endl;
	}
}

type-> 05;
for(int i=n/2;i<=n;i++){        totol complexity-> O(N^2)
	for(int j=1;j<=n;j=j+i){       
   		cout<<i<<j<<endl;
	}
}





*/
