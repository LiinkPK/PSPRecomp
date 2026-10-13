/* Entry 0x08930BE4 | file offset 0x0012DBBC | FUN_08930be4 | bytes 184 */

void FUN_08930be4(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0892ac2c();
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x34) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 1);
  iVar1 = 0;
  iVar2 = param_1 + 0x38;
  do {
    FUN_08930328(iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x5c;
  } while (iVar1 < 6);
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined1 *)(param_1 + 0x298) = 1;
  *(undefined1 *)(param_1 + 0x299) = 1;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

