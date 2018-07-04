#include <limits.h>
#include "gtest/gtest.h"
#include "inc/assert.h"

TEST(EncryptionTest, SimpleString_ShouldPass)
{
    unsigned char plain_text[8];
    unsigned char tmp_text[8];
    for(int i=0; i<7; i++)
    {
        plain_text[i] = 'a' + i;
        tmp_text[i] = 'a' + i;
    }
        
    plain_text[7] = '\0';
    tmp_text[7] = '\0';

    hpy::Tcp::Encryption::Encryption(hpy::Tcp::Encryption::kCaesarCipher, plain_text, 8, 1);
    hpy::Tcp::Decryption::Decryption(hpy::Tcp::Encryption::kCaesarCipher, plain_text, 8, 1);
    //ASSERT_EQ("",tmp_text);
    ASSERT_EQ(0, string_cmp(plain_text, tmp_text, 8));
}