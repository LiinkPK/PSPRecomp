/* Entry 0x08910868 | file offset 0x0010D840 | FUN_08910868 | bytes 156 */

void FUN_08910868(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_089110c4(param_3);
  FUN_08935524(uVar1,param_2,param_3);
  *param_1 = uVar1;
  iVar2 = FUN_089110c4(8);
  param_1[1] = iVar2;
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_088caf64(iVar2);
    iVar3 = iVar2;
  }
  param_1[1] = iVar3;
  FUN_088caf74(iVar3,*param_1,param_3);
  FUN_088cb00c(param_1[1]);
  return;
}

