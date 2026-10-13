/* Entry 0x088D428C | file offset 0x000D1264 | FUN_088d428c | bytes 224 */

void FUN_088d428c(int param_1,int param_2,ushort *param_3,char param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  
  if (param_4 != '\0') {
    uVar1 = param_3[2];
    puVar3 = param_3;
    while (uVar1 != 0xffff) {
      iVar2 = *(int *)(param_1 + (uint)uVar1 * 4);
      *(undefined4 *)(iVar2 + 0x34) = 0;
      *(undefined4 *)(iVar2 + 0x30) = 0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      uVar1 = puVar3[6];
      puVar3 = puVar3 + 4;
    }
  }
  uVar1 = param_3[2];
  while (uVar1 != 0xffff) {
    if (*(int *)(param_2 + (uint)*param_3 * 4) != 0) {
      FUN_088d40bc(param_1,param_2,(uint)*param_3,param_3[1],uVar1,param_3[3]);
    }
    uVar1 = param_3[6];
    param_3 = param_3 + 4;
  }
  return;
}

