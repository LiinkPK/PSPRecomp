/* Entry 0x08905DD8 | file offset 0x00102DB0 | FUN_08905dd8 | bytes 144 */

undefined4 FUN_08905dd8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 + 4;
  if (0 < *(int *)(param_1 + 0x2c4)) {
    do {
      sceNetAdhocPtpClose(*(undefined4 *)(iVar1 + 8),0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)(param_1 + 0x2c4));
  }
  if (*(int *)(param_1 + 0x2c8) != -1) {
    sceNetAdhocPtpClose(*(int *)(param_1 + 0x2c8),0);
    *(undefined4 *)(param_1 + 0x2c8) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  return 1;
}

