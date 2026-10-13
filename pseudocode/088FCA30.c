/* Entry 0x088FCA30 | file offset 0x000F9A08 | FUN_088fca30 | bytes 136 */

void FUN_088fca30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xeec) != -1) {
      FUN_0887e0dc(DAT_089d6998,1);
      iVar1 = *(int *)(param_1 + 0x30);
    }
    FUN_088d3a04(iVar1 + 0x65c);
    FUN_088fc588(param_1);
    FUN_0885c538(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x30),0);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

