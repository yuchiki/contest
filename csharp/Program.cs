﻿using System;
using System.Collections.Generic;
using System.Linq;

using static System.Console;
using static AtCoder.Util;
using static AtCoder.Cin;

namespace AtCoder {
    class Program {

        static void Main() {
            VectorInt2 here = new VectorInt2(0, 0);
            ReadInt().Times(() => {
                var  t = ReadInt();
                var next = ReadVectorInt2();
                var diff = next - here;
                if ( diff.X + diff.Y > t || (diff.X + diff.Y - t) % 2 != 0) {
                    WriteLine("No");
                    Environment.Exit(0);
                }
            });
            WriteLine("Yes");
        }
    }
}

namespace AtCoder {
    static class Util {
        public static T debug<T>(this T value) {
            Console.Error.WriteLine($"debug:{value}");
            return value;
        }

        public static long ToLong(this String s) => long.Parse(s);
        public static long ToLong(this char c) => c - '0';
        public static int ToInt(this String s) => int.Parse(s);
        public static int ToInt(this char c) => c - '0';
        public static void Times(this int n, Action action) {
            for (int i = 0; i < n; i++) action();
        }
        public static void Times(this long n, Action action) {
            for (long i = 0; i < n; i++) action();
        }
        public static void Call<T>(this T t, Action<T> action) => action(t);
        public static void WriteLine<T>(this T t) => Console.WriteLine(t);
        public static T Call<S, T>(this S s, Func<S, T> func) => func(s);
        public static void Each<T>(this IEnumerable<T> e, Action<T> action) {
            foreach (var v in e) action(v);
        }

        public static VectorInt2 ReadVectorInt2() => 
            new VectorInt2(ReadInt(), ReadInt());
    }

    static class Cin {
        private static Queue<string> tokens;
        static Cin () {
            string line;
            tokens = new Queue<string> ();
            while ((line = Console.ReadLine ()) != null) {
                foreach (var token in line.Split (' ')) {
                    tokens.Enqueue (token);
                }
            }
        }

        static public int ReadInt() => int.Parse(tokens.Dequeue());
        static public IEnumerable<int> ReadInt(long n) {
            for (int i = 0; i < n; i++) yield return ReadInt();
        }
        static public long ReadLong() => long.Parse(tokens.Dequeue());
        static public IEnumerable<long> ReadLong(long n) {
            for (int i = 0; i < n; i++) yield return ReadLong();
        }
        static public string ReadString() => tokens.Dequeue();
    }

    struct VectorInt2 {
        public int X { get; set; }
        public int Y { get; set; }

        public VectorInt2(int x, int y) {
            X = x; Y = y;
        }

        static public VectorInt2 operator+ (VectorInt2 v1, VectorInt2 v2) =>
            new VectorInt2(v1.X + v2.X, v1.Y + v2.Y);
        static public VectorInt2 operator- (VectorInt2 v1, VectorInt2 v2) =>
            new VectorInt2(v1.X - v2.X, v1.Y - v2.Y);
        static public VectorInt2 operator* (VectorInt2 v1, VectorInt2 v2) =>
            new VectorInt2(v1.X * v2.X, v1.Y * v2.Y);
        static public VectorInt2 operator* (VectorInt2 v1, int i) =>
            new VectorInt2(v1.X * i, v1.Y * i);
        static public VectorInt2 operator* (int i, VectorInt2 v2) =>
            new VectorInt2(i * v2.X, i * v2.Y);
        static public VectorInt2 operator/ (VectorInt2 v1, int i) =>
            new VectorInt2(v1.X / i, v1.Y / i);
    }
}