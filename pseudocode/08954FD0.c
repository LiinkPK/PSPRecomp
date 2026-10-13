/* Entry 0x08954FD0 | file offset 0x00151FA8 | FUN_08954fd0 | bytes 100 */

void FUN_08954fd0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (*(int *)(param_4 + 0x10) != 0) {
    iVar1 = FUN_08971010(*(undefined4 *)(param_2 + 0x18),*(int *)(param_4 + 0x10));
    param_2 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) - iVar1;
    *(undefined4 *)(param_4 + 0x10) = 0;
  }
  return;
}

