/*
 * Example 115
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 7093
 * Source: pribault/Lem_in
 */

/** Decompiled (with Hex-Rays) **/
_QWORD *ft_lstnew(long long a1, size_t a2)
{
  _QWORD *v3;
  v3 = malloc(0x18uLL); // C3.b. Missing typecast, ???sizeof
  if (!v3)
    return 0LL;

  if (a2 && a1)
  {
    *v3 = malloc(a2); // C3.b. Missing typecast, C1.a.iii. Pointer dereference to access first struct member
    if (!(*v3)) // C1.a.iii. Pointer dereference to access first struct member
      return 0LL;

    *v3 = ft_memmove(*v3, a1, a2); // C1.a.iii. Pointer dereference to access first struct member
  }

  v3[1] = a2; // C1.a.ii. Array access to access struct members
  if (!a1)
  {
    *v3 = 0LL; // C1.a.iii. Pointer dereference to access first struct member
    v3[1] = 0LL; // C1.a.ii. Array access to access struct members
  }

  v3[2] = 0LL; // C1.a.ii. Array access to access struct members
  return v3;
}


/** Original **/
t_list *ft_lstnew(const void *content, size_t content_size)
{
  t_list *new;
  new = (t_list *) malloc(sizeof(t_list));
  if (new == 0)
    return 0;

  if ((content_size != 0) && (content != 0))
  {
    if (!(new->content = (void *) malloc(content_size)))
      return 0;

    new->content = ft_memmove(new->content, content, content_size);
  }

  new->content_size = content_size;
  if (content == 0)
  {
    new->content = 0;
    new->content_size = 0;
  }

  new->next = 0;
  return new;
}




/*
 * Example 124
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 6191
 * Source: shengjh/pa2v.1
 */

/** Decompiled (with Hex-Rays) **/
long long exec_test() // C4.a.ii. Missing arguments, C12.a. Return value for void function
{
  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  // C6. Non-idiomatic literal representation - 0x994 replaces &(&decoding.dest)->val
  // C8. Issue in representing global variables - (&operand_write) + 1 replaces &(&decoding.src)->val
  interpret_rtl_and(&t0, (_DWORD *) 0x994, ((_DWORD *) (&operand_write)) + 1);
  rtl_update_ZFSF(&t0, decoding[19]); // C1.a.ii. Array access to access struct members
  interpret_rtl_li(&t1, 0);
  rtl_set_CF(&t1);
  return rtl_set_OF(&t1);
}


/** Original **/
void exec_test(vaddr_t *eipo)
{
  interpret_rtl_and(&t0, &(&decoding.dest)->val, &(&decoding.src)->val);
  rtl_update_ZFSF(&t0, (&decoding.dest)->width);
  interpret_rtl_li(&t1, 0);
  rtl_set_CF(&t1);
  rtl_set_OF(&t1);
  ;
}




/*
 * Example 142
 * File: idioms_data_copy/data_0025.pkl
 * Shard 25, Index 315
 * Source: dhmunro/yorick
 */

/** Decompiled (with Hex-Rays) **/
long long FreeTextStream(long long a1) // C12.a. Return value for void function
{
  // C5.b. Missing variable io
  long long v2;
  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  v2 = *((_QWORD *) (a1 + 16));
  if (v2)
    p_fclose(v2);

  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  p_free(*((_QWORD *) (a1 + 24)));
  RemoveIOLink(yTextFiles, a1);
  return y_FreeUnit(&txtsBlock, a1);
}


/** Original **/
void FreeTextStream(void *ios)
{
  TextStream *io = ios;
  p_file *stream = io->stream;
  if (stream)
    p_fclose(stream);

  p_free(io->fullname);
  RemoveIOLink(yTextFiles, io);
  y_FreeUnit(&txtsBlock, io);
}




/*
 * Example 134
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 9038
 * Source: abbeyj/ti99basic
 */

/** Decompiled (with Hex-Rays) **/
// No codes
long long vdp_data_read()
{
  unsigned char v0;
  vdp_cmd_write_2 = 0;
  v0 = vdp_data_read_latch;
  vdp_data_read_ahead();
  return v0;
}


/** Original **/
inline static uint8_t vdp_data_read()
{
  uint8_t ret;
  vdp_cmd_write_2 = 0;
  ret = vdp_data_read_latch;
  vdp_data_read_ahead();
  return ret;
}




