/* Entry 0x08886824 | file offset 0x000837FC | FUN_08886824 | bytes 272 */

void FUN_08886824(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  FUN_0885eb34(param_1 + 0x5c,0,0,0,0);
  FUN_0885eb54(param_1 + 0x5c);
  FUN_0888f9ec(param_1 + 0x74);
  if ((char)DAT_09afde50 < '\x01') {
    if (((-1 < (char)DAT_09afde50) && (*(int *)(param_1 + 0x38) != 0)) &&
       (iVar1 = func_0x08aebcb4(*(int *)(param_1 + 0x38)), iVar1 != 0)) {
      FUN_0888a224(iVar1);
    }
  }
  else if (((char)DAT_09afde50 == '\x05') && (((ushort)DAT_09afe024 & 1) != 0)) {
    FUN_0888a1d4(DAT_09afe028);
  }
  if (DAT_09afdfa8 == 0) {
    FUN_0888a224(DAT_09afdfaa * 60000);
  }
  return;
}

