// how use map

// reverse each word me   why and how i,start using 
// getline , size , length
// map , frequency , count , seen
// char to int and viceversa convert and how map
// string cnt = to_string(count)
// how to move pointer left and right side
// // character count array  int count1[26] = {0};
        // char newChar = s2[i];
        // int index = newChar - 'a';
        // count2[index]++;
// for parenthesis problem use balance , count method
// how to take common prefix

/*
Case	                                Time	    Space
string s (pass by value)	            O(n²)	    O(n) (copy due to pass-by-value)
const string &s (pass by reference)	    O(n²)	    O(1)
*/

/*
char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
*/

/*
// take maxlen
        maxLen = max(maxLen,right-left+1);
*/

/*
// reverse each word
    int start=0;
    for(int i=0 ; i<=n ; i++)
    {
        // jabh space ya end char mile toh do reverse
        if(i==n || input[i]==' ')
        {
            reverse(input.begin() + start , input.begin() + i);
            start = i+1;
            // next word start after i (not use start=start+1)
        }
    }
*/

/*
// push all words into stack
    string word = "";
    for(int i=0 ; i<n ; i++)
    {
        if(input[i] == ' ')
        {
            st.push(word);
            word = "";
        }
        else{
            word += input[i];
        }
    }
    st.push(word);

    here focous on last line for end words push into stack
*/

/*
            encoding logic
            substring logic
            Isomorphic

int specialPalindromes(string &str)
{
    int res = 0;
    for(int i=0 ; i<str.size() ; i++)
    {
        // for odd case
        res+= count(i,i,str);

        // for even case
        res+= count(i,i+1,str);
    }
    return res;
}
*/

/*

void expand(string &s,int left,int right,int &start,int &maxlen)
{
    int n = s.size();

    // yes,palindrome
    while(left>=0 && right<n && s[left]==s[right])
    {
        // check if any other palindrome exist of more length than this
        if(right - left + 1 > maxlen)
        {
            // here maxLen point to last char or end
            maxlen = right - left + 1;
            start = left; 
        } 
        left--;
        right++;
    }
}
*/