

// B. Tariq’s Maze of Teleportation
// 100 Points · Limits 1s, 512 MB
// Tariq is trapped in a magical maze where each cell contains a teleportation rune that sends him to another cell. The maze has N cells, and each cell i contains a number A[i], which means it will teleport him to cell A[i]. The numbering is 1-based.

// Tariq starts at cell 1. He wants to escape the maze or determine if he is stuck in an infinite loop. A cell that teleports to itself is an exit. Otherwise, if he visits the same cell again before reaching an exit, he's trapped in a cycle.

// Your task is to simulate Tariq's movement and determine whether he can escape, and if yes, in how many steps.

// Task:
// Given an array of teleportations A of length N (1-based index), starting at cell 1, determine the number of teleportations needed to reach an exit or print -1 if there's a cycle and escape is impossible.

// তারিক একটি জাদুকরী গোলকধাঁধায় আটকা পড়েছে। এই গোলকধাঁধার প্রতিটি ঘরে একটি টেলিপোর্টেশন রুন আছে যা তাকে অন্য ঘরে পাঠিয়ে দেয়। গোলকধাঁধায় মোট Nটি ঘর আছে। প্রতিটি ঘর i-তে একটি সংখ্যা A[i] আছে, যার মানে হলো তাকে A[i] নম্বর ঘরে পাঠানো হবে। ঘরগুলি ১ থেকে নম্বরকৃত।

// তারিক ১ নম্বর ঘর থেকে শুরু করে। সে চায় গোলকধাঁধা থেকে বের হতে বা জানতে সে চক্রে আটকে আছে কিনা। যে ঘর নিজেই নিজেকে টেলিপোর্ট করে, সেটি একটি প্রস্থান। অন্যথায়, যদি সে একটি ঘর বারবার ভিজিট করে, তবে সে চক্রে আটকে যায়।

// কাজঃ
// A নামক একটি অ্যারে দেওয়া থাকবে যার দৈর্ঘ্য N। তারিক ১ নম্বর ঘর থেকে শুরু করবে। যদি সে বের হতে পারে, তবে কতটি টেলিপোর্ট লাগে তা প্রিন্ট করো। যদি চক্রে আটকে যায়, তবে -1 প্রিন্ট করো।

// Input
// First line contains an integer N (1 ≤ N ≤ 10⁵).
// Next line contains N integers A[1], A[2], ..., A[N] (1 ≤ A[i] ≤ N).

// প্রথম লাইনে একটি পূর্ণসংখ্যা N (১ ≤ N ≤ ১০⁵)
// পরবর্তী লাইনে থাকবে Nটি পূর্ণসংখ্যা A[1], A[2], ..., A[N] (১ ≤ A[i] ≤ N)

// Output
// Print the number of teleportations required to escape, or -1 if Tariq is stuck in a loop.

// একটি পূর্ণসংখ্যা প্রিন্ট করো — বের হতে যতবার টেলিপোর্ট করতে হয়, বা -1 যদি সে চক্রে আটকে যায়।

// Examples
// Input	Output
// 3
// 2 3 3
// 2
// Input	Output
// 3
// 2 3 1
// -1



#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int arr[x];
    int flag = 0;
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d", arr[i]);

        if (arr[i] == arr[i - 1])
        {
            flag++;
        }
    }
    if (flag > 1)
    {
        /* code */
    }

    return 0;
}