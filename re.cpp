#include<iostream>
using namespace std;

int main(){
    int option;
    int arr1[5];
    int arr[5];
    
jump:
    cout<<"1.insert"<<endl;
    cout<<"2.delete"<<endl;
    cout<<"3.search"<<endl;
    cout<<"4.sort"<<endl;
    cout<<"5.display"<<endl;
    cout<<"6.marge"<<endl;
    cout<<"enter the option"<<endl;
    cin>>option;

    if(option>6){
        cout<<"invalid"<<endl;
    }

    switch (option){
        case 1:
            cout<<"1.insert"<<endl;
            cout<<"enter the values in the array"<<endl;
            for(int i=0;i<5;i++){
                cin>>arr[i];
            }
            cout<<endl;
            cout<<"array={";
            for(int i=0;i<5;i++){
                cout<<arr[i]<<",";
            }
            cout<<"}"<<endl;
            
         
            cout<<"enter the values in arr1"<<endl;
            for(int i=0;i<5;i++){
                cin>>arr1[i];
            }
            cout<<endl;
            cout<<"array1={";
            for(int i=0;i<5;i++){
                cout<<arr1[i]<<",";
            }
            cout<<"}"<<endl;
            break;

        case 2:
            int n;
            cout<<"2.delete"<<endl;
            cout<<"enter the position you want to delete (1-5)"<<endl;
            cin>>n;
           
            for(int i=n-1;i<4;i++){
                arr[i]=arr[i+1];
            }
            cout<<"array after deletion={";
            for(int i=0;i<4;i++){
                cout<<arr[i]<<",";
            }
            cout<<"}"<<endl;
            break;

        case 3:
            int n1;
            cout<<"3.search"<<endl;
            cout<<"enter the position of the element (1-5)"<<endl;
            cin>>n1;
            cout<<"the value is "<<arr[n1-1]<<endl;
            break;

        case 4:
            cout<<"4.sort"<<endl;
            // (bubble sort)
            for(int i=0; i<5-1; i++){
                for(int j=0; j<5-i-1; j++){
                    if(arr[j] > arr[j+1]){
                       
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
            cout<<"Sorted array={";
            for(int i=0; i<5; i++){
                cout<<arr[i]<<",";
            }
            cout<<"}"<<endl;
            break;

        case 5:
            cout<<"5.display"<<endl;
            cout<<"array={";
            for(int i=0;i<5;i++){
                cout<<arr[i]<<",";
            }
            cout<<"}"<<endl;
            cout<<"array1={";
            for(int i=0;i<5;i++){
                cout<<arr1[i]<<",";
            }
            cout<<"}"<<endl;
            break;

        case 6:
            cout<<"6.marge"<<endl;
         
            int mergedArray[10];
            for(int i=0; i<5; i++){
                mergedArray[i] = arr[i];
            }
            for(int i=0; i<5; i++){
                mergedArray[i+5] = arr1[i];
            }
            cout<<"Merged array={";
            for(int i=0; i<10; i++){
                cout<<mergedArray[i]<<",";
            }
            cout<<"}"<<endl;
            break;
    }

    int n1;
    cout<<"press 4 to continue"<<endl;
    cin>>n1;
    if(n1==4){
        goto jump;
    }
    else{
        return 0;
    }
}

