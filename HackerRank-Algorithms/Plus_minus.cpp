//https://hackerrank-challenge-pdfs.s3.amazonaws.com/8654-plus-minus-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1562477590&Signature=lqGwTQ%2BUgmyEeet%2BRFTPePC6%2Ff0%3D&response-content-disposition=inline%3B%20filename%3Dplus-minus-English.pdf&response-content-type=application%2Fpdf
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr,int N)
{
    float p=0,n=0,z=0,i;
    for(i=0;i<N;i++)
    {
        if(arr[i]>0)
            p++;
        if(arr[i]==0)
            z++;
        if(arr[i]<0)
            n++;
    }
    p/=N;
    n/=N;
    z/=N;
    cout<<p<<endl<<n<<endl<<z;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr,n);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