/*
 * Example 121
 * File: idioms_data_copy/data_0022.pkl
 * Shard 22, Index 3757
 * Source: shiquan/bcfanno
 */

/** Decompiled (with Hex-Rays) **/
long long isprint_c(unsigned char a1)
{
  // C3.b. Missing typecasts
  // C4.b. Equivalence depends on behavior of external code - (I think) this only works if the value at the address returned by _ctype_b_loc() plus sizeof(long long) * a1 then bitwise-anded with 0x4000 is the same as isprint(a1)
  return (*_ctype_b_loc())[a1] & 0x4000;
}


/** Original **/
inline static int isprint_c(char c)
{
  return isprint((unsigned char) c);
}




/*
 * Example 116
 * File: idioms_data_copy/data_0021.pkl
 * Shard 21, Index 1337
 * Source: SunDoge/kilo
 */

/** Decompiled (with Hex-Rays) **/
signed long long initEditor() // C12.a. Return value for void function
{
  signed long long result; // C5.a. Extraneous variables
  E = 0; // C13. Decomposition of a compositie variable into multiple variables
  // C8. Issue in representing global variables
  // C13. Decomposition of a composite variable into multiple variables
  dword_4040E4 = 0;
  // C8. Issue in representing global variables
  // C13. Decomposition of a composite variable into multiple variables
  dword_4040F0 = 0;
  // C2.a.i. Extra statement to assign to an extraneous variable
  // C8. Issue in representing global variables
  // C13. Decomposition of a composite variable into multiple variables
  result = getWindowSize(&dword_4040E8, &dword_4040EC);
  if (((_DWORD) result) == (-1)) // C3.a. Extraneous typecasts
    die("getWindowSize");

  return result;
}


/** Original **/
void initEditor()
{
  E.cx = 0;
  E.cy = 0;
  E.numrows = 0;
  if (getWindowSize(&E.screenrows, &E.screencols) == (-1))
    die("getWindowSize");

}




/*
 * Example 196
 * File: idioms_data_copy/data_0035.pkl
 * Shard 35, Index 123
 * Source: dylanmc/pidp8
 */

/** Decompiled (with Hex-Rays) **/
// No codes
long long sim_os_ttclose()
{
  return sim_ttcmd();
}


/** Original **/
static t_stat sim_os_ttclose(void)
{
  return sim_ttcmd();
}




/*
 * Example 125
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 375
 * Source: vivanraaj/Neuro_Agent_FInal
 */

/** Decompiled (with Hex-Rays) **/
long long read_string(unsigned int a1, _BYTE *a2) // C12.a. Return value for void function
{
  long long result;
  *a2 = 0; // C1.b.i. Pointer dereference to access array members
  do
    result = stream_read_input(a1, a2, 0LL, 0LL, 0LL, 0LL);
  while (((_BYTE) result) != 13); // C3.a. Extraneous typecasts
  return result;
}


/** Original **/
void read_string(int max, zchar *buffer)
{
  zchar key;
  buffer[0] = 0;
  do
  {
    key = stream_read_input(max, buffer, 0, 0, 0, 0);
  }
  while (key != 0x0d);
}




/*
 * Example 178
 * File: idioms_data_copy/data_0032.pkl
 * Shard 32, Index 7762
 * Source: jmcnamara/libxlsxwriter
 */

/** Decompiled (with Hex-Rays) **/
long long worksheet_select(long long a1) // C12.a. Return value for void function
{
  long long result;   // C5.a. Extraneous variables
  // C1.a.i. Pointer arithmetic to access struct members
  // C3.a. Extraneous typecasts
  // C9.b. Expanded user-defined macros
  *((_BYTE *) (a1 + 133)) = 1;
  result = a1; // C2.a.i. Extra statement to assign to an extraneous variable
  // C1.a.i. Pointer arithmetic to access struct members
  // C3.a. Extraneous typecasts
  // C9.b. Expanded user-defined macros
  *((_BYTE *) (a1 + 134)) = 0;
  return result;
}


/** Original **/
void worksheet_select(lxw_worksheet *self)
{
  self->selected = LXW_TRUE;
  self->hidden = LXW_FALSE;
}




/*
 * Example 151
 * File: idioms_data_copy/data_0027.pkl
 * Shard 27, Index 3036
 * Source: St4rk/snsPlayer
 */

