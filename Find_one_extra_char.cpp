char extraChar(string &s1, string &s2) 
{
    char extra=0;
    
    for(int i=0;i<s1.size();i++)
    {
        extra=extra ^s1[i];
    }
    for(int i=0;i<s2.size();i++)
    {
        extra^=s2[i];
    }
    return extra;
}



/*

s1 = "abcd"
s2 = "badce"

char extra = 0;
The variable extra is like a bucket. We are going to throw characters in and let XOR do its work.
Step 2: The First Loop (Processing s1)

This loop goes through "abcd" one by one.

    i = 0: extra = 0 ^ 'a' → extra is now 'a'

    i = 1: extra = 'a' ^ 'b' → extra now holds the combined bits of a and b.

    i = 2: extra = ('a' ^ 'b') ^ 'c'

    i = 3: extra = ('a' ^ 'b' ^ 'c') ^ 'd'

At the end of Loop 1, extra is a "soup" of a, b, c, and d.
Step 3: The Second Loop (Processing s2)

Now, we take that same extra and start XORing it with "badce". Remember the rule: XORing the same thing twice makes it zero.

    i = 0: extra = (a^b^c^d) ^ 'b' → The two bs find each other and turn into 0. extra is now (a^c^d).

    i = 1: extra = (a^c^d) ^ 'a' → The two as find each other and turn into 0. extra is now (c^d).

    i = 2: extra = (c^d) ^ 'd' → The two ds cancel out. extra is now (c).

    i = 3: extra = (c) ^ 'c' → The two cs cancel out. extra is now 0.

    i = 4: extra = 0 ^ 'e' → extra is now 'e'.

    */