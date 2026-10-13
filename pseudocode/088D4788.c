/* Entry 0x088D4788 | file offset 0x000D1760 | FUN_088d4788 | bytes 108 */

bool FUN_088d4788(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  FUN_088d4744();
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = FUN_088d35e0(param_1,iVar2,1);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar2 != iVar1) {
    FUN_088d47f4(param_1);
  }
  return iVar2 != iVar1;
}

