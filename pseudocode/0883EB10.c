/* Entry 0x0883EB10 | file offset 0x0003BAE8 | FUN_0883eb10 | bytes 160 */

void FUN_0883eb10(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0883ecc4();
  if (param_3 != 0) {
    iVar1 = FUN_088a51c0(param_4,"OBJ_FEPAX:%s",param_2);
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 != 0) {
      uVar2 = FUN_088a5208();
      FUN_08935524(uVar2,param_3,param_4);
      FUN_088a522c(*(undefined4 *)(param_1 + 0x20));
      FUN_089359a4(param_1,param_2);
      *(undefined4 *)(param_1 + 0x24) = param_4;
    }
  }
  return;
}

