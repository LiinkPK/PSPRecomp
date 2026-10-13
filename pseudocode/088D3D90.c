/* Entry 0x088D3D90 | file offset 0x000D0D68 | FUN_088d3d90 | bytes 176 */

void FUN_088d3d90(undefined4 param_1,int param_2,ushort *param_3,short *param_4)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  while (uVar1 != 0xffff) {
    if (*param_4 != -1) {
      FUN_088d9f5c(*(undefined4 *)(param_2 + (uint)uVar1 * 4),*param_4,1);
      if (param_3[2] != 0xffff) {
        FUN_088d3ae8(param_2,param_3[2],param_3[3],*param_3);
      }
    }
    param_3 = param_3 + 4;
    param_4 = param_4 + 1;
    uVar1 = *param_3;
  }
  return;
}

