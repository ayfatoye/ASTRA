typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef struct bitset<32ul> bitset<32ul>, *Pbitset<32ul>;

struct bitset<32ul> { // PlaceHolder Class Structure
};

typedef struct _Base_bitset<1ul> _Base_bitset<1ul>, *P_Base_bitset<1ul>;

struct _Base_bitset<1ul> { // PlaceHolder Class Structure
};

typedef struct move_iterator<int*> move_iterator<int*>, *Pmove_iterator<int*>;

struct move_iterator<int*> { // PlaceHolder Class Structure
};

typedef struct bitset<8ul> bitset<8ul>, *Pbitset<8ul>;

struct bitset<8ul> { // PlaceHolder Class Structure
};

typedef struct __cxx11 __cxx11, *P__cxx11;

struct __cxx11 { // PlaceHolder Class Structure
};

typedef struct move_iterator<thisClassIsNotWorthCheckingOutTBH**> move_iterator<thisClassIsNotWorthCheckingOutTBH**>, *Pmove_iterator<thisClassIsNotWorthCheckingOutTBH**>;

struct move_iterator<thisClassIsNotWorthCheckingOutTBH**> { // PlaceHolder Class Structure
};

typedef struct duration<long,std::ratio<1l,1000l>> duration<long,std::ratio<1l,1000l>>, *Pduration<long,std::ratio<1l,1000l>>;

struct duration<long,std::ratio<1l,1000l>> { // PlaceHolder Class Structure
};

typedef struct duration<long,std::ratio<1l,1000000000l>> duration<long,std::ratio<1l,1000000000l>>, *Pduration<long,std::ratio<1l,1000000000l>>;

struct duration<long,std::ratio<1l,1000000000l>> { // PlaceHolder Class Structure
};

typedef struct time_point<std::chrono::_V2::system_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>> time_point<std::chrono::_V2::system_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>>, *Ptime_point<std::chrono::_V2::system_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>>;

struct time_point<std::chrono::_V2::system_clock,std::chrono::duration<long,std::ratio<1l,1000000000l>>> { // PlaceHolder Class Structure
};

typedef struct duration<long,std::ratio<1l,1l>> duration<long,std::ratio<1l,1l>>, *Pduration<long,std::ratio<1l,1l>>;

struct duration<long,std::ratio<1l,1l>> { // PlaceHolder Class Structure
};

typedef void * __gnuc_va_list;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

typedef __time_t time_t;

typedef ulong size_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

struct evp_pkey_ctx_st {
};

typedef struct thisClassIsNotWorthCheckingOutTBH thisClassIsNotWorthCheckingOutTBH, *PthisClassIsNotWorthCheckingOutTBH;

struct thisClassIsNotWorthCheckingOutTBH { // PlaceHolder Structure
};

typedef struct __va_list_tag __va_list_tag, *P__va_list_tag;

struct __va_list_tag { // PlaceHolder Structure
};

typedef struct mojabiGhost mojabiGhost, *PmojabiGhost;

struct mojabiGhost { // PlaceHolder Structure
};

typedef struct letsGoToMcDonaldsLater letsGoToMcDonaldsLater, *PletsGoToMcDonaldsLater;

struct letsGoToMcDonaldsLater { // PlaceHolder Structure
};

typedef dword __false_type;

typedef struct basic_istream basic_istream, *Pbasic_istream;

struct basic_istream { // PlaceHolder Structure
};

typedef dword move_iterator;

typedef dword random_access_iterator_tag;

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef struct basic_ostream basic_ostream, *Pbasic_ostream;

struct basic_ostream { // PlaceHolder Structure
};

typedef dword integral_constant;

typedef struct vector<int,std::allocator<int>> vector<int,std::allocator<int>>, *Pvector<int,std::allocator<int>>;

struct vector<int,std::allocator<int>> { // PlaceHolder Structure
};

typedef struct vector vector, *Pvector;

struct vector { // PlaceHolder Structure
};

typedef struct _Vector_base<int,std::allocator<int>> _Vector_base<int,std::allocator<int>>, *P_Vector_base<int,std::allocator<int>>;

struct _Vector_base<int,std::allocator<int>> { // PlaceHolder Structure
};

typedef struct basic_ostream<char,std::char_traits<char>> basic_ostream<char,std::char_traits<char>>, *Pbasic_ostream<char,std::char_traits<char>>;

struct basic_ostream<char,std::char_traits<char>> { // PlaceHolder Structure
};

typedef struct basic_fstream<char,std::char_traits<char>> basic_fstream<char,std::char_traits<char>>, *Pbasic_fstream<char,std::char_traits<char>>;

struct basic_fstream<char,std::char_traits<char>> { // PlaceHolder Structure
};

typedef struct allocator<char> allocator<char>, *Pallocator<char>;

struct allocator<char> { // PlaceHolder Structure
};

typedef dword _Ios_Openmode;

typedef struct allocator<thisClassIsNotWorthCheckingOutTBH*> allocator<thisClassIsNotWorthCheckingOutTBH*>, *Pallocator<thisClassIsNotWorthCheckingOutTBH*>;

struct allocator<thisClassIsNotWorthCheckingOutTBH*> { // PlaceHolder Structure
};

typedef struct allocator<int> allocator<int>, *Pallocator<int>;

struct allocator<int> { // PlaceHolder Structure
};

typedef dword _Ios_Seekdir;

typedef struct vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>> vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>, *Pvector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>;

struct vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>> { // PlaceHolder Structure
};

typedef struct _Vector_base<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>> _Vector_base<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>, *P_Vector_base<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>;

struct _Vector_base<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>> { // PlaceHolder Structure
};

typedef dword forward_iterator_tag;

typedef struct type type, *Ptype;

