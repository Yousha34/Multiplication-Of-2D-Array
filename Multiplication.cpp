#include<iostream>
using namespace std ;
int main(){

    int rows1, col1;

    cout << "Enter no of rows of first array : " ;
    cin >> rows1 ;

    cout << "Enter no of colomns of first array : " ;
	cin >> col1 ;

    int rows2, col2 ;

    cout << endl ;

    cout << "Enter no of rows of second array : " ;
    cin >> rows2 ;

    cout << "Enter no of colomns of second array : " ;
	cin >> col2 ;

    cout << endl ;

    // ( row1 col1 ) ( row2 col2 )

    if( col1 == rows2 ){

        int arr1[rows1][col1] ;

        cout << "Enter first array elements : \n" ;

        for(int i = 0; i < rows1; i++ ){
			
		    for( int j = 0; j < col1; j++ ){
			    cin >> arr1[i][j] ;
		    }
		
	    }

        for(int i = 0; i < rows1; i++ ){
			
		    for( int j = 0; j < col1; j++ ){
			    cout << arr1[i][j] << " " ;
		    }

            cout << endl ;
		
	    }

        cout << "Enter second array elements : \n" ;

        int arr2[rows2][col2] ;

        for(int i = 0; i < rows2; i++ ){
			
		    for( int j = 0; j < col2; j++ ){
			    cin >> arr2[i][j] ;
	    	}
		
	    }

        for(int i = 0; i < rows2; i++ ){
			
		    for( int j = 0; j < col2; j++ ){
			    cout << arr2[i][j] << " " ;
	    	}

            cout << endl ;
		
	    }

        int arr3[rows1][col2] ;
        
        int n = col1 ;  // IS STEP MAI COL1 KI JAGAH ROWS2 BHI AASAKTI THI
        
        for( int i = 0; i < rows1; i++ ){

            for( int j = 0; j < col2; j++ ){

                arr3[i][j] = 0 ;

                for( int k = 0; k < n; k++ ){
                    arr3[i][j] += arr1[i][k] * arr2[k][j] ;
                }

            }

        }

        cout << "\n" ;

        for(int i = 0; i < rows1; i++ ){
			
		    for( int j = 0; j < col2; j++ ){
		    	cout << arr3[i][j] << " " ;
		    }

            cout << endl ;
		
	    }

    }
    else{
        cout << "Multiplication can not be happen because coloumns of first matrixis not equal to rows of second matrix" ;
    }

    return 0 ;
}