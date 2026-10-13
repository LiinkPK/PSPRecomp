/* Entry 0x0895A9CC | file offset 0x001579A4 | FUN_0895a9cc | bytes 144 */

undefined4 FUN_0895a9cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0895b104(0x50);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_0895ab68(iVar1);
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0895abdc(iVar2,param_3);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

