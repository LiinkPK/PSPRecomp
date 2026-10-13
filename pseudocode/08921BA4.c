/* Entry 0x08921BA4 | file offset 0x0011EB7C | FUN_08921ba4 | bytes 148 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08921ba4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(param_2 + 0xc) + 0x44) != 0) {
    FUN_088a6c70();
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x44) = 0;
  }
  uVar1 = func_0x08b421fc(_DAT_08b42288,param_3);
  *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x44) = uVar1;
  iVar2 = *(int *)(*(int *)(param_2 + 0xc) + 4);
  FUN_088a7284(*(undefined4 *)(iVar2 + 0x80),*(undefined4 *)(iVar2 + 0x84),
               *(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(*(int *)(param_2 + 0xc) + 0x44));
  *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xc) + 0x44) + 0xe0) = param_1;
  return;
}

