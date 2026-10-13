/* Entry 0x088D3CF0 | file offset 0x000D0CC8 | FUN_088d3cf0 | bytes 160 */

void FUN_088d3cf0(undefined4 param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  while (uVar1 != 0xffff) {
    if (param_3[1] != 0xffff) {
      FUN_088d9f5c(*(undefined4 *)(param_2 + (uint)uVar1 * 4),param_3[1],1);
    }
    if (param_3[2] != 0xffff) {
      FUN_088d3ae8(param_2,param_3[2],param_3[3],*param_3);
    }
    param_3 = param_3 + 4;
    uVar1 = *param_3;
  }
  return;
}

