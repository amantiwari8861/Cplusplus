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


class Expression
{
    char infix[50];
    char postfix[50];

    public:

    void read()
    {
        cout << "\nEnter an infix expression: ";
        cin >> infix;
    }

    int white_space(char symbol)
    {
        if (symbol == ' ' || symbol == '\t' || symbol == '\0')
            return 1;
        else
            return 0;
    }

    void ConvertToPostfix()
    {

        stack s;
        int l, precedence, p;

        char entry1, entry2;
        
        p = 0;

        for (int i = 0; infix[i] != '\0'; i++)
        {
            entry1 = infix[i];

            if (!white_space(entry1))
            {
                switch (entry1)
                {
                    case '(':
                        s.push(entry1);
                        break;
                    case ')':
                        while ((entry2 = s.pop()) != '(')
                            postfix[p++] = entry2;
                        break;
                    case '+':
                    case '-':
                    case '*':
                    case '/':
                        if (!s.empty())
                        {
                            precedence = prec(entry1);
                            entry2 = s.pop();
                            while (precedence <= prec(entry2))
                            {
                                postfix[p++] = entry2;
                                if (!s.empty())
                                    entry2 = s.pop();
                                else
                                    break;
                            }
                            if (precedence > prec(entry2))
                                s.push(entry2);
                        }
                        s.push(entry1);
                        break;
                    default:
                        postfix[p++] = entry1;
                        break;
                }
            }
        }
        while (!s.empty())//While not stack empty
            postfix[p++] = s.pop();

	    postfix[p] = '\0';
    
        cout << "\nThe postfix expression is: " << postfix << endl;

    }

    int prec(char symbol)
    {
        switch (symbol)
        {
            case '/': return (4);  /*Precedence of / is 4 */
            case '*': return (3);  /*Precedence of * is 3 */
            case '+': return (2);  /*Precedence of + is 2 */
            case '-': return (1);  /*Precedence of - is 1 */
            case '(': return (0);  /*Precedence of ( is 0 */
            default: return (-1); 
        }
    }

    
    int openingParenthesis(char entry)
    {
        if ((entry == '(') || (entry == '{') || (entry == '['))
            return (1);
        else
            return (0);
    }

    int closingParenthesis(char entry)
    {
        if ((entry == ')') || (entry == '}') || (entry == ']'))
            return (1);
        else
            return (0);
    }

    int match(char entry1, char entry2)
    {
        if ((entry1 == '(') && (entry2 == ')'))
            return (1);
        else if ((entry1 == '{') && (entry2 == '}'))
            return (1);
        else if ((entry1 == '[') && (entry2 == ']'))
            return (1);
        else
            return (0);

    }
    
    int checkParenthesis()
    {
        stack s;
        char entry;

        //Determine the length of the infix expression
	int len;

        for (len=0; infix[len]!= '\0'; len++); 

        for (int i = 0; i < len; i++)
        {
            if (openingParenthesis(infix[i]))
                s.push(infix[i]);
            else if (closingParenthesis(infix[i]))
            {
                if (s.empty())
                    return (1);
                entry = s.pop();

                if (!match(entry, infix[i]))
                    return (2);
            }
        }

        if (!s.empty())
            return (3);
        else
            return (0);

    }
};

void main()
{
    char choice = 'y';
    Expression expr;

    while (choice == 'y')
    {
        expr.read();
        int flag = expr.checkParenthesis();
        if (flag == 1)
            cout<<"\nNumber of closing parentheses is more than the number of opening parentheses.";
        else if (flag == 2)
            cout << "\nA closing parenthesis does not match its corresponding opening parenthesis.";
        else if (flag == 3)
            cout << "\nNumber of opening parentheses is more than the number of closing parentheses.";
        else
            expr.ConvertToPostfix();
        
        cout << "\n\nDo you want to continue? (y/n):";
        cin >> choice;
    }
}
