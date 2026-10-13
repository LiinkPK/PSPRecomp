/* Entry 0x0886B5B8 | file offset 0x00068590 | FUN_0886b5b8 | bytes 76 */

undefined * FUN_0886b5b8(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if (*(int *)(param_1 + 0xe4) < 0) {
    puVar2 = &DAT_09af8ac0;
  }
  else {
    uVar1 = FUN_089b0e78(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),
                         *(undefined4 *)(param_1 + 0xe4));
    puVar2 = (undefined *)FUN_089b1224(uVar1);
  }
  return puVar2;
}

