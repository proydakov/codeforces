#include <iostream>

#include <cmath>
#include <vector>
#include <climits>
#include <cstdint>
#include <algorithm>

class big_num {
public:
    typedef uint32_t word;

    std::vector<word> words;
    bool neg;

    static word word_mask() {
        return (word)-1;
    }

    static size_t word_bits() {
        return sizeof(word)*CHAR_BIT;
    }

    static word word_half_mask() {
        return word_mask() >> word_bits()/2;
    }

    static word char_to_word(char c) {
        switch (c) {
            case '0': return 0;
            case '1': return 1;
            case '2': return 2;
            case '3': return 3;
            case '4': return 4;
            case '5': return 5;
            case '6': return 6;
            case '7': return 7;
            case '8': return 8;
            case '9': return 9;
            case 'a': case 'A': return 10;
            case 'b': case 'B': return 11;
            case 'c': case 'C': return 12;
            case 'd': case 'D': return 13;
            case 'e': case 'E': return 14;
            case 'f': case 'F': return 15;
            case 'g': case 'G': return 16;
            case 'h': case 'H': return 17;
            case 'i': case 'I': return 18;
            case 'j': case 'J': return 19;
            case 'k': case 'K': return 20;
            case 'l': case 'L': return 21;
            case 'm': case 'M': return 22;
            case 'n': case 'N': return 23;
            case 'o': case 'O': return 24;
            case 'p': case 'P': return 25;
            case 'q': case 'Q': return 26;
            case 'r': case 'R': return 27;
            case 's': case 'S': return 28;
            case 't': case 'T': return 29;
            case 'u': case 'U': return 30;
            case 'v': case 'V': return 31;
            case 'w': case 'W': return 32;
            case 'x': case 'X': return 33;
            case 'y': case 'Y': return 34;
            case 'z': case 'Z': return 35;
            default: return word_mask();
        }
    }

    static word word_gcd(word a, word b) {
        while (1) {
            if (a == 0) return b;
            b %= a;
            if (b == 0) return a;
            a %= b;
        }
    }

    big_num(): neg(false) {}

    big_num(size_t n, word w, bool neg = false): words(n, w), neg(neg) {}

    big_num(const word *a, const word *b, bool neg = false) : words(a, b), neg(neg) {}

    big_num(const big_num &a) {
        words = a.words;
        neg = a.neg;
    }

    big_num& operator = (const big_num &a) {
        words = a.words;
        neg = a.neg;
        return *this;
    }

    big_num(int i): neg(i < 0) {
        for (unsigned u = std::abs(i); u;) {
            push_back(u);
            for (size_t j = 0; j < word_bits(); j++) u >>= 1;
        }
    }

    big_num(const char *c, word base = 10, char **endptr = NULL): neg(false) {
        if (*c == '-') {
            c++;
            neg = true;
        }
        for (;*c; c++) {
            mul_word(base);
            word b = char_to_word(*c);
            if (b >= base) break;
            add_word(b);
        }
        if (endptr) *endptr = (char*)c;
    }

    void resize(size_t n) {
        words.resize(n);
    }

    void pop_back() {
        words.pop_back();
    }

    void push_back(word b) {
        words.push_back(b);
    }

    word& back() {
        return words.back();
    }

    const word& back() const {
        return words.back();
    }

    size_t size() const {
        return words.size();
    }

    word& operator [] (size_t i) {
        return words[i];
    }

    const word& operator [] (size_t i) const {
        return words[i];
    }

    big_num& set_neg(bool neg) {
        this->neg = neg;
        return *this;
    }

    big_num& truncate() {
        while (size() > 0 && words.back() == 0) pop_back();
        return *this;
    }

    size_t bitlength() const {
        if (size() == 0) return 0;
        size_t last = size() - 1;
        size_t result = word_bitlength((*this)[last]) + last*word_bits();
        return result;
    }

    size_t count_trailing_zeros() const {
        for (size_t i = 0; i < size(); i++) {
            word w = (*this)[i];
            if (w) return word_count_trailing_zeros(w) + i*word_bits();
        }
        return 0;
    }

