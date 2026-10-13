/* Entry 0x088D442C | file offset 0x000D1404 | FUN_088d442c | bytes 192 */

void FUN_088d442c(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_3[2];
  while (uVar2 = (uint)uVar1, uVar2 != 0xffff) {
    iVar4 = *(int *)(param_2 + (uint)*param_3 * 4);
    if (iVar4 == 0) {
      iVar3 = uVar2 << 2;
    }
    else {
      iVar3 = uVar2 << 2;
      if (iVar4 != 0) {
        FUN_0887ba5c(iVar4);
        *(undefined4 *)(param_2 + (uint)*param_3 * 4) = 0;
        iVar3 = (uint)param_3[2] << 2;
      }
    }
    iVar4 = *(int *)(param_1 + iVar3);
    *(undefined4 *)(iVar4 + 0x34) = 0;
    *(undefined4 *)(iVar4 + 0x30) = 0;
    *(undefined4 *)(iVar4 + 0x38) = 0;
    uVar1 = param_3[6];
    param_3 = param_3 + 4;
  }
  return;
}

