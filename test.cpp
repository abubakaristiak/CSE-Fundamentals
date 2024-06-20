#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;              // স্ট্রিং ইনপুট নেওয়া হচ্ছে। 
    int frq[26] = {0};     // ফ্রিকোয়েন্সি এরে ডিক্লেয়ার করা হয়েছে ২৬ সাইজের কারন আমরা a থেকে z পর্যন্ত কাউন্ট করব। সবগুলো ভেলু শুরুতে ০ দিয়ে ইনিশিয়ালাইজ করা হয়েছে।  
    for (char c : s)       // স্ট্রিং এর উপর লুপ চালিয়ে প্রতিটি ক্যারেক্টার নিয়ে আসা হচ্ছে। 
    {
        frq[c - 'a']++;    // ফ্রিকোয়েন্সি এরেতে সেই ক্যারেক্টার এর ইন্ডেক্সে যেয়ে তার কাউন্ট এর মান ১ বাড়িয়ে দেওয়া হচ্ছে। 
    }
    for (char i = 'a'; i <= 'z'; i++)       // a থেকে z পর্যন্ত লুপ চালানো হচ্ছে। 
    {
        for (int j = 0; j < frq[i - 'a']; j++)    // ফ্রিকোয়েন্সি এরেতে সেই ইন্ডেক্সে যেয়ে তার কাউন্ট এর ভেলু পর্যন্ত লুপ চালানো হচ্ছে। 
        {
            cout << i;                   // ক্যারেক্টার প্রিন্ট করা হচ্ছে। 
        }
    }
    return 0;
}