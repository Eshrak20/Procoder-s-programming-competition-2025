// F. Professor Zeno’s Sequence
// 100 Points · Limits 1s, 512 MB
// Professor Zeno is obsessed with infinite series. One day, he decides to challenge his students. He gives them a sequence where each number is half of the previous one. Starting from a number N, the sequence continues as N, N/2, N/4, ..., until the number becomes less than 1. Zeno wants to test how many numbers appear in this sequence.

// Task:
// Given a floating point number N > 0, count how many times you can divide N by 2 until the result becomes less than 1.

// জেনো নামক এক অধ্যাপক অসীম ধারা নিয়ে মগ্ন থাকেন। একদিন তিনি তাঁর ছাত্রদের একটি ধারা দেন: N, N/2, N/4,... যতক্ষণ না এটি 1 এর কম হয়।
// N দিয়ে শুরু করে যতবার তাকে ২ দিয়ে ভাগ করা যায় যতক্ষণ না মান ১ এর কম হয়ে যায়, সেটি গণনা করতে হবে।

// কাজঃ
// একটি ধনাত্মক দশমিক সংখ্যা N দেওয়া থাকবে। যতক্ষণ না এটি ১ এর চেয়ে ছোট হয়, ততবার ২ দিয়ে ভাগ করে সংখ্যা গণনা করো।

// Input
// A single floating point number N (0 < N ≤ 10⁹).

// একটি দশমিক সংখ্যা N (০ < N ≤ ১০⁹) দেওয়া হবে।

// Output
// Print a single integer and the number of steps required to bring the value below 1 by continuously dividing it by 2.

// একটি পূর্ণসংখ্যা প্রিন্ট করো এবং যতবার ২ দিয়ে ভাগ করলে N এর মান ১ এর কম হয়।

// Examples
// Input	Output
// 8.0
// 4
// Input	Output
// 1.5
// 1














#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int flag = 0;
    int cng = x;
    // cng = cng / 2;
    // printf("%d", cng);
    for (int i = 0; i < x; i++)
    {
        if (cng >= 1)
        {
            cng = cng / 2;
            // printf("%d", cng );

            flag++;
        }
    }
    printf("%d", flag);

    return 0;
}