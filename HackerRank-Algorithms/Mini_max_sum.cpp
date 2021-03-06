//https://hackerrank-challenge-pdfs.s3.amazonaws.com/26276-mini-max-sum-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1562477373&Signature=jvRNbE5qfS7MofsJcU1zFLMfP3k%3D&response-content-disposition=inline%3B%20filename%3Dmini-max-sum-English.pdf&response-content-type=application%2Fpdf
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr)
{
    long int mx=0,mn=2999483647, sum;
    for(int i=0; i<5; i++)
    {
        sum=0;
        for(int j=0; j<5; j++)
        {
            if(j==i)
                continue;
            else
                sum=sum+arr[j];
        }
        mx=mx>sum?mx:sum;
        mn=mn<sum?mn:sum;
    }
    cout<<mn<<" "<<mx;
}

int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

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
