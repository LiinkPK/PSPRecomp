/* Entry 0x088D3EA0 | file offset 0x000D0E78 | FUN_088d3ea0 | bytes 96 */

void FUN_088d3ea0(undefined4 param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  while (uVar1 != 0xffff) {
    FUN_088d9cfc(*(undefined4 *)(param_2 + (uint)uVar1 * 4));
    param_3 = param_3 + 4;
    uVar1 = *param_3;
  }
  return;
}