/** Decompiled (with Hex-Rays) **/
// These C4. might be instances of C14., but I'm not sure
long long rol_a() // C12.a. Return value for void function
{
  long long result; // C5.a. Extraneous variable
  if (P & 1)
  {
    if (A >= 0) // C4. Nonequivalent expression - This depends on the type of A. E.g., if A is a long this would not be equivalent.
      P &= 0xFEu; // C4. Nonequivalent expression - This depends on the type of P. E.g., if P is a long this would not be equivalent.
    else
      P |= 1u;

    A = (2 * A) | 1; // C4. Nonequivalent expression - Multiplication by 2 and left shift by 1 are the same operation, but are undefined in different situations depending on the type of the left operand.
  }
  else
  {
    if (A >= 0) // C4. Nonequivalent expression - This depends on the type of A. E.g., if A is a long this would not be equivalent.
      P &= 0xFEu; // C4. Nonequivalent expression - This depends on the type of P. E.g., if P is a long this would not be equivalent.
    else
      P |= 1u;

    A *= 2; // C4. Nonequivalent expression - Multiplication by 2 and left shift by 1 are the same operation, but are undefined in different situations depending on the type of the left operand.
  }

  if (A)
    P &= 0xFDu; // C4. Nonequivalent expression - This depends on the type of P. E.g., if P is a long this would not be equivalent.
  else
    P |= 2u;

  if (A >= 0) // C4. Nonequivalent expression - This depends on the type of A. E.g., if A is a long this would not be equivalent.
    P &= 0x7Fu; // C4. Nonequivalent expression - This depends on the type of P. E.g., if P is a long this would not be equivalent.
  else
    P |= 0x80u;

  result = (unsigned int) (tick_count + 2); // C2.a.i. Extra statement to assign to an extraneous variable
  tick_count += 2;
  return result;
}


/** Original **/
void rol_a()
{
  if (P & 0x1)
  {
    if (A & 0x80)
    {
      P |= 0x1;
    }
    else
    {
      P &= ~0x1;
    }

    A = (A << 1) | 0x1;
  }
  else
  {
    if (A & 0x80)
    {
      P |= 0x1;
    }
    else
    {
      P &= ~0x1;
    }

    A <<= 1;
  }

  if (A)
  {
    P &= ~0x2;
  }
  else
  {
    P |= 0x2;
  }

  if (A & 0x80)
  {
    P |= 0x80;
  }
  else
  {
    P &= ~0x80;
  }

  tick_count += 2;
}




/*
 * Example 112
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 907
 * Source: freshpassport/utils
 */

/** Decompiled (with Hex-Rays) **/
void usage(long long a1)
{
  // C8. Issue in representing global variables - _bss_start vs stdout
  fprintf(_bss_start, "%s [--unit <B|M|G|T>] <DEVICE> [<DEVICE> ...]\n", a1);
  exit(0);
}


/** Original **/
void usage(const char *prog)
{
  fprintf(stdout, "%s [--unit <B|M|G|T>] <DEVICE> [<DEVICE> ...]\n", prog);
  exit(0);
}




/*
 * Example 194
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 9071
 * Source: robamler/mupdf-nacl
 */

/** Decompiled (with Hex-Rays) **/
long long cbz_lookup_metadata(long long a1, long long a2, const char *a3, long long a4, unsigned int a5)
{
  long long result; // C5.a. Extraneous variables
  unsigned int v6; // C5.a. Extraneous variables
  long long v7; // C5.a. Extraneous variables
  v7 = a4; // C2.a.i. Extra statement to assign to an extraneous variable
  v6 = a5; // C2.a.i. Extra statement to assign to an extraneous variable
  if (!strcmp(a3, "format"))
    result = fz_strlcpy(v7, "CBZ", v6);
  else
    result = 0xFFFFFFFFLL;

  return result;
}


/** Original **/
static int cbz_lookup_metadata(fz_context *ctx, cbz_document *doc, const char *key, char *buf, int size)
{
  if (!strcmp(key, "format"))
    return fz_strlcpy(buf, "CBZ", size);

  return -1;
}




/*
 * Example 128
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 6118
 * Source: megamarc/Tilengine
 */

