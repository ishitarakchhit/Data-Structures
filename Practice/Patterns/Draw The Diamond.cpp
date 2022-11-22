void printTheDiamond(int r, int c, int s)
{
    int a= r*s*2;
    int b= c*s*2;
	// Write your code here.
    for(int d=0; d<r; d++){
    for(int i=0; i< s; i++){        
        for(int j=0; j< c; j++){
          //  int count=-1;
            for(int k=0; k<s-i-1; k++){
                cout<<"e";
                //count++;
            }
            cout<<"/";
         //   count++;
            for(int k=0; k<2*i; k++){
                cout<<"o";
                //count++;
            }
            cout<<"\\";
         //   count++;
            for(int k=0; k<s-i-1; k++){
                cout<<"e";
            }    
        }
        cout<<endl;
    }
    
    for(int i=s-1; i>=0; i--){        
        for(int j=0; j< c; j++){
          //  int count=-1;
            for(int k=0; k<s-i-1; k++){
                cout<<"e";
                //count++;
            }
            cout<<"\\";
         //   count++;
            for(int k=0; k<2*i; k++){
                cout<<"o";
                //count++;
            }
            cout<<"/";
         //   count++;
            for(int k=0; k<s-i-1; k++){
                cout<<"e";
            }    
        }
        cout<<endl;
    }
    }
}
