// C. Ishraq and the Infinite Subarrays
// 100 Points · Limits 1s, 512 MB
// Ishraq is fascinated by arrays and patterns within them. He recently discovered a peculiar concept: counting how many subarrays have an even sum. He gives you an array of integers and asks you to help him count how many of its contiguous subarrays sum up to an even number.

// To recall, a subarray is a continuous segment of an array. For example, the array [1, 2, 3] has 6 subarrays: [1], [2], [3], [1,2], [2,3], and [1,2,3].

// Task:
// You are given an array A of N integers. Count the number of subarrays whose sum is even.

// ইশরাক অ্যারে এবং তার ভিতরের প্যাটার্ন নিয়ে মুগ্ধ। সম্প্রতি সে একটি অদ্ভুত ধারণা খুঁজে পেয়েছে: কতগুলো সাবঅ্যারে আছে যেগুলোর যোগফল জোড়।

// তোমাকে একটি পূর্ণসংখ্যার অ্যারে দেওয়া হবে। তোমার কাজ হবে বের করা কতগুলো ধারাবাহিক সাবঅ্যারে আছে যেগুলোর যোগফল জোড় সংখ্যা।

// কাজঃ
// একটি পূর্ণসংখ্যার অ্যারে A দেওয়া থাকবে যার দৈর্ঘ্য N। এমন কতটি সাবঅ্যারে আছে যেগুলোর যোগফল জোড়, তা গণনা করো।

// Input
// First line contains an integer N (1 ≤ N ≤ 10⁵).
// Next line contains N integers A[1], A[2], ..., A[N] (−10⁹ ≤ A[i] ≤ 10⁹)

// প্রথম লাইনে একটি পূর্ণসংখ্যা N (১ ≤ N ≤ ১০⁵)
// পরবর্তী লাইনে থাকবে Nটি পূর্ণসংখ্যা A[1], A[2], ..., A[N] (−১০⁹ ≤ A[i] ≤ ১০⁹)

// Output
// Print a single integer the number of subarrays whose sum is even.

// একটি পূর্ণসংখ্যা প্রিন্ট করো যতগুলো সাবঅ্যারের যোগফল জোড় সংখ্যা।

// Examples
// Input	Output
// 3
// 1 2 3
// 2
// Input	Output
// 5
// 2 4 6 8 10
// 15
// Input	Output
// 3
// -1 -2 -3
// 2















#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            sum = sum + arr[j];
            if (sum % 2 == 0)
            {
                printf("%d", sum);

                flag++;
            }
        }
    }
    // printf("%d", arr[3]);

    // printf("%d", flag);

    return 0;
}