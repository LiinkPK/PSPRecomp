/* Entry 0x088D3E40 | file offset 0x000D0E18 | FUN_088d3e40 | bytes 96 */

void FUN_088d3e40(undefined4 param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  while (uVar1 != 0xffff) {
    FUN_088d9cd8(*(undefined4 *)(param_2 + (uint)uVar1 * 4));
    param_3 = param_3 + 4;
    uVar1 = *param_3;
  }
  return;
}