    static int cmp_abs(const big_num &a, const big_num &b) {
        size_t na = a.size(), nb = b.size();
        if (na != nb) {
            return na < nb ? -1 : +1;
        }
        for (size_t i = na; i --> 0;) {
            word wa = a[i], wb = b[i];
            if (wa != wb) {
                return wa < wb ? -1 : +1;
            }
        }
        return 0;
    }

    static int cmp(const big_num &a, const big_num &b) {
        if (a.size() == 0 && b.size() == 0) return 0;
        if (!a.neg && !b.neg) return +cmp_abs(a, b);
        if ( a.neg &&  b.neg) return -cmp_abs(a, b);
        return a.neg && !b.neg ? -1 : +1;
    }

    static size_t word_bitlength(word a) {
        for (int i = word_bits() - 1; i >= 0; i--) if ((a >> i) & 1) return i+1;
        return 0;
    }

    static size_t word_count_trailing_zeros(word a) {
        for (int i = 0; i < (int)word_bits(); i++) if ((a >> i) & 1) return i;
        return word_bits();
    }

    static word add_carry(word *a, word b) {
        return (*a += b) < b;
    }

    static word sub_carry(word *a, word b) {
        word tmp = *a;
        return (*a = tmp - b) > tmp;
    }

    static word word_mul_hi(word a, word b) {
        size_t n = word_bits()/2;
        word a_hi = a >> n;
        word a_lo = a & word_half_mask();
        word b_hi = b >> n;
        word b_lo = b & word_half_mask();
        word tmp = ((a_lo*b_lo) >> n) + a_hi*b_lo;
        tmp = (tmp >> n) + ((a_lo*b_hi + (tmp & word_half_mask())) >> n);
        return tmp + a_hi*b_hi;
    }

    static big_num& add_unsigned_overwrite(big_num &a, const big_num &b) {
        size_t i, na = a.size(), nb = b.size(), n = std::max(na, nb);
        a.resize(n);
        word carry = 0;
        for (i = 0; i < nb; i++) {
            carry  = add_carry(&a[i], carry);
            carry += add_carry(&a[i], b[i]);
        }
        for (; i < n && carry; i++) carry = add_carry(&a[i], carry);
        if (carry) a.push_back(carry);
        return a.truncate();
    }

    static big_num& sub_unsigned_overwrite(big_num &a, const big_num &b) {
        size_t i, na = a.size(), nb = b.size();
        word carry = 0;
        for (i = 0; i < nb; i++) {
            carry  = sub_carry(&a[i], carry);
            carry += sub_carry(&a[i], b[i]);
        }
        for (; i < na && carry; i++) carry = sub_carry(&a[i], carry);
        return a.truncate();
    }

    static big_num mul_long(const big_num &a, const big_num &b) {
        size_t na = a.size(), nb = b.size(), nc = na + nb + 1;
        big_num c(nc, 0, a.neg ^ b.neg), carries(nc, 0);
        for (size_t ia = 0; ia < na; ia++) {
            for (size_t ib = 0; ib < nb; ib++) {
                size_t i = ia + ib, j = i + 1;
                // WARNING: Might overflow if word size is chosen too small
                carries[i + 1] += add_carry(&c[i], a[ia] * b[ib]);
                carries[j + 1] += add_carry(&c[j], word_mul_hi(a[ia], b[ib]));
            }
        }
        return add_unsigned_overwrite(c, carries).truncate();
    }

    static big_num mul_karatsuba(const big_num &a, const big_num &b) {
        size_t na = a.size(), nb = b.size(), n = std::max(na, nb), m2 = n/2 + (n & 1);
        big_num a_parts[2], b_parts[2];
        split(a, a_parts, 2, m2);
        split(b, b_parts, 2, m2);
        m2 *= word_bits();
        big_num z0 = a_parts[0] * b_parts[0];
        big_num z1 = (a_parts[0] + a_parts[1]) * (b_parts[0] + b_parts[1]);
        big_num z2 = a_parts[1] * b_parts[1];
        big_num result = z2;
        result <<= m2;
        result += z1 - z2 - z0;
        result <<= m2;
        result += z0;
        return result;
    }

    static big_num mul(const big_num &a, const big_num &b) {
        size_t karatsuba_threshold = 20;
        if (a.size() > karatsuba_threshold && b.size() > karatsuba_threshold) {
            return mul_karatsuba(a, b);
        }
        return mul_long(a, b);
    }

