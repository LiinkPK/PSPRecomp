/* Entry 0x088D44EC | file offset 0x000D14C4 | FUN_088d44ec | bytes 152 */

void FUN_088d44ec(undefined4 param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = param_3[2];
  while (uVar1 != 0xffff) {
    iVar2 = *(int *)(param_2 + (uint)*param_3 * 4);
    if (iVar2 != 0) {
      FUN_088d4584(param_1,uVar1,param_3[3],iVar2);
    }
    uVar1 = param_3[6];
    param_3 = param_3 + 4;
  }
  return;
}

