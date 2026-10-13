/* Entry 0x0896722C | file offset 0x00164204 | FUN_0896722c | bytes 144 */

undefined4 FUN_0896722c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_08967fcc(0x40);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_08967518(iVar1);
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_08967650(iVar2,param_3);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

