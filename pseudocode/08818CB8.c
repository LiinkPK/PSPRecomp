/* Entry 0x08818CB8 | file offset 0x00015C90 | FUN_08818cb8 | bytes 88 */

undefined4 FUN_08818cb8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 2) {
    uVar1 = FUN_08819294(param_1);
    FUN_088198f4(uVar1,param_1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_088151a0(*(int *)(param_1 + 0x14));
  }
  return 0;
}