    static big_num add_signed(const big_num &a, bool a_neg, const big_num &b, bool b_neg) {
        if (a_neg == b_neg) return add_unsigned(a, b).set_neg(a_neg);
        if (cmp_abs(a, b) >= 0) return sub_unsigned(a, b).set_neg(a_neg);
        return sub_unsigned(b, a).set_neg(b_neg);
    }

    big_num& operator >>= (size_t n_bits) {
        if (n_bits == 0) return *this;
        size_t n_words = n_bits / word_bits();
        if (n_words >= size()) {
            resize(0);
            return *this;
        }
        n_bits %= word_bits();
        if (n_bits == 0) {
            for (size_t i = 0; i < size() - n_words; i++) {
                (*this)[i] = (*this)[i + n_words];
            }
        }
        else{
            word hi, lo = (*this)[n_words];
            for (size_t i = 0; i < size() - n_words - 1; i++) {
                hi = (*this)[i + n_words + 1];
                (*this)[i] = (hi << (word_bits() - n_bits)) | (lo >> n_bits);
                lo = hi;
            }
            (*this)[size() - n_words - 1] = lo >> n_bits;
        }
        resize(size() - n_words);
        return truncate();
    }

    big_num& operator <<= (size_t n_bits) {
        if (n_bits == 0) return *this;
        size_t n_words = n_bits / word_bits();
        n_bits %= word_bits();
        size_t old_size = size();
        size_t n = old_size + n_words + (n_bits != 0);
        resize(n);
        if (n_bits == 0) {
            for (size_t i = n; i --> n_words;) {
                (*this)[i] = (*this)[i - n_words];
            }
        }
        else{
            word lo, hi = 0;
            for (size_t i = n - 1; i > n_words; i--) {
                lo = (*this)[i - n_words - 1];
                (*this)[i] = (hi << n_bits) | (lo >> (word_bits() - n_bits));
                hi = lo;
            }
            (*this)[n_words] = hi << n_bits;
        }
        for (size_t i = 0; i < n_words; i++) (*this)[i] = 0;
        return truncate();
    }

    static void div_mod(const big_num &big_numerator, big_num denominator, big_num &quotient, big_num &remainder) {
        quotient = 0;
        remainder = big_numerator;
        if (cmp_abs(remainder, denominator) >= 0) {
            int n = big_numerator.bitlength() - denominator.bitlength();
            denominator <<= n;
            for (; n >= 0; n--) {
                if (cmp_abs(remainder, denominator) >= 0) {
                    sub_unsigned_overwrite(remainder, denominator);
                    quotient.set_bit(n);
                }
                denominator >>= 1;
            }
        }
        quotient.set_neg(big_numerator.neg ^ denominator.neg);
        remainder.set_neg(big_numerator.neg);
    }

    static void div_mod_half_word(const big_num &big_numerator, word denominator, big_num &quotient, word &remainder) {
        remainder = 0;
        big_num dst(big_numerator.size(), 0);

        for (size_t i = big_numerator.size(); i --> 0;) {
            word dst_word = 0;
            word src_word = big_numerator[i];
            word parts[2];
            parts[0] = src_word >> word_bits()/2;
            parts[1] = src_word & word_half_mask();

            for (size_t j = 0; j < 2; j++) {
                remainder <<= word_bits()/2;
                remainder |= parts[j];

                word div_word = remainder / denominator;
                word mod_word = remainder % denominator;
                remainder = mod_word;

                dst_word <<= word_bits()/2;
                dst_word |= div_word;
            }

            dst[i] = dst_word;
        }

        quotient = dst.truncate().set_neg(big_numerator.neg);
    }

    static void split(const big_num &a, big_num *parts, size_t n_parts, size_t n) {
        size_t i = 0;
        for (size_t k = 0; k < n_parts; k++) {
            big_num &part = parts[k];
            part.resize(n);
            for (size_t j = 0; j < n && i < a.size(); j++) part[j] = a[i++];
            part = part.truncate();
        }
    }