/** Decompiled (with Hex-Rays) **/
signed long long TLN_AddSequenceToPack(long long a1, long long a2)
{
  // C3.a. Extraneous typecasts
  // C4.b. Equivalence depends on behavior of external code - !CheckBaseObject() vs CheckBaseObject != 1
  // C9.b. Expanded user-defined macros
  if ((((unsigned char) CheckBaseObject(a1, 7LL)) != 1) || (((unsigned char) CheckBaseObject(a2, 6LL)) != 1))
    return 0LL;

  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  if (*((_QWORD *) (a1 + 24)))
    // C3.a. Extraneous typecasts
    // C1.a.i. Pointer arithmetic to access struct members
    *((_QWORD *) ((*((_QWORD *) (a1 + 32))) + 64LL)) = a2;
  else
    // C3.a. Extraneous typecasts
    // C1.a.i. Pointer arithmetic to access struct members
    *((_QWORD *) (a1 + 24)) = a2;

  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  *((_QWORD *) (a1 + 32)) = a2;
  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  *((_QWORD *) ((*((_QWORD *) (a1 + 32))) + 64LL)) = 0LL;
  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  ++(*((_DWORD *) (a1 + 16)));
  TLN_SetLastError(0LL); // C9.b. Expanded user-defined macros
  return 1LL;
}


/** Original **/
bool TLN_AddSequenceToPack(TLN_SequencePack sp, TLN_Sequence sequence)
{
  if ((!CheckBaseObject(sp, OT_SEQPACK)) || (!CheckBaseObject(sequence, OT_SEQUENCE)))
    return 0;

  if (sp->sequences == 0)
    sp->sequences = sequence;
  else
    sp->last->next = sequence;

  sp->last = sequence;
  sp->last->next = 0;
  sp->num_sequences++;
  TLN_SetLastError(TLN_ERR_OK);
  return 1;
}




/*
 * Example 198
 * File: idioms_data_copy/data_0035.pkl
 * Shard 35, Index 3125
 * Source: jbredeme/Stack-and-Queues
 */

/** Decompiled (with Hex-Rays) **/
const char *test_remove8()
{
  int *v0; // C5.a. Extraneous variables
  char *v1; // C5.a. Extraneous variables
  // C3.a. Extraneous typecasts
  // C4.a.ii. Missing arguments
  if (((char *) list_remove_value()) == test1)
    return 0LL;

  // C7.d. Deconstructed ternary - Entire if/else statement
  // C9.b. Expanded user-defined macros - I'm assuming that errno and strerror are user-defined macros
  if (*__errno_location())
  {
    v0 = __errno_location(); // C2.a. Extra statement to assign to an extraneous variable
    v1 = strerror(*v0); // C2.a. Extra statement to assign to an extraneous variable
  }
  else
  {
    v1 = "None"; // C2.a. Extra statement to assign to an extraneous variable
  }

  fprintf(stderr, "[ERROR] (%s:%d: errno: %s) Wrong node value returned removing node 1.\n", "tests/list_tests.c", 240LL, v1);
  return "Wrong node value returned removing node 1.";
}


/** Original **/
char *test_remove8()
{
  if (!(list_remove_value(list, test1) == test1))
  {
    fprintf(stderr, "[ERROR] (%s:%d: errno: %s) Wrong node value returned removing node 1.\n", "tests/list_tests.c", 240, (errno == 0) ? ("None") : (strerror(errno)));
    return "Wrong node value returned removing node 1.";
  }

  ;
  return 0;
}




/*
 * Example 105
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 1037
 * Source: ochaochaocha3/polytech-2014-algorithm-exam
 */

/** Decompiled (with Hex-Rays) **/
_BOOL8 confirm_delete()
{
  int v1;
  do
  {
    // C6.d. String replaced with reference to undeclared or global variable
    printf(&byte_405FB0);
    // C4.a.ii. Missing arguments
    // C4.b. Equivalence depends on behavior of external code - It is possible that __isoc99_scanf() calls scanf with the arguments "%d" and &v1.
    __isoc99_scanf();
  }
  while (v1 && (v1 != 1));
  return v1 == 0;
}


/** Original **/
int confirm_delete(void)
{
  int answer;
  do
  {
    printf("削除しますか? (Yes: 0 / No: 1) > ");
    scanf("%d", &answer);
  }
  while ((answer != 0) && (answer != 1));
  return answer == 0;
}




/*
 * Example 150
 * File: idioms_data_copy/data_0027.pkl
 * Shard 27, Index 1175
 * Source: majstar/RevisedSDCCLinker-n
 */

