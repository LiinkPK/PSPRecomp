/* Entry 0x0895A37C | file offset 0x00157354 | FUN_0895a37c | bytes 184 */

void FUN_0895a37c(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *param_4;
  if (iVar2 != 0) {
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    if (*(int *)(iVar2 + 8) != 0) {
      iVar1 = FUN_08971010(uVar4,*(int *)(iVar2 + 8));
      iVar3 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
      *(undefined4 *)(iVar2 + 8) = 0;
      iVar2 = *param_4;
      uVar4 = *(undefined4 *)(param_2 + 0x18);
    }
    iVar2 = FUN_08971010(uVar4,iVar2);
    param_2 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) - iVar2;
    *param_4 = 0;
  }
  return;
}

