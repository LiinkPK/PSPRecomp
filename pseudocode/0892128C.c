/* Entry 0x0892128C | file offset 0x0011E264 | FUN_0892128c | bytes 92 */

void FUN_0892128c(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = param_2;
  uVar1 = FUN_08925378(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
  *(undefined4 *)(param_1 + 4) = uVar1;
  if (param_3 != '\0') {
    FUN_089212f4(param_1);
  }
  return;
}