/** Decompiled (with Hex-Rays) **/
// C12.a. Return value for void function
// C5.b. Missing variable - procName
int File_writeHex(long long *a1, long long a2, unsigned char a3)
{
  int result;
  unsigned char v4; // C5.a.i. Extraneous variable duplicating another variable
  long long v5;
  v4 = a3;
  v5 = *a1;
  // C3.a. Extraneous typecasts
  result = File__checkValidityPRE(*a1, (long long) "File_writeHex");
  if (result)
    // C3.a. Extraneous typecasts
    // C1.a.i. Pointer arithmetic to access struct members
    result = fprintf(*((FILE **) (v5 + 8)), "%.*x", v4, a2);

  return result;
}


/** Original **/
void File_writeHex(File_Type *file, UINT32 value, UINT8 digitCount)
{
  char *procName = "File_writeHex";
  File_Type currentFile = *file;
  Boolean precondition = File__checkValidityPRE(currentFile, procName);
  if (precondition)
  {
    fprintf(currentFile->filePointer, "%.*x", digitCount, value);
  }

}




/*
 * Example 160
 * File: idioms_data_copy/data_0029.pkl
 * Shard 29, Index 6626
 * Source: libretro/mame2003-libretro
 */

/** Decompiled (with Hex-Rays) **/
// C12.a. Return value for void function
// C4.a.ii. Missing arguments
long long toypop_sound_clear_w()
{
  // C9.b. Expanded user-defined macros
  return cpunum_set_reset_line(1LL, 0LL);
}


/** Original **/
void toypop_sound_clear_w(offs_t offset, data8_t data)
{
  cpunum_set_reset_line(1, CLEAR_LINE);
}




/*
 * Example 126
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 4093
 * Source: lpabon/qemu
 */

/** Decompiled (with Hex-Rays) **/
// C12.a. Return value for void function
unsigned long long qemu_co_queue_wait_insert_head(long long *a1)
{
  long long v2;
  unsigned long long v3; // C5.a. Extraneous variables
  v3 = __readfsqword(0x28u); // C2.a. Extraneous code
  v2 = qemu_coroutine_self();
  // C2.b. Missing code - do/while loop
  // ---
  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  *((_QWORD *) (v2 + 32)) = *a1;
  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  if (*((_QWORD *) (v2 + 32)))
    // C3.a. Extraneous typecasts
    // C1.a.i. Pointer arithmetic to access struct members
    *((_QWORD *) ((*a1) + 40)) = v2 + 32;
  else
    // C1.a.i. Pointer arithmetic to access struct members
    // C1.a.ii. Array access to access struct members
    a1[1] = v2 + 32;

  *a1 = v2; // C1.a.iii. Pointer dereference to access first struct member
  // C3.a. Extraneous typecasts
  // C1.a.i. Pointer arithmetic to access struct members
  *((_QWORD *) (v2 + 40)) = a1;
  qemu_coroutine_yield();
  // C9.a. Expanded standard macro - assert
  // C3.a. Extraneous typecasts
  if (!((unsigned char) qemu_in_coroutine()))
    _assert_fail("qemu_in_coroutine()", "qemu-coroutine-lock.c", 0x4Du, "qemu_co_queue_wait_insert_head");

  return __readfsqword(0x28u) ^ v3; // C2.a. Extraneous code
}


/** Original **/
void qemu_co_queue_wait_insert_head(CoQueue *queue)
{
  Coroutine *self = qemu_coroutine_self();
  do
  {
    if ((self->co_queue_next.tqe_next = (&queue->entries)->tqh_first) != 0)
      (&queue->entries)->tqh_first->co_queue_next.tqe_prev = &self->co_queue_next.tqe_next;
    else
      (&queue->entries)->tqh_last = &self->co_queue_next.tqe_next;

    (&queue->entries)->tqh_first = self;
    self->co_queue_next.tqe_prev = &(&queue->entries)->tqh_first;
  }
  while (0);
  qemu_coroutine_yield();
  assert(qemu_in_coroutine());
}




/*
 * Example 138
 * File: idioms_data_copy/data_0024.pkl
 * Shard 24, Index 4057
 * Source: klamonte/qodem
 */

