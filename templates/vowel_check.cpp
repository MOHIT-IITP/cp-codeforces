bool check(char s)
{
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
        return ture;
    }
    return false;
}

int count_vowel(string s){
    int count = 0;
    for(auto it : s){
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
            count++;
        }
    }
    return count;
}
