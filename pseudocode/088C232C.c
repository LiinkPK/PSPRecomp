/* Entry 0x088C232C | file offset 0x000BF304 | FUN_088c232c | bytes 92 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d74ac. Boundary still requires runtime validation. */

undefined4
FUN_088c232c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_5 + 4);
  iVar1 = *(int *)(DAT_089d712c + 0x10cc8) + iVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (99999999 < iVar1) {
    iVar1 = 99999999;
  }
  *(int *)(DAT_089d712c + 0x10cc8) = iVar1;
  *(int *)(param_2 + 4) = iVar2;
  return 1;
}

