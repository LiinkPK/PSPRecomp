/* Entry 0x0888ED9C | file offset 0x0008BD74 | FUN_0888ed9c | bytes 100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089ca644. Boundary still requires runtime validation. */

void FUN_0888ed9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_08af2bd4;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  iVar3 = 0;
  do {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    sVar1 = *(short *)(iVar2 + 0xc);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    iVar3 = iVar3 + 1;
    *(float *)(param_1 + 0x10) = (float)(sVar1 * 0x3c);
    param_1 = param_1 + 0x18;
  } while (iVar3 < 2);
  return;
}

