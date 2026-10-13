/* Entry 0x088D3B88 | file offset 0x000D0B60 | FUN_088d3b88 | bytes 156 */

void FUN_088d3b88(int param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_3;
  while (uVar1 != 0xffff) {
    uVar2 = FUN_088daa68(*(undefined4 *)(param_1 + ((uint)param_3[1] + param_4 & 0xffff) * 4));
    *(undefined4 *)(param_2 + (uint)uVar1 * 4) = uVar2;
    param_3 = param_3 + 2;
    uVar1 = *param_3;
  }
  return;
}

