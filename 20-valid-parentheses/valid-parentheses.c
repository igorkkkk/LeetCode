bool isValid(char * s){

    char stack[strlen(s)];
    int i = 0;

    while(*s != '\0')
    {
        if(*s == '(')
        {
            stack[i] = *s;
            i++;
        }
        else if(*s == '{')
        {
            stack[i] = *s;
            i++;
        }
        else if(*s == '[')
        {
            stack[i] = *s;
            i++;
        }
        else
        {
            if(i == 0) return false;
            
            i--;

            printf("%c %c", *s, stack[i]);

            if(*s == ')')
            {
                if(stack[i] != '(')
                {
                    return false;
                }
            }
            else if(*s == ']')
            {
                if(stack[i] != '[')
                {
                    return false;
                }
            }
            else if(*s == '}')
            {
                if(stack[i] != '{')
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }

        s++;
    }

    if(i != 0) return false;

    return true;
}