/** Decompiled (with Hex-Rays) **/
signed long long exitErrorNotFound(long long a1, unsigned int a2)
{
  signed long long result; // C5.a. Extraneous variables
  // C2.b. Missing statement - assert macro
  // ???sizeof
  if ((a2 && (a2 <= 0x1B5D)) || ((a2 > 0x1F40) && (a2 <= 0x1F85))) // C9.b. Expanded user-defined macros - USER_INFO and others
    // C9.b. Expanded user-defined macros - CRYPT_ERRTYPE_ATTR_ABSENT
    // C6.c. Very large positive decimal integers for negative numbers
    result = exitError(a1, a2, 3u, 0xFFFFFFD5);
  else
    // C2.b. Missing statement - assert macro
    result = 4294967280LL; // C6.c. Very large positive decimal integers for negative numbers

  return result;
}


/** Original **/
static int exitErrorNotFound(USER_INFO *userInfoPtr, const CRYPT_ATTRIBUTE_TYPE errorLocus)
{
  assert((userInfoPtr != 0) && ((sizeof(USER_INFO)) > 0));
  if (!(((errorLocus > CRYPT_ATTRIBUTE_NONE) && (errorLocus < CRYPT_ATTRIBUTE_LAST)) || ((errorLocus > CRYPT_IATTRIBUTE_FIRST) && (errorLocus < CRYPT_IATTRIBUTE_LAST))))
  {
    assert(0);
    return -16;
  }

  ;
  return exitError(userInfoPtr, errorLocus, CRYPT_ERRTYPE_ATTR_ABSENT, -43);
}




/*
 * Example 107
 * File: idioms_data_copy/data_0019.pkl
 * Shard 19, Index 2333
 * Source: libretro/blueMSX-libretro
 */

/** Decompiled (with Hex-Rays) **/
_DWORD *harddiskIdeCreate(int a1)
{
  _DWORD *v1;
  _DWORD *v2; // C5.a.i. Extraneous variable duplicating another variable
  // ???sizeof
  v1 = malloc(0x20020uLL);
  v2 = v1; // C2.a.i. Extra statement to assign to an extraneous variable
  v1[32775] = a1; // C1.a.ii. Array access to access struct members
  v1[2] = 0; // C1.a.ii. Array access to access struct members
  v1[3] = 0; // C1.a.ii. Array access to access struct members
  harddiskIdeReset((long long) v1); // C3.a. Extraneous typecasts
  return v2;
}


/** Original **/
HarddiskIde *harddiskIdeCreate(int diskId)
{
  HarddiskIde *hd = malloc(sizeof(HarddiskIde));
  hd->diskId = diskId;
  hd->transferRead = 0;
  hd->transferWrite = 0;
  harddiskIdeReset(hd);
  return hd;
}




/*
 * Example 159
 * File: idioms_data_copy/data_0029.pkl
 * Shard 29, Index 6099
 * Source: libretro/mame2003-libretro
 */

/** Decompiled (with Hex-Rays) **/
// C12.a. Return value for void function
long long namcos2_sound_bankselect_w(long long a1, unsigned char a2)
{
  long long v2;
  long long result;
  unsigned int v4;
  v2 = memory_region(131LL); // C9.b. Expanded user-defined macros
  // C2.b. Missing code - do/while loop
  // C2.b. Missing code - optimized out if statement
  // C3.a. Extraneous typecasts
  // C3.b. Missing typecasts - (UINT8 *)
  // C1.b.ii. Pointer arithmetic to access array members - RAM is an array in the original
  // C9.b. Expanded user-defined macros - REGION_CPU3
  // C4. Nonequivalent expression - division by 0x4000 and shifting by 14 are equivalent but undefined in different situations
  cpu_bankbase[6] = v2 + ((signed int) ((((a2 >> 4) % (((unsigned long long) (memory_region_length(131LL) - 0x10000)) >> 14)) + 4) << 14));
  result = opcode_entry;
  if (opcode_entry == 6)
  {
    result = cpu_getactivecpu();
    if (((signed int) result) >= 0) // C3.a. Extraneous typecasts
    {
      opcode_entry = -1;
      v4 = activecpu_get_pc_byte();
      result = activecpu_set_op_base(v4); // C2.a.i. Extra statement to assign to an extraneous variable
    }

  }

  return result;
}


