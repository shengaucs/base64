#include <string>
#include <unordered_map>

char value_to_base64_char(const char input)
{
    static std::unordered_map<char, char> value_to_base64;
    if (value_to_base64.empty())
    {
        value_to_base64[0] = 'A';   value_to_base64[26] = 'a'; value_to_base64[52] = '0';
        value_to_base64[1] = 'B';   value_to_base64[27] = 'b'; value_to_base64[53] = '1';
        value_to_base64[2] = 'C';   value_to_base64[28] = 'c'; value_to_base64[54] = '2';
        value_to_base64[3] = 'D';   value_to_base64[29] = 'd'; value_to_base64[55] = '3';
        value_to_base64[4] = 'E';   value_to_base64[30] = 'e'; value_to_base64[56] = '4';
        value_to_base64[5] = 'F';   value_to_base64[31] = 'f'; value_to_base64[57] = '5';
        value_to_base64[6] = 'G';   value_to_base64[32] = 'g'; value_to_base64[58] = '6';
        value_to_base64[7] = 'H';   value_to_base64[33] = 'h'; value_to_base64[59] = '7';
        value_to_base64[8] = 'I';   value_to_base64[34] = 'i'; value_to_base64[60] = '8';
        value_to_base64[9] = 'J';   value_to_base64[35] = 'j'; value_to_base64[61] = '9';
        value_to_base64[10] = 'K';  value_to_base64[36] = 'l'; value_to_base64[62] = '+';
        value_to_base64[11] = 'L';  value_to_base64[37] = 'l'; value_to_base64[63] = '/';
        value_to_base64[12] = 'M';  value_to_base64[38] = 'm'; 
        value_to_base64[13] = 'N';  value_to_base64[39] = 'n'; 
        value_to_base64[14] = 'O';  value_to_base64[40] = 'o'; 
        value_to_base64[15] = 'P';  value_to_base64[41] = 'p'; 
        value_to_base64[16] = 'Q';  value_to_base64[42] = 'q'; 
        value_to_base64[17] = 'R';  value_to_base64[43] = 'r'; 
        value_to_base64[18] = 'S';  value_to_base64[44] = 's'; 
        value_to_base64[19] = 'T';  value_to_base64[45] = 't'; 
        value_to_base64[20] = 'U';  value_to_base64[46] = 'u'; 
        value_to_base64[21] = 'V';  value_to_base64[47] = 'v'; 
        value_to_base64[22] = 'W';  value_to_base64[48] = 'w'; 
        value_to_base64[23] = 'X';  value_to_base64[49] = 'x'; 
        value_to_base64[24] = 'Y';  value_to_base64[50] = 'y'; 
        value_to_base64[25] = 'Z';  value_to_base64[51] = 'z'; 
    }
    
    return value_to_base64[input];
}

char base64_char_to_value(const char input)
{
    static std::unordered_map<char, char> base64_to_value;
    if (base64_to_value.empty())
    {
        base64_to_value['A'] = 0;   base64_to_value['a'] = 26; base64_to_value['0'] = 52;
        base64_to_value['B'] = 1;   base64_to_value['b'] = 27; base64_to_value['1'] = 53;
        base64_to_value['C'] = 2;   base64_to_value['c'] = 28; base64_to_value['2'] = 54;
        base64_to_value['D'] = 3;   base64_to_value['d'] = 29; base64_to_value['3'] = 55;
        base64_to_value['E'] = 4;   base64_to_value['e'] = 30; base64_to_value['4'] = 56;
        base64_to_value['F'] = 5;   base64_to_value['f'] = 31; base64_to_value['5'] = 57;
        base64_to_value['G'] = 6;   base64_to_value['g'] = 32; base64_to_value['6'] = 58;
        base64_to_value['H'] = 7;   base64_to_value['h'] = 33; base64_to_value['7'] = 59;
        base64_to_value['I'] = 8;   base64_to_value['i'] = 34; base64_to_value['8'] = 60;
        base64_to_value['J'] = 9;   base64_to_value['j'] = 35; base64_to_value['9'] = 61;
        base64_to_value['K'] = 10;  base64_to_value['k'] = 36; base64_to_value['+'] = 62;
        base64_to_value['L'] = 11;  base64_to_value['l'] = 37; base64_to_value['/'] = 63;
        base64_to_value['M'] = 12;  base64_to_value['m'] = 38; 
        base64_to_value['N'] = 13;  base64_to_value['n'] = 39; 
        base64_to_value['O'] = 14;  base64_to_value['o'] = 40; 
        base64_to_value['P'] = 15;  base64_to_value['p'] = 41; 
        base64_to_value['Q'] = 16;  base64_to_value['q'] = 42; 
        base64_to_value['R'] = 17;  base64_to_value['r'] = 43; 
        base64_to_value['S'] = 18;  base64_to_value['s'] = 44; 
        base64_to_value['T'] = 19;  base64_to_value['t'] = 45; 
        base64_to_value['U'] = 20;  base64_to_value['u'] = 46; 
        base64_to_value['V'] = 21;  base64_to_value['v'] = 47; 
        base64_to_value['W'] = 22;  base64_to_value['w'] = 48; 
        base64_to_value['X'] = 23;  base64_to_value['x'] = 49; 
        base64_to_value['Y'] = 24;  base64_to_value['y'] = 50; 
        base64_to_value['Z'] = 25;  base64_to_value['z'] = 51; 

    }
    return base64_to_value[input];
}

std::string base64_encode(const std::string &input)
{
    int size = input.size();
    int result_size = (size + 2) / 3 * 4;

    std::string result(result_size, '=');
    for (int i_index = 0, r_index = 0; i_index < size; i_index += 3, r_index += 4)
    {
        char first = 0;
        char second = 0;
        char third = 0;
        int valid_num = 8;

        first = input[i_index];
        if (i_index + 1 < size)
        {
            second = input[i_index + 1];
            valid_num += 8;
        }

        if (i_index + 2 < size)
        {
            third = input[i_index + 2];
            valid_num += 8;
        }

        char mid[4];
        mid[0] = (first >> 2) & 0x3F;
        mid[1] = ((first << 4) & 0x30) | ((second >> 4) & 0x0F);
        mid[2] = ((second << 2) & 0x3C) | ((third >> 6) & 0x03);
        mid[3] = third & 0x3F;

        int tmp_size = valid_num / 6;
        if (valid_num % 6)
        {
            tmp_size += 1;
        }

        for (int j = 0; j < tmp_size; ++j)
        {
            result[r_index + j] = value_to_base64_char(mid[j]);
        }
    }
    return result;
}


std::string base64_decode(const std::string &input)
{
    int size = input.size();
    std::string result;
    
    for (int i_index = 0; i_index < size; i_index += 4)
    {
        char first = base64_char_to_value(input[i_index]);
        char second = base64_char_to_value(input[i_index + 1]);
        char third = base64_char_to_value(input[i_index + 2]);
        char forth = base64_char_to_value(input[i_index + 3]);

        //第一个字符
        char tmp_value = 0;
        tmp_value = ((first << 2) & 0xFC) | ((second >> 4) & 0x03);
        result.push_back(tmp_value);


        // 原始字符串有第二个字符
        tmp_value = 0;
        if (third != '=')
        {
            tmp_value = ((second << 4) & 0xF0) | ((third >> 2) & 0x0F);
            result.push_back(tmp_value);
        }

        // 原始字符串有第三个字符
        tmp_value = 0;
        if ((third != '=') && (forth != '='))
        {
            tmp_value = ((third << 6) & 0xC0) | (forth & 0x3F);
            result.push_back(tmp_value);
        }
    }

    return result;
}