    static big_num div(const big_num &big_numerator, const big_num& denominator) {
        big_num quotient, remainder;
        div_mod(big_numerator, denominator, quotient, remainder);
        return quotient;
    }

    static big_num mod(const big_num &big_numerator, const big_num& denominator) {
        big_num quotient, remainder;
        div_mod(big_numerator, denominator, quotient, remainder);
        return remainder;
    }

    static big_num add_unsigned(const big_num &a, const big_num &b) {
        big_num result(a);
        return add_unsigned_overwrite(result, b);
    }

    static big_num sub_unsigned(const big_num &a, const big_num &b) {
        big_num result(a);
        return sub_unsigned_overwrite(result, b);
    }

    static big_num add(const big_num &a, const big_num &b) {
        big_num result = add_signed(a, a.neg, b, b.neg);
        return result;
    }

    static big_num sub(const big_num &a, const big_num &b) {
        big_num result = add_signed(a, a.neg, b, !b.neg);
        return result;
    }

    static big_num gcd(const big_num &a0, const big_num &b0) {

        if (a0.size() == 1 && b0.size() == 1) {
            return big_num(1, word_gcd(a0[0], b0[0]));
        }

        big_num a(a0), b(b0);
        a.neg = b.neg = false;

        if (a.size() == 0) return b0;
        if (b.size() == 0) return a0;

        size_t n = std::min(a.count_trailing_zeros(), b.count_trailing_zeros());

        a >>= n;
        b >>= n;

        do {
            b >>= b.count_trailing_zeros();
            if (cmp_abs(a, b) > 0) a.words.swap(b.words);
            sub_unsigned_overwrite(b, a);
        } while (b.size() > 0);

        a <<= n;

        return a;
    }

    typedef void (*random_func)(uint8_t *bytes, size_t n_bytes);

    static big_num random_bits(size_t n_bits, random_func func) {
        if (n_bits == 0) return 0;
        size_t partial_bits = n_bits % word_bits();
        size_t n_words = n_bits / word_bits() + (partial_bits > 0);
        size_t n_bytes = n_words*sizeof(word);
        big_num result(n_words, 0);
        uint8_t *bytes = (uint8_t*)&result[0];
        func(bytes, n_bytes);
        if (partial_bits) {
            size_t too_many_bits = word_bits() - partial_bits;
            result.back() >>= too_many_bits;
        }
        return result;
    }

    static big_num random_inclusive(const big_num &inclusive, random_func func) {
        size_t n_bits = inclusive.bitlength();
        while (true) {
            big_num result = random_bits(n_bits, func);
            if (result <= inclusive) return result;
        }
    }

    static big_num random_exclusive(const big_num &exclusive, random_func func) {
        size_t n_bits = exclusive.bitlength();
        while (true) {
            big_num result = random_bits(n_bits, func);
            if (result < exclusive) return result;
        }
    }

    static big_num random_second_exclusive(const big_num &inclusive_min_val, const big_num &exclusive_max_val, random_func func) {
        return inclusive_min_val + random_exclusive(exclusive_max_val - inclusive_min_val, func);
    }

    static big_num random_both_inclusive(const big_num &inclusive_min_val, const big_num &inclusive_max_val, random_func func) {
        return inclusive_min_val + random_inclusive(inclusive_max_val - inclusive_min_val, func);
    }

    big_num& set_bit(size_t i) {
        size_t i_word = i / word_bits();
        size_t i_bit =  i % word_bits();
        if (size() <= i_word) resize(i_word + 1);
        (*this)[i_word] |= ((word)1) << i_bit;
        return *this;
    }

    word get_bit(size_t i) const {
        size_t i_word = i / word_bits();
        size_t i_bit =  i % word_bits();
        if (i_word >= size()) return 0;
        return ((*this)[i_word] >> i_bit) & 1;
    }

    void clr_bit(size_t i) {
        size_t i_word = i / word_bits();
        size_t i_bit =  i % word_bits();
        if (i_word >= size()) return;
        word mask = 1;
        mask <<= i_bit;
        (*this)[i_word] &= ~mask;
    }

    big_num& mul_word(word b) {
        word carry = 0;
        for (size_t i = 0; i < size(); i++) {
            word a = (*this)[i];
            word tmp = a * b;
            carry = add_carry(&tmp, carry);
            carry += word_mul_hi(a, b);
            (*this)[i] = tmp;
        }
        if (carry) push_back(carry);
        return truncate();
    }

