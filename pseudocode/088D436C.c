/* Entry 0x088D436C | file offset 0x000D1344 | FUN_088d436c | bytes 192 */

void FUN_088d436c(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_3[2];
  while (uVar2 = (uint)uVar1, uVar2 != 0xffff) {
    iVar3 = *(int *)(param_2 + (uint)*param_3 * 4);
    if (iVar3 != 0) {
      FUN_0887b8a8(iVar3,0xffffffff);
      FUN_0887b944(*(undefined4 *)(param_2 + (uint)*param_3 * 4));
      uVar2 = (uint)param_3[2];
    }
    iVar3 = *(int *)(param_1 + uVar2 * 4);
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    uVar1 = param_3[6];
    param_3 = param_3 + 4;
  }
  return;
}

