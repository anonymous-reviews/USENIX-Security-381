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
  v3 = malloc(0x18uLL); // C9.a. Expanded standard macro
  if (!v3)
    return 0LL;

  if (a2 && a1)
  {
    *v3 = malloc(a2); // C1.a.iii. Pointer dereference to access first struct member
    if (!(*v3))
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
long long exec_test() // C4.a.iii. Unused missing arguments
{
  interpret_rtl_and(&t0, (_DWORD *) 0x994, ((_DWORD *) (&operand_write)) + 1); // C1.a.i, C8. Global variable issues, C3.a. Extraneous typecast
  rtl_update_ZFSF(&t0, decoding[19]); // C1.a.ii. Array access to access struct members
  interpret_rtl_li(&t1, 0);
  rtl_set_CF(&t1);
  return rtl_set_OF(&t1); // C12.a. Return value for void function
}


/** Original **/
void exec_test(vaddr_t *eip)
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
long long FreeTextStream(long long a1)
{
  // C5.b. Missing variable - ios

  long long v2;
  v2 = *((_QWORD *) (a1 + 16)); // C1.a.i. Pointer arithmetic to access struct members
  if (v2)
    p_fclose(v2);

  p_free(*((_QWORD *) (a1 + 24))); // C1.a.i. Pointer arithmetic to access struct members
  RemoveIOLink(yTextFiles, a1);
  return y_FreeUnit(&txtsBlock, a1); // C12.a. Return value for void function
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
  return (*_ctype_b_loc())[a1] & 0x4000; // C7.c. Inline function definition instead of function call
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
signed long long initEditor()
{
  signed long long result; // C5.a. Extraneous variable
  E = 0; // C8. Global variable issues, C13. Decomposition of a composite variable into multiple variables (this and next three lines)
  dword_4040E4 = 0;
  dword_4040F0 = 0;
  result = getWindowSize(&dword_4040E8, &dword_4040EC);
  if (((_DWORD) result) == (-1))
    die("getWindowSize");

  return result; // C12.a. Return value for void function
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
long long read_string(unsigned int a1, _BYTE *a2)
{
  long long result; // -- aligns with 'key'
  *a2 = 0; // C1.b.i. Pointer dereference to access first array member
  do
    result = stream_read_input(a1, a2, 0LL, 0LL, 0LL, 0LL);
  while (((_BYTE) result) != 13); // C3.a. Extraneous typecast
  return result; // C12.a. Return value for void function
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
long long worksheet_select(long long a1)
{
  long long result; // C5.a. Extraneous variable
  *((_BYTE *) (a1 + 133)) = 1; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macros
  result = a1; // C2.a.i. Extra statement to initialize extraneous variable
  *((_BYTE *) (a1 + 134)) = 0; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macros
  return result; // C12.a. Return value for void function
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
long long rol_a()
{
  long long result; // C5.a. Extraneous variable
  if (P & 1)
  {
    if (A >= 0)
      P &= 0xFEu;
    else
      P |= 1u;

    A = (2 * A) | 1;
  }
  else
  {
    if (A >= 0)
      P &= 0xFEu;
    else
      P |= 1u;

    A *= 2;
  }

  if (A)
    P &= 0xFDu;
  else
    P |= 2u;

  if (A >= 0)
    P &= 0x7Fu;
  else
    P |= 0x80u;

  result = (unsigned int) (tick_count + 2); // C2.a.i. Extra statement to initialize extraneous variable
  tick_count += 2;
  return result; // C12.a. Return value for void function
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
  fprintf(_bss_start, "%s [--unit <B|M|G|T>] <DEVICE> [<DEVICE> ...]\n", a1); // C4. Nonequivalent expression - _bss_start is not stdout
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
  long long result; // C5.a. Extraneous variable
  unsigned int v6; // C5.a.i. Extraneous intermediate variable duplicating another variable
  long long v7; // C5.a.i. Extraneous intermediate variable duplicating another variable
  v7 = a4; // C2.a.i. Extraneous variable duplicating another variable
  v6 = a5; // C2.a.i. Extraneous variable duplicating another variable
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
  // C9.b. Expanded user-defined macros
  // C4.b. Equivalence depends on behavior of external code - (!=1 vs. ! on the return value of CheckBaseObject)
  if ((((unsigned char) CheckBaseObject(a1, 7LL)) != 1) || (((unsigned char) CheckBaseObject(a2, 6LL)) != 1))
    return 0LL;

  if (*((_QWORD *) (a1 + 24))) // C1.a.1. Pointer arithmetic to access struct members
    *((_QWORD *) ((*((_QWORD *) (a1 + 32))) + 64LL)) = a2; // C1.a.1. Pointer arithmetic to access struct members
  else
    *((_QWORD *) (a1 + 24)) = a2; // C1.a.1. Pointer arithmetic to access struct members

  *((_QWORD *) (a1 + 32)) = a2; // C1.a.1. Pointer arithmetic to access struct members
  *((_QWORD *) ((*((_QWORD *) (a1 + 32))) + 64LL)) = 0LL; // C1.a.1. Pointer arithmetic to access struct members
  ++(*((_DWORD *) (a1 + 16))); // C1.a.1. Pointer arithmetic to access struct members
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
  int *v0; // C5.a. Extraneous variable
  char *v1; // C5.a. Extraneous variable
  // C3.a. Extraneous typecast
  // C4.a.i. Missing arguments
  // C4. Nonequivalent expressions - conditional is incorrect (missing a !)
  if (((char *) list_remove_value()) == test1)
    return 0LL;
  
  // C7.d. Deconstructed ternary (involves next 11 lines, including bracket lines and whitespace)
  if (*__errno_location()) // C9.a. Expanded standard macros
  {
    v0 = __errno_location(); // C9.a. Expanded standard macros
    v1 = strerror(*v0);
  }
  else
  {
    v1 = "None";
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
    printf(&byte_405FB0); // C6.d. String replaced with reference to undeclared or global variable.
    __isoc99_scanf(); // C4.a.ii. Missing arguments
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
int File_writeHex(long long *a1, long long a2, unsigned char a3)
{
  int result; // Not extraneous - aligns with the variable 'precondition'
  unsigned char v4; // C5.a.i. Extraneous intermediate variable duplicating another variable
  long long v5;
  v4 = a3; // C2.a.i. Extra statement to initialize extraneous variable
  v5 = *a1;
  result = File__checkValidityPRE(*a1, (long long) "File_writeHex"); // C3.a. Extraneous typecast
  if (result)
    result = fprintf(*((FILE **) (v5 + 8)), "%.*x", v4, a2); // C1.a.i. Pointer arithmetic to access struct members

  return result; // C12.a. Return value for void function
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
long long toypop_sound_clear_w() // C4.a.iii. Missing unused arguments
{
  return cpunum_set_reset_line(1LL, 0LL); // C9.b. Expanded user-defined macros, C12.a. Return value for void function
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
unsigned long long qemu_co_queue_wait_insert_head(long long *a1)
{
  long long v2;
  unsigned long long v3; // C5.a. Extraneous variable
  v3 = __readfsqword(0x28u); // C2.a.i. Extra statement to initialize extraneous variable
  v2 = qemu_coroutine_self();
  *((_QWORD *) (v2 + 32)) = *a1; // C1.a.i. Pointer arithmetic to access struct members
  if (*((_QWORD *) (v2 + 32))) // C1.a.i. Pointer arithmetic to access struct members
    *((_QWORD *) ((*a1) + 40)) = v2 + 32; // C1.a.i. Pointer arithmetic to access struct members
  else
    a1[1] = v2 + 32; // C1.a.ii., C1.a.i.

  *a1 = v2; // C1.a.iii. Pointer dereference to access first struct member
  *((_QWORD *) (v2 + 40)) = a1; // C1.a.i. Pointer arithmetic to access struct members, C11. Abuse of memory layout - uses the coincidence of the desired struct members' address being the address of the overall struct.
  qemu_coroutine_yield();
  if (!((unsigned char) qemu_in_coroutine())) // C9.a. Expanded standard macro (this and next line), C3.a. Extraneous typecast
    _assert_fail("qemu_in_coroutine()", "qemu-coroutine-lock.c", 0x4Du, "qemu_co_queue_wait_insert_head");

  return __readfsqword(0x28u) ^ v3; // C12.a. Return value for void function
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
  // C2.b. Missing statement

  signed long long result; // C5.a. Extraneous variable
  if ((a2 && (a2 <= 0x1B5D)) || ((a2 > 0x1F40) && (a2 <= 0x1F85)))  // C9.b. Expanded user-defined macros
    result = exitError(a1, a2, 3u, 0xFFFFFFD5); // C9.b. Expanded user-defined macros
  else
    // C2.b. Missing statement

    result = 4294967280LL; // C6.c. Very large positive integers for negative integers

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
  _DWORD *v2; // C5.a.i. Extraneous intermediate variable duplicating another variable.
  v1 = malloc(0x20020uLL); // C9.a. Expanded standard macro
  v2 = v1; // C2.a.i. Extra statement to initialize extraneous variable
  v1[32775] = a1; // C1.a.ii. Array access to access struct members
  v1[2] = 0; // C1.a.ii. Array access to access struct members
  v1[3] = 0; // C1.a.ii. Array access to access struct members
  harddiskIdeReset((long long) v1); // C3.a. Extraneous typecast
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
long long namcos2_sound_bankselect_w(long long a1, unsigned char a2)
{
  long long v2;
  long long result; // C5.a. Extraneous variable
  unsigned int v4; // C5.a. Extraneous variable
  v2 = memory_region(131LL); // C9.b. Expanded user-defined macro
  // C5.b. Missing variable: max
  // Not coding the missing if ((6 >= 1) && (6 <= (25 - 1))) because it does not add any functionality to this function.

  // Not coding C3.a. here - the typecasts are necessary as part of the inlining, and do reflect the types of the variables involved in the original two expressions.
  cpu_bankbase[6] = v2 + ((signed int) ((((a2 >> 4) % (((unsigned long long) (memory_region_length(131LL) - 0x10000)) >> 14)) + 4) << 14)); // C1.b. Non-idiomatic array dereference, C9.b. Expanded user-defined macro.
  result = opcode_entry;
  if (opcode_entry == 6)
  {
    result = cpu_getactivecpu();
    if (((signed int) result) >= 0) // C3.a. Extraneous typecast
    {
      opcode_entry = -1;
      v4 = activecpu_get_pc_byte();
      result = activecpu_set_op_base(v4);
    }

  }

  return result; // C12.a. Return value for void function
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
    *((_QWORD *) (a2 + 24)) = myencoding_map_iso_8859_8[a1 - 128]; // C1.a.i. Pointer arithmetic to access struct members
  else
    *((_QWORD *) (a2 + 24)) = a1; // C1.a.i. Pointer arithmetic to access struct members

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
    fd = open("/tmp/.sh_errorlog", 1089, 448LL); // C9.a. Expanded standard macros
    if (fd >= 0)
    {
      ft_putendl_fd(a1, (unsigned int) fd); // C3.a. Extraneous typecast
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
long long mr_SetListElement(long long a1, int a2, int a3, long long a4)
{
  long long result; // Not an extraneous variable because it aligns with 'list' in the original code.
  result = a4;
  *((_QWORD *) ((*((_QWORD *) ((8LL * a2) + (*((_QWORD *) ((*((_QWORD *) (a1 + 8))) + 8LL)))))) + (8LL * a3))) = a4; // C1.a.i. Pointer arithmetic to access struct members, C1.b.ii. Pointer arithmetic to access array members
  return result; // C12.a. Return value for void function
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
int main(int argc, const char **argv, const char **envp) // C4.a.i. Extra arguments
{
  test_machine_init(*((_QWORD *) (&argc)), argv, envp); // C4.a.i. Extra arguments, C3.a. Extraneous typecast
  test_machine_command_create();
  test_machine_command_with_clamp();
  test_machine_command_valid_check();
  puts("All tests passed.");
  return 0; // No code for incorrect return behavior here because original code is 'int main'
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




