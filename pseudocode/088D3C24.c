/* Entry 0x088D3C24 | file offset 0x000D0BFC | FUN_088d3c24 | bytes 140 */

void FUN_088d3c24(undefined4 param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  while (uVar1 != 0xffff) {
    if (*(int *)(param_2 + (uint)uVar1 * 4) != 0) {
      FUN_088da060();
      *(undefined4 *)(param_2 + (uint)*param_3 * 4) = 0;
    }
    param_3 = param_3 + 2;
    uVar1 = *param_3;
  }
  return;
}

