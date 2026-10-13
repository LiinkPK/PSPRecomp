/* Entry 0x08956C64 | file offset 0x00153C3C | FUN_08956c64 | bytes 84 */

void FUN_08956c64(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (*param_4 != 0) {
    iVar1 = FUN_08971010(*(undefined4 *)(param_2 + 0x18),*param_4);
    param_2 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) - iVar1;
  }
  return;
}

