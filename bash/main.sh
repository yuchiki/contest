class cin {
    private static Queue<string> tokens;
    static cin () {
        string line;
        tokens = new Queue<string> ();
        while ((line = Console.ReadLine ()) != null) {
            foreach (var token in line.Split (' ')) {
                tokens.Enqueue (token);
            }
        }
    }
    public static implicit operator int (cin cin) => int.Parse (cin.tokens.Dequeue ());
    public static implicit operator string (cin cin) => cin.tokens.Dequeue ();
}