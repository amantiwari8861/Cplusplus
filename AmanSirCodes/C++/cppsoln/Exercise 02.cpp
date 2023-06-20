#include <iostream.h>

class stack
{
    public:

    char stack_array [50];
    int top;

    stack()
    {
        top = -1;
    }

    void push(char symbol)
    {
        if (full())
        {
            cout << "\nStack overflow"<< endl;
        }
        else
        {
            top = top + 1;
            stack_array[top] = symbol;
        }
    }

    char pop()
    {
        if (empty())
            return ('#');   //Return value '#' indicates stack empty
        else
            return (stack_array[top--]);
    }

    int empty()
    {
        if (top == -1)
            return (1);
        else
            return (0);
    }

    int full()
    {
        if (top == 49)
            return (1);
        else
            return (0);
    }
};

class Strings
{
    private:
        char str [20];

    public:
   
    void read()
    {
        cout << "\nEnter a string: ";
        cin >> str;
    }

    void reverse()
    {
        stack s;

        //Determine the length of the string
	    int len;

        for (len=0; str[len]!= '\0'; len++); 

        for (int i = 0; i < len; i++)
            s.push(str[i]);

        cout << "\nThe reversed string is: ";
        while (!s.empty())
        {
            char ch = s.pop();
            cout << ch;
        }
    }


};

void main()
{
    Strings s;
    s.read();
    s.reverse();
}