    big_num& add_word(word carry, size_t i0 = 0) {
        if (i0 >= size()) resize(i0 + 1);
        for (size_t i = i0; i < size() && carry; i++) {
            carry = add_carry(&(*this)[i], carry);
        }
        if (carry) push_back(carry);
        return truncate();
    }

    void print(
        std::vector<char> &text,
        word base = 10,
        const char *alphabet = "0123456789abcdefghijklmnopqrstuvwxyz"
    ) const {
        if (size() == 0) {
            text.push_back('0');
        }
        else{
            big_num tmp(*this);
            while (tmp.size() > 0) {
                word remainder;
                div_mod_half_word(tmp, base, tmp, remainder);
                text.push_back(alphabet[remainder]);
            }
            if (neg) text.push_back('-');
            std::reverse(text.begin(), text.end());
        }
    }

    double to_double() const {
        if (size() == 0) return 0.0;
        double d = 0.0, base = ::pow(2.0, word_bits());
        for (size_t i = size(); i --> 0;) d = d * base + (*this)[i];
        return neg ? -d : d;
    }

    big_num pow(size_t exponent) const {
        big_num result(1), p(*this);
        for (; exponent; exponent >>= 1) {
            if (exponent & 1) {
                result = result * p;
                exponent--;
            }
            p = p * p;
        }
        return result;
    }

    big_num mod_pow(big_num exponent, const big_num& modulus) const {
        big_num result(1), base = (*this) % modulus;
        for (; exponent.size() > 0; exponent >>= 1) {
            if (exponent.get_bit(0)) {
                result = (result * base) % modulus;
            }
            base = (base * base) % modulus;
        }
        return result;
    }

    big_num sqrt() const {
        big_num n = *this;
        int bit = bitlength();
        if (bit & 1) bit ^= 1;
        big_num result = 0;
        for (; bit >= 0; bit -= 2) {
            big_num tmp = result;
            tmp.set_bit(bit);
            if (n >= tmp) {
                n -= tmp;
                result.set_bit(bit + 1);
            }
            result >>= 1;
        }
        return result;
    }

    big_num& operator ++() {
        add_word(1);
        return *this;
    }

    big_num& operator += (const big_num &b) { return *this = add(*this, b); }
    big_num& operator -= (const big_num &b) { return *this = sub(*this, b); }
    big_num& operator *= (const big_num &b) { return *this = mul(*this, b); }
    big_num& operator /= (const big_num &b) { return *this = div(*this, b); }
    big_num& operator %= (const big_num &b) { return *this = mod(*this, b); }

    bool operator == (const big_num &b) const { return cmp(*this, b) == 0; }
    bool operator != (const big_num &b) const { return cmp(*this, b) != 0; }
    bool operator <= (const big_num &b) const { return cmp(*this, b) <= 0; }
    bool operator >= (const big_num &b) const { return cmp(*this, b) >= 0; }
    bool operator <  (const big_num &b) const { return cmp(*this, b) <  0; }
    bool operator >  (const big_num &b) const { return cmp(*this, b) >  0; }

    big_num operator + (const big_num &b) const { return add(*this, b); }
    big_num operator - (const big_num &b) const { return sub(*this, b); }
    big_num operator * (const big_num &b) const { return mul(*this, b); }
    big_num operator / (const big_num &b) const { return div(*this, b); }
    big_num operator % (const big_num &b) const { return mod(*this, b); }
    big_num operator - (                ) const { return big_num(*this).set_neg(!neg); }

    big_num operator >> (size_t n_bits) const { return big_num(*this) >>= n_bits; }
    big_num operator << (size_t n_bits) const { return big_num(*this) <<= n_bits; }
};

std::ostream& operator<<(std::ostream& os, const big_num& num)
{
    std::vector<char> text;
    num.print(text);
    for(const char c : text) {
        os << c;
    }
    return os;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    big_num num(n);
    for(int i = 1; i <= n - 1; i++) {
        num += (n - i) * i;
    }

    std::cout << num << std::endl;

    return 0;
}
