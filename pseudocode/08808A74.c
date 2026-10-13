/* Entry 0x08808A74 | file offset 0x00005A4C | FUN_08808a74 | bytes 116 */

int FUN_08808a74(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = DAT_089d2800;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x6c);
    }
    if (iVar1 == 0) break;
    iVar2 = iVar1;
    if (((*(int *)(iVar1 + 0x18) == param_1) && (*(short *)(iVar1 + 0x2c) == 1)) &&
       (*(int *)(iVar1 + 0x80) == param_2)) {
      return iVar1;
    }
  }
  return 0;
}

