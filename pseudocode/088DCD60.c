/* Entry 0x088DCD60 | file offset 0x000D9D38 | FUN_088dcd60 | bytes 152 */

undefined4 FUN_088dcd60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + -1;
  if (*(short *)(param_1 + 100) == 0) {
    uVar2 = *(undefined4 *)(DAT_089d7830 + 4);
    FUN_0885c538(uVar2,*(undefined4 *)(param_1 + 0x5c),0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(int *)(param_1 + 0x60) != -1) {
      uVar1 = FUN_088a1638(DAT_089d6c88,*(undefined4 *)(param_1 + 0x60));
      FUN_0885c538(uVar2,uVar1,0);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

