/* Entry 0x088D3F7C | file offset 0x000D0F54 | FUN_088d3f7c | bytes 320 */

void FUN_088d3f7c(undefined4 param_1,int param_2,ushort *param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_3;
  while (uVar1 != 0xffff) {
    if (*(int *)(param_2 + (uint)uVar1 * 4) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_2 + (uint)*param_3 * 4) = 0;
    }
    if (param_3[1] == 0xffff) {
      uVar2 = FUN_0887e534(*(undefined4 *)(param_2 + (uint)param_3[2] * 4));
      *(undefined4 *)(param_2 + (uint)*param_3 * 4) = uVar2;
      uVar2 = *(undefined4 *)(param_2 + (uint)*param_3 * 4);
    }
    else {
      uVar2 = FUN_0887b3ec(param_1,param_4,0,param_3[1],0,0);
      *(undefined4 *)(param_2 + (uint)*param_3 * 4) = uVar2;
      uVar2 = *(undefined4 *)(param_2 + (uint)*param_3 * 4);
    }
    FUN_0887ba04(uVar2);
    FUN_0887b944(*(undefined4 *)(param_2 + (uint)*param_3 * 4));
    param_3 = param_3 + 3;
    uVar1 = *param_3;
  }
  return;
}

