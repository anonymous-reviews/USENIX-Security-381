/*
 * Example 115
 * File: idioms_data_copy/data_0020.pkl
 * Shard 20, Index 7093
 * Source: pribault/Lem_in
 */

/** Decompiled (with Angr) **/
long long ft_lstnew(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0[3];  // [bp-0x10]

    // C9.a. Expanded standard symbol
    // C4. Nonequivalent Expression - assigning to the first member of an array is not the same as assigning to the array as a whole.
    v0[0] = malloc(0x18);
    if (v0 == 0)
    {
        return 0;
    }
    if (a1 != 0 && a0 != 0)
    {
        v0[0] = malloc(a1); // C1.a.ii. Array access to access struct members
        if (v0[0] == 0) // C1.a.ii. Array access to access struct members
        {
            return 0;
        }
        v0[0] = ft_memmove(v0[0], a0, a1, a0); // C1.a.ii. Array access to access struct members, C4.a.i. Extra arguments
    }
    if (a1 == 0 || a0 == 0 || v0[0] != 0) // C2.a. Extraneous statement - this if statement does not occur in the original source (though its body does).
    {
        v0[1] = a1; // C1.a.ii. Array access to access struct members
        if (a0 == 0)
        {
            v0[0] = 0; // C1.a.ii. Array access to access struct members
            v0[1] = 0; // C1.a.ii. Array access to access struct members
            v0[2] = 0; // C1.a.ii. Array access to access struct members
            return v0;
        }
        v0[2] = 0; // C1.a.ii. Array access to access struct members
        return v0;
    }
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

/** Decompiled (with Angr) **/
extern char g_50002c;
extern char t0;
extern char t1;

long long exec_test(unsigned long a0)
{
    unsigned long v0;  // C5.a.i. Extraneous variable duplicating another variable

    v0 = a0; // C2.a.i. Extra statement to initialize extraneous variable
    interpret_rtl_and(0x500018, 0x500064, 0x50002c); // C8. Issue in representing global variables, C4. Nonequivalent expression
    rtl_update_ZFSF(0x500018, *((int *)5242972)); // C8. Issue in representing global variables, C4. Nonequivalent expression
    interpret_rtl_li(0x500020, 0x0); // C8. Issue in representing global variables, C4. Nonequivalent expression
    rtl_set_CF(0x500020); // C8. Issue in representing global variables, C4. Nonequivalent expression
    return rtl_set_OF(0x500020); // C8., C4., C12.a. Return value for void function
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

/** Decompiled (with Angr) **/
extern char p_free;
extern char txtsBlock;
extern char yTextFiles;

// C4.a.i. Extra arguments
long long FreeTextStream(unsigned long long a0[4], unsigned long a1, unsigned long a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    // C5.b. Missing variable - io

    char v0;  // C5.a. Extraneous variable
    unsigned long long v1;  // Not extraneous. Aligns with "stream."

    v1 = a0[2]; // C1.a.ii. Array access to access struct members
    if (v1 != 0)
    {
        p_fclose(v1);
        // C3.a. Extraneous typecasts
        // C4.a.i. Extra arguments
        // C7. Obfuscating refactoring - calling a function as a function pointer instead of using standard function-call syntax.
        *((long long *)&p_free)(a0[3], a1, *((long long *)&p_free));
        // C3.a. Extraneous typecasts
        // C4.a.i. Extra arguments
        RemoveIOLink(*((long long *)&yTextFiles), a0, a0);
        // C3.a. Extraneous typecasts
        // C12.a. Return statement for void function
        // C4.a.i. Extra arguments
        return y_FreeUnit(&txtsBlock, a0, (unsigned int)a0, a3, a4, a5, *((long long *)&v0), &txtsBlock);
    }
    // C3.a. Extraneous typecasts
    // C4.a.i. Extra arguments
    // C7. Obfuscating refactoring - calling a function as a function pointer instead of using standard function-call syntax.
    *((long long *)&p_free)(a0[3], a1, *((long long *)&p_free));
    // C3.a. Extraneous typecasts
    // C4.a.i. Extra arguments
    RemoveIOLink(*((long long *)&yTextFiles), a0, a0);
    // C3.a. Extraneous typecasts
    // C12.a. Return statement for void function
    // C4.a.i. Extra arguments
    return y_FreeUnit(&txtsBlock, a0, (unsigned int)a0, a3, a4, a5, *((long long *)&v0), &txtsBlock);
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

/** Decompiled (with Angr) **/
extern unsigned int vdp_cmd_write_2;
extern char vdp_data_read_latch;

int vdp_data_read()
{
    char v0;  // Aligns with ret.

    vdp_cmd_write_2 = 0;
    v0 = vdp_data_read_latch;
    vdp_data_read_ahead();
    return; // C12.b. No return value for non-void function
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

/** Decompiled (with Angr) **/
int isprint_c(unsigned int a0)
{
    unsigned int v2;  // eax

    v2 = *((short *)(*((long long *)__ctype_b_loc()) + (char)a0 * 2)) & 0x4000; // C7.c. Inline function definition instead of function call
    return v2;
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

/** Decompiled (with Angr) **/
extern unsigned int E;
extern unsigned int g_4040e4;
extern unsigned long long g_4040e8;
extern unsigned long long g_4040ec;
extern unsigned int g_4040f0;

int initEditor()
{
    E = 0; // C8. Global variable issues, C13. Decomposition of a composite variable into multiple variables (this and next three lines)
    g_4040e4 = 0;
    g_4040f0 = 0;
    if (getWindowSize(&g_4040e8, &g_4040ec) == -1)
    {
        die("getWindowSize"); /* do not return */
    }
    return;
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

/** Decompiled (with Angr) **/
int sim_os_ttclose()
{
    sim_ttcmd();
    return; // C12.b. No return value for non-void function
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

/** Decompiled (with Angr) **/
int read_string(unsigned int a0, char *a1)
{
    char v0;  // aligns with key

    *(a1) = 0; // C1.b.i. Pointer dereference to access array members
    while (true)
    {
        v0 = stream_read_input(a0, a1, 0x0, 0x0, 0x0, 0x0);
        if (v0 == 13)
        {
            break;
        }
    }
    return;
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

/** Decompiled (with Angr) **/
long long worksheet_select(char a0[135])
{
    a0[133] = 1; // C1.a.ii. Array access to access struct members
    a0[134] = 0; // C1.a.ii. Array access to access struct members
    return a0; // C12.a. Return value for void function
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

/** Decompiled (with Angr) **/
extern char macgyver_var;
extern unsigned int tick_count;

int rol_a(unsigned int a0, unsigned int a1, unsigned long a2)
{
    if (false) // C4. Nonequivalent expression - P & 0x1 is not equivalent to "false"
    {
        if ((char)5010649278077831496 < 0) // C4. "A & 0x80" is not equivalent to "(char)5010649278077831496 < 0"
        {
            macgyver_var = 2313521480 | 1; // C4. Nonequivalent expression - "P" is not equivalent to "2313521480"
        }
        else
        {
            macgyver_var = 72; // C4. Nonequivalent expression - "&= ~0x1" is not equivalent to "= 72"
        }
        macgyver_var = 332075664 | 1; // C4. Nonequivalent expression - "(A << 1) | 0x1" is not equivalent to "332075664 | 1"
    } // C2.b. Missing else clause
    if ((char)5010649278077831496 < 0) // C4. Nonequivalent expression - "A & 0x80" is not equivalent to "(char)5010649278077831496 < 0"
    {
        macgyver_var = 2313521480 | 1; // C4. Nonequivalent expression - "|= 0x1" is not equivalent to "2313521480 | 1"
    }
    else
    {
        macgyver_var = 72; // C4. Nonequivalent expression - "72" is not equivalent to "&= ~0x1"
    }
    // C4. Nonequivalent expression - see next comment line:
    // Alignment between here and <end unaligned> segment below is unambiguous. It does not, however, appear to be equivalent to the original code. 
    macgyver_var = 144;
    macgyver_var = 72;
    if (false)
    {
        macgyver_var = 2313521480 | 2;
    }
    // <end unaligned>
    if ((char)5010649278077831496 < 0) // C4. Nonequivalent expression - "A & 0x80" is not equivalent to "(char)5010649278077831496 < 0"
    {
        macgyver_var = 2313521480 | -128; // C4. Nonequivalent expression - "|= 0x80" is not equivalent to "2313521480 | -128"
        tick_count = 2305226891; // C4. Nonequivalent expression - "tick_count += 2" is not equivalent to "tick_count = 2305226891"
        return;
    }
    macgyver_var = 72; // C4. Nonequivalent expression - "72" is not equivalent to "&= ~0x80"
    tick_count = 2305226891; // C4. Nonequivalent expression - "tick_count += 2" is not equivalent to "tick_count = 2305226891"
    return;
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

/** Decompiled (with Angr) **/
extern unsigned long long __TMC_END__;

int usage() // C4.a.ii. Missing arguments
{
    unsigned int v1;  // C4. Nonequivalent expression: a local variable is not the same as a parameter variable. (Does align with v1)

    fprintf(__TMC_END__, "%s [--unit <B|M|G|T>] <DEVICE> [<DEVICE> ...]\n", v1); // C4. Nonequivalent expression - __TMC_END__ is not stdout
    exit(0x0); /* do not return */
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

/** Decompiled (with Angr) **/
long long cbz_lookup_metadata(unsigned long a0, unsigned long a1, char *a2, unsigned long long a3, unsigned int a4)
{
    unsigned long v0;  // C5.a.i. Extraneous variable duplicating another variable
    unsigned long v1;  // C5.a.i. Extraneous variable duplicating another variable

    v1 = a0; // C2.a.i. Extra statement to initialize extraneous variable
    v0 = a1; // C2.a.i. Extra statement to initialize extraneous variable
    if (strcmp(a2, "format") == 0)
    {
        return fz_strlcpy(a3, "CBZ", a4);
    }
    return 4294967295; // C6.c. Very large positive integers for negative integers 
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

/** Decompiled (with Angr) **/
typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    unsigned long long field_18;
    struct struct_1 *field_20;
} struct_0;

typedef struct struct_1 {
    char padding_0[64];
    unsigned long long field_40;
} struct_1;

// C4.a.i. Extra arguments
// Possibly C13. Decomposition of a composite variable into multiple variables (a1-a5 could be decomposed from the "sequence" parameter in the original code).
long long TLN_AddSequenceToPack(struct_0 *a0, unsigned long long a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    // C9.b. Expanded user-defined macro
    // C4.a.i. Extra arguments
    // C4.b. Equivalence depends on behavior of external code - (whether CheckBaseObject returns only 0 and 1)
    if ((char)(CheckBaseObject(a0, 0x7, a2, a3, a4, a5, 0x7, a0) ^ 1) == 0)
    {
        // C9.b. Expanded user-defined macro
        // C4.a.i. Extra arguments
        // C4.b. Equivalence depends on behavior of external code - (whether CheckBaseObject returns only 0 and 1)
        if ((char)(CheckBaseObject(a1, 0x6, a2, a3, a4, a5, a1, a0) ^ 1) != 0)
        {
            return 0;
        }
        if (a0->field_18 == 0)
        {
            a0->field_18 = a1;
            a0->field_20 = a1;
            a0->field_20->field_40 = 0;
            a0->field_10 = a0->field_10 + 1;
            TLN_SetLastError(0x0); // C9.b. Expanded user-defined macro
            return 1;
        }
        a0->field_20->field_40 = a1;
        a0->field_20 = a1;
        a0->field_20->field_40 = 0;
        a0->field_10 = a0->field_10 + 1;
        TLN_SetLastError(0x0); // C9.a. Expanded user-defined macro
        return 1;
    }
    return 0;
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

/** Decompiled (with Angr) **/
extern char g_40602b;
extern char g_406030;
extern char g_406e10;
extern unsigned long long list;
extern unsigned long long stderr;
extern unsigned long long test1;

int test_remove8()
{
    unsigned long long v1;  // C5.a. Extraneous variable

    (unsigned int)v1 = list_remove_value(list, test1, test1); // C4.a.i. Extra arguments
    if (v1 != test1)
    {
        // C7.d. Deconstructed ternary (next 7 non-comment lines except the return line)
        // C3.a. Extraneous typecast
        *((unsigned int *)&v1) = *(__errno_location()); // C9.a. Expanded standard symbol
        if ((unsigned int)v1 != 0)
        {
            // C9.a. Expanded standard symbol
            // C6.d. String replaced with reference to undeclared or global variable
            fprintf(stderr, "[ERROR] (%s:%d: errno: %s) Wrong node value returned removing node 1.\n", &g_406030, 240, (unsigned int)strerror(*(__errno_location())));
            return &g_406e10; // C6.d. String replaced with reference to undeclared or global variable
        }
        // C6.d. String replaced with reference to undeclared or global variable
        fprintf(stderr, "[ERROR] (%s:%d: errno: %s) Wrong node value returned removing node 1.\n", &g_406030, 240, &g_40602b);
        return &g_406e10; // C6.d. String replaced with reference to undeclared or global variable
    }
    return 0;
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

/** Decompiled (with Angr) **/
extern char g_405fb0;

int confirm_delete()
{
    char v0;  // aligns with answer

    while (true)
    {
        printf(&g_405fb0); // C6.d. String replaced with reference to undeclared or global variable
        __isoc99_scanf("%d", (unsigned int)&v0); // C9.a. Expanded standard symbol, C3.a. Extraneous typecast
        if (*((int *)&v0) != 0)
        {
            if (*((int *)&v0) != 1)
            {
                continue;
            }
            return *((int *)&v0) == 0; // C3.a. Extraneous typecast, C2.a. Extraneous code (the & and * operators in the typecast.)
        }
        return *((int *)&v0) == 0; // C3.a. Extraneous typecast, C2.a. Extraneous code (the & and * operators in the typecast.)
    }
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

/** Decompiled (with Angr) **/
typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long File_writeHex(unsigned long long *a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5) // C4.a.i. Extra arguments
{
    unsigned long v0;  // C5.a.i. Extraneous variable duplicating another variable
    unsigned int v1;  // aligns with "precondition"
    struct_0 *v2;  // aligns with "currentFile"
    unsigned long long v3;  // aligns with "procName"

    v0 = a1; // C2.a.i. Extra statement to initialize extraneous variable
    v3 = "File_writeHex";
    v2 = *(a0);
    v1 = File__checkValidityPRE(v2, v3, v3, a3, a4, a5); // C4.a.i. Extra arguments
    if (v1 != 0)
    {
        return fprintf(v2->field_8, "%.*x", a2); // C4.a.ii. Missing arguments
    }
    return v1;
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

/** Decompiled (with Angr) **/
long long toypop_sound_clear_w(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    char v0;  // C5.a. Extraneous variable
    char v1;  // C5.a.i. Extraneous variable duplicating another variable
    unsigned int v2;  // C5.a.i. Extraneous variable duplicating another variable

    v2 = a0; // C2.a.i. Extra statement to initialize extraneous variable
    v1 = a1; // C2.a.i. Extra statement to initialize extraneous variable

    // C12.a. Return value for void function
    // C4.a.i. Extra arguments
    // C3.a. Extraneous typecast
    // C2.a. Extraneous code (the & and * operators in the typecast).
    // C9.b. Expanded user-defined macro
    return cpunum_set_reset_line(0x1, 0x0, a2, a3, a4, a5, *((long long *)&v0));
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

/** Decompiled (with Angr) **/
typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[40];
    unsigned long long field_28;
} struct_1;

long long qemu_co_queue_wait_insert_head(struct_0 *a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5) // C4.a.i. Extra arguments
{
    char v0;  // C5.a. Extraneous variable
    unsigned long long v1[6];  // Aligns with "self"
    char v2;  // C5.a. Extraneous variable

    // C4.a.i. Extra arguments
    // C3.a. Extraneous typecast
    // C2.a. Extraneous code (the & and * operators in the typecast).
    // C4. Nonequivalent expression - Assigning to the first element of an array is not equivalent to assigning to the array itself.
    v1[0] = qemu_coroutine_self((unsigned int)a0, a1, a2, a3, a4, a5, *((long long *)&v0));
    v1[4] = a0->field_0; // C1.a.ii. Array access to access struct members.
    if (v1[4] != 0) // C1.a.ii. Array access to access struct members.
    {
        a0->field_0->field_28 = &v1[4]; // C1.a.ii. Array access to access struct members.
    }
    else
    {
        a0->field_8 = &v1[4]; // C1.a.ii. Array access to access struct members.
    }
    a0->field_0 = &v1[0]; // C1.a.ii. Array access to access struct members.
    v1[5] = a0; // C1.a.ii. Array access to access struct members, C11. Abuse of memory layout - uses the coincidence of the desired struct members' address being the address of the overall struct.
    // C4.a.i. Extra arguments
    // C3.a. Extraneous typecasts
    qemu_coroutine_yield((unsigned int)a0, a1, a0);
    // C4.a.i. Extra arguments
    // C3.a. Extraneous typecast
    // C2.a. Extraneous code (the & and * operators in the typecast).
    // C9.a. Expanded standard symbol - assert
    if ((char)qemu_in_coroutine((unsigned int)a0, a1, (unsigned int)a0, a3, a4, a5, *((long long *)&v2)) == 0)
    {
        __assert_fail(); /* do not return */
    }
    return 0; // C12.a. Return value for void function
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

/** Decompiled (with Angr) **/
int exitErrorNotFound(unsigned long long a0, unsigned int a1)
{
    // C2.b. Missing statement - assert

    if (a1 != 0 && a1 <= 7005) // C9.b. Expanded user-defined macros
    {
        exitError(a0, a1, 0x3, 0xffffffd5); // C9.b. Expanded user-defined macros
        return; // C12.b. No return value for non-void function
    }
    if (a1 == 0 || a1 > 7005) // C9.b. Expanded user-defined macros
    {
        if (a1 > 8000) // C9.b. Expanded user-defined macro
        {
            if (a1 > 8069) // C9.b. Expanded user-defined macro. C4. Nonequivalent expression: this should be < 8069
            {
                // C2.b. Missing statement - assert

                return; // C12.b. No return value for non-void function
            }
            exitError(a0, a1, 0x3, 0xffffffd5); // C9.b. Expanded user-defined macros
            return; // C12.b. No return value for non-void function
        }
        // C2.b. Missing statement - assert

        return; // C12.b. No return value for non-void function
    }
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

/** Decompiled (with Angr) **/
long long harddiskIdeCreate(unsigned int a0)
{
    unsigned int v0[32776];  // [bp-0x10]

    // C3.a. Extraneous typecast
    // C2.a. Extraneous code (the & and * operators in the typecast).
    // C9.a. Expanded standard symbol
    // C4. Nonequivalent expression v0[0] is not equivalent to v0.
    *((void* *)&v0[0]) = malloc(0x20020);
    v0[32775] = a0; // C1.a.ii. Array access to access struct members
    v0[2] = 0; // C1.a.ii. Array access to access struct members
    v0[3] = 0; // C1.a.ii. Array access to access struct members
    harddiskIdeReset(v0);
    return v0;
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

/** Decompiled (with Angr) **/
extern char got.cpu_bankbase;
extern char got.opcode_entry;

int namcos2_sound_bankselect_w(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    char v0;  // C5.a. Extraneous variable
    unsigned int v1;  // C5.a.i. Extraneous variable duplciating another variable
    unsigned int v2;  // aligns with "bank"
    unsigned long long v3;  // aligns with "max"
    unsigned long v4;  // aligns with "RAM"
    unsigned long v6;  // C5.a. Extraneous variable

    v1 = a0; // C2.a.i. Extra statement to initialize extraneous variable
    // C9.b. Exapnded user-defined macro
    // C3.a. Extraneous typecast
    // C2.a. Extraneous code (the & and * operators in the typecast).
    // C4.a.i. Extra arguments
    v4 = memory_region(0x83, a1, a2, a3, a4, a5, *((long long *)&v0));

    // C4. Nonequivalent expression - "/ 0x4000" is not equivalent to ">> 14"
    // C9.b. Expanded user-defined macro
    v3 = memory_region_length(0x83) - 0x10000 >> 14;
    v2 = (0 CONCAT v6 / 16) /m v3 >> 64; // C4. Nonequivalent expression - This expression is not equivalent to "int bank = (data >> 4) % max;"

    // C3.a. Extraneous typecast - (unsigned long *)
    // C3.b. Missing typecast  - (UINT8 *)
    // C1.b.ii. Pointer arithmetic to access array members 
    *((unsigned long *)(got.cpu_bankbase + 48)) = (v2 + 4) * 0x4000 + v4;
    if (*((char *)got.opcode_entry) == 6) // C3.a. Extraneous typecast
    {
        if (cpu_getactivecpu() >= 0)
        {
            *((char *)got.opcode_entry) = 255; // C3.a. Extraneous typecast, C2.a. Extraneous code - (Extra dereference * associated with the typecast).
            activecpu_set_op_base(activecpu_get_pc_byte());
            return;
        }
        return;
    }
    return;
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

/** Decompiled (with Angr) **/
typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

extern char myencoding_map_iso_8859_8;

long long myencoding_decode_iso_8859_8_i(unsigned int a0, struct_0 *a1)
{
    if ((char)a0 >= 0) // C3.a. Extraneous typecast
    {
        a1->field_18 = (char)a0; // C3.a. Extraneous typecast
        return 0; // C9.b. Expanded user-defined macros
    }
    a1->field_18 = (&myencoding_map_iso_8859_8)[(char)a0 - 128]; // C3.a. Extraneous typecast
    return 0; // C9.b. Expanded user-defined macros
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

/** Decompiled (with Angr) **/
int ft_errorlog(unsigned long long a0)
{
    unsigned int v0;  // [bp-0xc]

    if (a0 != 0)
    {
        v0 = open("/tmp/.sh_errorlog", 0x441, 0x1c0); // C9.a. Expanded standard symbols
        if (v0 >= 0)
        {
            ft_putendl_fd(a0, v0, v0); // C4.a.i. Extra arguments
            close(v0);
            return;
        }
        return;
    }
    return;
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

/** Decompiled (with Angr) **/
typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

int mr_SetListElement(struct_0 *a0, unsigned int a1, unsigned int a2, unsigned long a3)
{
    unsigned long long *v0;  // aligns with list
    unsigned long long v1;  // C5.a. Extraneous variable
    unsigned long long v3;  // C5.a.i. Extraneous variable duplicating another variable

    v0 = *((long long *)(a0->field_8->field_8 + a1 * 8)); // C1.b.ii. Pointer arithmetic to access array members
    v0[a2] = a3;
    v3 = v1; // C2.a.i. Extra statement to initialize extraneous variable
    return;
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

/** Decompiled (with Angr) **/
int main()
{
    test_machine_init();
    test_machine_command_create();
    test_machine_command_with_clamp();
    test_machine_command_valid_check();
    puts("All tests passed.");
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