/** Original **/
void namcos2_sound_bankselect_w(offs_t offset, data8_t data)
{
  unsigned char *RAM = memory_region(REGION_CPU3);
  unsigned long max = (memory_region_length(REGION_CPU3) - 0x10000) / 0x4000;
  int bank = (data >> 4) % max;
  do
  {
    if ((6 >= 1) && (6 <= (25 - 1)))
    {
      cpu_bankbase[6] = (UINT8 *) (&RAM[0x10000 + (0x4000 * bank)]);
      if ((opcode_entry == 6) && (cpu_getactivecpu() >= 0))
      {
        opcode_entry = 0xff;
        activecpu_set_op_base(activecpu_get_pc_byte());
      }

    }

  }
  while (0);
}




/*
 * Example 193
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 8669
 * Source: Open-App-Library/Markdown-Panda
 */

/** Decompiled (with Hex-Rays) **/
long long myencoding_decode_iso_8859_8_i(unsigned char a1, long long a2)
{
  if ((a1 & 0x80u) != 0)
    // C3.a. Extraneous typecasts
    // C1.a.i. Pointer arithmetic to access struct members
    *((_QWORD *) (a2 + 24)) = myencoding_map_iso_8859_8[a1 - 128];
  else
    // C3.a. Extraneous typecasts
    // C1.a.i. Pointer arithmetic to access struct members
    *((_QWORD *) (a2 + 24)) = a1;

  return 0LL; // C9.b. Expanded user-defined macros
}


/** Original **/
myencoding_status_t myencoding_decode_iso_8859_8_i(const unsigned char data, myencoding_result_t *res)
{
  if (data <= 0x7F)
    res->result = data;
  else
    res->result = myencoding_map_iso_8859_8[data - 0x80];

  return MyENCODING_STATUS_OK;
}




/*
 * Example 190
 * File: idioms_data_copy/data_0034.pkl
 * Shard 34, Index 6956
 * Source: ygarrot/21sh
 */

/** Decompiled (with Hex-Rays) **/
void ft_errorlog(long long a1)
{
  int fd;
  if (a1)
  {
    // C9.a. Expanded standard macro
    fd = open("/tmp/.sh_errorlog", 1089, 448LL);
    if (fd >= 0)
    {
      // C3.a. Extraneous typecasts
      ft_putendl_fd(a1, (unsigned int) fd);
      close(fd);
    }

  }

}


/** Original **/
void ft_errorlog(char *msg)
{
  int fd;
  if (!msg)
    return;

  if ((fd = open("/tmp/.sh_errorlog", (O_CREAT | O_WRONLY) | O_APPEND, S_IRWXU)) < 0)
    return;

  ft_putendl_fd(msg, fd);
  close(fd);
}




/*
 * Example 129
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 6904
 * Source: olikraus/m2tklib
 */

/** Decompiled (with Hex-Rays) **/
// C12.a. Return value for void function
long long mr_SetListElement(long long a1, int a2, int a3, long long a4)
{
  long long result;
  result = a4; // C2.a.i. Extra statement to assign to an extraneous variable
  // C3.a. Extraneous typecasts
  // C3.b. Missing typecasts - void **
  // C1.a.i. Pointer arithmetic to access struct members
  // C1.b.ii. Pointer arithmetic to access array members
  *((_QWORD *) ((*((_QWORD *) ((8LL * a2) + (*((_QWORD *) ((*((_QWORD *) (a1 + 8))) + 8LL)))))) + (8LL * a3))) = a4;
  return result;
}


/** Original **/
void mr_SetListElement(mr_type mr, int pos, int el_idx, void *element)
{
  void **list;
  list = (void **) mr->m2_list_list->list[pos];
  list[el_idx] = element;
}




/*
 * Example 131
 * File: idioms_data_copy/data_0023.pkl
 * Shard 23, Index 7616
 * Source: fleutot/genpool
 */

/** Decompiled (with Hex-Rays) **/
// C4.a.i. Extra arguments
// C12. Incorrect return behavior - original (incorrectly) does not return anything
int main(int argc, const char **argv, const char **envp)
{
  test_machine_init(*((_QWORD *) (&argc)), argv, envp); // C4.a.i. Extra arguments
  test_machine_command_create();
  test_machine_command_with_clamp();
  test_machine_command_valid_check();
  puts("All tests passed."); // C4. Nonequivalent expression - Calls puts instead of printf
  return 0;
}


/** Original **/
int main(void)
{
  test_machine_init();
  test_machine_command_create();
  test_machine_command_with_clamp();
  test_machine_command_valid_check();
  printf("All tests passed.\n");
}




