class Solution {
public:
    bool isValid(string s) 
    {
        string stack(1000, ' ');
        int top = 0;
        int i = 0;
        while (s[i] != '\0')
        {
            switch (s[i])
            {
                case '(':
                case '{':
                case '[':
                {
                    stack[top++] = s[i];
                    cout << "push " << s[i] << endl;
                    break;
                }
                case ')':
                case ']':
                case '}':
                {   
                    char stack_top = ' ';
                    if (top > 0)
                    {
                        stack_top = stack[--top];
                    }
                    
                    cout << "pop " << stack_top << endl;
                    if (s[i] == ')')
                    {
                        if (stack_top != '(')
                        {
                            return false;
                        }
                    }

                    if (s[i] == ']')
                    {
                        if (stack_top != '[')
                        {
                            return false;
                        }
                    }

                    if (s[i] == '}')
                    {
                        if (stack_top != '{')
                        {
                            return false;
                        }
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
            i++;
        }

        if (top != 0)
        {
            return false;
        }
        return true;
    }
};
