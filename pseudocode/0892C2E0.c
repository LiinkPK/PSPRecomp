/* Entry 0x0892C2E0 | file offset 0x001292B8 | FUN_0892c2e0 | bytes 92 */

void FUN_0892c2e0(int param_1)

{
  undefined4 uVar1;
  
  FUN_0892c390();
  uVar1 = FUN_088daa68(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_088daa68(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  FUN_088d3cf0(0,param_1 + 0x3c,&DAT_089cecc8);
  *(undefined2 *)(*(int *)(param_1 + 0x3c) + 0xe) = 8;
  return;
}

