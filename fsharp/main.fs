open System
open System.Collections.Generic
open System.Linq
open System

// Following contents are my library. The Main processes are on the bottom of this code.

let puts = Console.WriteLine : 'a -> unit
let put = Console.Write : 'a -> unit
let read() = Console.ReadLine()
let reads () = Console.ReadLine().Split()
let read2 () = reads() |> (fun x -> x.[0], x.[1])
let read3 () = reads() |> (fun x -> x.[0], x.[1], x.[2])
let read4 () = reads() |> (fun x -> x.[0], x.[1], x.[2], x.[3])
let tmap2 f1 f2 (t1, t2) = (f1 t1, f2 t2)
let tmap3 f1 f2 f3 (t1, t2, t3) = (f1 t1, f2 t2, f3 t3)
let tmap4 f1 f2 f3 f4 (t1, t2, t3, t4) = (f1 t1, f2 t2, f3 t3, f4 t4)
let readAs f = read() |> f
let readAs2 f1 f2 = read2 () |> tmap2 f1 f2
let readAs3 f1 f2  f3 = read3 () |> tmap3 f1 f2 f3
let readAs4 f1 f2 f3 f4 = read4 () |> tmap4 f1 f2 f3 f4

let readInt () = readAs int
let readInt2 () = readAs2 int int
let readInt3 () = readAs3 int int int
let readInt4 () = readAs4 int int int int
let readLong () = readAs int64
let readLong2 () = readAs2 int64 int64
let readLong3 () = readAs3 int64 int64 int64
let readLong4 () = readAs4 int64 int64 int64 int64
let ensmallen l = l % 1000000007L
let manhattan x y = abs (fst x - fst y) + abs (snd x - snd y)
let sayYESNO b = if b then puts "YES" else puts "NO"
let sayYesNo b = if b then puts "Yes" else puts "No"
let generateSeq n f = seq { for _ in 1 .. n do yield f () }

let assertLength n arr = if Array.length arr = n then arr else failwith "length doesn not match"


let toIntArray (s:string) = s.ToCharArray() |> Array.map (fun c -> int c - int '0')

let readIntMatrix h w =
 generateSeq h (reads >> Array.map int ) |> Seq.toArray
let readLongMatrix h w =
 generateSeq h (reads >> Array.map int64) |> Seq.toArray

let bitCount (n : int) =
    let count2 = n - ((n >>> 1) &&& 0x55555555)
    let count4 = (count2 &&& 0x33333333) + ((count2 >>> 2) &&& 0x33333333)
    let count8 = (count4 + (count4 >>> 4)) &&& 0x0f0f0f0f
    (count8 * 0x01010101) >>> 24


// The main contents of this submission are below this line.

let rec iterate f s = s :: iterate f (f s)



let n= readInt ()

let dp =  [| for i in 1 ..n -> 0 |]

seq sixes =

for i = 1 to n do
    f
