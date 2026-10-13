/* Entry 0x0892E8FC | file offset 0x0012B8D4 | FUN_0892e8fc | bytes 184 */

void FUN_0892e8fc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 4) == '\x01') {
      if (*(short *)(iVar1 + 0xc) != 0) {
        FUN_0892e854(param_1);
      }
    }
    else if (*(short *)(iVar1 + 0xc) == 1) {
      FUN_0892e880(param_1);
    }
    else if ((*(short *)(iVar1 + 0xc) == 2) && ((*(ushort *)(iVar1 + 0x20) & 0x20) != 0)) {
      FUN_0892e708(param_1);
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}

