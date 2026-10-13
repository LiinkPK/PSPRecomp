/* Entry 0x08927030 | file offset 0x00124008 | FUN_08927030 | bytes 152 */

void FUN_08927030(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar3 = 0;
  if ('\0' < *(char *)(iVar1 + 0xb7)) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + iVar2;
      FUN_08926f08(param_1,param_2,param_3,(int)*(short *)(iVar1 + 0xbc),
                   *(undefined4 *)(iVar1 + 0xc0),(int)*(short *)(iVar1 + 0xbe));
      iVar1 = *(int *)(param_1 + 0x20);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < *(char *)(iVar1 + 0xb7));
  }
  return;
}

