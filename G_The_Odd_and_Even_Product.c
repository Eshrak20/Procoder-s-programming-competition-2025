// G. The Odd and Even Product
// 100 Points · Limits 1s, 512 MB
// In a small village, there are many types of fruits. Every fruit is assigned a number, and the farmer needs help categorizing the fruits into two baskets: one for fruits with odd numbers and one for fruits with even numbers. The farmer has a list of fruit numbers and needs to calculate the total product of the odd and even numbers separately.

// Task:
// Given a list of integers, calculate the product of the even numbers and the product of the odd numbers. If no even or odd numbers exist, print 1 for their respective product.

// গ্রামের একটি বাগানে অনেক ধরনের ফল রয়েছে। প্রতিটি ফলকে একটি সংখ্যা দেওয়া হয়েছে, এবং কৃষককে সাহায্য করতে হবে যাতে সে ফলগুলিকে দুইটি ঝুড়িতে ভাগ করতে পারে: একটি জোড় সংখ্যা ফলের জন্য এবং একটি বিজোড় সংখ্যা ফলের জন্য। কৃষক একটি ফলের সংখ্যা তালিকা দিয়েছে এবং তাকে আলাদাভাবে জোড় এবং বিজোড় সংখ্যার গুণফল হিসাব করতে হবে।

// কাজঃ
// একটি পূর্ণসংখ্যার তালিকা দেওয়া হবে। তোমাকে আলাদাভাবে বিজোড় এবং জোড় সংখ্যার গুণফল বের করতে হবে। যদি কোনো গুণফল না থাকে, তবে 1 প্রিন্ট করো।

// Input
// A single integer N (1 ≤ N ≤ 1000), followed by N integers representing the fruit numbers.

// একটি পূর্ণসংখ্যা N (১ ≤ N ≤ ১০০০), এর পরে Nটি পূর্ণসংখ্যা ফলের সংখ্যা হবে।

// Output
// Print the product of the even numbers and the product of the odd numbers, each on a new line.

// প্রতিটি নতুন লাইনে জোড় এবং বিজোড় সংখ্যার গুণফল প্রিন্ট করো। যদি কোনো সংখ্যা না থাকে, তবে 1 প্রিন্ট করো।

// Examples
// Input	Output
// 5
// 1
// 2
// 3
// 4
// 5
// 8
// 15
// Input	Output
// 3
// 2
// 4
// 6
// 48
// 1



#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int arr[x];
    int odd = 1;
    int even = 1;
    for (int i = 0; i < x; i++)
    {

        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (arr[i] % 2 == 0)
        {
            odd = odd * arr[i];
        }
        else if (arr[i] % 2 != 0)
        {
            even = even * arr[i];
        }
    }
    if (odd != 1)
    {
        if (odd % 2 == 0)
        {
            printf("%d", odd);
            printf("%s", "\n");
        }
    }
    else if (odd == 1)
    {
        printf("%d", 1);
        printf("%s", "\n");
    }

    if (even != 1)
    {
        if (even % 2 != 0)
        {
            printf("%d", even);
            printf("%s", "\n");
        }
    }
    else if (even == 1)
    {
        printf("%d", 1);
    }

    // if (odd == 1 || even == 1)
    // {
    //     printf("%d", 1);
    // }

    return 0;
}