class Stringg
{
private:
    char *str;

public:
    Stringg(const char *string = nullptr)
    {
        if (string == nullptr)
        {
            str = new char[1];
            *str = '\0';
        }
        else
        {

            int argStrLen = 0;

            while (*(string + argStrLen) != '\0')
                ++argStrLen;

            this->str = new char[argStrLen + 1];

            //+1 za da kopira i \0 element
            for (int i = 0; i < argStrLen + 1; i++)
            {
                *(this->str + i) = *(string + i);
            }
        }
    }

    ~Stringg()
    {
        delete[] str;
    }

    Stringg(const Stringg &strAdr)
    {
        str = new char[strAdr.Getlength()];

        for (int i = 0; i < strAdr.Getlength() + 1; i++)
        {
            *(str + i) = *(strAdr.str + i);
        }
    }

    const char *GetValue() const
    {
        return str;
    }

    unsigned int Getlength() const
    {
        int i = 0;
        while (*(str + i) != '\0')
            ++i;

        return i;
    }

    Stringg &operator=(const Stringg &stringAdr){

        if(this == &stringAdr)
            return *this;
        
        delete [] str;

        str = new char[stringAdr.Getlength() + 1];
        for(int i = 0; i <= stringAdr.Getlength(); i++)
        {
            str[i] = stringAdr.str[i];
        }

        return *this;

    }

    Stringg &Concatenate(const Stringg &toConcat)
    {
        int newLen = Getlength() + toConcat.Getlength() +1;
        int oldLen = Getlength();
        char* newPtr = new char[newLen];

        int index =0;
        
        while(index < oldLen)
        {
            newPtr[index]= str[index];
            ++index;
        }

        delete [] str;

        while(index < newLen)
        {
            newPtr[index] = toConcat.str[index-oldLen];
            ++index;
        }

        newPtr[index]- '\0';

        str = newPtr;
        return *this;

    }
};