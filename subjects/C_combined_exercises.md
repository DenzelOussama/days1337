# C Piscine — Combined Exercises (C01+C02+C03 synthesis)

Not official subjects — built by mixing prototypes/logic from your C01, C02, C03
PDFs. Ranked easiest → hardest. No solutions here, figure them out yourself.

---

## Exercise 1 : ft_count_alpha_num

```c
void	ft_count_alpha_num(char *str, int *alpha, int *num);
```

- Count alphabetic characters and digit characters in `str`.
- Store the two counts in `*alpha` and `*num`.
- **Combines:** pointer output-params (C01 `ft_div_mod`) + char classification
  (C02 `ft_str_is_alpha` / `ft_str_is_numeric`).
- Allowed functions: None

---

## Exercise 2 : ft_strcpy_upper

```c
char	*ft_strcpy_upper(char *dest, char *src);
```

- Copy `src` into `dest`, uppercasing every letter as you go — one pass.
- Return `dest`.
- **Combines:** C02 `ft_strcpy` + `ft_strupcase`, merged into a single loop.
- Allowed functions: None

---

## Exercise 3 : ft_rev_str

```c
int	ft_rev_str(char *str);
```

- Reverse `str` in place using a two-index approach (same idea as
  `ft_rev_int_tab`, applied to a string).
- Return the string's length.
- **Combines:** C01 `ft_rev_int_tab` (in-place two-pointer swap) + C02
  `ft_strlen` (return convention).
- Allowed functions: None

---

## Exercise 4 : ft_strcat_if_alpha

```c
int	ft_strcat_if_alpha(char *dest, char *src);
```

- If `src` contains only alphabetic characters, append it to `dest` (like
  `strcat`) and return 1.
- Otherwise leave `dest` untouched and return 0.
- **Combines:** C02 `ft_str_is_alpha` as a gate + C03 `ft_strcat` as the
  action, with an `is_`-style return value.
- Allowed functions: None

---

## Exercise 5 : ft_strstr_count

```c
int	ft_strstr_count(char *str, char *to_find, int *first_index);
```

- Count non-overlapping occurrences of `to_find` in `str`.
- Store the index of the first occurrence in `*first_index` (`-1` if none).
- Return the total count.
- **Combines:** C03 `ft_strstr` (substring search) + C01-style pointer
  output-param (`ft_div_mod`).
- Allowed functions: None

---

## Exercise 6 : ft_strlcat_capitalize

```c
unsigned int	ft_strlcat_capitalize(char *dest, char *src, unsigned int size);
```

- Behave exactly like `ft_strlcat`: append `src` to `dest`, never write past
  `size`, null-terminate if `size` allows it, return the total length it
  *tried* to create (like real `strlcat` does, even on truncation).
- Then capitalize the first letter of each word in the resulting `dest`.
- **Combines:** C03 `ft_strlcat` (bounded concat + truncation semantics) +
  C02 `ft_strcapitalize` (word-boundary logic) — stacked, so truncation
  edge cases actually matter here.
- Allowed functions: None
- Example: `dest` buffer of size 10 holds `"hi "`, `src = "there friend"`
  → `ft_strlcat` alone would write `"hi there f"` and return 15 (3+12);
  after capitalizing: `"Hi There F"`.

---

## Exercise 7 : ft_print_memory_diff

```c
int	ft_print_memory_diff(void *addr1, void *addr2, unsigned int size);
```

- Compare `size` bytes at `addr1` and `addr2` byte-by-byte (like
  `ft_strncmp`, but always for exactly `size` bytes — no stopping at `\0`).
- Print only the lines (in `ft_print_memory`'s 3-column hex+ASCII format,
  address from `addr1`) where a differing byte occurs.
- Return the total number of differing bytes.
- **Combines:** C02 `ft_print_memory` (hex/ASCII column format, non-printable
  → `.`) + C03 `ft_strncmp` (fixed-count byte comparison) + pointer
  arithmetic over raw memory (C01).
- Allowed functions: write
