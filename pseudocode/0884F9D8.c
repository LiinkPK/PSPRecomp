/* Entry 0x0884F9D8 | file offset 0x0004C9B0 | FUN_0884f9d8 | bytes 172 */

void FUN_0884f9d8(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (((*(short *)(param_1 + 0x12) != 0) && (*(int *)(param_1 + 4) != 0)) &&
       ((*(ushort *)(*(int *)(param_1 + 4) + 6) & 0x100) != 0)) {
      FUN_0884eef4(param_1,param_2);
      FUN_088501d8(param_1,1);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar1 < 0x10);
  return;
}