struct type { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/enable_if<std::chrono::__is_duration<std::chrono::duration<long,std::ratio<1l,1l>>>::value,std::chrono::duration<long,std::ratio<1l,1l>>>/type - /Demangler/std/remove_reference<thisClassIsNotWorthCheckingOutTBH*const&>/type

typedef dword difference_type;

typedef dword iterator_category;


// WARNING! conflicting data type names: /Demangler/std/enable_if<std::chrono::__is_duration<std::chrono::duration<long,std::ratio<1l,1000000000l>>>::value,std::chrono::duration<long,std::ratio<1l,1000000000l>>>/type - /Demangler/std/remove_reference<thisClassIsNotWorthCheckingOutTBH*const&>/type

typedef struct basic_string basic_string, *Pbasic_string;

struct basic_string { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>> basic_string<char,std::char_traits<char>,std::allocator<char>>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>> { // PlaceHolder Structure
};

typedef struct _Alloc_hider _Alloc_hider, *P_Alloc_hider;

struct _Alloc_hider { // PlaceHolder Structure
};

typedef struct Init Init, *PInit;

struct Init { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/enable_if<std::__is_bitwise_relocatable<int,void>::value,int*>/type - /Demangler/std/remove_reference<thisClassIsNotWorthCheckingOutTBH*const&>/type


// WARNING! conflicting data type names: /Demangler/std/common_type<std::chrono::duration<long,std::ratio<1l,1000l>>,std::chrono::duration<long,std::ratio<1l,1l>>>/type - /Demangler/std/remove_reference<thisClassIsNotWorthCheckingOutTBH*const&>/type


// WARNING! conflicting data type names: /Demangler/std/common_type<std::chrono::duration<long,std::ratio<1l,1000000000l>>,std::chrono::duration<long,std::ratio<1l,1000000000l>>>/type - /Demangler/std/remove_reference<thisClassIsNotWorthCheckingOutTBH*const&>/type

typedef struct _Vector_impl_data _Vector_impl_data, *P_Vector_impl_data;

struct _Vector_impl_data { // PlaceHolder Structure
};

typedef struct _Vector_impl _Vector_impl, *P_Vector_impl;

struct _Vector_impl { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/enable_if<std::chrono::__is_duration<std::chrono::duration<long,std::ratio<1l,1000l>>>::value,std::chrono::duration<long,std::ratio<1l,1000l>>>/type - /Demangler/std/remove_reference<thisClassIsNotWorthCheckingOutTBH*const&>/type

typedef struct duration duration, *Pduration;

struct duration { // PlaceHolder Structure
};

typedef struct time_point time_point, *Ptime_point;

struct time_point { // PlaceHolder Structure
};


// WARNING! conflicting data type names: /Demangler/std/enable_if<std::__is_bitwise_relocatable<thisClassIsNotWorthCheckingOutTBH*,void>::value,thisClassIsNotWorthCheckingOutTBH**>/type - /Demangler/std/remove_reference<thisClassIsNotWorthCheckingOutTBH*const&>/type

typedef struct new_allocator new_allocator, *Pnew_allocator;

struct new_allocator { // PlaceHolder Structure
};

typedef struct new_allocator<int> new_allocator<int>, *Pnew_allocator<int>;

struct new_allocator<int> { // PlaceHolder Structure
};

typedef struct new_allocator<thisClassIsNotWorthCheckingOutTBH*> new_allocator<thisClassIsNotWorthCheckingOutTBH*>, *Pnew_allocator<thisClassIsNotWorthCheckingOutTBH*>;

struct new_allocator<thisClassIsNotWorthCheckingOutTBH*> { // PlaceHolder Structure
};

typedef dword __normal_iterator;

typedef struct _Save_errno _Save_errno, *P_Save_errno;

struct _Save_errno { // PlaceHolder Structure
};

typedef struct __normal_iterator<int*,std::vector<int,std::allocator<int>>> __normal_iterator<int*,std::vector<int,std::allocator<int>>>, *P__normal_iterator<int*,std::vector<int,std::allocator<int>>>;

struct __normal_iterator<int*,std::vector<int,std::allocator<int>>> { // PlaceHolder Class Structure
};

typedef struct __normal_iterator<thisClassIsNotWorthCheckingOutTBH**,std::vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>> __normal_iterator<thisClassIsNotWorthCheckingOutTBH**,std::vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>>, *P__normal_iterator<thisClassIsNotWorthCheckingOutTBH**,std::vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>>;

struct __normal_iterator<thisClassIsNotWorthCheckingOutTBH**,std::vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>> { // PlaceHolder Class Structure
};

typedef struct __normal_iterator<thisClassIsNotWorthCheckingOutTBH*const*,std::vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>> __normal_iterator<thisClassIsNotWorthCheckingOutTBH*const*,std::vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>>, *P__normal_iterator<thisClassIsNotWorthCheckingOutTBH*const*,std::vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>>;

struct __normal_iterator<thisClassIsNotWorthCheckingOutTBH*const*,std::vector<thisClassIsNotWorthCheckingOutTBH*,std::allocator<thisClassIsNotWorthCheckingOutTBH*>>> { // PlaceHolder Class Structure
};

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00102020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __thiscall std::__cxx11::basic_string<>::~basic_string(basic_string<> *this)

{
  ~basic_string(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::chrono::_V2::system_clock::now(void)

{
  now();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::basic_fstream<>::close(void)

{
  close();
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  ~allocator(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

basic_istream * std::getline<>(basic_istream *param_1,basic_string *param_2)

{
  basic_istream *pbVar1;
  
  pbVar1 = getline<>(param_1,param_2);
  return pbVar1;
}



void __thiscall std::basic_fstream<>::~basic_fstream(basic_fstream<> *this)

{
  ~basic_fstream(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::compare(char *param_1)

{
  compare(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::_S_copy_chars(char *param_1,char *param_2,char *param_3)

{
  _S_copy_chars(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = nanosleep(__requested_time,__remaining);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__throw_bad_alloc(void)

{
  __throw_bad_alloc();
  return;
}



void __cxa_begin_catch(void)

{
  __cxa_begin_catch();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::c_str(void)

{
  c_str();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::basic_string(basic_string *param_1)

{
  basic_string(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__throw_length_error(char *param_1)

{
  __throw_length_error(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__throw_invalid_argument(char *param_1)

{
  __throw_invalid_argument(param_1);
  return;
}



void __thiscall std::__cxx11::basic_string<>::operator+=(basic_string<> *this,char param_1)

{
  operator+=(this,param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::_M_set_length(ulong param_1)

{
  _M_set_length(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::size(void)

{
  size();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__throw_logic_error(char *param_1)

{
  __throw_logic_error(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::_M_local_data(void)

{
  _M_local_data();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::_M_data(char *param_1)

{
  _M_data(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int system(char *__command)

{
  int iVar1;
  
  iVar1 = system(__command);
  return iVar1;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

basic_ostream * std::operator<<(basic_ostream *param_1,basic_string *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator<<(param_1,param_2);
  return pbVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

basic_ostream * std::operator<<(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator<<(param_1,param_2);
  return pbVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::basic_ostream<>::seekp(long param_1,_Ios_Seekdir param_2)

{
  seekp(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



void __thiscall
std::basic_ostream<>::operator<<
          (basic_ostream<> *this,_func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
  operator<<(this,param_1);
  return;
}



void __thiscall
std::__cxx11::basic_string<>::_Alloc_hider::_Alloc_hider
          (_Alloc_hider *this,char *param_1,allocator *param_2)

{
  _Alloc_hider(this,param_1,param_2);
  return;
}



void __thiscall std::allocator<char>::~allocator(allocator<char> *this)

{
  ~allocator(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::_M_data(void)

{
  _M_data();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::operator[](ulong param_1)

{
  operator[](param_1);
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::basic_fstream<>::basic_fstream(void)

{
  basic_fstream();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::_M_dispose(void)

{
  _M_dispose();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::basic_istream<>::read(char *param_1,long param_2)

{
  read(param_1,param_2);
  return;
}



void __thiscall std::__cxx11::basic_string<>::operator+=(basic_string<> *this,basic_string *param_1)

{
  operator+=(this,param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::basic_ostream<>::write(char *param_1,long param_2)

{
  write(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::basic_string(char *param_1,allocator *param_2)

{
  basic_string(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::basic_fstream<>::open(basic_string *param_1,_Ios_Openmode param_2)

{
  open(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::basic_string(void)

{
  basic_string();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__throw_out_of_range(char *param_1)

{
  __throw_out_of_range(param_1);
  return;
}



void __cxa_rethrow(void)

{
  __cxa_rethrow();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__throw_out_of_range_fmt(char *param_1,...)

{
  __throw_out_of_range_fmt(param_1);
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  Init(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void __cxa_end_catch(void)

{
  __cxa_end_catch();
  return;
}



void __thiscall std::basic_ostream<>::operator<<(basic_ostream<> *this,int param_1)

{
  operator<<(this,param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::assign(ulong param_1,char param_2)

{
  assign(param_1,param_2);
  return;
}



void _Unwind_Resume(void)

{
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::allocator<char>::allocator(void)

{
  allocator();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::_M_create(ulong *param_1,ulong param_2)

{
  _M_create(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::_M_capacity(ulong param_1)

{
  _M_capacity(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__cxx11::basic_string<>::operator[](ulong param_1)

{
  operator[](param_1);
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1,auStack_8)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00102853)
// WARNING: Removing unreachable block (ram,0x0010285f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00102894)
// WARNING: Removing unreachable block (ram,0x001028a0)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_8061 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_8061 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// returnSame(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >
// const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)

basic_string * returnSame(basic_string *param_1,basic_string *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong in_RDX;
  long in_FS_OFFSET;
  ulong local_28;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::basic_string<>::basic_string(param_1);
  local_28 = 0;
  while( true ) {
    uVar4 = std::__cxx11::basic_string<>::size();
    if (uVar4 <= local_28) break;
    pbVar5 = (byte *)std::__cxx11::basic_string<>::operator[]((ulong)param_2);
    bVar1 = *pbVar5;
    std::__cxx11::basic_string<>::size();
    pbVar5 = (byte *)std::__cxx11::basic_string<>::operator[](in_RDX);
    bVar2 = *pbVar5;
                    // try { // try from 001029b1 to 001029b5 has its CatchHandler @ 001029c7
    pbVar5 = (byte *)std::__cxx11::basic_string<>::operator[]((ulong)param_1);
    *pbVar5 = bVar1 ^ bVar2;
    local_28 = local_28 + 1;
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return param_1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// papa[abi:cxx11]()

basic_string<> * papa_abi_cxx11_(void)

{
  int iVar1;
  basic_string<> *in_RDI;
  long in_FS_OFFSET;
  allocator<char> local_51;
  int local_50;
  int local_4c;
  __cxx11 local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = rand();
  local_4c = iVar1 % 5 + 1;
  std::allocator<char>::allocator();
                    // try { // try from 00102a76 to 00102a7a has its CatchHandler @ 00102afb
  std::__cxx11::basic_string<>::basic_string((char *)in_RDI,(allocator *)&DAT_0010901e);
  std::allocator<char>::~allocator(&local_51);
  for (local_50 = 0; local_50 < local_4c; local_50 = local_50 + 1) {
    iVar1 = rand();
                    // try { // try from 00102ad1 to 00102ad5 has its CatchHandler @ 00102b2e
    std::__cxx11::to_string(local_48,iVar1 % 10);
                    // try { // try from 00102ae4 to 00102ae8 has its CatchHandler @ 00102b19
    std::__cxx11::basic_string<>::operator+=(in_RDI,(basic_string *)local_48);
    std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return in_RDI;
}



// storePasscode(int)

ulong storePasscode(int param_1)

{
  size_t sVar1;
  long in_FS_OFFSET;
  allocator<char> local_2aa;
  allocator<char> local_2a9;
  char *local_2a8;
  void *local_2a0;
  basic_string local_298 [32];
  basic_string<> local_278 [32];
  basic_string local_258 [32];
  basic_string local_238 [16];
  char local_228 [520];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::basic_fstream<>::basic_fstream();
  std::operator|(8,0x10);
  std::allocator<char>::allocator();
                    // try { // try from 00102bd8 to 00102bdc has its CatchHandler @ 00102dfb
  std::__cxx11::basic_string<>::basic_string((char *)local_278,(allocator *)&DAT_0010901f);
  std::allocator<char>::allocator();
                    // try { // try from 00102c04 to 00102c08 has its CatchHandler @ 00102dd4
  std::__cxx11::basic_string<>::basic_string((char *)local_298,(allocator *)&DAT_00109023);
                    // try { // try from 00102c24 to 00102c28 has its CatchHandler @ 00102dbc
  returnSame(local_258,local_298);
                    // try { // try from 00102c3f to 00102c43 has its CatchHandler @ 00102da4
  std::basic_fstream<>::open(local_238,(_Ios_Openmode)local_258);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_258);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_298);
  std::allocator<char>::~allocator(&local_2aa);
  std::__cxx11::basic_string<>::~basic_string(local_278);
  std::allocator<char>::~allocator(&local_2a9);
                    // try { // try from 00102ca7 to 00102d69 has its CatchHandler @ 00102e13
  std::basic_ostream<>::seekp((long)local_228,0x931a);
  papa_abi_cxx11_();
  local_2a8 = (char *)std::__cxx11::basic_string<>::c_str();
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_258);
  sVar1 = strlen(local_2a8);
  local_2a0 = operator_new__(sVar1);
  strlen(local_2a8);
  std::basic_istream<>::read((char *)local_238,(long)local_2a0);
  strlen(local_2a8);
  std::basic_ostream<>::write(local_228,(long)local_2a8);
  std::basic_fstream<>::close();
  sVar1 = strlen(local_2a8);
  std::basic_fstream<>::~basic_fstream((basic_fstream<> *)local_238);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return sVar1 & 0xffffffff;
}



// generateStr[abi:cxx11](int, int)

basic_string<> * generateStr_abi_cxx11_(int param_1,int param_2)

{
  long lVar1;
  char in_DL;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_24;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::basic_string<>::basic_string();
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
                    // try { // try from 00102ea2 to 00102ea6 has its CatchHandler @ 00102ead
    std::__cxx11::basic_string<>::operator+=
              ((basic_string<> *)CONCAT44(in_register_0000003c,param_1),(char)local_24 * in_DL + 'a'
              );
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (basic_string<> *)CONCAT44(in_register_0000003c,param_1);
}



// sendHelp(int, letsGoToMcDonaldsLater*)

long sendHelp(int param_1,letsGoToMcDonaldsLater *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = letsGoToMcDonaldsLater::spinMove(param_2);
  lVar2 = std::__cxx11::stol((basic_string *)gm_abi_cxx11_,(ulong *)0x0,10);
  return lVar2 * (iVar1 * param_1);
}



// prinHin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)

void prinHin(basic_string param_1)

{
  int iVar1;
  basic_ostream *this;
  undefined7 in_register_00000039;
  
  iVar1 = rand();
  if (iVar1 % 0x19 == 0) {
    this = std::operator<<((basic_ostream *)std::cout,
                           (basic_string *)CONCAT71(in_register_00000039,param_1));
    std::basic_ostream<>::operator<<((basic_ostream<> *)this,std::endl<>);
  }
  return;
}



// getVal(int)

int getVal(int param_1)

{
  char *pcVar1;
  long in_FS_OFFSET;
  allocator<char> local_8e;
  allocator<char> local_8d;
  undefined4 local_8c;
  basic_string local_88 [32];
  basic_string<> local_68 [32];
  basic_string local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator();
                    // try { // try from 00102ff8 to 00102ffc has its CatchHandler @ 00103208
  std::__cxx11::basic_string<>::basic_string((char *)local_68,(allocator *)&DAT_00109029);
  std::allocator<char>::allocator();
                    // try { // try from 00103021 to 00103025 has its CatchHandler @ 001031e4
  std::__cxx11::basic_string<>::basic_string((char *)local_88,(allocator *)&DAT_0010902d);
                    // try { // try from 00103038 to 0010303c has its CatchHandler @ 001031cf
  returnSame(local_48,local_88);
  pcVar1 = (char *)std::__cxx11::basic_string<>::c_str();
                    // try { // try from 0010304c to 00103050 has its CatchHandler @ 001031ba
  system(pcVar1);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_88);
  std::allocator<char>::~allocator(&local_8e);
  std::__cxx11::basic_string<>::~basic_string(local_68);
  std::allocator<char>::~allocator(&local_8d);
  local_8c = storePasscode(param_1);
  generateStr_abi_cxx11_((int)local_48,param_1);
                    // try { // try from 001030c6 to 001030ca has its CatchHandler @ 00103229
  prinHin(SUB81(local_48,0));
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  std::allocator<char>::allocator();
                    // try { // try from 001030fb to 001030ff has its CatchHandler @ 00103295
  std::__cxx11::basic_string<>::basic_string((char *)local_68,(allocator *)&DAT_0010904a);
  std::allocator<char>::allocator();
                    // try { // try from 00103124 to 00103128 has its CatchHandler @ 00103271
  std::__cxx11::basic_string<>::basic_string((char *)local_88,(allocator *)&DAT_0010904e);
                    // try { // try from 0010313b to 0010313f has its CatchHandler @ 0010325c
  returnSame(local_48,local_88);
  pcVar1 = (char *)std::__cxx11::basic_string<>::c_str();
                    // try { // try from 0010314f to 00103153 has its CatchHandler @ 00103247
  system(pcVar1);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_88);
  std::allocator<char>::~allocator(&local_8e);
  std::__cxx11::basic_string<>::~basic_string(local_68);
  std::allocator<char>::~allocator(&local_8d);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return param_1 * 3;
}



// porqueTeFuiste(thisClassIsNotWorthCheckingOutTBH*, thisClassIsNotWorthCheckingOutTBH*, int)

thisClassIsNotWorthCheckingOutTBH *
porqueTeFuiste(thisClassIsNotWorthCheckingOutTBH *param_1,thisClassIsNotWorthCheckingOutTBH *param_2
              ,int param_3)

{
  int iVar1;
  thisClassIsNotWorthCheckingOutTBH *this;
  ulong uVar2;
  long in_FS_OFFSET;
  int local_44;
  vector<> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_44 = 0; local_44 < 0x19; local_44 = local_44 + 1) {
    this = (thisClassIsNotWorthCheckingOutTBH *)operator_new(0x30);
    thisClassIsNotWorthCheckingOutTBH::thisClassIsNotWorthCheckingOutTBH(this,local_44);
    thisClassIsNotWorthCheckingOutTBH::maybeThisDoesSomethingImportant(this,false);
    thisClassIsNotWorthCheckingOutTBH::depthFirstSearch(param_2,this);
  }
  iVar1 = thisClassIsNotWorthCheckingOutTBH::performSynthesis(param_2);
  thisClassIsNotWorthCheckingOutTBH::getPercentYield();
  uVar2 = std::vector<>::size(local_38);
                    // try { // try from 0010339a to 0010339e has its CatchHandler @ 001033c0
  thisClassIsNotWorthCheckingOutTBH::newFavoriteKid
            (param_2,param_1,(int)((ulong)(long)(iVar1 * param_3 * 0x7e) % uVar2));
  std::vector<>::~vector(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return param_2;
}



// traverse(thisClassIsNotWorthCheckingOutTBH*, int)

void traverse(thisClassIsNotWorthCheckingOutTBH *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  thisClassIsNotWorthCheckingOutTBH **pptVar5;
  long in_FS_OFFSET;
  thisClassIsNotWorthCheckingOutTBH *local_60;
  vector<> local_58 [32];
  vector<> local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_1;
  do {
    cVar2 = thisClassIsNotWorthCheckingOutTBH::fattyAcid(local_60);
    if (cVar2 == '\0') {
LAB_00103437:
      bVar1 = false;
    }
    else {
      cVar2 = thisClassIsNotWorthCheckingOutTBH::enzymesDoNotChangeFreeEnergy(local_60);
      if (cVar2 == '\x01') goto LAB_00103437;
      bVar1 = true;
    }
    if (!bVar1) {
      thisClassIsNotWorthCheckingOutTBH::michaelisMentenKinetics(local_60);
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return;
    }
    thisClassIsNotWorthCheckingOutTBH::getPercentYield();
    iVar3 = thisClassIsNotWorthCheckingOutTBH::performSynthesis(local_60);
                    // try { // try from 0010347b to 0010347f has its CatchHandler @ 00103505
    thisClassIsNotWorthCheckingOutTBH::getPercentYield();
    uVar4 = std::vector<>::size(local_38);
                    // try { // try from 001034aa to 001034ae has its CatchHandler @ 001034f0
    pptVar5 = (thisClassIsNotWorthCheckingOutTBH **)
              std::vector<>::at(local_58,(ulong)(long)(iVar3 * param_2 * 0x7e) % uVar4);
    local_60 = *pptVar5;
    std::vector<>::~vector(local_38);
    std::vector<>::~vector(local_58);
  } while( true );
}



// isPasscode(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)

ulong isPasscode(basic_string param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  int local_74;
  allocator<char> local_70 [8];
  basic_string<> local_68 [32];
  bitset<8ul> local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator<char>::allocator();
                    // try { // try from 0010356d to 00103571 has its CatchHandler @ 00103639
  std::__cxx11::basic_string<>::basic_string((char *)local_68,(allocator *)&DAT_0010901e);
  std::allocator<char>::~allocator(local_70);
  local_74 = 0;
  while( true ) {
    uVar2 = std::__cxx11::basic_string<>::size();
    if (uVar2 <= (ulong)(long)local_74) break;
    lVar3 = std::__cxx11::basic_string<>::c_str();
    std::bitset<8ul>::bitset((bitset<8ul> *)local_70,(long)*(char *)(lVar3 + local_74));
                    // try { // try from 001035da to 001035de has its CatchHandler @ 0010366c
    std::bitset<8ul>::to_string_abi_cxx11_(local_48);
                    // try { // try from 001035ed to 001035f1 has its CatchHandler @ 00103657
    std::__cxx11::basic_string<>::operator+=(local_68,(basic_string *)local_48);
    std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
    local_74 = local_74 + 1;
  }
  bVar1 = std::operator==((basic_string *)local_68,
                          "010100110110000101111001010010000110010101101100011011000110111101010100011011110100110101111001010011000110100101110100011101000110110001100101010001100111001001101001011001010110111001100100"
                         );
  std::__cxx11::basic_string<>::~basic_string(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return CONCAT71(extraout_var,bVar1) & 0xffffffff;
}



// WARNING: Removing unreachable block (ram,0x0010371e)
// WARNING: Unknown calling convention -- yet parameter storage is locked
// rD()

void rD(void)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  type tVar4;
  type tVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = std::chrono::_V2::system_clock::now();
  local_30 = CONCAT44(local_30._4_4_,100);
  std::chrono::duration<>::duration<int,void>((duration<> *)&local_28,(int *)&local_30);
  std::this_thread::sleep_for<>((duration *)&local_28);
  local_38 = std::chrono::_V2::system_clock::now();
  tVar4 = std::chrono::operator-((time_point *)&local_38,(time_point *)&local_40);
  local_28 = CONCAT44(extraout_var,tVar4);
  tVar5 = std::chrono::duration_cast<>((duration *)&local_28);
  local_30 = CONCAT44(extraout_var_00,tVar5);
  puVar1 = (uint *)cpuid_Version_info(1);
  local_28 = (ulong)*puVar1;
  cVar3 = std::bitset<32ul>::test((bitset<32ul> *)&local_28,0x1f);
  if ((cVar3 == '\0') &&
     (lVar6 = std::chrono::duration<>::count((duration<> *)&local_30), -1 < lVar6)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
                    // WARNING: Subroutine does not return
  abort();
}



// mod_pow(unsigned long, unsigned long, unsigned long)

ulong mod_pow(ulong param_1,ulong param_2,ulong param_3)

{
  ulong local_28;
  ulong local_20;
  ulong local_10;
  
  local_10 = 1;
  local_20 = param_1;
  for (local_28 = param_2; local_28 != 0; local_28 = local_28 >> 1) {
    if ((local_28 & 1) != 0) {
      local_10 = (local_10 * local_20) % param_3;
    }
    local_20 = (local_20 * local_20) % param_3;
  }
  return local_10;
}



// setValues(unsigned long&, unsigned long&, unsigned long&, unsigned long&)

void setValues(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  *param_1 = 0xecf3;
  *param_2 = 7;
  *param_3 = 0x71fb;
  *param_4 = 0x2c7b948f;
  return;
}



// calculate_n(unsigned long, unsigned long)

long calculate_n(ulong param_1,ulong param_2)

{
  return param_1 * param_2;
}



// calculate_phi_n(unsigned long, unsigned long)

long calculate_phi_n(ulong param_1,ulong param_2)

{
  return (param_2 - 1) * (param_1 - 1);
}



// calculate_d_inverse(unsigned long, unsigned long)

ulong calculate_d_inverse(ulong param_1,ulong param_2)

{
  ulong local_10;
  
  local_10 = 1;
  while( true ) {
    if (param_2 <= local_10) {
      return 0;
    }
    if ((local_10 * param_1) % param_2 == 1) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}



// decrypt_message(unsigned long, unsigned long, unsigned long)

undefined8 decrypt_message(ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = mod_pow(param_1,param_2,param_3);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// performDecryption()

undefined4 performDecryption(void)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  setValues(&local_48,&local_40,&local_38,&local_30);
  local_28 = calculate_n(local_48,local_38);
  local_20 = calculate_phi_n(local_48,local_38);
  local_18 = calculate_d_inverse(local_40,local_20);
  uVar1 = decrypt_message(local_30,local_18,local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar1;
}



undefined8 main(void)

{
  char cVar1;
  int iVar2;
  time_t tVar3;
  basic_ostream *pbVar4;
  thisClassIsNotWorthCheckingOutTBH *this;
  letsGoToMcDonaldsLater *plVar5;
  basic_ostream<> *this_00;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  thisClassIsNotWorthCheckingOutTBH *local_a0;
  letsGoToMcDonaldsLater *local_98;
  thisClassIsNotWorthCheckingOutTBH *local_90;
  vector<> local_88 [32];
  basic_string local_68 [32];
  basic_string local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  rD();
  std::__cxx11::basic_string<>::basic_string();
  local_a4 = performDecryption();
  tVar3 = time((time_t *)0x0);
  srand((uint)tVar3);
                    // try { // try from 00103a0a to 00103a49 has its CatchHandler @ 00103ecb
  pbVar4 = std::operator<<((basic_ostream *)std::cout,"What is the secret passcode?");
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
  std::getline<>((basic_istream *)std::cin,local_68);
  std::__cxx11::basic_string<>::basic_string(local_48);
                    // try { // try from 00103a51 to 00103a55 has its CatchHandler @ 00103ea1
  cVar1 = isPasscode(SUB81(local_48,0));
  std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_48);
  if (cVar1 == '\0') {
    getVal(8);
    system("sleep 8");
                    // WARNING: Subroutine does not return
    exit(1);
  }
                    // try { // try from 00103a79 to 00103add has its CatchHandler @ 00103ecb
  std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,std::endl<>);
  system("sleep 8");
  pbVar4 = std::operator<<((basic_ostream *)std::cout,
                           "I can\'t believe you figured this out! The rest should be REALLY easy!")
  ;
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
  local_98 = (letsGoToMcDonaldsLater *)operator_new(0x38);
  letsGoToMcDonaldsLater::letsGoToMcDonaldsLater(local_98);
  std::vector<>::vector(local_88);
  for (local_b0 = 0; local_b0 < 0x1e; local_b0 = local_b0 + 1) {
    iVar2 = rand();
    local_b4 = iVar2 % 1000 + 1;
                    // try { // try from 00103b50 to 00103e68 has its CatchHandler @ 00103eb6
    std::vector<>::push_back(local_88,&local_b4);
    letsGoToMcDonaldsLater::somethingGoesInThisFunction(local_98,local_b4);
  }
  std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,std::endl<>);
  local_a0 = (thisClassIsNotWorthCheckingOutTBH *)operator_new(0x30);
  thisClassIsNotWorthCheckingOutTBH::thisClassIsNotWorthCheckingOutTBH(local_a0,3);
  thisClassIsNotWorthCheckingOutTBH::finalBoss(local_a0,true);
  thisClassIsNotWorthCheckingOutTBH::CHECKMEOUT(local_a0,local_98);
  for (local_ac = 0; local_ac < 0xf; local_ac = local_ac + 1) {
    this = (thisClassIsNotWorthCheckingOutTBH *)operator_new(0x30);
    thisClassIsNotWorthCheckingOutTBH::thisClassIsNotWorthCheckingOutTBH(this,local_ac * local_ac);
    local_90 = this;
    local_a0 = (thisClassIsNotWorthCheckingOutTBH *)porqueTeFuiste(local_a0,this,local_a4);
  }
  pbVar4 = std::operator<<((basic_ostream *)std::cout,"What is the magic number?");
  std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
  std::getline<>((basic_istream *)std::cin,local_68);
  iVar2 = std::__cxx11::stoi(local_68,(ulong *)0x0,10);
  plVar5 = (letsGoToMcDonaldsLater *)traverse(local_a0,iVar2);
  if (local_98 == plVar5) {
    std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,std::endl<>);
    system("sleep 8");
    pbVar4 = std::operator<<((basic_ostream *)std::cout,"See how easy this is?");
    this_00 = (basic_ostream<> *)
              std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
    std::basic_ostream<>::operator<<(this_00,std::endl<>);
    local_a8 = 0;
    while( true ) {
      uVar10 = (ulong)local_a8;
      uVar6 = std::vector<>::size(local_88);
      if (uVar6 <= uVar10) break;
      piVar7 = (int *)std::vector<>::at(local_88,(long)local_a8);
      pbVar4 = (basic_ostream *)
               std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,*piVar7);
      std::operator<<(pbVar4," ");
      local_a8 = local_a8 + 1;
    }
    std::basic_ostream<>::operator<<((basic_ostream<> *)std::cout,std::endl<>);
    pbVar4 = std::operator<<((basic_ostream *)std::cout,
                             "Alright, so what\'s the extra special magic number?");
    std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
    std::getline<>((basic_istream *)std::cin,local_68);
    lVar8 = std::__cxx11::stol(local_68,(ulong *)0x0,10);
    lVar9 = sendHelp(local_a4,local_98);
    if (lVar8 == lVar9) {
      pbVar4 = std::operator<<((basic_ostream *)std::cout,
                               "WINNER WINNER CHICKEN DINNER! (You cracked every layer)");
      std::basic_ostream<>::operator<<((basic_ostream<> *)pbVar4,std::endl<>);
      std::vector<>::~vector(local_88);
      std::__cxx11::basic_string<>::~basic_string((basic_string<> *)local_68);
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return 0;
    }
    system("sleep 100");
    getVal(0xc);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  system("sleep 8");
  getVal(0x10);
                    // WARNING: Subroutine does not return
  exit(1);
}



// __static_initialization_and_destruction_0(int, int)

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  long in_FS_OFFSET;
  allocator<char> local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
    std::allocator<char>::allocator();
                    // try { // try from 00103f7b to 00103f7f has its CatchHandler @ 00103fab
    std::__cxx11::basic_string<>::basic_string(gm_abi_cxx11_,(allocator *)"194782386221");
    std::allocator<char>::~allocator(&local_21);
    __cxa_atexit(std::__cxx11::basic_string<>::~basic_string,gm_abi_cxx11_,&__dso_handle);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// gm[abi:cxx11]

void _GLOBAL__sub_I_gm_abi_cxx11_(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



// operator new(unsigned long, void*)

void * operator_new(ulong param_1,void *param_2)

{
  return param_2;
}



// std::char_traits<char>::assign(char&, char const&)

void std::char_traits<char>::assign(char *param_1,char *param_2)

{
  *param_1 = *param_2;
  return;
}



// std::__cxx11::stoi(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>
// > const&, unsigned long*, int)

void std::__cxx11::stoi(basic_string *param_1,ulong *param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)std::__cxx11::basic_string<>::c_str();
  __gnu_cxx::__stoa<>(strtol,"stoi",pcVar1,param_2,param_3);
  return;
}



// std::__cxx11::stol(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>
// > const&, unsigned long*, int)

void std::__cxx11::stol(basic_string *param_1,ulong *param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)std::__cxx11::basic_string<>::c_str();
  __gnu_cxx::__stoa<>(strtol,"stol",pcVar1,param_2,param_3);
  return;
}



// std::__cxx11::to_string(int)

__cxx11 * __thiscall std::__cxx11::to_string(__cxx11 *this,int param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__to_xstring<>
            ((_func_int_char_ptr_ulong_char_ptr___va_list_tag_ptr *)this,(ulong)vsnprintf,
             (char *)0x10,&DAT_00109013,(ulong)(uint)param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return this;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::TEMPNAMEPLACEHOLDERVALUE(std::_Ios_Openmode, std::_Ios_Openmode)

uint std::operator|(_Ios_Openmode param_1,_Ios_Openmode param_2)

{
  return param_1 | param_2;
}



// std::_Base_bitset<1ul>::_Base_bitset(unsigned long long)

void __thiscall std::_Base_bitset<1ul>::_Base_bitset(_Base_bitset<1ul> *this,ulonglong param_1)

{
  *(ulonglong *)this = param_1;
  return;
}



// std::_Base_bitset<1ul>::_S_whichbit(unsigned long)

uint std::_Base_bitset<1ul>::_S_whichbit(ulong param_1)

{
  return (uint)param_1 & 0x3f;
}



// std::_Base_bitset<1ul>::_S_maskbit(unsigned long)

long std::_Base_bitset<1ul>::_S_maskbit(ulong param_1)

{
  byte bVar1;
  
  bVar1 = _S_whichbit(param_1);
  return 1L << (bVar1 & 0x3f);
}



// std::_Base_bitset<1ul>::_M_getword(unsigned long) const

undefined8 std::_Base_bitset<1ul>::_M_getword(ulong param_1)

{
  return *(undefined8 *)param_1;
}



// std::chrono::duration<long, std::ratio<1l, 1000000000l> >::count() const

undefined8 __thiscall std::chrono::duration<>::count(duration<> *this)

{
  return *(undefined8 *)this;
}



// std::chrono::duration<long, std::ratio<1l, 1000000000l> >::duration<long, void>(long const&)

void __thiscall std::chrono::duration<>::duration<long,void>(duration<> *this,long *param_1)

{
  *(long *)this = *param_1;
  return;
}



// std::chrono::duration_values<long>::zero()

undefined8 std::chrono::duration_values<long>::zero(void)

{
  return 0;
}



// mojabiGhost::mojabiGhost(int)

void __thiscall mojabiGhost::mojabiGhost(mojabiGhost *this,int param_1)

{
  *(int *)this = param_1;
  *(undefined4 *)(this + 0x20) = 0xd;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}



// mojabiGhost::getMeMyThemeMusic()

undefined4 __thiscall mojabiGhost::getMeMyThemeMusic(mojabiGhost *this)

{
  return *(undefined4 *)this;
}



// mojabiGhost::handMeTheAux()

undefined8 __thiscall mojabiGhost::handMeTheAux(mojabiGhost *this)

{
  return *(undefined8 *)(this + 8);
}



// mojabiGhost::someoneGetThisGoofy()

undefined8 __thiscall mojabiGhost::someoneGetThisGoofy(mojabiGhost *this)

{
  return *(undefined8 *)(this + 0x10);
}



// mojabiGhost::whatsForDinner()

undefined8 __thiscall mojabiGhost::whatsForDinner(mojabiGhost *this)

{
  return *(undefined8 *)(this + 0x18);
}



// mojabiGhost::doYouWantACookie()

undefined4 __thiscall mojabiGhost::doYouWantACookie(mojabiGhost *this)

{
  return *(undefined4 *)(this + 0x20);
}



// mojabiGhost::doesThisEvenDoAnything(int)

void __thiscall mojabiGhost::doesThisEvenDoAnything(mojabiGhost *this,int param_1)

{
  *(int *)(this + 0x20) = param_1;
  return;
}



// mojabiGhost::vodkaFunction(mojabiGhost*)

void __thiscall mojabiGhost::vodkaFunction(mojabiGhost *this,mojabiGhost *param_1)

{
  *(mojabiGhost **)(this + 0x10) = param_1;
  return;
}



// mojabiGhost::tequilaShot(mojabiGhost*)

void __thiscall mojabiGhost::tequilaShot(mojabiGhost *this,mojabiGhost *param_1)

{
  *(mojabiGhost **)(this + 8) = param_1;
  return;
}



// mojabiGhost::theBestFunctionEver(mojabiGhost*)

void __thiscall mojabiGhost::theBestFunctionEver(mojabiGhost *this,mojabiGhost *param_1)

{
  *(mojabiGhost **)(this + 0x18) = param_1;
  return;
}



// letsGoToMcDonaldsLater::letsGoToMcDonaldsLater()

void __thiscall letsGoToMcDonaldsLater::letsGoToMcDonaldsLater(letsGoToMcDonaldsLater *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



// letsGoToMcDonaldsLater::spinMove()

undefined4 __thiscall letsGoToMcDonaldsLater::spinMove(letsGoToMcDonaldsLater *this)

{
  return *(undefined4 *)(this + 8);
}



// letsGoToMcDonaldsLater::thereIsNothingLeft(mojabiGhost*)

undefined8 __thiscall
letsGoToMcDonaldsLater::thereIsNothingLeft(letsGoToMcDonaldsLater *this,mojabiGhost *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (mojabiGhost *)0x0) {
    uVar1 = 4;
  }
  else {
    uVar1 = mojabiGhost::doYouWantACookie(param_1);
  }
  return uVar1;
}



// letsGoToMcDonaldsLater::waitMaybeThereIsSomething(mojabiGhost*, int)

void __thiscall
letsGoToMcDonaldsLater::waitMaybeThereIsSomething
          (letsGoToMcDonaldsLater *this,mojabiGhost *param_1,int param_2)

{
  if (param_1 != (mojabiGhost *)0x0) {
    mojabiGhost::doesThisEvenDoAnything(param_1,param_2);
  }
  return;
}



// letsGoToMcDonaldsLater::whatDoesThisEvenDo(mojabiGhost*, mojabiGhost*)

mojabiGhost * __thiscall
letsGoToMcDonaldsLater::whatDoesThisEvenDo
          (letsGoToMcDonaldsLater *this,mojabiGhost *param_1,mojabiGhost *param_2)

{
  int iVar1;
  int iVar2;
  mojabiGhost *pmVar3;
  mojabiGhost *pmVar4;
  
  pmVar4 = param_2;
  if (param_1 != (mojabiGhost *)0x0) {
    iVar1 = mojabiGhost::getMeMyThemeMusic(param_2);
    iVar2 = mojabiGhost::getMeMyThemeMusic(param_1);
    pmVar4 = param_1;
    if (iVar1 < iVar2) {
      pmVar3 = (mojabiGhost *)mojabiGhost::handMeTheAux(param_1);
      pmVar3 = (mojabiGhost *)whatDoesThisEvenDo(this,pmVar3,param_2);
      mojabiGhost::tequilaShot(param_1,pmVar3);
      pmVar3 = (mojabiGhost *)mojabiGhost::handMeTheAux(param_1);
      mojabiGhost::theBestFunctionEver(pmVar3,param_1);
    }
    else {
      iVar1 = mojabiGhost::getMeMyThemeMusic(param_2);
      iVar2 = mojabiGhost::getMeMyThemeMusic(param_1);
      if (iVar2 < iVar1) {
        pmVar3 = (mojabiGhost *)mojabiGhost::someoneGetThisGoofy(param_1);
        pmVar3 = (mojabiGhost *)whatDoesThisEvenDo(this,pmVar3,param_2);
        mojabiGhost::vodkaFunction(param_1,pmVar3);
        pmVar3 = (mojabiGhost *)mojabiGhost::someoneGetThisGoofy(param_1);
        mojabiGhost::theBestFunctionEver(pmVar3,param_1);
      }
    }
  }
  return pmVar4;
}



// letsGoToMcDonaldsLater::somethingGoesInThisFunction(int)

void __thiscall
letsGoToMcDonaldsLater::somethingGoesInThisFunction(letsGoToMcDonaldsLater *this,int param_1)

{
  mojabiGhost *this_00;
  undefined8 uVar1;
  
  this_00 = (mojabiGhost *)operator_new(0x28);
  mojabiGhost::mojabiGhost(this_00,param_1);
  uVar1 = whatDoesThisEvenDo(this,*(mojabiGhost **)this,this_00);
  *(undefined8 *)this = uVar1;
  fixTree(this,this_00);
  return;
}



// letsGoToMcDonaldsLater::rotateLeft(mojabiGhost*)

void __thiscall
letsGoToMcDonaldsLater::rotateLeft(letsGoToMcDonaldsLater *this,mojabiGhost *param_1)

{
  undefined8 uVar1;
  mojabiGhost *pmVar2;
  long lVar3;
  mojabiGhost *pmVar4;
  
  uVar1 = mojabiGhost::someoneGetThisGoofy(param_1);
  *(undefined8 *)(this + 0x10) = uVar1;
  pmVar2 = (mojabiGhost *)mojabiGhost::handMeTheAux(*(mojabiGhost **)(this + 0x10));
  mojabiGhost::vodkaFunction(param_1,pmVar2);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  lVar3 = mojabiGhost::someoneGetThisGoofy(param_1);
  if (lVar3 != 0) {
    pmVar2 = (mojabiGhost *)mojabiGhost::someoneGetThisGoofy(param_1);
    mojabiGhost::theBestFunctionEver(pmVar2,param_1);
  }
  pmVar2 = *(mojabiGhost **)(this + 0x10);
  pmVar4 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
  mojabiGhost::theBestFunctionEver(pmVar2,pmVar4);
  lVar3 = mojabiGhost::whatsForDinner(param_1);
  if (lVar3 == 0) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
  }
  else {
    pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
    pmVar2 = (mojabiGhost *)mojabiGhost::handMeTheAux(pmVar2);
    if (param_1 == pmVar2) {
      pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
      mojabiGhost::tequilaShot(pmVar2,*(mojabiGhost **)(this + 0x10));
    }
    else {
      pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
      mojabiGhost::vodkaFunction(pmVar2,*(mojabiGhost **)(this + 0x10));
    }
  }
  mojabiGhost::tequilaShot(*(mojabiGhost **)(this + 0x10),param_1);
  mojabiGhost::theBestFunctionEver(param_1,*(mojabiGhost **)(this + 0x10));
  return;
}



// letsGoToMcDonaldsLater::campfireSong(mojabiGhost*)

void __thiscall
letsGoToMcDonaldsLater::campfireSong(letsGoToMcDonaldsLater *this,mojabiGhost *param_1)

{
  undefined8 uVar1;
  mojabiGhost *pmVar2;
  long lVar3;
  mojabiGhost *pmVar4;
  
  uVar1 = mojabiGhost::handMeTheAux(param_1);
  *(undefined8 *)(this + 0x18) = uVar1;
  pmVar2 = (mojabiGhost *)mojabiGhost::someoneGetThisGoofy(*(mojabiGhost **)(this + 0x18));
  mojabiGhost::tequilaShot(param_1,pmVar2);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  lVar3 = mojabiGhost::handMeTheAux(param_1);
  if (lVar3 != 0) {
    pmVar2 = (mojabiGhost *)mojabiGhost::handMeTheAux(param_1);
    mojabiGhost::theBestFunctionEver(pmVar2,param_1);
  }
  pmVar2 = *(mojabiGhost **)(this + 0x18);
  pmVar4 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
  mojabiGhost::theBestFunctionEver(pmVar2,pmVar4);
  lVar3 = mojabiGhost::whatsForDinner(param_1);
  if (lVar3 == 0) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x18);
  }
  else {
    pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
    pmVar2 = (mojabiGhost *)mojabiGhost::handMeTheAux(pmVar2);
    if (param_1 == pmVar2) {
      pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
      mojabiGhost::tequilaShot(pmVar2,*(mojabiGhost **)(this + 0x18));
    }
    else {
      pmVar2 = (mojabiGhost *)mojabiGhost::whatsForDinner(param_1);
      mojabiGhost::vodkaFunction(pmVar2,*(mojabiGhost **)(this + 0x18));
    }
  }
  mojabiGhost::vodkaFunction(*(mojabiGhost **)(this + 0x18),param_1);
  mojabiGhost::theBestFunctionEver(param_1,*(mojabiGhost **)(this + 0x18));
  return;
}



// letsGoToMcDonaldsLater::fixTree(mojabiGhost*)

void __thiscall letsGoToMcDonaldsLater::fixTree(letsGoToMcDonaldsLater *this,mojabiGhost *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  mojabiGhost *pmVar5;
  undefined8 uVar6;
  long lVar7;
  mojabiGhost *local_38;
  
  local_38 = param_1;
  do {
    if (local_38 == *(mojabiGhost **)this) {
LAB_001048ae:
      bVar2 = false;
    }
    else {
      iVar3 = thereIsNothingLeft(this,local_38);
      if (iVar3 != 0xd) goto LAB_001048ae;
      pmVar5 = (mojabiGhost *)mojabiGhost::whatsForDinner(local_38);
      iVar3 = thereIsNothingLeft(this,pmVar5);
      if (iVar3 != 0xd) goto LAB_001048ae;
      bVar2 = true;
    }
    if (!bVar2) {
      waitMaybeThereIsSomething(this,*(mojabiGhost **)this,4);
      return;
    }
    uVar6 = mojabiGhost::whatsForDinner(local_38);
    *(undefined8 *)(this + 0x20) = uVar6;
    uVar6 = mojabiGhost::whatsForDinner(*(mojabiGhost **)(this + 0x20));
    *(undefined8 *)(this + 0x28) = uVar6;
    lVar1 = *(long *)(this + 0x20);
    lVar7 = mojabiGhost::handMeTheAux(*(mojabiGhost **)(this + 0x28));
    if (lVar1 == lVar7) {
      uVar6 = mojabiGhost::someoneGetThisGoofy(*(mojabiGhost **)(this + 0x28));
      *(undefined8 *)(this + 0x30) = uVar6;
      iVar3 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x30));
      if (iVar3 == 0xd) {
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x30),4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x20),4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x28),0xd);
        local_38 = *(mojabiGhost **)(this + 0x28);
      }
      else {
        pmVar5 = (mojabiGhost *)mojabiGhost::someoneGetThisGoofy(*(mojabiGhost **)(this + 0x20));
        if (local_38 == pmVar5) {
          rotateLeft(this,*(mojabiGhost **)(this + 0x20));
          uVar6 = mojabiGhost::whatsForDinner(*(mojabiGhost **)(this + 0x20));
          *(undefined8 *)(this + 0x20) = uVar6;
        }
        campfireSong(this,*(mojabiGhost **)(this + 0x28));
        iVar3 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x20));
        iVar4 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x28));
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x20),iVar4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x28),iVar3);
        local_38 = *(mojabiGhost **)(this + 0x20);
      }
    }
    else {
      uVar6 = mojabiGhost::handMeTheAux(*(mojabiGhost **)(this + 0x28));
      *(undefined8 *)(this + 0x30) = uVar6;
      iVar3 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x30));
      if (iVar3 == 0xd) {
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x30),4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x20),4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x28),0xd);
        local_38 = *(mojabiGhost **)(this + 0x28);
      }
      else {
        pmVar5 = (mojabiGhost *)mojabiGhost::handMeTheAux(*(mojabiGhost **)(this + 0x20));
        if (local_38 == pmVar5) {
          campfireSong(this,*(mojabiGhost **)(this + 0x20));
          uVar6 = mojabiGhost::whatsForDinner(*(mojabiGhost **)(this + 0x20));
          *(undefined8 *)(this + 0x20) = uVar6;
        }
        rotateLeft(this,*(mojabiGhost **)(this + 0x28));
        iVar3 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x20));
        iVar4 = thereIsNothingLeft(this,*(mojabiGhost **)(this + 0x28));
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x20),iVar4);
        waitMaybeThereIsSomething(this,*(mojabiGhost **)(this + 0x28),iVar3);
        local_38 = *(mojabiGhost **)(this + 0x20);
      }
    }
  } while( true );
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_Vector_impl::~_Vector_impl()

void __thiscall std::_Vector_base<>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<>::~allocator((allocator<> *)this);
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_Vector_base()

void __thiscall std::_Vector_base<>::_Vector_base(_Vector_base<> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::vector()

void __thiscall std::vector<>::vector(vector<> *this)

{
  _Vector_base<>::_Vector_base((_Vector_base<> *)this);
  return;
}



// thisClassIsNotWorthCheckingOutTBH::thisClassIsNotWorthCheckingOutTBH(int)

void __thiscall
thisClassIsNotWorthCheckingOutTBH::thisClassIsNotWorthCheckingOutTBH
          (thisClassIsNotWorthCheckingOutTBH *this,int param_1)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  std::vector<>::vector((vector<> *)(this + 8));
  *(int *)this = param_1;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  std::vector<>::vector((vector<> *)&local_28);
  std::vector<>::operator=((vector<> *)(this + 8),(vector *)&local_28);
  std::vector<>::~vector((vector<> *)&local_28);
  this[0x20] = (thisClassIsNotWorthCheckingOutTBH)0x1;
  this[0x21] = (thisClassIsNotWorthCheckingOutTBH)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// thisClassIsNotWorthCheckingOutTBH::finalBoss(bool)

void __thiscall
thisClassIsNotWorthCheckingOutTBH::finalBoss(thisClassIsNotWorthCheckingOutTBH *this,bool param_1)

{
  this[0x21] = (thisClassIsNotWorthCheckingOutTBH)param_1;
  return;
}



// thisClassIsNotWorthCheckingOutTBH::maybeThisDoesSomethingImportant(bool)

void __thiscall
thisClassIsNotWorthCheckingOutTBH::maybeThisDoesSomethingImportant
          (thisClassIsNotWorthCheckingOutTBH *this,bool param_1)

{
  this[0x20] = (thisClassIsNotWorthCheckingOutTBH)param_1;
  return;
}



// thisClassIsNotWorthCheckingOutTBH::CHECKMEOUT(letsGoToMcDonaldsLater*)

void __thiscall
thisClassIsNotWorthCheckingOutTBH::CHECKMEOUT
          (thisClassIsNotWorthCheckingOutTBH *this,letsGoToMcDonaldsLater *param_1)

{
  *(letsGoToMcDonaldsLater **)(this + 0x28) = param_1;
  return;
}



// thisClassIsNotWorthCheckingOutTBH::depthFirstSearch(thisClassIsNotWorthCheckingOutTBH*)

void __thiscall
thisClassIsNotWorthCheckingOutTBH::depthFirstSearch
          (thisClassIsNotWorthCheckingOutTBH *this,thisClassIsNotWorthCheckingOutTBH *param_1)

{
  thisClassIsNotWorthCheckingOutTBH *local_18;
  thisClassIsNotWorthCheckingOutTBH *local_10;
  
  local_18 = param_1;
  local_10 = this;
  std::vector<>::push_back((vector<> *)(this + 8),&local_18);
  return;
}



// thisClassIsNotWorthCheckingOutTBH::newFavoriteKid(thisClassIsNotWorthCheckingOutTBH*, int)

void __thiscall
thisClassIsNotWorthCheckingOutTBH::newFavoriteKid
          (thisClassIsNotWorthCheckingOutTBH *this,thisClassIsNotWorthCheckingOutTBH *param_1,
          int param_2)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = (thisClassIsNotWorthCheckingOutTBH **)
            std::vector<>::at((vector<> *)(this + 8),(long)param_2);
  *pptVar1 = param_1;
  return;
}



// thisClassIsNotWorthCheckingOutTBH::performSynthesis()

undefined4 __thiscall
thisClassIsNotWorthCheckingOutTBH::performSynthesis(thisClassIsNotWorthCheckingOutTBH *this)

{
  return *(undefined4 *)this;
}



// thisClassIsNotWorthCheckingOutTBH::getPercentYield()

vector<> * thisClassIsNotWorthCheckingOutTBH::getPercentYield(void)

{
  long in_RSI;
  vector<> *in_RDI;
  
  std::vector<>::vector(in_RDI,(vector *)(in_RSI + 8));
  return in_RDI;
}



// thisClassIsNotWorthCheckingOutTBH::fattyAcid()

thisClassIsNotWorthCheckingOutTBH __thiscall
thisClassIsNotWorthCheckingOutTBH::fattyAcid(thisClassIsNotWorthCheckingOutTBH *this)

{
  return this[0x20];
}



// thisClassIsNotWorthCheckingOutTBH::enzymesDoNotChangeFreeEnergy()

thisClassIsNotWorthCheckingOutTBH __thiscall
thisClassIsNotWorthCheckingOutTBH::enzymesDoNotChangeFreeEnergy
          (thisClassIsNotWorthCheckingOutTBH *this)

{
  return this[0x21];
}



// thisClassIsNotWorthCheckingOutTBH::michaelisMentenKinetics()

undefined8 __thiscall
thisClassIsNotWorthCheckingOutTBH::michaelisMentenKinetics(thisClassIsNotWorthCheckingOutTBH *this)

{
  return *(undefined8 *)(this + 0x28);
}



// std::enable_if<std::chrono::__is_duration<std::chrono::duration<long, std::ratio<1l, 1000l> >
// >::value, std::chrono::duration<long, std::ratio<1l, 1000l> > >::type
// std::chrono::duration_cast<std::chrono::duration<long, std::ratio<1l, 1000l> >, long,
// std::ratio<1l, 1000000000l> >(std::chrono::duration<long, std::ratio<1l, 1000000000l> > const&)

type std::chrono::duration_cast<>(duration *param_1)

{
  duration dVar1;
  undefined7 extraout_var;
  
  dVar1 = __duration_cast_impl<>::__cast<>(param_1);
  return (type)CONCAT71(extraout_var,dVar1);
}



// std::common_type<std::chrono::duration<long, std::ratio<1l, 1000000000l> >,
// std::chrono::duration<long, std::ratio<1l, 1000000000l> > >::type
// std::chrono::TEMPNAMEPLACEHOLDERVALUE(std::chrono::time_point<std::chrono::_V2::system_clock,
// std::chrono::duration<long, std::ratio<1l, 1000000000l> > > const&,
// std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long,
// std::ratio<1l, 1000000000l> > > const&)

type std::chrono::operator-(time_point *param_1,time_point *param_2)

{
  type tVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = time_point<>::time_since_epoch((time_point<> *)param_2);
  local_20 = time_point<>::time_since_epoch((time_point<> *)param_1);
  tVar1 = operator-((duration *)&local_20,(duration *)&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return tVar1;
}



// std::common_type<std::chrono::duration<long, std::ratio<1l, 1000000000l> >,
// std::chrono::duration<long, std::ratio<1l, 1000000000l> > >::type
// std::chrono::TEMPNAMEPLACEHOLDERVALUE(std::chrono::duration<long, std::ratio<1l, 1000000000l> >
// const&, std::chrono::duration<long, std::ratio<1l, 1000000000l> > const&)

type std::chrono::operator-(duration *param_1,duration *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  type local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = *(undefined8 *)param_1;
  local_30 = duration<>::count((duration<> *)&local_40);
  local_38 = *(undefined8 *)param_2;
  lVar1 = duration<>::count((duration<> *)&local_38);
  local_30 = local_30 - lVar1;
  duration<>::duration<long,void>((duration<> *)local_28,&local_30);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_28[0];
}



// std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long,
// std::ratio<1l, 1000000000l> > >::time_since_epoch() const

undefined8 __thiscall std::chrono::time_point<>::time_since_epoch(time_point<> *this)

{
  return *(undefined8 *)this;
}



// std::chrono::duration<long, std::ratio<1l, 1000l> >::count() const

undefined8 __thiscall std::chrono::duration<>::count(duration<> *this)

{
  return *(undefined8 *)this;
}



// std::_Vector_base<int, std::allocator<int> >::_Vector_impl::~_Vector_impl()

void __thiscall std::_Vector_base<>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<int>::~allocator((allocator<int> *)this);
  return;
}



// std::_Vector_base<int, std::allocator<int> >::_Vector_base()

void __thiscall std::_Vector_base<>::_Vector_base(_Vector_base<> *this)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this);
  return;
}



// std::vector<int, std::allocator<int> >::vector()

void __thiscall std::vector<>::vector(vector<> *this)

{
  _Vector_base<>::_Vector_base((_Vector_base<> *)this);
  return;
}



// _Save_errno()

void __thiscall
__gnu_cxx::__stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::
_Save_errno::_Save_errno(_Save_errno *this)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *(int *)this = *piVar1;
  piVar1 = __errno_location();
  *piVar1 = 0;
  return;
}



// ~_Save_errno()

void __thiscall
__gnu_cxx::__stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::
_Save_errno::~_Save_errno(_Save_errno *this)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  if (*piVar1 == 0) {
    piVar1 = __errno_location();
    *piVar1 = *(int *)this;
  }
  return;
}



// __gnu_cxx::__stoa<long, int, char, int>(long (*)(char const*, char**, int), char const*, char
// const*, unsigned long*, int)::_Range_chk::_S_chk(long, std::integral_constant<bool, true>)

undefined8
__gnu_cxx::__stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::
_Range_chk::_S_chk(long,std::integral_constant<bool,true>_(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 < -0x80000000) || (0x7fffffff < param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// int __gnu_cxx::__stoa<long, int, char, int>(long (*)(char const*, char**, int), char const*, char
// const*, unsigned long*, int)

int __gnu_cxx::__stoa<>(_func_long_char_ptr_char_ptr_ptr_int *param_1,char *param_2,char *param_3,
                       ulong *param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long in_FS_OFFSET;
  _Save_errno local_38 [4];
  int local_34;
  char *local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::_Save_errno
  ::_Save_errno(local_38);
                    // try { // try from 0010511b to 0010516f has its CatchHandler @ 001051b2
  local_28 = (*param_1)(param_3,&local_30,param_5);
  if (param_3 == local_30) {
    std::__throw_invalid_argument(param_2);
  }
  piVar4 = __errno_location();
  if (*piVar4 != 0x22) {
    cVar2 = __stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::
            _Range_chk::_S_chk(long,std::integral_constant<bool,true>_(local_28);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00105160;
    }
  }
  bVar1 = true;
LAB_00105160:
  if (bVar1) {
    std::__throw_out_of_range(param_2);
  }
  iVar3 = (int)local_28;
  if (param_4 != (ulong *)0x0) {
    *param_4 = (long)local_30 - (long)param_3;
  }
  local_34 = iVar3;
  __stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::_Save_errno
  ::~_Save_errno(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar3;
}



// _Save_errno()

void __thiscall
__gnu_cxx::__stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::
_Save_errno::_Save_errno(_Save_errno *this)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *(int *)this = *piVar1;
  piVar1 = __errno_location();
  *piVar1 = 0;
  return;
}



// ~_Save_errno()

void __thiscall
__gnu_cxx::__stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::
_Save_errno::~_Save_errno(_Save_errno *this)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  if (*piVar1 == 0) {
    piVar1 = __errno_location();
    *piVar1 = *(int *)this;
  }
  return;
}



// __gnu_cxx::__stoa<long, long, char, int>(long (*)(char const*, char**, int), char const*, char
// const*, unsigned long*, int)::_Range_chk::_S_chk(long, std::integral_constant<bool, false>)

undefined8
__gnu_cxx::__stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::
_Range_chk::_S_chk(long,std::integral_constant<bool,false>_(void)

{
  return 0;
}



// long __gnu_cxx::__stoa<long, long, char, int>(long (*)(char const*, char**, int), char const*,
// char const*, unsigned long*, int)

long __gnu_cxx::__stoa<>(_func_long_char_ptr_char_ptr_ptr_int *param_1,char *param_2,char *param_3,
                        ulong *param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  int *piVar4;
  long in_FS_OFFSET;
  _Save_errno local_3c [4];
  char *local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::_Save_errno
  ::_Save_errno(local_3c);
                    // try { // try from 00105297 to 001052eb has its CatchHandler @ 00105331
  local_30 = (*param_1)(param_3,&local_38,param_5);
  if (param_3 == local_38) {
    std::__throw_invalid_argument(param_2);
  }
  piVar4 = __errno_location();
  if (*piVar4 != 0x22) {
    cVar3 = __stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::
            _Range_chk::_S_chk(long,std::integral_constant<bool,false>_(local_30);
    if (cVar3 == '\0') {
      bVar1 = false;
      goto LAB_001052dc;
    }
  }
  bVar1 = true;
LAB_001052dc:
  if (bVar1) {
    std::__throw_out_of_range(param_2);
  }
  lVar2 = local_30;
  local_28 = local_30;
  if (param_4 != (ulong *)0x0) {
    *param_4 = (long)local_38 - (long)param_3;
  }
  __stoa<>(long(*)(char_const*,char**,int),char_const*,char_const*,unsigned_long*,int)::_Save_errno
  ::~_Save_errno(local_3c);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar2;
}



// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >
// __gnu_cxx::__to_xstring<std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char> >, char>(int (*)(char*, unsigned long, char const*, __va_list_tag*),
// unsigned long, char const*, ...)

basic_string
__gnu_cxx::__to_xstring<>
          (_func_int_char_ptr_ulong_char_ptr___va_list_tag_ptr *param_1,ulong param_2,char *param_3,
          ...)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  basic_string<> *this;
  char *pcVar5;
  char in_AL;
  ulong uVar6;
  undefined8 in_RCX;
  undefined8 *puVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  undefined8 local_118;
  char *local_110;
  code *local_108;
  basic_string<> *local_100;
  allocator local_f5;
  int local_f4;
  char *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined local_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  
  puVar7 = &local_118;
  local_100 = (basic_string<> *)param_1;
  local_108 = (code *)param_2;
  local_110 = param_3;
  local_118 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  if (in_AL != '\0') {
    local_98 = in_XMM0_Da;
    local_88 = in_XMM1_Da;
    local_78 = in_XMM2_Da;
    local_68 = in_XMM3_Da;
    local_58 = in_XMM4_Da;
    local_48 = in_XMM5_Da;
    local_38 = in_XMM6_Da;
    local_28 = in_XMM7_Da;
  }
  local_d0 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = ((ulong)(param_3 + 0x17) / 0x10) * 0x10;
  for (; puVar7 != (undefined8 *)((long)&local_118 - (uVar6 & 0xfffffffffffff000));
      puVar7 = (undefined8 *)((long)puVar7 + -0x1000)) {
    *(undefined8 *)((long)puVar7 + -8) = *(undefined8 *)((long)puVar7 + -8);
  }
  lVar2 = -(ulong)((uint)uVar6 & 0xfff);
  if ((uVar6 & 0xfff) != 0) {
    *(undefined8 *)((long)puVar7 + ((ulong)((uint)uVar6 & 0xfff) - 8) + lVar2) =
         *(undefined8 *)((long)puVar7 + ((ulong)((uint)uVar6 & 0xfff) - 8) + lVar2);
  }
  pcVar4 = local_108;
  pcVar1 = local_110;
  uVar3 = local_118;
  local_e8 = 0x20;
  local_e4 = 0x30;
  local_e0 = &stack0x00000008;
  local_d8 = local_c8;
  local_f0 = (char *)((ulong)((long)puVar7 + lVar2 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)((long)puVar7 + lVar2 + -8) = 0x1054b6;
  local_f4 = (*pcVar4)((char *)((ulong)((long)puVar7 + lVar2 + 0xf) & 0xfffffffffffffff0),pcVar1,
                       uVar3,&local_e8);
  *(undefined8 *)((long)puVar7 + lVar2 + -8) = 0x1054cb;
  std::allocator<char>::allocator();
  pcVar5 = local_f0;
  this = local_100;
  pcVar1 = local_f0 + local_f4;
                    // try { // try from 001054fd to 00105501 has its CatchHandler @ 00105525
  *(undefined8 *)((long)puVar7 + lVar2 + -8) = 0x105502;
  std::__cxx11::basic_string<>::basic_string<char*,void>(this,pcVar5,pcVar1,&local_f5);
  *(undefined8 *)((long)puVar7 + lVar2 + -8) = 0x105511;
  std::allocator<char>::~allocator((allocator<char> *)&local_f5);
  if (local_d0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    *(undefined8 *)((long)puVar7 + lVar2 + -8) = 0x10554b;
    __stack_chk_fail();
  }
  return SUB81(local_100,0);
}



// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>
// >::_Alloc_hider::~_Alloc_hider()

void __thiscall std::__cxx11::basic_string<>::_Alloc_hider::~_Alloc_hider(_Alloc_hider *this)

{
  std::allocator<char>::~allocator((allocator<char> *)this);
  return;
}



// std::chrono::duration<long, std::ratio<1l, 1l> >::count() const

undefined8 __thiscall std::chrono::duration<>::count(duration<> *this)

{
  return *(undefined8 *)this;
}



// std::chrono::duration<long, std::ratio<1l, 1l> >::duration<long, void>(long const&)

void __thiscall std::chrono::duration<>::duration<long,void>(duration<> *this,long *param_1)

{
  *(long *)this = *param_1;
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_Vector_impl::_Vector_impl()

void __thiscall std::_Vector_base<>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  allocator<>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}



// std::allocator<thisClassIsNotWorthCheckingOutTBH*>::~allocator()

void __thiscall std::allocator<>::~allocator(allocator<> *this)

{
  __gnu_cxx::new_allocator<>::~new_allocator((new_allocator<> *)this);
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::~_Vector_base()

void __thiscall std::_Vector_base<>::~_Vector_base(_Vector_base<> *this)

{
  _M_deallocate(this,*(thisClassIsNotWorthCheckingOutTBH ***)this,
                *(long *)(this + 0x10) - *(long *)this >> 3);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::~vector()

void __thiscall std::vector<>::~vector(vector<> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)this);
  _Destroy<>(*(thisClassIsNotWorthCheckingOutTBH ***)this,
             *(thisClassIsNotWorthCheckingOutTBH ***)(this + 8),paVar1);
  _Vector_base<>::~_Vector_base((_Vector_base<> *)this);
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::TEMPNAMEPLACEHOLDERVALUE(std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >&&)

vector<> * __thiscall std::vector<>::operator=(vector<> *this,vector *param_1)

{
  long lVar1;
  type *ptVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar2 = move<>(param_1);
  _M_move_assign((vector *)this,(integral_constant)ptVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return this;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::push_back(thisClassIsNotWorthCheckingOutTBH* const&)

void __thiscall std::vector<>::push_back(vector<> *this,thisClassIsNotWorthCheckingOutTBH **param_1)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    pptVar1 = (thisClassIsNotWorthCheckingOutTBH **)end(this);
    _M_realloc_insert<>((__normal_iterator)this,pptVar1);
  }
  else {
    allocator_traits<>::construct<>
              ((allocator *)this,*(thisClassIsNotWorthCheckingOutTBH ***)(this + 8),param_1);
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
  }
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::at(unsigned long)

void __thiscall std::vector<>::at(vector<> *this,ulong param_1)

{
  _M_range_check(this,param_1);
  operator[](this,param_1);
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::vector(std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > const&)

void __thiscall std::vector<>::vector(vector<> *this,vector *param_1)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  ulong uVar3;
  allocator *paVar4;
  thisClassIsNotWorthCheckingOutTBH **pptVar5;
  long in_FS_OFFSET;
  allocator local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)param_1);
  __gnu_cxx::__alloc_traits<>::_S_select_on_copy(&local_31);
  uVar3 = size((vector<> *)param_1);
                    // try { // try from 00105818 to 0010581c has its CatchHandler @ 00105885
  _Vector_base<>::_Vector_base((_Vector_base<> *)this,uVar3,&local_31);
  allocator<>::~allocator((allocator<> *)&local_31);
  paVar4 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)this);
  pptVar5 = *(thisClassIsNotWorthCheckingOutTBH ***)this;
  _Var1 = end((vector<> *)param_1);
  _Var2 = begin((vector<> *)param_1);
                    // try { // try from 00105866 to 0010586a has its CatchHandler @ 001058a3
  pptVar5 = __uninitialized_copy_a<>(_Var2,_Var1,pptVar5,paVar4);
  *(thisClassIsNotWorthCheckingOutTBH ***)(this + 8) = pptVar5;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::size() const

long __thiscall std::vector<>::size(vector<> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}



// std::bitset<8ul>::bitset(unsigned long long)

void __thiscall std::bitset<8ul>::bitset(bitset<8ul> *this,ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = _Sanitize_val<8ul,true>::_S_do_sanitize_val(param_1);
  _Base_bitset<1ul>::_Base_bitset((_Base_bitset<1ul> *)this,uVar1);
  return;
}



// std::bitset<8ul>::to_string[abi:cxx11]() const

bitset<8ul> * __thiscall std::bitset<8ul>::to_string_abi_cxx11_(bitset<8ul> *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  to_string<>();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return this;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// bool std::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char> > const&, char const*)

bool std::operator==(basic_string *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = std::__cxx11::basic_string<>::compare((char *)param_1);
  return iVar1 == 0;
}



// std::chrono::duration<long, std::ratio<1l, 1000l> >::duration<int, void>(int const&)

void __thiscall std::chrono::duration<>::duration<int,void>(duration<> *this,int *param_1)

{
  *(long *)this = (long)*param_1;
  return;
}



// bool std::chrono::TEMPNAMEPLACEHOLDERVALUE(std::chrono::duration<long, std::ratio<1l, 1000l> >
// const&, std::chrono::duration<long, std::ratio<1l, 1000l> > const&)

bool std::chrono::operator<=(duration *param_1,duration *param_2)

{
  bool bVar1;
  
  bVar1 = operator<(param_2,param_1);
  return !bVar1;
}



// std::chrono::duration<long, std::ratio<1l, 1000l> >::zero()

undefined8 std::chrono::duration<>::zero(void)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = duration_values<long>::zero();
  duration<long,void>((duration<> *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// std::chrono::duration<long, std::ratio<1l, 1000l> >::duration<long, void>(long const&)

void __thiscall std::chrono::duration<>::duration<long,void>(duration<> *this,long *param_1)

{
  *(long *)this = *param_1;
  return;
}



// bool std::chrono::TEMPNAMEPLACEHOLDERVALUE(std::chrono::duration<long, std::ratio<1l, 1000l> >
// const&, std::chrono::duration<long, std::ratio<1l, 1000l> > const&)

bool std::chrono::operator<(duration *param_1,duration *param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = *(undefined8 *)param_1;
  lVar1 = duration<>::count((duration<> *)&local_30);
  local_28 = *(undefined8 *)param_2;
  lVar2 = duration<>::count((duration<> *)&local_28);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar1 < lVar2;
}



// std::enable_if<std::chrono::__is_duration<std::chrono::duration<long, std::ratio<1l, 1l> >
// >::value, std::chrono::duration<long, std::ratio<1l, 1l> > >::type
// std::chrono::duration_cast<std::chrono::duration<long, std::ratio<1l, 1l> >, long, std::ratio<1l,
// 1000l> >(std::chrono::duration<long, std::ratio<1l, 1000l> > const&)

type std::chrono::duration_cast<>(duration *param_1)

{
  duration dVar1;
  undefined7 extraout_var;
  
  dVar1 = __duration_cast_impl<>::__cast<>(param_1);
  return (type)CONCAT71(extraout_var,dVar1);
}



// std::chrono::duration<long, std::ratio<1l, 1l> >
// std::chrono::__duration_cast_impl<std::chrono::duration<long, std::ratio<1l, 1l> >,
// std::ratio<1l, 1000l>, long, true, false>::__cast<long, std::ratio<1l, 1000l>
// >(std::chrono::duration<long, std::ratio<1l, 1000l> > const&)

duration std::chrono::__duration_cast_impl<>::__cast<>(duration *param_1)

{
  long in_FS_OFFSET;
  long local_20;
  duration local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = duration<>::count((duration<> *)param_1);
  local_20 = local_20 / 1000;
  duration<>::duration<long,void>((duration<> *)local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18[0];
}



// std::enable_if<std::chrono::__is_duration<std::chrono::duration<long, std::ratio<1l, 1000000000l>
// > >::value, std::chrono::duration<long, std::ratio<1l, 1000000000l> > >::type
// std::chrono::duration_cast<std::chrono::duration<long, std::ratio<1l, 1000000000l> >, long,
// std::ratio<1l, 1000l> >(std::chrono::duration<long, std::ratio<1l, 1000l> > const&)

type std::chrono::duration_cast<>(duration *param_1)

{
  duration dVar1;
  undefined7 extraout_var;
  
  dVar1 = __duration_cast_impl<>::__cast<>(param_1);
  return (type)CONCAT71(extraout_var,dVar1);
}



// std::common_type<std::chrono::duration<long, std::ratio<1l, 1000l> >, std::chrono::duration<long,
// std::ratio<1l, 1l> > >::type std::chrono::TEMPNAMEPLACEHOLDERVALUE(std::chrono::duration<long,
// std::ratio<1l, 1000l> > const&, std::chrono::duration<long, std::ratio<1l, 1l> > const&)

type std::chrono::operator-(duration *param_1,duration *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_40;
  duration<> local_38 [8];
  long local_30;
  type local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = *(undefined8 *)param_1;
  local_30 = duration<>::count((duration<> *)&local_40);
  duration<>::duration<>(local_38,param_2);
  lVar1 = duration<>::count(local_38);
  local_30 = local_30 - lVar1;
  duration<>::duration<long,void>((duration<> *)local_28,&local_30);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_28[0];
}



// void std::this_thread::sleep_for<long, std::ratio<1l, 1000l> >(std::chrono::duration<long,
// std::ratio<1l, 1000l> > const&)

void std::this_thread::sleep_for<>(duration *param_1)

{
  bool bVar1;
  type tVar2;
  type tVar3;
  type tVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int *piVar6;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  timespec local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28.tv_sec = chrono::duration<>::zero();
  bVar1 = chrono::operator<=(param_1,(duration *)&local_28);
  if (!bVar1) {
    tVar2 = chrono::duration_cast<>(param_1);
    local_38 = CONCAT44(extraout_var,tVar2);
    tVar3 = chrono::operator-(param_1,(duration *)&local_38);
    local_28.tv_sec = CONCAT44(extraout_var_00,tVar3);
    tVar4 = chrono::duration_cast<>((duration *)&local_28);
    local_30 = CONCAT44(extraout_var_01,tVar4);
    local_28.tv_sec = chrono::duration<>::count((duration<> *)&local_38);
    local_28.tv_nsec = chrono::duration<>::count((duration<> *)&local_30);
    do {
      iVar5 = nanosleep(&local_28,&local_28);
      if ((iVar5 == -1) && (piVar6 = __errno_location(), *piVar6 == 4)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    } while (bVar1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// std::chrono::duration<long, std::ratio<1l, 1000l> >
// std::chrono::__duration_cast_impl<std::chrono::duration<long, std::ratio<1l, 1000l> >,
// std::ratio<1l, 1000000l>, long, true, false>::__cast<long, std::ratio<1l, 1000000000l>
// >(std::chrono::duration<long, std::ratio<1l, 1000000000l> > const&)

duration std::chrono::__duration_cast_impl<>::__cast<>(duration *param_1)

{
  long in_FS_OFFSET;
  long local_20;
  duration local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = duration<>::count((duration<> *)param_1);
  local_20 = local_20 / 1000000;
  duration<>::duration<long,void>((duration<> *)local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18[0];
}



// std::bitset<32ul>::test(unsigned long) const

void __thiscall std::bitset<32ul>::test(bitset<32ul> *this,ulong param_1)

{
  _M_check(this,param_1,"bitset::test");
  _Unchecked_test(this,param_1);
  return;
}



// std::_Vector_base<int, std::allocator<int> >::_Vector_impl::_Vector_impl()

void __thiscall std::_Vector_base<>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  allocator<int>::allocator();
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}



// std::allocator<int>::~allocator()

void __thiscall std::allocator<int>::~allocator(allocator<int> *this)

{
  __gnu_cxx::new_allocator<int>::~new_allocator((new_allocator<int> *)this);
  return;
}



// std::_Vector_base<int, std::allocator<int> >::~_Vector_base()

void __thiscall std::_Vector_base<>::~_Vector_base(_Vector_base<> *this)

{
  _M_deallocate(this,*(int **)this,*(long *)(this + 0x10) - *(long *)this >> 2);
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}



// std::vector<int, std::allocator<int> >::~vector()

void __thiscall std::vector<>::~vector(vector<> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)this);
  _Destroy<int*,int>(*(int **)this,*(int **)(this + 8),paVar1);
  _Vector_base<>::~_Vector_base((_Vector_base<> *)this);
  return;
}



// std::vector<int, std::allocator<int> >::push_back(int const&)

void __thiscall std::vector<>::push_back(vector<> *this,int *param_1)

{
  int *piVar1;
  
  if (*(long *)(this + 8) == *(long *)(this + 0x10)) {
    piVar1 = (int *)end(this);
    _M_realloc_insert<int_const&>((__normal_iterator)this,piVar1);
  }
  else {
    allocator_traits<>::construct<>((allocator *)this,*(int **)(this + 8),param_1);
    *(long *)(this + 8) = *(long *)(this + 8) + 4;
  }
  return;
}



// std::vector<int, std::allocator<int> >::size() const

long __thiscall std::vector<>::size(vector<> *this)

{
  return *(long *)(this + 8) - *(long *)this >> 2;
}



// std::vector<int, std::allocator<int> >::at(unsigned long)

void __thiscall std::vector<>::at(vector<> *this,ulong param_1)

{
  _M_range_check(this,param_1);
  operator[](this,param_1);
  return;
}



// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>
// >::basic_string<char*, void>(char*, char*, std::allocator<char> const&)

void __thiscall
std::__cxx11::basic_string<>::basic_string<char*,void>
          (basic_string<> *this,char *param_1,char *param_2,allocator *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)std::__cxx11::basic_string<>::_M_local_data();
  std::__cxx11::basic_string<>::_Alloc_hider::_Alloc_hider((_Alloc_hider *)this,pcVar1,param_3);
                    // try { // try from 00106006 to 0010600a has its CatchHandler @ 0010600d
  _M_construct<char*>(this,param_1,param_2);
  return;
}



// void std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>
// >::_M_construct<char*>(char*, char*)

void __thiscall
std::__cxx11::basic_string<>::_M_construct<char*>(basic_string<> *this,char *param_1,char *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _M_construct_aux<char*>((char *)this,param_1,(__false_type)param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::allocator<thisClassIsNotWorthCheckingOutTBH*>::allocator()

void std::allocator<>::allocator(void)

{
  __gnu_cxx::new_allocator<>::new_allocator();
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_Vector_impl_data::_Vector_impl_data()

void __thiscall std::_Vector_base<>::_Vector_impl_data::_Vector_impl_data(_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



// __gnu_cxx::new_allocator<thisClassIsNotWorthCheckingOutTBH*>::~new_allocator()

void __thiscall __gnu_cxx::new_allocator<>::~new_allocator(new_allocator<> *this)

{
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_M_deallocate(thisClassIsNotWorthCheckingOutTBH**, unsigned long)

void __thiscall
std::_Vector_base<>::_M_deallocate
          (_Vector_base<> *this,thisClassIsNotWorthCheckingOutTBH **param_1,ulong param_2)

{
  if (param_1 != (thisClassIsNotWorthCheckingOutTBH **)0x0) {
    allocator_traits<>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_M_get_Tp_allocator()

_Vector_base<> * __thiscall std::_Vector_base<>::_M_get_Tp_allocator(_Vector_base<> *this)

{
  return this;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// void std::_Destroy<thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH*>(thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**, std::allocator<thisClassIsNotWorthCheckingOutTBH*>&)

void std::_Destroy<>(thisClassIsNotWorthCheckingOutTBH **param_1,
                    thisClassIsNotWorthCheckingOutTBH **param_2,allocator *param_3)

{
  _Destroy<>(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::remove_reference<std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >&>::type&&
// std::move<std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >&>(std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >&)

type * std::move<>(vector *param_1)

{
  return (type *)param_1;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_M_move_assign(std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >&&, std::integral_constant<bool, true>)

void std::vector<>::_M_move_assign(vector *param_1,integral_constant param_2)

{
  allocator *paVar1;
  allocator *paVar2;
  undefined4 in_register_00000034;
  _Vector_impl_data *this;
  long in_FS_OFFSET;
  allocator local_39;
  vector<> local_38 [24];
  long local_20;
  
  this = (_Vector_impl_data *)CONCAT44(in_register_00000034,param_2);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _Vector_base<>::get_allocator();
  vector(local_38,&local_39);
  allocator<>::~allocator((allocator<> *)&local_39);
  _Vector_base<>::_Vector_impl_data::_M_swap_data((_Vector_impl_data *)param_1,this);
  _Vector_base<>::_Vector_impl_data::_M_swap_data((_Vector_impl_data *)local_38,this);
  paVar1 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)this);
  paVar2 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)param_1);
  __alloc_on_move<>(paVar2,paVar1);
  ~vector(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// void std::allocator_traits<std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::construct<thisClassIsNotWorthCheckingOutTBH*, thisClassIsNotWorthCheckingOutTBH*
// const&>(std::allocator<thisClassIsNotWorthCheckingOutTBH*>&, thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH* const&)

void std::allocator_traits<>::construct<>
               (allocator *param_1,thisClassIsNotWorthCheckingOutTBH **param_2,
               thisClassIsNotWorthCheckingOutTBH **param_3)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = forward<>((type *)param_3);
  __gnu_cxx::new_allocator<>::construct<>((new_allocator<> *)param_1,param_2,pptVar1);
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::end()

undefined8 __thiscall std::vector<>::end(vector<> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<>::__normal_iterator
            ((__normal_iterator<> *)&local_18,(thisClassIsNotWorthCheckingOutTBH ***)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_S_use_relocate()

void __thiscall std::vector<>::_S_use_relocate(vector<> *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _S_nothrow_relocate((integral_constant)this);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_S_nothrow_relocate(std::integral_constant<bool, true>)

undefined8 std::vector<>::_S_nothrow_relocate(integral_constant param_1)

{
  return 1;
}



// void std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_M_realloc_insert<thisClassIsNotWorthCheckingOutTBH*
// const&>(__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH**,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >, thisClassIsNotWorthCheckingOutTBH*
// const&)

void std::vector<>::_M_realloc_insert<>
               (__normal_iterator param_1,thisClassIsNotWorthCheckingOutTBH **param_2)

{
  char cVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  thisClassIsNotWorthCheckingOutTBH **pptVar3;
  undefined8 *puVar4;
  long lVar5;
  thisClassIsNotWorthCheckingOutTBH **pptVar6;
  vector<> **ppvVar7;
  allocator *paVar8;
  type *in_RDX;
  undefined4 in_register_0000003c;
  allocator *in_R8;
  long in_FS_OFFSET;
  thisClassIsNotWorthCheckingOutTBH **local_68;
  vector<> **local_60;
  undefined8 local_58;
  thisClassIsNotWorthCheckingOutTBH **local_50;
  ulong local_48;
  thisClassIsNotWorthCheckingOutTBH **local_40;
  thisClassIsNotWorthCheckingOutTBH **local_38;
  long local_30;
  thisClassIsNotWorthCheckingOutTBH **local_28;
  long local_20;
  
  local_60 = (vector<> **)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_48 = _M_check_len((vector<> *)local_60,1,"vector::_M_realloc_insert");
  local_40 = (thisClassIsNotWorthCheckingOutTBH **)*local_60;
  local_38 = (thisClassIsNotWorthCheckingOutTBH **)local_60[1];
  local_58 = begin((vector<> *)local_60);
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_68,(__normal_iterator *)&local_58);
  local_30 = CONCAT44(extraout_var,dVar2);
  local_50 = (thisClassIsNotWorthCheckingOutTBH **)
             _Vector_base<>::_M_allocate((_Vector_base<> *)local_60,local_48);
  local_28 = local_50;
  pptVar3 = forward<>(in_RDX);
  ppvVar7 = local_60;
  allocator_traits<>::construct<>((allocator *)local_60,local_28 + local_30,pptVar3);
  local_50 = (thisClassIsNotWorthCheckingOutTBH **)0x0;
  cVar1 = _S_use_relocate((vector<> *)ppvVar7);
  if (cVar1 == '\0') {
    paVar8 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)local_60);
    puVar4 = (undefined8 *)__gnu_cxx::__normal_iterator<>::base((__normal_iterator<> *)&local_68);
                    // try { // try from 00106494 to 001064d2 has its CatchHandler @ 00106573
    local_50 = __uninitialized_move_if_noexcept_a<>
                         (local_40,(thisClassIsNotWorthCheckingOutTBH **)*puVar4,local_28,paVar8);
    local_50 = local_50 + 1;
    paVar8 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)local_60);
    puVar4 = (undefined8 *)__gnu_cxx::__normal_iterator<>::base((__normal_iterator<> *)&local_68);
    pptVar3 = (thisClassIsNotWorthCheckingOutTBH **)*puVar4;
    local_50 = __uninitialized_move_if_noexcept_a<>(pptVar3,local_38,local_50,paVar8);
  }
  else {
    pptVar3 = (thisClassIsNotWorthCheckingOutTBH **)
              _Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)local_60);
    puVar4 = (undefined8 *)__gnu_cxx::__normal_iterator<>::base((__normal_iterator<> *)&local_68);
    lVar5 = _S_relocate((vector<> *)local_40,(thisClassIsNotWorthCheckingOutTBH **)*puVar4,local_28,
                        pptVar3,in_R8);
    local_50 = (thisClassIsNotWorthCheckingOutTBH **)(lVar5 + 8);
    pptVar6 = (thisClassIsNotWorthCheckingOutTBH **)
              _Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)local_60);
    ppvVar7 = (vector<> **)__gnu_cxx::__normal_iterator<>::base((__normal_iterator<> *)&local_68);
    pptVar3 = (thisClassIsNotWorthCheckingOutTBH **)*ppvVar7;
    local_50 = (thisClassIsNotWorthCheckingOutTBH **)
               _S_relocate((vector<> *)pptVar3,local_38,local_50,pptVar6,in_R8);
  }
  cVar1 = _S_use_relocate((vector<> *)pptVar3);
  if (cVar1 != '\x01') {
    paVar8 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)local_60);
    _Destroy<>(local_40,local_38,paVar8);
  }
  _Vector_base<>::_M_deallocate
            ((_Vector_base<> *)local_60,local_40,(long)local_60[2] - (long)local_40 >> 3);
  *local_60 = (vector<> *)local_28;
  local_60[1] = (vector<> *)local_50;
  local_60[2] = (vector<> *)(local_28 + local_48);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_M_range_check(unsigned long) const

void __thiscall std::vector<>::_M_range_check(vector<> *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = size(this);
  if (uVar1 <= param_1) {
    uVar2 = size(this);
    std::__throw_out_of_range_fmt
              ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",param_1,
               uVar2);
  }
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::operator[](unsigned long)

long __thiscall std::vector<>::operator[](vector<> *this,ulong param_1)

{
  return *(long *)this + param_1 * 8;
}



// __gnu_cxx::__alloc_traits<std::allocator<thisClassIsNotWorthCheckingOutTBH*>,
// thisClassIsNotWorthCheckingOutTBH*>::_S_select_on_copy(std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// const&)

allocator * __gnu_cxx::__alloc_traits<>::_S_select_on_copy(allocator *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::allocator_traits<>::select_on_container_copy_construction(param_1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return param_1;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_M_get_Tp_allocator() const

_Vector_base<> * __thiscall std::_Vector_base<>::_M_get_Tp_allocator(_Vector_base<> *this)

{
  return this;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_Vector_base(unsigned long,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> const&)

void __thiscall
std::_Vector_base<>::_Vector_base(_Vector_base<> *this,ulong param_1,allocator *param_2)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_2);
                    // try { // try from 00106722 to 00106726 has its CatchHandler @ 00106729
  _M_create_storage(this,param_1);
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::begin() const

undefined8 __thiscall std::vector<>::begin(vector<> *this)

{
  long in_FS_OFFSET;
  thisClassIsNotWorthCheckingOutTBH **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(thisClassIsNotWorthCheckingOutTBH ***)this;
  __gnu_cxx::__normal_iterator<>::__normal_iterator((__normal_iterator<> *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::end() const

undefined8 __thiscall std::vector<>::end(vector<> *this)

{
  long in_FS_OFFSET;
  thisClassIsNotWorthCheckingOutTBH **local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(thisClassIsNotWorthCheckingOutTBH ***)(this + 8);
  __gnu_cxx::__normal_iterator<>::__normal_iterator((__normal_iterator<> *)&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH**
// std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH*
// const*, std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >, thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH*>(__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH*
// const*, std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >,
// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >, thisClassIsNotWorthCheckingOutTBH**,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>&)

thisClassIsNotWorthCheckingOutTBH **
std::__uninitialized_copy_a<>
          (__normal_iterator param_1,__normal_iterator param_2,
          thisClassIsNotWorthCheckingOutTBH **param_3,allocator *param_4)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = uninitialized_copy<>(param_1,param_2,param_3);
  return pptVar1;
}



// std::_Sanitize_val<8ul, true>::_S_do_sanitize_val(unsigned long long)

ulong std::_Sanitize_val<8ul,true>::_S_do_sanitize_val(ulonglong param_1)

{
  return param_1 & 0xff;
}



// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >
// std::bitset<8ul>::to_string<char, std::char_traits<char>, std::allocator<char> >() const

basic_string std::bitset<8ul>::to_string<>(void)

{
  long lVar1;
  bitset<8ul> *in_RSI;
  basic_string *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  std::__cxx11::basic_string<>::basic_string();
                    // try { // try from 0010688d to 00106891 has its CatchHandler @ 00106894
  _M_copy_to_string<>(in_RSI,in_RDI,'0','1');
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return SUB81(in_RDI,0);
}



// std::chrono::duration<long, std::ratio<1l, 1000000000l> >
// std::chrono::__duration_cast_impl<std::chrono::duration<long, std::ratio<1l, 1000000000l> >,
// std::ratio<1000000l, 1l>, long, false, true>::__cast<long, std::ratio<1l, 1000l>
// >(std::chrono::duration<long, std::ratio<1l, 1000l> > const&)

duration std::chrono::__duration_cast_impl<>::__cast<>(duration *param_1)

{
  long in_FS_OFFSET;
  long local_20;
  duration local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = duration<>::count((duration<> *)param_1);
  local_20 = local_20 * 1000000;
  duration<>::duration<long,void>((duration<> *)local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18[0];
}



// std::chrono::duration<long, std::ratio<1l, 1000l> >::duration<long, std::ratio<1l, 1l>,
// void>(std::chrono::duration<long, std::ratio<1l, 1l> > const&)

void __thiscall std::chrono::duration<>::duration<>(duration<> *this,duration *param_1)

{
  type tVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  tVar1 = duration_cast<>(param_1);
  local_18 = CONCAT44(extraout_var,tVar1);
  uVar2 = count((duration<> *)&local_18);
  *(undefined8 *)this = uVar2;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::bitset<32ul>::_M_check(unsigned long, char const*) const

void __thiscall std::bitset<32ul>::_M_check(bitset<32ul> *this,ulong param_1,char *param_2)

{
  if (0x1f < param_1) {
    std::__throw_out_of_range_fmt
              ("%s: __position (which is %zu) >= _Nb (which is %zu)",param_2,param_1,0x20);
  }
  return;
}



// std::bitset<32ul>::_Unchecked_test(unsigned long) const

undefined8 __thiscall std::bitset<32ul>::_Unchecked_test(bitset<32ul> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = _Base_bitset<1ul>::_M_getword((ulong)this);
  uVar2 = _Base_bitset<1ul>::_S_maskbit(param_1);
  return CONCAT71((int7)((uVar2 & uVar1) >> 8),(uVar2 & uVar1) != 0);
}



// std::allocator<int>::allocator()

void std::allocator<int>::allocator(void)

{
  __gnu_cxx::new_allocator<int>::new_allocator();
  return;
}



// std::_Vector_base<int, std::allocator<int> >::_Vector_impl_data::_Vector_impl_data()

void __thiscall std::_Vector_base<>::_Vector_impl_data::_Vector_impl_data(_Vector_impl_data *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



// __gnu_cxx::new_allocator<int>::~new_allocator()

void __thiscall __gnu_cxx::new_allocator<int>::~new_allocator(new_allocator<int> *this)

{
  return;
}



// std::_Vector_base<int, std::allocator<int> >::_M_deallocate(int*, unsigned long)

void __thiscall std::_Vector_base<>::_M_deallocate(_Vector_base<> *this,int *param_1,ulong param_2)

{
  if (param_1 != (int *)0x0) {
    allocator_traits<>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}



// std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator()

_Vector_base<> * __thiscall std::_Vector_base<>::_M_get_Tp_allocator(_Vector_base<> *this)

{
  return this;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&)

void std::_Destroy<int*,int>(int *param_1,int *param_2,allocator *param_3)

{
  _Destroy<int*>(param_1,param_2);
  return;
}



// void std::allocator_traits<std::allocator<int> >::construct<int, int
// const&>(std::allocator<int>&, int*, int const&)

void std::allocator_traits<>::construct<>(allocator *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = forward<int_const&>((type *)param_3);
  __gnu_cxx::new_allocator<int>::construct<>((new_allocator<int> *)param_1,param_2,piVar1);
  return;
}



// std::vector<int, std::allocator<int> >::end()

undefined8 __thiscall std::vector<>::end(vector<> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<>::__normal_iterator
            ((__normal_iterator<> *)&local_18,(int **)(this + 8));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// std::vector<int, std::allocator<int> >::_S_use_relocate()

void __thiscall std::vector<>::_S_use_relocate(vector<> *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _S_nothrow_relocate((integral_constant)this);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::vector<int, std::allocator<int> >::_S_nothrow_relocate(std::integral_constant<bool, true>)

undefined8 std::vector<>::_S_nothrow_relocate(integral_constant param_1)

{
  return 1;
}



// void std::vector<int, std::allocator<int> >::_M_realloc_insert<int
// const&>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&)

void std::vector<>::_M_realloc_insert<int_const&>(__normal_iterator param_1,int *param_2)

{
  char cVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  int *piVar3;
  int **ppiVar4;
  long lVar5;
  int *piVar6;
  allocator *paVar7;
  type *in_RDX;
  undefined4 in_register_0000003c;
  allocator *in_R8;
  long in_FS_OFFSET;
  int *local_68;
  int **local_60;
  undefined8 local_58;
  int *local_50;
  ulong local_48;
  int *local_40;
  int *local_38;
  long local_30;
  int *local_28;
  long local_20;
  
  local_60 = (int **)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_48 = _M_check_len((vector<> *)local_60,1,"vector::_M_realloc_insert");
  local_40 = *local_60;
  local_38 = local_60[1];
  local_58 = begin((vector<> *)local_60);
  dVar2 = __gnu_cxx::operator-((__normal_iterator *)&local_68,(__normal_iterator *)&local_58);
  local_30 = CONCAT44(extraout_var,dVar2);
  local_50 = (int *)_Vector_base<>::_M_allocate((_Vector_base<> *)local_60,local_48);
  local_28 = local_50;
  piVar3 = forward<int_const&>(in_RDX);
  ppiVar4 = local_60;
  allocator_traits<>::construct<>((allocator *)local_60,local_28 + local_30,piVar3);
  local_50 = (int *)0x0;
  cVar1 = _S_use_relocate((vector<> *)ppiVar4);
  if (cVar1 == '\0') {
    paVar7 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)local_60);
    ppiVar4 = (int **)__gnu_cxx::__normal_iterator<>::base((__normal_iterator<> *)&local_68);
                    // try { // try from 00106d4e to 00106d8c has its CatchHandler @ 00106e2d
    local_50 = __uninitialized_move_if_noexcept_a<>(local_40,*ppiVar4,local_28,paVar7);
    local_50 = local_50 + 1;
    paVar7 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)local_60);
    ppiVar4 = (int **)__gnu_cxx::__normal_iterator<>::base((__normal_iterator<> *)&local_68);
    piVar3 = *ppiVar4;
    local_50 = __uninitialized_move_if_noexcept_a<>(piVar3,local_38,local_50,paVar7);
  }
  else {
    piVar3 = (int *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)local_60);
    ppiVar4 = (int **)__gnu_cxx::__normal_iterator<>::base((__normal_iterator<> *)&local_68);
    lVar5 = _S_relocate((vector<> *)local_40,*ppiVar4,local_28,piVar3,in_R8);
    local_50 = (int *)(lVar5 + 4);
    piVar6 = (int *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)local_60);
    ppiVar4 = (int **)__gnu_cxx::__normal_iterator<>::base((__normal_iterator<> *)&local_68);
    piVar3 = *ppiVar4;
    local_50 = (int *)_S_relocate((vector<> *)piVar3,local_38,local_50,piVar6,in_R8);
  }
  cVar1 = _S_use_relocate((vector<> *)piVar3);
  if (cVar1 != '\x01') {
    paVar7 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)local_60);
    _Destroy<int*,int>(local_40,local_38,paVar7);
  }
  _Vector_base<>::_M_deallocate
            ((_Vector_base<> *)local_60,local_40,(long)local_60[2] - (long)local_40 >> 2);
  *local_60 = local_28;
  local_60[1] = local_50;
  local_60[2] = local_28 + local_48;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// std::vector<int, std::allocator<int> >::_M_range_check(unsigned long) const

void __thiscall std::vector<>::_M_range_check(vector<> *this,ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = size(this);
  if (uVar1 <= param_1) {
    uVar2 = size(this);
    std::__throw_out_of_range_fmt
              ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",param_1,
               uVar2);
  }
  return;
}



// std::vector<int, std::allocator<int> >::operator[](unsigned long)

long __thiscall std::vector<>::operator[](vector<> *this,ulong param_1)

{
  return *(long *)this + param_1 * 4;
}



// void std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>
// >::_M_construct_aux<char*>(char*, char*, std::__false_type)

void std::__cxx11::basic_string<>::_M_construct_aux<char*>
               (char *param_1,char *param_2,__false_type param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _M_construct<char*>(param_1,param_2,param_3);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// __gnu_cxx::new_allocator<thisClassIsNotWorthCheckingOutTBH*>::new_allocator()

void __gnu_cxx::new_allocator<>::new_allocator(void)

{
  return;
}



// std::allocator_traits<std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::deallocate(std::allocator<thisClassIsNotWorthCheckingOutTBH*>&,
// thisClassIsNotWorthCheckingOutTBH**, unsigned long)

void std::allocator_traits<>::deallocate
               (allocator *param_1,thisClassIsNotWorthCheckingOutTBH **param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<>::deallocate
            ((thisClassIsNotWorthCheckingOutTBH **)param_1,(ulong)param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// void std::_Destroy<thisClassIsNotWorthCheckingOutTBH**>(thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**)

void std::_Destroy<>(thisClassIsNotWorthCheckingOutTBH **param_1,
                    thisClassIsNotWorthCheckingOutTBH **param_2)

{
  _Destroy_aux<true>::__destroy<>(param_1,param_2);
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::get_allocator() const

allocator * std::_Vector_base<>::get_allocator(void)

{
  _Vector_base<> *in_RSI;
  allocator *in_RDI;
  
  _M_get_Tp_allocator(in_RSI);
  allocator<>::allocator(in_RDI);
  return in_RDI;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::vector(std::allocator<thisClassIsNotWorthCheckingOutTBH*> const&)

void __thiscall std::vector<>::vector(vector<> *this,allocator *param_1)

{
  _Vector_base<>::_Vector_base((_Vector_base<> *)this,param_1);
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_Vector_impl_data::_M_swap_data(std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_Vector_impl_data&)

void __thiscall
std::_Vector_base<>::_Vector_impl_data::_M_swap_data
          (_Vector_impl_data *this,_Vector_impl_data *param_1)

{
  long in_FS_OFFSET;
  _Vector_impl_data local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _Vector_impl_data(local_28);
  _M_copy_data(local_28,this);
  _M_copy_data(this,param_1);
  _M_copy_data(param_1,local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// void std::__alloc_on_move<std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >(std::allocator<thisClassIsNotWorthCheckingOutTBH*>&,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>&)

void std::__alloc_on_move<>(allocator *param_1,allocator *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __do_alloc_on_move<>(param_1,param_2,(integral_constant)param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH* const& std::forward<thisClassIsNotWorthCheckingOutTBH*
// const&>(std::remove_reference<thisClassIsNotWorthCheckingOutTBH* const&>::type&)

thisClassIsNotWorthCheckingOutTBH ** std::forward<>(type *param_1)

{
  return (thisClassIsNotWorthCheckingOutTBH **)param_1;
}



// void 
// __gnu_cxx::new_allocator<thisClassIsNotWorthCheckingOutTBH*>::construct<thisClassIsNotWorthCheckingOutTBH*,
// thisClassIsNotWorthCheckingOutTBH* const&>(thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH* const&)

void __thiscall
__gnu_cxx::new_allocator<>::construct<>
          (new_allocator<> *this,thisClassIsNotWorthCheckingOutTBH **param_1,
          thisClassIsNotWorthCheckingOutTBH **param_2)

{
  thisClassIsNotWorthCheckingOutTBH *ptVar1;
  thisClassIsNotWorthCheckingOutTBH **pptVar2;
  
  pptVar2 = std::forward<>((type *)param_2);
  ptVar1 = *pptVar2;
  pptVar2 = (thisClassIsNotWorthCheckingOutTBH **)operator_new(8,param_1);
  *pptVar2 = ptVar1;
  return;
}



// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH**,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >
// >::__normal_iterator(thisClassIsNotWorthCheckingOutTBH** const&)

void __thiscall
__gnu_cxx::__normal_iterator<>::__normal_iterator
          (__normal_iterator<> *this,thisClassIsNotWorthCheckingOutTBH ***param_1)

{
  *(thisClassIsNotWorthCheckingOutTBH ***)this = *param_1;
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_M_check_len(unsigned long, char const*)
// const

ulong __thiscall std::vector<>::_M_check_len(vector<> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<> *local_40;
  ulong local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  local_40 = this;
  lVar1 = max_size(this);
  lVar2 = size(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_2);
  }
  lVar1 = size(local_40);
  local_30 = size(local_40);
  puVar3 = max<>(&local_30,&local_48);
  local_28 = *puVar3 + lVar1;
  uVar4 = size(local_40);
  if ((local_28 < uVar4) || (uVar5 = max_size(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = max_size(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::begin()

undefined8 __thiscall std::vector<>::begin(vector<> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<>::__normal_iterator
            ((__normal_iterator<> *)&local_18,(thisClassIsNotWorthCheckingOutTBH ***)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH**,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >::difference_type
// __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH**,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > > const&,
// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH**,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > > const&)

difference_type __gnu_cxx::operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<>::base((__normal_iterator<> *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<>::base((__normal_iterator<> *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 3);
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_M_allocate(unsigned long)

undefined8 __thiscall std::_Vector_base<>::_M_allocate(_Vector_base<> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_S_relocate(thisClassIsNotWorthCheckingOutTBH**, thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**, std::allocator<thisClassIsNotWorthCheckingOutTBH*>&)

void __thiscall
std::vector<>::_S_relocate
          (vector<> *this,thisClassIsNotWorthCheckingOutTBH **param_1,
          thisClassIsNotWorthCheckingOutTBH **param_2,thisClassIsNotWorthCheckingOutTBH **param_3,
          allocator *param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _S_do_relocate((thisClassIsNotWorthCheckingOutTBH **)this,param_1,param_2,(allocator *)param_3,
                 (integral_constant)param_4);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH**,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >::base() const

__normal_iterator<> * __thiscall __gnu_cxx::__normal_iterator<>::base(__normal_iterator<> *this)

{
  return this;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH**
// std::__uninitialized_move_if_noexcept_a<thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**, std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >(thisClassIsNotWorthCheckingOutTBH**, thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**, std::allocator<thisClassIsNotWorthCheckingOutTBH*>&)

thisClassIsNotWorthCheckingOutTBH **
std::__uninitialized_move_if_noexcept_a<>
          (thisClassIsNotWorthCheckingOutTBH **param_1,thisClassIsNotWorthCheckingOutTBH **param_2,
          thisClassIsNotWorthCheckingOutTBH **param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  thisClassIsNotWorthCheckingOutTBH **pptVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<>(param_1);
  pptVar3 = __uninitialized_copy_a<>(mVar2,mVar1,param_3,param_4);
  return pptVar3;
}



// void std::allocator_traits<std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::destroy<thisClassIsNotWorthCheckingOutTBH*>(std::allocator<thisClassIsNotWorthCheckingOutTBH*>&,
// thisClassIsNotWorthCheckingOutTBH**)

void std::allocator_traits<>::destroy<>
               (allocator *param_1,thisClassIsNotWorthCheckingOutTBH **param_2)

{
  __gnu_cxx::new_allocator<>::destroy<>((thisClassIsNotWorthCheckingOutTBH **)param_1);
  return;
}



// std::allocator_traits<std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::select_on_container_copy_construction(std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// const&)

allocator * std::allocator_traits<>::select_on_container_copy_construction(allocator *param_1)

{
  allocator<>::allocator(param_1);
  return param_1;
}



// std::allocator<thisClassIsNotWorthCheckingOutTBH*>::allocator(std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// const&)

void std::allocator<>::allocator(allocator *param_1)

{
  __gnu_cxx::new_allocator<>::new_allocator((new_allocator *)param_1);
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_Vector_impl::_Vector_impl(std::allocator<thisClassIsNotWorthCheckingOutTBH*> const&)

void __thiscall
std::_Vector_base<>::_Vector_impl::_Vector_impl(_Vector_impl *this,allocator *param_1)

{
  allocator<>::allocator((allocator *)this);
  _Vector_impl_data::_Vector_impl_data((_Vector_impl_data *)this);
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_M_create_storage(unsigned long)

void __thiscall std::_Vector_base<>::_M_create_storage(_Vector_base<> *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _M_allocate(this,param_1);
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(ulong *)(this + 0x10) = param_1 * 8 + *(long *)this;
  return;
}



// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >
// >::__normal_iterator(thisClassIsNotWorthCheckingOutTBH* const* const&)

void __thiscall
__gnu_cxx::__normal_iterator<>::__normal_iterator
          (__normal_iterator<> *this,thisClassIsNotWorthCheckingOutTBH ***param_1)

{
  *(thisClassIsNotWorthCheckingOutTBH ***)this = *param_1;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH**
// std::uninitialized_copy<__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >,
// thisClassIsNotWorthCheckingOutTBH**>(__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH*
// const*, std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >,
// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::uninitialized_copy<>
          (__normal_iterator param_1,__normal_iterator param_2,
          thisClassIsNotWorthCheckingOutTBH **param_3)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = __uninitialized_copy<true>::__uninit_copy<>(param_1,param_2,param_3);
  return pptVar1;
}



// void std::bitset<8ul>::_M_copy_to_string<char, std::char_traits<char>, std::allocator<char>
// >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&, char, char)
// const

void __thiscall
std::bitset<8ul>::_M_copy_to_string<>
          (bitset<8ul> *this,basic_string *param_1,char param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  char local_30 [4];
  char local_2c;
  basic_string *local_28;
  bitset<8ul> *local_20;
  long local_10;
  
  local_30[0] = param_3;
  local_2c = param_2;
  local_28 = param_1;
  local_20 = this;
  std::__cxx11::basic_string<>::assign((ulong)param_1,'\b');
  for (local_10 = 8; local_10 != 0; local_10 = local_10 + -1) {
    cVar1 = _Unchecked_test(local_20,local_10 - 1);
    if (cVar1 != '\0') {
      pcVar2 = (char *)std::__cxx11::basic_string<>::operator[]((ulong)local_28);
      char_traits<char>::assign(pcVar2,local_30);
    }
  }
  return;
}



// std::enable_if<std::chrono::__is_duration<std::chrono::duration<long, std::ratio<1l, 1000l> >
// >::value, std::chrono::duration<long, std::ratio<1l, 1000l> > >::type
// std::chrono::duration_cast<std::chrono::duration<long, std::ratio<1l, 1000l> >, long,
// std::ratio<1l, 1l> >(std::chrono::duration<long, std::ratio<1l, 1l> > const&)

type std::chrono::duration_cast<>(duration *param_1)

{
  duration dVar1;
  undefined7 extraout_var;
  
  dVar1 = __duration_cast_impl<>::__cast<>(param_1);
  return (type)CONCAT71(extraout_var,dVar1);
}



// __gnu_cxx::new_allocator<int>::new_allocator()

void __gnu_cxx::new_allocator<int>::new_allocator(void)

{
  return;
}



// std::allocator_traits<std::allocator<int> >::deallocate(std::allocator<int>&, int*, unsigned
// long)

void std::allocator_traits<>::deallocate(allocator *param_1,int *param_2,ulong param_3)

{
  __gnu_cxx::new_allocator<int>::deallocate((int *)param_1,(ulong)param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// void std::_Destroy<int*>(int*, int*)

void std::_Destroy<int*>(int *param_1,int *param_2)

{
  _Destroy_aux<true>::__destroy<int*>(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int const& std::forward<int const&>(std::remove_reference<int const&>::type&)

int * std::forward<int_const&>(type *param_1)

{
  return (int *)param_1;
}



// void __gnu_cxx::new_allocator<int>::construct<int, int const&>(int*, int const&)

void __thiscall
__gnu_cxx::new_allocator<int>::construct<>(new_allocator<int> *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = std::forward<int_const&>((type *)param_2);
  iVar1 = *piVar2;
  piVar2 = (int *)operator_new(4,param_1);
  *piVar2 = iVar1;
  return;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> >
// >::__normal_iterator(int* const&)

void __thiscall
__gnu_cxx::__normal_iterator<>::__normal_iterator(__normal_iterator<> *this,int **param_1)

{
  *(int **)this = *param_1;
  return;
}



// std::vector<int, std::allocator<int> >::_M_check_len(unsigned long, char const*) const

ulong __thiscall std::vector<>::_M_check_len(vector<> *this,ulong param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  vector<> *local_40;
  ulong local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  local_40 = this;
  lVar1 = max_size(this);
  lVar2 = size(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_2);
  }
  lVar1 = size(local_40);
  local_30 = size(local_40);
  puVar3 = max<>(&local_30,&local_48);
  local_28 = *puVar3 + lVar1;
  uVar4 = size(local_40);
  if ((local_28 < uVar4) || (uVar5 = max_size(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = max_size(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// std::vector<int, std::allocator<int> >::begin()

undefined8 __thiscall std::vector<>::begin(vector<> *this)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __gnu_cxx::__normal_iterator<>::__normal_iterator((__normal_iterator<> *)&local_18,(int **)this);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::difference_type
// __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int> > > const&, __gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int> > > const&)

difference_type __gnu_cxx::operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)__normal_iterator<>::base((__normal_iterator<> *)param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)__normal_iterator<>::base((__normal_iterator<> *)param_2);
  return (difference_type)(lVar1 - *plVar2 >> 2);
}



// std::_Vector_base<int, std::allocator<int> >::_M_allocate(unsigned long)

undefined8 __thiscall std::_Vector_base<>::_M_allocate(_Vector_base<> *this,ulong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}



// std::vector<int, std::allocator<int> >::_S_relocate(int*, int*, int*, std::allocator<int>&)

void __thiscall
std::vector<>::_S_relocate(vector<> *this,int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _S_do_relocate((int *)this,param_1,param_2,(allocator *)param_3,(integral_constant)param_4);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::base() const

__normal_iterator<> * __thiscall __gnu_cxx::__normal_iterator<>::base(__normal_iterator<> *this)

{
  return this;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int* std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int> >(int*, int*, int*,
// std::allocator<int>&)

int * std::__uninitialized_move_if_noexcept_a<>
                (int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  int *piVar3;
  
  mVar1 = __make_move_if_noexcept_iterator<>(param_2);
  mVar2 = __make_move_if_noexcept_iterator<>(param_1);
  piVar3 = __uninitialized_copy_a<>(mVar2,mVar1,param_3,param_4);
  return piVar3;
}



// void std::allocator_traits<std::allocator<int> >::destroy<int>(std::allocator<int>&, int*)

void std::allocator_traits<>::destroy<int>(allocator *param_1,int *param_2)

{
  __gnu_cxx::new_allocator<int>::destroy<int>((int *)param_1);
  return;
}



// void std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>
// >::_M_construct<char*>(char*, char*, std::forward_iterator_tag)

void std::__cxx11::basic_string<>::_M_construct<char*>
               (char *param_1,char *param_2,forward_iterator_tag param_3)

{
  bool bVar1;
  difference_type dVar2;
  undefined4 extraout_var;
  char *pcVar3;
  undefined4 in_register_00000014;
  char *pcVar4;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  pcVar4 = (char *)CONCAT44(in_register_00000014,param_3);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = __gnu_cxx::__is_null_pointer<char>(param_2);
  if ((bVar1) && (param_2 != pcVar4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  dVar2 = distance<char*>(param_2,pcVar4);
  local_28 = CONCAT44(extraout_var,dVar2);
  if (0xf < local_28) {
    std::__cxx11::basic_string<>::_M_create((ulong *)param_1,(ulong)&local_28);
    std::__cxx11::basic_string<>::_M_data(param_1);
    std::__cxx11::basic_string<>::_M_capacity((ulong)param_1);
  }
                    // try { // try from 00107a83 to 00107a87 has its CatchHandler @ 00107ac3
  pcVar3 = (char *)std::__cxx11::basic_string<>::_M_data();
  std::__cxx11::basic_string<>::_S_copy_chars(pcVar3,param_2,pcVar4);
  std::__cxx11::basic_string<>::_M_set_length((ulong)param_1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// __gnu_cxx::new_allocator<thisClassIsNotWorthCheckingOutTBH*>::deallocate(thisClassIsNotWorthCheckingOutTBH**,
// unsigned long)

void __gnu_cxx::new_allocator<>::deallocate
               (thisClassIsNotWorthCheckingOutTBH **param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}



// void 
// std::_Destroy_aux<true>::__destroy<thisClassIsNotWorthCheckingOutTBH**>(thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**)

void std::_Destroy_aux<true>::__destroy<>
               (thisClassIsNotWorthCheckingOutTBH **param_1,
               thisClassIsNotWorthCheckingOutTBH **param_2)

{
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_Vector_base(std::allocator<thisClassIsNotWorthCheckingOutTBH*> const&)

void __thiscall std::_Vector_base<>::_Vector_base(_Vector_base<> *this,allocator *param_1)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_1);
  return;
}



// std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_Vector_impl_data::_M_copy_data(std::_Vector_base<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::_Vector_impl_data const&)

void __thiscall
std::_Vector_base<>::_Vector_impl_data::_M_copy_data
          (_Vector_impl_data *this,_Vector_impl_data *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// void std::__do_alloc_on_move<std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >(std::allocator<thisClassIsNotWorthCheckingOutTBH*>&,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>&, std::integral_constant<bool, true>)

void std::__do_alloc_on_move<>(allocator *param_1,allocator *param_2,integral_constant param_3)

{
  move<>(param_2);
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >::max_size() const

void __thiscall std::vector<>::max_size(vector<> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)this);
  _S_max_size(paVar1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// unsigned long const& std::max<unsigned long>(unsigned long const&, unsigned long const&)

ulong * std::max<>(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}



// std::allocator_traits<std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::allocate(std::allocator<thisClassIsNotWorthCheckingOutTBH*>&, unsigned long)

void std::allocator_traits<>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<>::allocate((ulong)param_1,(void *)param_2);
  return;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_S_do_relocate(thisClassIsNotWorthCheckingOutTBH**, thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**, std::allocator<thisClassIsNotWorthCheckingOutTBH*>&,
// std::integral_constant<bool, true>)

void std::vector<>::_S_do_relocate
               (thisClassIsNotWorthCheckingOutTBH **param_1,
               thisClassIsNotWorthCheckingOutTBH **param_2,
               thisClassIsNotWorthCheckingOutTBH **param_3,allocator *param_4,
               integral_constant param_5)

{
  __relocate_a<>(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>
// std::__make_move_if_noexcept_iterator<thisClassIsNotWorthCheckingOutTBH*,
// std::move_iterator<thisClassIsNotWorthCheckingOutTBH**> >(thisClassIsNotWorthCheckingOutTBH**)

move_iterator std::__make_move_if_noexcept_iterator<>(thisClassIsNotWorthCheckingOutTBH **param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<>::move_iterator((move_iterator<> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18[0];
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH**
// std::__uninitialized_copy_a<std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>,
// thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH*>(std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>,
// std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>, thisClassIsNotWorthCheckingOutTBH**,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>&)

thisClassIsNotWorthCheckingOutTBH **
std::__uninitialized_copy_a<>
          (move_iterator param_1,move_iterator param_2,thisClassIsNotWorthCheckingOutTBH **param_3,
          allocator *param_4)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = uninitialized_copy<>(param_1,param_2,param_3);
  return pptVar1;
}



// void 
// __gnu_cxx::new_allocator<thisClassIsNotWorthCheckingOutTBH*>::destroy<thisClassIsNotWorthCheckingOutTBH*>(thisClassIsNotWorthCheckingOutTBH**)

void __gnu_cxx::new_allocator<>::destroy<>(thisClassIsNotWorthCheckingOutTBH **param_1)

{
  return;
}



// __gnu_cxx::new_allocator<thisClassIsNotWorthCheckingOutTBH*>::new_allocator(__gnu_cxx::new_allocator<thisClassIsNotWorthCheckingOutTBH*>
// const&)

void __gnu_cxx::new_allocator<>::new_allocator(new_allocator *param_1)

{
  return;
}



// thisClassIsNotWorthCheckingOutTBH**
// std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH*
// const*, std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >,
// thisClassIsNotWorthCheckingOutTBH**>(__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH*
// const*, std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >,
// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__uninitialized_copy<true>::__uninit_copy<>
          (__normal_iterator param_1,__normal_iterator param_2,
          thisClassIsNotWorthCheckingOutTBH **param_3)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = copy<>(param_1,param_2,param_3);
  return pptVar1;
}



// std::bitset<8ul>::_Unchecked_test(unsigned long) const

undefined8 __thiscall std::bitset<8ul>::_Unchecked_test(bitset<8ul> *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = _Base_bitset<1ul>::_M_getword((ulong)this);
  uVar2 = _Base_bitset<1ul>::_S_maskbit(param_1);
  return CONCAT71((int7)((uVar2 & uVar1) >> 8),(uVar2 & uVar1) != 0);
}



// std::chrono::duration<long, std::ratio<1l, 1000l> >
// std::chrono::__duration_cast_impl<std::chrono::duration<long, std::ratio<1l, 1000l> >,
// std::ratio<1000l, 1l>, long, false, true>::__cast<long, std::ratio<1l, 1l>
// >(std::chrono::duration<long, std::ratio<1l, 1l> > const&)

duration std::chrono::__duration_cast_impl<>::__cast<>(duration *param_1)

{
  long in_FS_OFFSET;
  long local_20;
  duration local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = duration<>::count((duration<> *)param_1);
  local_20 = local_20 * 1000;
  duration<>::duration<long,void>((duration<> *)local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18[0];
}



// __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned long)

void __gnu_cxx::new_allocator<int>::deallocate(int *param_1,ulong param_2)

{
  operator_delete((void *)param_2);
  return;
}



// void std::_Destroy_aux<true>::__destroy<int*>(int*, int*)

void std::_Destroy_aux<true>::__destroy<int*>(int *param_1,int *param_2)

{
  return;
}



// std::vector<int, std::allocator<int> >::max_size() const

void __thiscall std::vector<>::max_size(vector<> *this)

{
  allocator *paVar1;
  
  paVar1 = (allocator *)_Vector_base<>::_M_get_Tp_allocator((_Vector_base<> *)this);
  _S_max_size(paVar1);
  return;
}



// std::allocator_traits<std::allocator<int> >::allocate(std::allocator<int>&, unsigned long)

void std::allocator_traits<>::allocate(allocator *param_1,ulong param_2)

{
  __gnu_cxx::new_allocator<int>::allocate((ulong)param_1,(void *)param_2);
  return;
}



// std::vector<int, std::allocator<int> >::_S_do_relocate(int*, int*, int*, std::allocator<int>&,
// std::integral_constant<bool, true>)

void std::vector<>::_S_do_relocate
               (int *param_1,int *param_2,int *param_3,allocator *param_4,integral_constant param_5)

{
  __relocate_a<>(param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::move_iterator<int*> std::__make_move_if_noexcept_iterator<int, std::move_iterator<int*>
// >(int*)

move_iterator std::__make_move_if_noexcept_iterator<>(int *param_1)

{
  long in_FS_OFFSET;
  move_iterator local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  move_iterator<int*>::move_iterator((move_iterator<int*> *)local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return local_18[0];
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int* std::__uninitialized_copy_a<std::move_iterator<int*>, int*, int>(std::move_iterator<int*>,
// std::move_iterator<int*>, int*, std::allocator<int>&)

int * std::__uninitialized_copy_a<>
                (move_iterator param_1,move_iterator param_2,int *param_3,allocator *param_4)

{
  int *piVar1;
  
  piVar1 = uninitialized_copy<>(param_1,param_2,param_3);
  return piVar1;
}



// void __gnu_cxx::new_allocator<int>::destroy<int>(int*)

void __gnu_cxx::new_allocator<int>::destroy<int>(int *param_1)

{
  return;
}



// bool __gnu_cxx::__is_null_pointer<char>(char*)

bool __gnu_cxx::__is_null_pointer<char>(char *param_1)

{
  return param_1 == (char *)0x0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::iterator_traits<char*>::difference_type std::distance<char*>(char*, char*)

difference_type std::distance<char*>(char *param_1,char *param_2)

{
  difference_type dVar1;
  long in_FS_OFFSET;
  char *local_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20[0] = param_1;
  __iterator_category<char*>(local_20);
  dVar1 = __distance<char*>(local_20[0],param_2,(random_access_iterator_tag)param_2);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::remove_reference<std::allocator<thisClassIsNotWorthCheckingOutTBH*>&>::type&&
// std::move<std::allocator<thisClassIsNotWorthCheckingOutTBH*>&>(std::allocator<thisClassIsNotWorthCheckingOutTBH*>&)

type * std::move<>(allocator *param_1)

{
  return (type *)param_1;
}



// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::_S_max_size(std::allocator<thisClassIsNotWorthCheckingOutTBH*> const&)

ulong std::vector<>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = allocator_traits<>::max_size(param_1);
  puVar1 = min<>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return *puVar1;
}



// __gnu_cxx::new_allocator<thisClassIsNotWorthCheckingOutTBH*>::allocate(unsigned long, void
// const*)

void __gnu_cxx::new_allocator<>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH** std::__relocate_a<thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**, std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >(thisClassIsNotWorthCheckingOutTBH**, thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**, std::allocator<thisClassIsNotWorthCheckingOutTBH*>&)

thisClassIsNotWorthCheckingOutTBH **
std::__relocate_a<>(thisClassIsNotWorthCheckingOutTBH **param_1,
                   thisClassIsNotWorthCheckingOutTBH **param_2,
                   thisClassIsNotWorthCheckingOutTBH **param_3,allocator *param_4)

{
  type tVar1;
  thisClassIsNotWorthCheckingOutTBH **pptVar2;
  thisClassIsNotWorthCheckingOutTBH **pptVar3;
  thisClassIsNotWorthCheckingOutTBH **pptVar4;
  undefined4 extraout_var;
  
  pptVar2 = __niter_base<>(param_3);
  pptVar3 = __niter_base<>(param_2);
  pptVar4 = __niter_base<>(param_1);
  tVar1 = __relocate_a_1<>(pptVar4,pptVar3,pptVar2,param_4);
  return (thisClassIsNotWorthCheckingOutTBH **)CONCAT44(extraout_var,tVar1);
}



// std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>::move_iterator(thisClassIsNotWorthCheckingOutTBH**)

void __thiscall
std::move_iterator<>::move_iterator
          (move_iterator<> *this,thisClassIsNotWorthCheckingOutTBH **param_1)

{
  *(thisClassIsNotWorthCheckingOutTBH ***)this = param_1;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH**
// std::uninitialized_copy<std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>,
// thisClassIsNotWorthCheckingOutTBH**>(std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>,
// std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::uninitialized_copy<>
          (move_iterator param_1,move_iterator param_2,thisClassIsNotWorthCheckingOutTBH **param_3)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = __uninitialized_copy<true>::__uninit_copy<>(param_1,param_2,param_3);
  return pptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH**
// std::copy<__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >,
// thisClassIsNotWorthCheckingOutTBH**>(__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH*
// const*, std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >,
// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::copy<>(__normal_iterator param_1,__normal_iterator param_2,
           thisClassIsNotWorthCheckingOutTBH **param_3)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  thisClassIsNotWorthCheckingOutTBH **pptVar3;
  
  _Var1 = __miter_base<>(param_2);
  _Var2 = __miter_base<>(param_1);
  pptVar3 = __copy_move_a2<>(_Var2,_Var1,param_3);
  return pptVar3;
}



// std::vector<int, std::allocator<int> >::_S_max_size(std::allocator<int> const&)

ulong std::vector<>::_S_max_size(allocator *param_1)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = allocator_traits<>::max_size(param_1);
  puVar1 = min<>(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return *puVar1;
}



// std::_Vector_base<int, std::allocator<int> >::_M_get_Tp_allocator() const

_Vector_base<> * __thiscall std::_Vector_base<>::_M_get_Tp_allocator(_Vector_base<> *this)

{
  return this;
}



// __gnu_cxx::new_allocator<int>::allocate(unsigned long, void const*)

void __gnu_cxx::new_allocator<int>::allocate(ulong param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new((long)param_2 << 2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int* std::__relocate_a<int*, int*, std::allocator<int> >(int*, int*, int*, std::allocator<int>&)

int * std::__relocate_a<>(int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  type tVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 extraout_var;
  
  piVar2 = __niter_base<int*>(param_3);
  piVar3 = __niter_base<int*>(param_2);
  piVar4 = __niter_base<int*>(param_1);
  tVar1 = __relocate_a_1<int,int>(piVar4,piVar3,piVar2,param_4);
  return (int *)CONCAT44(extraout_var,tVar1);
}



// std::move_iterator<int*>::move_iterator(int*)

void __thiscall std::move_iterator<int*>::move_iterator(move_iterator<int*> *this,int *param_1)

{
  *(int **)this = param_1;
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int* std::uninitialized_copy<std::move_iterator<int*>, int*>(std::move_iterator<int*>,
// std::move_iterator<int*>, int*)

int * std::uninitialized_copy<>(move_iterator param_1,move_iterator param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __uninitialized_copy<true>::__uninit_copy<>(param_1,param_2,param_3);
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::iterator_traits<char*>::iterator_category std::__iterator_category<char*>(char* const&)

iterator_category std::__iterator_category<char*>(char **param_1)

{
  iterator_category in_EAX;
  
  return in_EAX;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::iterator_traits<char*>::difference_type std::__distance<char*>(char*, char*,
// std::random_access_iterator_tag)

difference_type
std::__distance<char*>(char *param_1,char *param_2,random_access_iterator_tag param_3)

{
  return (int)param_2 - (int)param_1;
}



// std::allocator_traits<std::allocator<thisClassIsNotWorthCheckingOutTBH*>
// >::max_size(std::allocator<thisClassIsNotWorthCheckingOutTBH*> const&)

void std::allocator_traits<>::max_size(allocator *param_1)

{
  __gnu_cxx::new_allocator<>::max_size();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// unsigned long const& std::min<unsigned long>(unsigned long const&, unsigned long const&)

ulong * std::min<>(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}



// __gnu_cxx::new_allocator<thisClassIsNotWorthCheckingOutTBH*>::max_size() const

undefined8 __gnu_cxx::new_allocator<>::max_size(void)

{
  return 0xfffffffffffffff;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH**
// std::__niter_base<thisClassIsNotWorthCheckingOutTBH**>(thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__niter_base<>(thisClassIsNotWorthCheckingOutTBH **param_1)

{
  return param_1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::enable_if<std::__is_bitwise_relocatable<thisClassIsNotWorthCheckingOutTBH*, void>::value,
// thisClassIsNotWorthCheckingOutTBH**>::type
// std::__relocate_a_1<thisClassIsNotWorthCheckingOutTBH*,
// thisClassIsNotWorthCheckingOutTBH*>(thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**, thisClassIsNotWorthCheckingOutTBH**,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*>&)

type std::__relocate_a_1<>
               (thisClassIsNotWorthCheckingOutTBH **param_1,
               thisClassIsNotWorthCheckingOutTBH **param_2,
               thisClassIsNotWorthCheckingOutTBH **param_3,allocator *param_4)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (0 < lVar1) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (int)param_3 + (int)lVar1 * 8;
}



// thisClassIsNotWorthCheckingOutTBH**
// std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>,
// thisClassIsNotWorthCheckingOutTBH**>(std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>,
// std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__uninitialized_copy<true>::__uninit_copy<>
          (move_iterator param_1,move_iterator param_2,thisClassIsNotWorthCheckingOutTBH **param_3)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = copy<>(param_1,param_2,param_3);
  return pptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >
// std::__miter_base<__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >
// >(__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >)

__normal_iterator std::__miter_base<>(__normal_iterator param_1)

{
  return param_1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH** std::__copy_move_a2<false,
// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >,
// thisClassIsNotWorthCheckingOutTBH**>(__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH*
// const*, std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >,
// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__copy_move_a2<>
          (__normal_iterator param_1,__normal_iterator param_2,
          thisClassIsNotWorthCheckingOutTBH **param_3)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  thisClassIsNotWorthCheckingOutTBH **pptVar2;
  thisClassIsNotWorthCheckingOutTBH **pptVar3;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  thisClassIsNotWorthCheckingOutTBH **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = CONCAT44(in_register_0000003c,param_1);
  local_28 = CONCAT44(in_register_00000034,param_2);
  local_30 = param_3;
  pptVar1 = __niter_base<>(param_3);
  pptVar2 = __niter_base<>((__normal_iterator)local_28);
  pptVar3 = __niter_base<>((__normal_iterator)local_20);
  pptVar1 = __copy_move_a<>(pptVar3,pptVar2,pptVar1);
  pptVar1 = __niter_wrap<>(&local_30,pptVar1);
  return pptVar1;
}



// std::allocator_traits<std::allocator<int> >::max_size(std::allocator<int> const&)

void std::allocator_traits<>::max_size(allocator *param_1)

{
  __gnu_cxx::new_allocator<int>::max_size();
  return;
}



// __gnu_cxx::new_allocator<int>::max_size() const

undefined8 __gnu_cxx::new_allocator<int>::max_size(void)

{
  return 0x1fffffffffffffff;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int* std::__niter_base<int*>(int*)

int * std::__niter_base<int*>(int *param_1)

{
  return param_1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// std::enable_if<std::__is_bitwise_relocatable<int, void>::value, int*>::type
// std::__relocate_a_1<int, int>(int*, int*, int*, std::allocator<int>&)

type std::__relocate_a_1<int,int>(int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 2;
  if (0 < lVar1) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (int)param_3 + (int)lVar1 * 4;
}



// int* std::__uninitialized_copy<true>::__uninit_copy<std::move_iterator<int*>,
// int*>(std::move_iterator<int*>, std::move_iterator<int*>, int*)

int * std::__uninitialized_copy<true>::__uninit_copy<>
                (move_iterator param_1,move_iterator param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = copy<>(param_1,param_2,param_3);
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH**
// std::copy<std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>,
// thisClassIsNotWorthCheckingOutTBH**>(std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>,
// std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::copy<>(move_iterator param_1,move_iterator param_2,thisClassIsNotWorthCheckingOutTBH **param_3)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  thisClassIsNotWorthCheckingOutTBH **pptVar2;
  
  pptVar1 = (thisClassIsNotWorthCheckingOutTBH **)__miter_base<>(param_2);
  pptVar2 = (thisClassIsNotWorthCheckingOutTBH **)__miter_base<>(param_1);
  pptVar1 = __copy_move_a2<>(pptVar2,pptVar1,param_3);
  return pptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH* const* std::__niter_base<thisClassIsNotWorthCheckingOutTBH*
// const*, std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> >
// >(__gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >)

thisClassIsNotWorthCheckingOutTBH ** std::__niter_base<>(__normal_iterator param_1)

{
  undefined8 *puVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  puVar1 = (undefined8 *)__gnu_cxx::__normal_iterator<>::base((__normal_iterator<> *)&local_10);
  return (thisClassIsNotWorthCheckingOutTBH **)*puVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH** std::__copy_move_a<false, thisClassIsNotWorthCheckingOutTBH*
// const*, thisClassIsNotWorthCheckingOutTBH**>(thisClassIsNotWorthCheckingOutTBH* const*,
// thisClassIsNotWorthCheckingOutTBH* const*, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__copy_move_a<>
          (thisClassIsNotWorthCheckingOutTBH **param_1,thisClassIsNotWorthCheckingOutTBH **param_2,
          thisClassIsNotWorthCheckingOutTBH **param_3)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = __copy_move<>::__copy_m<>(param_1,param_2,param_3);
  return pptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH**
// std::__niter_wrap<thisClassIsNotWorthCheckingOutTBH**>(thisClassIsNotWorthCheckingOutTBH**
// const&, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__niter_wrap<>(thisClassIsNotWorthCheckingOutTBH ***param_1,
                   thisClassIsNotWorthCheckingOutTBH **param_2)

{
  return param_2;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int* std::copy<std::move_iterator<int*>, int*>(std::move_iterator<int*>,
// std::move_iterator<int*>, int*)

int * std::copy<>(move_iterator param_1,move_iterator param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)__miter_base<int*>(param_2);
  piVar2 = (int *)__miter_base<int*>(param_1);
  piVar1 = __copy_move_a2<>(piVar2,piVar1,param_3);
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// decltype (__miter_base(({parm#1}.base)()))
// std::__miter_base<thisClassIsNotWorthCheckingOutTBH**>(std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>)

void std::__miter_base<>(move_iterator param_1)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  pptVar1 = (thisClassIsNotWorthCheckingOutTBH **)
            move_iterator<>::base((move_iterator<> *)&local_10);
  __miter_base<>(pptVar1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH** std::__copy_move_a2<true,
// thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**>(thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__copy_move_a2<>
          (thisClassIsNotWorthCheckingOutTBH **param_1,thisClassIsNotWorthCheckingOutTBH **param_2,
          thisClassIsNotWorthCheckingOutTBH **param_3)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  thisClassIsNotWorthCheckingOutTBH **pptVar2;
  thisClassIsNotWorthCheckingOutTBH **pptVar3;
  thisClassIsNotWorthCheckingOutTBH **local_30;
  thisClassIsNotWorthCheckingOutTBH **local_28;
  thisClassIsNotWorthCheckingOutTBH **local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  pptVar1 = __niter_base<>(param_3);
  pptVar2 = __niter_base<>(local_28);
  pptVar3 = __niter_base<>(local_20);
  pptVar1 = __copy_move_a<>(pptVar3,pptVar2,pptVar1);
  pptVar1 = __niter_wrap<>(&local_30,pptVar1);
  return pptVar1;
}



// __gnu_cxx::__normal_iterator<thisClassIsNotWorthCheckingOutTBH* const*,
// std::vector<thisClassIsNotWorthCheckingOutTBH*,
// std::allocator<thisClassIsNotWorthCheckingOutTBH*> > >::base() const

__normal_iterator<> * __thiscall __gnu_cxx::__normal_iterator<>::base(__normal_iterator<> *this)

{
  return this;
}



// thisClassIsNotWorthCheckingOutTBH** std::__copy_move<false, true,
// std::random_access_iterator_tag>::__copy_m<thisClassIsNotWorthCheckingOutTBH*>(thisClassIsNotWorthCheckingOutTBH*
// const*, thisClassIsNotWorthCheckingOutTBH* const*, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__copy_move<>::__copy_m<>
          (thisClassIsNotWorthCheckingOutTBH **param_1,thisClassIsNotWorthCheckingOutTBH **param_2,
          thisClassIsNotWorthCheckingOutTBH **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// decltype (__miter_base(({parm#1}.base)())) std::__miter_base<int*>(std::move_iterator<int*>)

void std::__miter_base<int*>(move_iterator param_1)

{
  int *piVar1;
  undefined4 in_register_0000003c;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  piVar1 = (int *)move_iterator<int*>::base((move_iterator<int*> *)&local_10);
  __miter_base<int*>(piVar1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int* std::__copy_move_a2<true, int*, int*>(int*, int*, int*)

int * std::__copy_move_a2<>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *local_30;
  int *local_28;
  int *local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  piVar1 = __niter_base<int*>(param_3);
  piVar2 = __niter_base<int*>(local_28);
  piVar3 = __niter_base<int*>(local_20);
  piVar1 = __copy_move_a<>(piVar3,piVar2,piVar1);
  piVar1 = __niter_wrap<int*>(&local_30,piVar1);
  return piVar1;
}



// std::move_iterator<thisClassIsNotWorthCheckingOutTBH**>::base() const

undefined8 __thiscall std::move_iterator<>::base(move_iterator<> *this)

{
  return *(undefined8 *)this;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH**
// std::__miter_base<thisClassIsNotWorthCheckingOutTBH**>(thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__miter_base<>(thisClassIsNotWorthCheckingOutTBH **param_1)

{
  return param_1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// thisClassIsNotWorthCheckingOutTBH** std::__copy_move_a<true, thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**>(thisClassIsNotWorthCheckingOutTBH**,
// thisClassIsNotWorthCheckingOutTBH**, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__copy_move_a<>
          (thisClassIsNotWorthCheckingOutTBH **param_1,thisClassIsNotWorthCheckingOutTBH **param_2,
          thisClassIsNotWorthCheckingOutTBH **param_3)

{
  thisClassIsNotWorthCheckingOutTBH **pptVar1;
  
  pptVar1 = __copy_move<>::__copy_m<>(param_1,param_2,param_3);
  return pptVar1;
}



// std::move_iterator<int*>::base() const

undefined8 __thiscall std::move_iterator<int*>::base(move_iterator<int*> *this)

{
  return *(undefined8 *)this;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int* std::__miter_base<int*>(int*)

int * std::__miter_base<int*>(int *param_1)

{
  return param_1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int* std::__copy_move_a<true, int*, int*>(int*, int*, int*)

int * std::__copy_move_a<>(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move<>::__copy_m<int>(param_1,param_2,param_3);
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// int* std::__niter_wrap<int*>(int* const&, int*)

int * std::__niter_wrap<int*>(int **param_1,int *param_2)

{
  return param_2;
}



// thisClassIsNotWorthCheckingOutTBH** std::__copy_move<true, true,
// std::random_access_iterator_tag>::__copy_m<thisClassIsNotWorthCheckingOutTBH*>(thisClassIsNotWorthCheckingOutTBH*
// const*, thisClassIsNotWorthCheckingOutTBH* const*, thisClassIsNotWorthCheckingOutTBH**)

thisClassIsNotWorthCheckingOutTBH **
std::__copy_move<>::__copy_m<>
          (thisClassIsNotWorthCheckingOutTBH **param_1,thisClassIsNotWorthCheckingOutTBH **param_2,
          thisClassIsNotWorthCheckingOutTBH **param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return param_3 + lVar1;
}



// int* std::__copy_move<true, true, std::random_access_iterator_tag>::__copy_m<int>(int const*, int
// const*, int*)

int * std::__copy_move<>::__copy_m<int>(int *param_1,int *param_2,int *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return param_3 + lVar1;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


