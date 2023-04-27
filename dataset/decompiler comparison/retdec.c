/*
 * Example 115
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 7093
 * Source: pribault/Lem_in
 */

/** Decompiled (with retdec) **/
int64_t ft_lstnew(int64_t a1, int64_t size) {
    int64_t mem = malloc(24); // C9.a. Expanded standard symbol
    if (mem == 0) {
        return 0;
    }
    if (a1 != 0 && size != 0) {
        int64_t mem2 = malloc(size); // C5.a. Extraneous variable
        int64_t * v1 = (int64_t *)mem; // C5.a.i. Extraneous intermediate variable duplicating another variable, C3.a. Extraneous typecast
        *v1 = mem2; // C1.a.iii. Pointer dereference to access first struct member
        if (mem2 == 0) {
            return 0;
        }
        *v1 = ft_memmove(mem2, a1, size); // C1.a.iii. Pointer dereference to access first struct member.
    }
    int64_t * v2 = (int64_t *)(mem + 8); // C5.a. Extraneous variable, C1.a.i. Pointer arithmetic to access struct members
    *v2 = size;
    if (a1 == 0) {
        *(int64_t *)mem = 0; // C1.a.iii. Pointer dereference to access first struct member
        *v2 = 0;
    }
    *(int64_t *)(mem + 16) = 0; // C1.a.i. Pointer arithmetic to access struct members
    return mem;
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

/** Decompiled (with retdec) **/
int64_t exec_test(int64_t a1) {
    interpret_rtl_and(0, 0, 0); // C8. Issue in representing global variables, C4. Nonequivalent expression - &t0 and the other addresses in the original are probably not memory location 0
    rtl_update_ZFSF(0, (int64_t)*(int32_t *)2460); // C8. C4. Nonequivalent expression - &t0 != 0 and (int64_t)*(int32_t *)2460 != (&decoding.dest)->width. (this second one could also be a C4.b.)
    interpret_rtl_li(0, 0); // C8. C4. Nonequivalent expression.
    rtl_set_CF(0); // C8. C4. Nonequivalent expression
    return rtl_set_OF(0); // C8. C4. Nonequivalent expression, C12.a. Return value for void function
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

/** Decompiled (with retdec) **/
int64_t FreeTextStream(int64_t a1) {
    // C5.b. Missing variable - ios

    int64_t v1 = *(int64_t *)(a1 + 16); // C1.a.i. Pointer arithmetic to access struct members.
    if (v1 != 0) {
        p_fclose(v1);
    }
    Y_open(*(int64_t *)(a1 + 24)); // C1.a.i. Pointer arithmetic to access struct members
    RemoveIOLink(0x6e25, a1); // C8. Global variable issues
    return y_FreeUnit(0, a1); // C8, C4, C12.a. Return value for void function
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

/** Decompiled (with retdec) **/
int64_t vdp_data_read(void) {
    // C5.b. Missing variable - ret

    g31 = 0;
    // C4.b. Equivalence depends on behavior of external code - if vdp_data_read_ahead() updates vdp_data_read_latch, this is not equivalent.

    vdp_data_read_ahead();
    return g29;
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

/** Decompiled (with retdec) **/
int64_t isprint_c(int64_t a1) {
    int64_t v1 = *(int64_t *)__ctype_b_loc(); // C7.c. Inline function definition instead of function call, C5.a. Extraneous variable
    return (int64_t)(*(int16_t *)(v1 + (2 * a1 & 510)) & 0x4000);
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

/** Decompiled (with retdec) **/
int64_t initEditor(void) {
    g11 = 0; // C8. Issue in representing global variable, C13. Decomposition of a composite variable into multiple variables (this and next two lines)
    g13 = 0;
    g17 = 0;
    int64_t result = getWindowSize(&g15, &g16); // C5.a. Extraneous variable, C8., C13.
    if ((int32_t)result != -1) {
        return result; // C12.a. Return value for void function
    }
    die("getWindowSize");
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

/** Decompiled (with retdec) **/
int64_t sim_os_ttclose(void) {
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

/** Decompiled (with retdec) **/
int64_t read_string(int64_t a1, int64_t * a2) {
    *(char *)a2 = 0; // C1.b.i. Pointer dereference to access array members.
    int64_t result = stream_read_input(a1 & 0xffffffff, (int64_t)a2, 0, 0, 0, 0); // C3.a. Extraneous typecast, C2.a. Extraneous code - & 0xffffffff
    while ((char)result != 13) { // C3.a. Extraneous typecast.
        result = stream_read_input(a1 & 0xffffffff, (int64_t)a2, 0, 0, 0, 0); // C3.a. Extraneous typecast, C2.a. Extraneous code - & 0xffffffff 
    }
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

/** Decompiled (with retdec) **/
int64_t worksheet_select(int64_t result) {
    *(char *)(result + 133) = 1; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macro
    *(char *)(result + 134) = 0; // C1.a.i. Pointer arithmetic to access struct members, C9.b. Expanded user-defined macro
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

/** Decompiled (with retdec) **/
int64_t rol_a(void) {
    unsigned char v1 = *(char *)1; // C4. Nonequivalent expression - global variable P may not be at memory location 1.
    char v2 = 2 * (v1 >= 0 ? v1 & 126 : v1 | 1) | v1 % 2; // C4. Nonequivalent expression (there is no global variable for A, though this expression should re-assign to A). It appears that v2 aligns with A - especially with the v2 == 0 ternary, which seems to align with if (A). However, v2 is a local variable; globals seem to be treated as fixed memory locations here.
    char v3 = v2 == 0 ? 2 : v2 & -3; // C5.a. Extraneous variable - (v3)
    *(char *)1 = v3 >= 0 ? v3 % 128 : v3 | -128; // C4. Nonequivalent expression - global variable P may not be at memory location 1.
    uint32_t result = *(int32_t *)4 + 2; // C4. Nonequivalent expression - global variable tick_count may not be at memory location 4.
    *(int32_t *)4 = result; // C4. Nonequivalent expression - global variable tick_count may not be at memory location 4.
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

/** Decompiled (with retdec) **/
int64_t usage(int64_t a1) {
    fprintf(g1, "%s [--unit <B|M|G|T>] <DEVICE> [<DEVICE> ...]\n", (char *)a1); // C3.a. Extraneous typecast
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

/** Decompiled (with retdec) **/
int64_t cbz_lookup_metadata(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5) {
    int64_t result = 0xffffffff; // C5. Extraneous variable
    if ((int32_t)strcmp(str, 0) == 0) { // C3.a. Extraneous typecast, C4. Nonequivalent expression - 0 is not equivalent to "format"
        result = fz_strlcpy(a4, 0, (int32_t)a5); // C3.a. Extraneous typecast, C4. Nonequivalent expression - 0 is not equivalent to "CBZ"
    }
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

/** Decompiled (with retdec) **/
int64_t TLN_AddSequenceToPack(int64_t a1, int64_t a2) {
    // C3.a. Extraneous typecast
    // C9.b. Expanded user-defined macros
    // C4.b. Equivalence depends on behavior of external code
    if ((char)CheckBaseObject(a1, 7) != 1 || (char)CheckBaseObject(a2, 6) != 1) {
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 24); // C5.a. Extraneous variable, C1.a.i. Pointer arithmetic to access struct members
    int64_t * v2; // C5.a. Extraneous variable
    if (*v1 != 0) {
        int64_t * v3 = (int64_t *)(a1 + 32); // C5.a. Extraneous variable, C1.a.i. Pointer arithmetic to access struct members
        *(int64_t *)(*v3 + 64) = a2; // C1.a.i. Pointer arithmetic to access struct members
        v2 = v3;
    } else {
        *v1 = a2;
        v2 = (int64_t *)(a1 + 32); // C1.a.i. Pointer arithmetic to access struct members
    }
    *v2 = a2;
    *(int64_t *)(a2 + 64) = 0; // C1.a.i. Pointer arithmetic to access struct members
    int32_t * v4 = (int32_t *)(a1 + 16); // C5.a. Extraneous variable, C1.a.i. Pointer arithmetic to access struct members
    *v4 = *v4 + 1;
    TLN_SetLastError(0);
    return 1;
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

/** Decompiled (with retdec) **/
int64_t test_remove8(void) {
    // C5.a. Extraneous variable
    // C3.a. Extraneous typecast
    // C4.c. Extra & when accessing global variables
    int64_t v1 = list_remove_value((int64_t)g8, *(int64_t *)&g2);
    if (v1 == *(int64_t *)&g2) { // C3.a. Extraneous typecast
        return 0;
    }

    // C9.a. Expanded standard symbol
    // C7.d. Deconstructed ternary (next five lines)
    int32_t v2 = *__errno_location();
    int64_t err_str = (int64_t)"None"; // C3.a. Extraneous typecast
    if (v2 != 0) {
        err_str = (int64_t)strerror(*__errno_location()); // C3.a. Extraneous typecast
    }
 
    fprintf(g6, "[ERROR] (%s:%d: errno: %s) Wrong node value returned removing node 1.\n", "tests/list_tests.c", 240, (char *)err_str); // C3.a. Extraneous typecast, C4.b. Equivalence depends on behavior of external code - if g6 is stderr
    return (int64_t)"Wrong node value returned removing node 1."; // C3.a. Extraneous typecast
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

/** Decompiled (with retdec) **/
int64_t confirm_delete(void) {
    printf((char *)&g41); // C6.d. String replaced with reference to undeclared or global variable, C3.a. Extraneous typecast
    int64_t v1;
    scanf("%d", &v1);
    int32_t v2 = v1; // C5.a.i. Extraneous variable duplicating another variable.
    while (v2 != 0 == (v2 != 1)) {
        printf((char *)&g41); // C6.d. String replaced with reference to undeclared or global variable,
        scanf("%d", &v1);
        v2 = v1;
    }
    return (bool)(v2 == 0); // C3.a. Extraneous typecast
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

/** Decompiled (with retdec) **/
int64_t File_writeHex(int64_t a1, int64_t a2, int64_t a3) {
    // C2.b. Missing statement - nothing aligns with: char *procName = "File_writeHex";
    // C5.b. Missing variable - currentFile. (Missing dereference included as part of nonequivalent expression on the next nonempty line.)

    int64_t v1 = File__checkValidityPRE(a1, 0); // C4. Nonequivalent expression - 0 is not equivalent to procName or its value, "File_writeHex". Also, a1 should be dereferenced.
    int64_t chars_printed = v1; // C5.a. Extraneous variable
    if ((int32_t)v1 != 0) { // C3.a. Extraneoust typecast
        // C1.a.i. Pointer arithmetic to access struct members
        // C3.a. Extraneous typecast
        // C4. Nonequivalent expression - "%.*x" is not equivalent to 0.
        chars_printed = fprintf(*(int64_t *)(a1 + 8), 0, (char)a3, a2);
    }
    return chars_printed; // C12.a. Return value for void function
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

/** Decompiled (with retdec) **/
int64_t toypop_sound_clear_w(int64_t a1, int64_t a2) {
    return cpunum_set_reset_line(1, 0); // C9.b. Expanded user-defined macro, C12.a. Return value for void function
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

/** Decompiled (with retdec) **/
int64_t qemu_co_queue_wait_insert_head(int64_t a1) {
    int64_t v1 = __readfsqword(40); // C5.a. Extraneous variable, C2.a.i. Extra statement to initialize extraneous variable
    int64_t v2 = qemu_coroutine_self();
    int64_t v3 = v2 + (int64_t)"%("; // C5.a. Extraneous variable, C4. Nonequivalent expression - memory location of a string literal used as an integer constant. (v3 is an extraneous variable that represents a struct member.)
    *(int64_t *)v3 = a1;
    if (a1 == 0) { // -- Actually might be fine because it seems that (&queue->entries)->tqh_first is a1 (based on info from other decompilers). To be sure, memory layout information is needed. Checking against a1 is an equivalent alternative in that case.
        *(int64_t *)8 = v3; // C4. Nonequivalent expression - Assigns to memory location 8 instead of struct member
    } else {
        *(int64_t *)(a1 + 40) = v3; // C1.a.i. Pointer arithmetic to access struct members
    }
    *(int64_t *)a1 = v2; // C1.a.iii. Pointer dereference to access first struct member
    *(int64_t *)(v2 + 40) = a1; // C1.a.i. Pointer arithmetic to access struct members, C11. Abuse of memory layout -- if queue == &(&queue->entries)->tqh_first; because a1 aligns with queue
    qemu_coroutine_yield();
    // C9.a. Expanded standard symbol (next three lines, including bracket)
    if ((char)qemu_in_coroutine() == 0) {
        __assert_fail("qemu_in_coroutine()", "qemu-coroutine-lock.c", 77, "qemu_co_queue_wait_insert_head");
    }
    int64_t result = 0; // C5.a. Extraneous variable, C2.a.i. Extra statement to initialize extraneous variable
    // C2.a. Extraneous statement (entire if statement).
    if (v1 != __readfsqword(40)) {
        result = __stack_chk_fail();
    }
    return result; // C12.a. Return value for void function
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

/** Decompiled (with retdec) **/
int64_t exitErrorNotFound(int64_t a1, int64_t a2) {
    // C2.b. Missing code - assert statement

    int32_t v1 = a2; // C5.a.i. Extraneous intermediate variable duplicating another variable, C2.a.i. Extra statement to initialize extraneous variable
    int64_t result = 0xfffffff0; // C5.a. Extraneous variable
    if (v1 < 0x1b5e || v1 < 0x1f86) { // C9.b. Expanded user-defined macros, C2.b. Missing code - clauses of if conditional are missing.
        result = _GLOBAL_OFFSET_TABLE_(a1, v1, 3, 0xffffffd5); // C4. Nonequivalent expression. Aligns with exitError. The global offset table stores the memory address offests for global variables. The arguments do match exactly, though, to the exitError call in the original code. 
    }
    // C2.b. Missing code - assert statement (placed here because the if conditional is flipped)
    
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

/** Decompiled (with retdec) **/
int64_t harddiskIdeCreate(int64_t a1) {
    int64_t mem = malloc(0x20020); // C9.a. Expanded standard symbol
    *(int32_t *)(mem + 0x2001c) = (int32_t)a1; // C1.a.i. Pointer arithmetic to access struct members, C3.a. Extraneous typecast
    *(int32_t *)(mem + 8) = 0; // C1.a.i. Pointer arithmetic to access struct members
    *(int32_t *)(mem + 12) = 0; // C1.a.i. Pointer arithmetic to access struct members
    harddiskIdeReset(mem);
    return mem;
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

/** Decompiled (with retdec) **/
int64_t namcos2_sound_bankselect_w(int64_t a1, uint64_t a2, int64_t a3) { // C4.a.i. Extra argument
    int64_t v1 = memory_region(131); // C9.b. Expanded user-defined macro
    int64_t v2 = memory_region_length(131); // C9.b. Expanded user-defined macro
    int64_t v3 = *(int64_t *)0x10d5; // C4. Nonequivalent expression - opcode_entry may not be at this particular memory address.

    // v3 aligns with opcode_entry. 
    *(int64_t *)(v3 + 48) = v1 + 0x10000 + 0x4000 * (a2 / 16 % 16 % ((v2 - 0x10000) / 0x4000));
    // C2.b. Missing code - if ((opcode_entry == 6) && (cpu_getactivecpu() >= 0)) (& rest of if statement)

    return (int64_t)*(char *)*(int64_t *)0x10e0; // C12.a. Return value for void function, C2.a. Extraneous statement. (Coded here because the constant is being operated on)
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

/** Decompiled (with retdec) **/
int64_t myencoding_decode_iso_8859_8_i(uint64_t a1, int64_t a2) {
    if ((char)a1 < 0) { // C3.a. Extraneous typecast
        int64_t v1 = *(int64_t *)((8 * a1 & 2040) + (int64_t)&g27 - 1024); // C1.b.ii. Pointer arithmetic to access array members, C5.a. Extraneous variable. v1 holds the result of the 'myencoding_map_iso_8859_8[data - 0x80];' part of the expression
        *(int64_t *)(a2 + 24) = v1; // C1.a.i. Pointer arithmetic to access struct members
    } else {
        *(int64_t *)(a2 + 24) = a1 % 256; // C2.a. Extra code -- the % 256 would be correct but redundant (because the original type is a uchar) if the type was changed.
    }

    return 0; // C9.b. Expanded user-defined macro
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

/** Decompiled (with retdec) **/
int64_t ft_errorlog(int64_t a1) {
    int64_t result; // C5.a. Extraneous variable
    if (a1 == 0) {
        return result;
    }
    // C4. Nonequivalent expression - missing string; string literal memory location used in place of standard macro; memory location of g1 used in place of standard macro.
    // C6. Nonidiomatic literal representation - integer constant as string literal memory location
    int64_t fd = open(0, ".LC2", &g1);
    uint32_t v1 = (int32_t)fd; // C5.a.i. Extraneous intermediate variable duplicating another variable, C2.a.i. Extra statement to initialize extraneous variable
    result = fd; // C2.a.i. Extra statement to initialize extraneous variable
    if (v1 >= 0) {
        int64_t fd2 = fd & 0xffffffff; // C5.a. Extraneous variable, C2.a. Extraneous statement
        ft_putendl_fd(a1, fd2, v1); // C4.a.i. Extra arguments
        result = close(fd2); 
    }

    return result; // C12.a. Return value for void function
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

/** Decompiled (with retdec) **/
int64_t mr_SetListElement(int64_t a1, int32_t a2, int32_t a3, int64_t result) {
    int64_t v1 = *(int64_t *)(*(int64_t *)(a1 + 8) + 8); // C5.a. Extraneous variable. C1.a.i. Non-idiomatic struct dereference
    int64_t v2 = *(int64_t *)(v1 + 8 * (int64_t)a2); // C1.b.ii. Non-idiomatic struct dereference. (This is not an extraneous variable; it most closely aligns to 'list' in the original because it's used in an array-like way in the next line.)
    *(int64_t *)(v2 + 8 * (int64_t)a3) = result; // C1.b.ii. Pointer arithmetic to access array members
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

/** Decompiled (with retdec) **/
int main(int argc, char ** argv) { // C4.a.i. Extra arguments
    test_machine_init();
    test_machine_command_create();
    test_machine_command_with_clamp();
    test_machine_command_valid_check();
    puts(0); // Nonequivalent expression - 0 is not equivalent to the string "All tests passed.\n"
    return 0; // No 'incorrect return behavior here' because the original code does declare 'int main' even though it has no explicit return statement.
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




